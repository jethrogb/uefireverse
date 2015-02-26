#ifndef VAST_FILE_SYSTEM_H
#define VAST_FILE_SYSTEM_H

#  include <dirent.h>

#include <functional>
#include <string>
#include <vector>
#include "vast/util/iterator.hpp"
#include "vast/util/operators.hpp"

namespace vast {

/// An ordered sequence of all the directory entries in a particular directory.
class directory
{
public:
  using const_iterator =
    class iterator
      : public util::iterator_facade<
          iterator,
          std::input_iterator_tag,
          std::string const&,
          std::string const&
        >
  {
  public:
    iterator(directory* dir = nullptr);

    void increment();
    std::string const& dereference() const;
    bool equals(iterator const& other) const;

  private:
    std::string current_;
    directory const* dir_ = nullptr;
  };

  /// Constructs a directory stream.
  /// @param p The path to the directory.
  directory(std::string p);

  ~directory();

  iterator begin();
  iterator end() const;

  /// Retrieves the ::path for this file.
  /// @returns The ::path for this file.
  std::string const& path() const;

private:
  std::string path_;
  DIR* dir_ = nullptr;
};

} // namespace vast

#endif
