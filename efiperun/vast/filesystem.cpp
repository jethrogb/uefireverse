#include "vast/filesystem.hpp"

#include <cassert>
#include <fstream>
#include <iterator>

#  include <cerrno>
#  include <cstring>
#  include <cstdio>
#  include <fcntl.h>
#  include <unistd.h>
#  include <sys/stat.h>
#  include <sys/types.h>
#  define VAST_CHDIR(P)(::chdir(P) == 0)
#  define VAST_CREATE_DIRECTORY(P)(::mkdir(P, S_IRWXU|S_IRWXG|S_IRWXO) == 0)
#  define VAST_CREATE_HARD_LINK(F, T)(::link(T, F) == 0)
#  define VAST_CREATE_SYMBOLIC_LINK(F, T, Flag)(::symlink(T, F) == 0)
#  define VAST_DELETE_FILE(P)(::unlink(P) == 0)
#  define VAST_DELETE_DIRECTORY(P)(::rmdir(P) == 0)
#  define VAST_MOVE_FILE(F,T)(::rename(F, T) == 0)


namespace vast {

directory::iterator::iterator(directory* dir)
  : dir_{dir}
{
  increment();
}

void directory::iterator::increment()
{
  if (! dir_)
    return;

  if (! dir_->dir_)
  {
    dir_ = nullptr;
  }
  else if (auto ent = ::readdir(dir_->dir_))
  {
    auto d = ent->d_name;
    assert(d);
    auto dot = d[0] == '.' && d[1] == '\0';
    auto dotdot = d[0] == '.' && d[1] == '.' && d[2] == '\0';
    if (dot || dotdot)
      increment();
    else
      current_ = dir_->path_ + "/" + d;
  }
  else
  {
    dir_ = nullptr;
  }
}

std::string const& directory::iterator::dereference() const
{
  return current_;
}

bool directory::iterator::equals(iterator const& other) const
{
  return dir_ == other.dir_;
}

directory::directory(std::string p)
  : path_{std::move(p)},
    dir_{::opendir(path_.data())}
{
}

directory::~directory()
{
  if (dir_)
    ::closedir(dir_);
}

directory::iterator directory::begin()
{
  return iterator{this};
}

directory::iterator directory::end() const
{
  return {};
}

std::string const& directory::path() const
{
  return path_;
}

} // namespace vast
