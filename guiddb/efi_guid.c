/**
 * The data in this file have been collected and assembled from publicly-
 * available sources.
 * 
 * http://www.tianocore.org/edk2/
 * http://wiki.phoenix.com/
 */

static EFI_GUID gAppPkgTokenSpaceGuid = { 0xe7e1efa6, 0x7607, 0x4a78, { 0xa7, 0xdd, 0x43, 0xe4, 0xbd, 0x72, 0xc0, 0x99 } }; // e7e1efa6-7607-4a78-a7dd-43e4bd72c099
static EFI_GUID gArmJunoTokenSpaceGuid = { 0xa1147a20, 0x3144, 0x4f8d, { 0x82, 0x95, 0xb4, 0x83, 0x11, 0xc8, 0xe4, 0xa4 } }; // a1147a20-3144-4f8d-8295-b48311c8e4a4
static EFI_GUID gArmTokenSpaceGuid = { 0xbb11ecfe, 0x820f, 0x4968, { 0xbb, 0xa6, 0xf7, 0x6a, 0xfe, 0x30, 0x25, 0x96 } }; // bb11ecfe-820f-4968-bba6-f76afe302596
static EFI_GUID gArmMpCoreInfoGuid = { 0xa4ee0728, 0xe5d7, 0x4ac5, { 0xb2, 0x1e, 0x65, 0x8e, 0xd8, 0x57, 0xe8, 0x34 } }; // a4ee0728-e5d7-4ac5-b21e-658ed857e834
static EFI_GUID gArmMpCoreInfoPpiGuid = { 0x6847cc74, 0xe9ec, 0x4f8f, { 0xa2, 0x9d, 0xab, 0x44, 0xe7, 0x54, 0xa8, 0xfc } }; // 6847cc74-e9ec-4f8f-a29d-ab44e754a8fc
static EFI_GUID gVirtualUncachedPagesProtocolGuid = { 0xad651c7d, 0x3c22, 0x4dbf, { 0x92, 0xe8, 0x38, 0xa7, 0xcd, 0xae, 0x87, 0xb2 } }; // ad651c7d-3c22-4dbf-92e8-38a7cdae87b2
static EFI_GUID gArmPlatformTokenSpaceGuid = { 0x9c0aaed4, 0x74c5, 0x4043, { 0xb4, 0x17, 0xa3, 0x22, 0x38, 0x14, 0xce, 0x76 } }; // 9c0aaed4-74c5-4043-b417-a3223814ce76
static EFI_GUID gVariableRuntimeDxeFileGuid = { 0xcbd2e4d5, 0x7068, 0x4ff5, { 0xb4, 0x62, 0x98, 0x22, 0xb4, 0xad, 0x8d, 0x60 } }; // cbd2e4d5-7068-4ff5-b462-9822b4ad8d60
static EFI_GUID gArmGlobalVariableGuid = { 0xc3253c90, 0xa24f, 0x4599, { 0xa6, 0x64, 0x1f, 0x88, 0x13, 0x77, 0x8f, 0xc9 } }; // c3253c90-a24f-4599-a664-1f8813778fc9
static EFI_GUID gArmBootMonFsFileInfoGuid = { 0x41e26b9c, 0xada6, 0x45b3, { 0x80, 0x8e, 0x23, 0x57, 0xa3, 0x5b, 0x60, 0xd6 } }; // 41e26b9c-ada6-45b3-808e-2357a35b60d6
static EFI_GUID gArmPlatformUpdateFdtEventGuid = { 0xaffe115b, 0x8589, 0x456d, { 0xba, 0xb5, 0x8f, 0x2e, 0xda, 0x53, 0xae, 0xb7 } }; // affe115b-8589-456d-bab5-8f2eda53aeb7
static EFI_GUID gArmGlobalVariablePpiGuid = { 0xab1c1816, 0xd542, 0x4e6f, { 0x9b, 0x1e, 0x8e, 0xcd, 0x92, 0x53, 0xe2, 0xe7 } }; // ab1c1816-d542-4e6f-9b1e-8ecd9253e2e7
static EFI_GUID gArmRealViewEbPkgTokenSpaceGuid = { 0x44577a0d, 0x361a, 0x45b2, { 0xb3, 0x3d, 0xbb, 0x9e, 0xe6, 0x0d, 0x5a, 0x4f } }; // 44577a0d-361a-45b2-b33d-bb9ee60d5a4f
static EFI_GUID gArmVExpressTokenSpaceGuid = { 0x9c0aaed4, 0x74c5, 0x4043, { 0xb4, 0x17, 0xa3, 0x22, 0x38, 0x14, 0xce, 0x76 } }; // 9c0aaed4-74c5-4043-b417-a3223814ce76
static EFI_GUID gArmVirtualizationTokenSpaceGuid = { 0x0b6f5ca7, 0x4f53, 0x445a, { 0xb7, 0x6e, 0x2e, 0x36, 0x5b, 0x80, 0x63, 0x66 } }; // 0b6f5ca7-4f53-445a-b76e-2e365b806366
static EFI_GUID gEarlyPL011BaseAddressGuid = { 0xb199dea9, 0xfd5c, 0x4a84, { 0x80, 0x82, 0x2f, 0x41, 0x70, 0x78, 0x03, 0x05 } }; // b199dea9-fd5c-4a84-8082-2f4170780305
static EFI_GUID gBeagleBoardTokenSpaceGuid = { 0x6834fe45, 0x4aee, 0x4fc6, { 0xbc, 0xb5, 0xff, 0x45, 0xb7, 0xa8, 0x71, 0xe2 } }; // 6834fe45-4aee-4fc6-bcb5-ff45b7a871e2
static EFI_GUID gEfiRuntimeCryptProtocolGuid = { 0xe1475e0c, 0x1746, 0x4802, { 0x86, 0x2e, 0x01, 0x1c, 0x2c, 0x2d, 0x9d, 0x86 } }; // e1475e0c-1746-4802-862e-011c2c2d9d86
static EFI_GUID gEfiPciExpressBaseAddressGuid = { 0x3677d529, 0x326f, 0x4603, { 0xa9, 0x26, 0xea, 0xac, 0xe0, 0x1d, 0xcb, 0xb0 } }; // 3677d529-326f-4603-a926-eaace01dcbb0
static EFI_GUID gEfiAcpiDescriptionGuid = { 0x3c699197, 0x093c, 0x4c69, { 0xb0, 0x6b, 0x12, 0x8a, 0xe3, 0x48, 0x1d, 0xc9 } }; // 3c699197-093c-4c69-b06b-128ae3481dc9
static EFI_GUID gEfiFlashMapHobGuid = { 0xb091e7d2, 0x05a0, 0x4198, { 0x94, 0xf0, 0x74, 0xb7, 0xb8, 0xc5, 0x54, 0x59 } }; // b091e7d2-05a0-4198-94f0-74b7b8c55459
static EFI_GUID gEfiPciOptionRomTableGuid = { 0x7462660f, 0x1cbd, 0x48da, { 0xad, 0x11, 0x91, 0x71, 0x79, 0x13, 0x83, 0x1c } }; // 7462660f-1cbd-48da-ad11-91717913831c
static EFI_GUID gDuetConsoleOutConfigGuid = { 0xed150714, 0xdf30, 0x407d, { 0xb2, 0x4a, 0x4b, 0x74, 0x2f, 0xd5, 0xce, 0xa2 } }; // ed150714-df30-407d-b24a-4b742fd5cea2
static EFI_GUID gDxeCoreFileNameGuid = { 0xd6a2cb7f, 0x6a18, 0x4e2f, { 0xb4, 0x3b, 0x99, 0x20, 0xa7, 0x33, 0x70, 0x0a } }; // d6a2cb7f-6a18-4e2f-b43b-9920a733700a
static EFI_GUID gLdrMemoryDescriptorGuid = { 0x7701d7e5, 0x7d1d, 0x4432, { 0xa4, 0x68, 0x67, 0x3d, 0xab, 0x8a, 0xde, 0x60 } }; // 7701d7e5-7d1d-4432-a468-673dab8ade60
static EFI_GUID gEfiSmmBaseThunkCommunicationGuid = { 0x6568a3d6, 0x015f, 0x4b4a, { 0x9c, 0x89, 0x1d, 0x14, 0x63, 0x14, 0x13, 0x0a } }; // 6568a3d6-015f-4b4a-9c89-1d146314130a
static EFI_GUID gEfiBootStateGuid = { 0x60b5e939, 0x0fcf, 0x4227, { 0xba, 0x83, 0x6b, 0xbe, 0xd4, 0x5b, 0xc0, 0xe3 } }; // 60b5e939-0fcf-4227-ba83-6bbed45bc0e3
static EFI_GUID gEfiEdkCompatibilityPkgTokenSpaceGuid = { 0x2354d320, 0x3eb3, 0x4c81, { 0x99, 0xf4, 0xcc, 0x4a, 0xe1, 0x43, 0x46, 0x3e } }; // 2354d320-3eb3-4c81-99f4-cc4ae143463e
static EFI_GUID gFrameworkBdsFrontPageFormsetGuid = { 0x9e0c30bc, 0x3f06, 0x4ba6, { 0x82, 0x88, 0x09, 0x17, 0x9b, 0x85, 0x5d, 0xbe } }; // 9e0c30bc-3f06-4ba6-8288-09179b855dbe
static EFI_GUID gEcpPeiPciCfgPpiGuid = { 0xb0ee53d4, 0xa049, 0x4a79, { 0xb2, 0xff, 0x19, 0xd9, 0xfa, 0xef, 0xaa, 0x94 } }; // b0ee53d4-a049-4a79-b2ff-19d9faefaa94
static EFI_GUID gEfiPrintProtocolGuid = { 0xdf2d868e, 0x32fc, 0x4cf0, { 0x8e, 0x6b, 0xff, 0xd9, 0x5d, 0x13, 0x43, 0xd0 } }; // df2d868e-32fc-4cf0-8e6b-ffd95d1343d0
static EFI_GUID gEfiSmmBaseHelperReadyProtocolGuid = { 0x910dca07, 0x1f94, 0x4ee7, { 0xaf, 0x2f, 0xff, 0x72, 0xf3, 0x15, 0x43, 0x53 } }; // 910dca07-1f94-4ee7-af2f-ff72f3154353
static EFI_GUID gEmbeddedTokenSpaceGuid = { 0xe0d8ca17, 0x4276, 0x4386, { 0xbb, 0x79, 0x48, 0xcb, 0x81, 0x3d, 0x3c, 0x4f } }; // e0d8ca17-4276-4386-bb79-48cb813d3c4f
static EFI_GUID gFdtTableGuid = { 0xb1b621d5, 0xf19c, 0x41a5, { 0x83, 0x0b, 0xd9, 0x15, 0x2c, 0x69, 0xaa, 0xe0 } }; // b1b621d5-f19c-41a5-830b-d9152c69aae0
static EFI_GUID gHardwareInterruptProtocolGuid = { 0x2890b3ea, 0x053d, 0x1643, { 0xad, 0x0c, 0xd6, 0x48, 0x08, 0xda, 0x3f, 0xf1 } }; // 2890b3ea-053d-1643-ad0c-d64808da3ff1
static EFI_GUID gEfiDebugSupportPeriodicCallbackProtocolGuid = { 0x9546e07c, 0x2cbb, 0x4c88, { 0x98, 0x6c, 0xcd, 0x34, 0x10, 0x86, 0xf0, 0x44 } }; // 9546e07c-2cbb-4c88-986c-cd341086f044
static EFI_GUID gEfiEblAddCommandProtocolGuid = { 0xaeda2428, 0x9a22, 0x4637, { 0x9b, 0x21, 0x54, 0x5e, 0x28, 0xfb, 0xb8, 0x29 } }; // aeda2428-9a22-4637-9b21-545e28fbb829
static EFI_GUID gEmbeddedDeviceGuid = { 0xbf4b9d10, 0x13ec, 0x43dd, { 0x88, 0x80, 0xe9, 0x0b, 0x71, 0x8f, 0x27, 0xde } }; // bf4b9d10-13ec-43dd-8880-e90b718f27de
static EFI_GUID gEmbeddedExternalDeviceProtocolGuid = { 0x735f8c64, 0xd696, 0x44d0, { 0xbd, 0xf2, 0x44, 0x7f, 0xd0, 0x5a, 0x54, 0x06 } }; // 735f8c64-d696-44d0-bdf2-447fd05a5406
static EFI_GUID gEmbeddedGpioProtocolGuid = { 0x17a0a3d7, 0xc0a5, 0x4635, { 0xbb, 0xd5, 0x07, 0x21, 0x87, 0xdf, 0xe2, 0xee } }; // 17a0a3d7-c0a5-4635-bbd5-072187dfe2ee
static EFI_GUID gPeCoffLoaderProtocolGuid = { 0xb323179b, 0x97fb, 0x477e, { 0xb0, 0xfe, 0xd8, 0x85, 0x91, 0xfa, 0x11, 0xab } }; // b323179b-97fb-477e-b0fe-d88591fa11ab
static EFI_GUID gEfiMmcHostProtocolGuid = { 0x3e591c00, 0x9e4a, 0x11df, { 0x92, 0x44, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } }; // 3e591c00-9e4a-11df-9244-0002a5d5c51b
static EFI_GUID gAndroidFastbootTransportProtocolGuid = { 0x74bd9fe0, 0x8902, 0x11e3, { 0xb9, 0xd3, 0xf7, 0x22, 0x38, 0xfc, 0x9a, 0x31 } }; // 74bd9fe0-8902-11e3-b9d3-f72238fc9a31
static EFI_GUID gAndroidFastbootPlatformProtocolGuid = { 0x524685a0, 0x89a0, 0x11e3, { 0x9d, 0x4d, 0xbf, 0xa9, 0xf6, 0xa4, 0x03, 0x08 } }; // 524685a0-89a0-11e3-9d4d-bfa9f6a40308
static EFI_GUID gUsbDeviceProtocolGuid = { 0x021bd2ca, 0x51d2, 0x11e3, { 0x8e, 0x56, 0xb7, 0x54, 0x17, 0xc7, 0x0b, 0x44 } }; // 021bd2ca-51d2-11e3-8e56-b75417c70b44
static EFI_GUID gEmuThunkProtocolGuid = { 0x5cf32e0b, 0x8edf, 0x2e44, { 0x9c, 0xda, 0x93, 0x20, 0x5e, 0x99, 0xec, 0x1c } }; // 5cf32e0b-8edf-2e44-9cda-93205e99ec1c
static EFI_GUID gEmuIoThunkProtocolGuid = { 0x453368f6, 0x7c85, 0x434a, { 0xa9, 0x8a, 0x72, 0xd1, 0xb7, 0xff, 0xa9, 0x26 } }; // 453368f6-7c85-434a-a98a-72d1b7ffa926
static EFI_GUID gEmuGraphicsWindowProtocolGuid = { 0x30fd316a, 0x6728, 0x2e41, { 0xa6, 0x90, 0x0d, 0x13, 0x33, 0xd8, 0xca, 0xc1 } }; // 30fd316a-6728-2e41-a690-0d1333d8cac1
static EFI_GUID gEmuThreadThunkProtocolGuid = { 0x3b1e4b7c, 0x09d8, 0x944f, { 0xa4, 0x08, 0x13, 0x09, 0xeb, 0x8b, 0x44, 0x27 } }; // 3b1e4b7c-09d8-944f-a408-1309eb8b4427
static EFI_GUID gEmuBlockIoProtocolGuid = { 0x6888a4ae, 0xafce, 0xe84b, { 0x91, 0x02, 0xf7, 0xb9, 0xda, 0xe6, 0xa0, 0x30 } }; // 6888a4ae-afce-e84b-9102-f7b9dae6a030
static EFI_GUID gEmuSnpProtocolGuid = { 0xfd5fbe54, 0x8c35, 0xb345, { 0x8a, 0x0f, 0x7a, 0xc8, 0xa5, 0xfd, 0x05, 0x21 } }; // fd5fbe54-8c35-b345-8a0f-7ac8a5fd0521
static EFI_GUID gEmuThunkPpiGuid = { 0xe113f896, 0x75cf, 0xf640, { 0x81, 0x7f, 0xc8, 0x5a, 0x79, 0xe8, 0xae, 0x67 } }; // e113f896-75cf-f640-817f-c85a79e8ae67
static EFI_GUID gEmulatorPkgTokenSpaceGuid = { 0x4f792e68, 0xe8c8, 0x794e, { 0xb1, 0xd8, 0x37, 0x03, 0xf3, 0xf2, 0xd5, 0xa5 } }; // 4f792e68-e8c8-794e-b1d8-3703f3f2d5a5
static EFI_GUID gEmuSystemConfigGuid = { 0xf8626165, 0x6ceb, 0x924a, { 0xba, 0xfc, 0xf1, 0x3a, 0xb9, 0xd6, 0x57, 0x28 } }; // f8626165-6ceb-924a-bafc-f13ab9d65728
static EFI_GUID gEmuVirtualDisksGuid = { 0xf2ba331a, 0x8985, 0x11db, { 0xa4, 0x06, 0x00, 0x40, 0xd0, 0x2b, 0x18, 0x35 } }; // f2ba331a-8985-11db-a406-0040d02b1835
static EFI_GUID gEmuPhysicalDisksGuid = { 0xf2bdcc96, 0x8985, 0x11db, { 0x87, 0x19, 0x00, 0x40, 0xd0, 0x2b, 0x18, 0x35 } }; // f2bdcc96-8985-11db-8719-0040d02b1835
static EFI_GUID gEfiIntelFrameworkModulePkgTokenSpaceGuid = { 0xd3705011, 0xbc19, 0x4af7, { 0xbe, 0x16, 0xf6, 0x80, 0x30, 0x37, 0x8c, 0x15 } }; // d3705011-bc19-4af7-be16-f68030378c15
static EFI_GUID gEfiDataHubStatusCodeRecordGuid = { 0xd083e94c, 0x6560, 0x42e4, { 0xb6, 0xd4, 0x2d, 0xf7, 0x5a, 0xdf, 0x6a, 0x2a } }; // d083e94c-6560-42e4-b6d4-2df75adf6a2a
static EFI_GUID gTianoCustomDecompressGuid = { 0xa31280ad, 0x481e, 0x41b6, { 0x95, 0xe8, 0x12, 0x7f, 0x4c, 0x98, 0x47, 0x79 } }; // a31280ad-481e-41b6-95e8-127f4c984779
static EFI_GUID gLzmaCustomDecompressGuid = { 0xee4e5898, 0x3914, 0x4259, { 0x9d, 0x6e, 0xdc, 0x7b, 0xd7, 0x94, 0x03, 0xcf } }; // ee4e5898-3914-4259-9d6e-dc7bd79403cf
static EFI_GUID gLzmaF86CustomDecompressGuid = { 0xd42ae6bd, 0x1352, 0x4bfb, { 0x90, 0x9a, 0xca, 0x72, 0xa6, 0xea, 0xe8, 0x89 } }; // d42ae6bd-1352-4bfb-909a-ca72a6eae889
static EFI_GUID gEfiAcpiVariableCompatiblityGuid = { 0xc020489e, 0x6db2, 0x4ef2, { 0x9a, 0xa5, 0xca, 0x06, 0xfc, 0x11, 0xd3, 0x6a } }; // c020489e-6db2-4ef2-9aa5-ca06fc11d36a
static EFI_GUID gEfiLegacyBiosGuid = { 0x2e3044ac, 0x879f, 0x490f, { 0x97, 0x60, 0xbb, 0xdf, 0xaf, 0x69, 0x5f, 0x50 } }; // 2e3044ac-879f-490f-9760-bbdfaf695f50
static EFI_GUID gEfiLegacyDevOrderVariableGuid = { 0xa56074db, 0x65fe, 0x45f7, { 0xbd, 0x21, 0x2d, 0x2b, 0xdd, 0x8e, 0x96, 0x52 } }; // a56074db-65fe-45f7-bd21-2d2bdd8e9652
static EFI_GUID gEfiUpdateDataFileGuid = { 0x283fa2ee, 0x532c, 0x484d, { 0x93, 0x83, 0x9f, 0x93, 0xb3, 0x6f, 0x0b, 0x7e } }; // 283fa2ee-532c-484d-9383-9f93b36f0b7e
static EFI_GUID gBlockIoVendorGuid = { 0xcf31fac5, 0xc24e, 0x11d2, { 0x85, 0xf3, 0x00, 0xa0, 0xc9, 0x3e, 0xc9, 0x3b } }; // cf31fac5-c24e-11d2-85f3-00a0c93ec93b
static EFI_GUID gFrontPageFormSetGuid = { 0x9e0c30bc, 0x3f06, 0x4ba6, { 0x82, 0x88, 0x09, 0x17, 0x9b, 0x85, 0x5d, 0xbe } }; // 9e0c30bc-3f06-4ba6-8288-09179b855dbe
static EFI_GUID gBootManagerFormSetGuid = { 0x847bc3fe, 0xb974, 0x446d, { 0x94, 0x49, 0x5a, 0xd5, 0x41, 0x2e, 0x99, 0x3b } }; // 847bc3fe-b974-446d-9449-5ad5412e993b
static EFI_GUID gDeviceManagerFormSetGuid = { 0x3ebfa8e6, 0x511d, 0x4b5b, { 0xa9, 0x5f, 0xfb, 0x38, 0x26, 0x0f, 0x1c, 0x27 } }; // 3ebfa8e6-511d-4b5b-a95f-fb38260f1c27
static EFI_GUID gDriverHealthFormSetGuid = { 0xf76e0a70, 0xb5ed, 0x4c38, { 0xac, 0x9a, 0xe5, 0xf5, 0x4b, 0xf1, 0x6e, 0x34 } }; // f76e0a70-b5ed-4c38-ac9a-e5f54bf16e34
static EFI_GUID gBootMaintFormSetGuid = { 0x642237c7, 0x35d4, 0x472d, { 0x83, 0x65, 0x12, 0xe0, 0xcc, 0xf2, 0x7a, 0x22 } }; // 642237c7-35d4-472d-8365-12e0ccf27a22
static EFI_GUID gFileExploreFormSetGuid = { 0x1f2d63e1, 0xfebd, 0x4dc7, { 0x9c, 0xc5, 0xba, 0x2b, 0x1c, 0xef, 0x9c, 0x5b } }; // 1f2d63e1-febd-4dc7-9cc5-ba2b1cef9c5b
static EFI_GUID gBdsLibStringPackageGuid = { 0x3b4d9b23, 0x95ac, 0x44f6, { 0x9f, 0xcd, 0x0e, 0x95, 0x94, 0x58, 0x6c, 0x72 } }; // 3b4d9b23-95ac-44f6-9fcd-0e9594586c72
static EFI_GUID gLastEnumLangGuid = { 0x0e8c545b, 0xa2ee, 0x470d, { 0x8e, 0x26, 0xbd, 0xa1, 0xa1, 0x3c, 0x0a, 0xa3 } }; // 0e8c545b-a2ee-470d-8e26-bda1a13c0aa3
static EFI_GUID gHdBootDevicePathVariablGuid = { 0xfab7e9e1, 0x39dd, 0x4f2b, { 0x84, 0x08, 0xe2, 0x0e, 0x90, 0x6c, 0xb6, 0xde } }; // fab7e9e1-39dd-4f2b-8408-e20e906cb6de
static EFI_GUID gEfiVgaMiniPortProtocolGuid = { 0xc7735a2f, 0x88f5, 0x4882, { 0xae, 0x63, 0xfa, 0xac, 0x8c, 0x8b, 0x86, 0xb3 } }; // c7735a2f-88f5-4882-ae63-faac8c8b86b3
static EFI_GUID gEfiIsaIoProtocolGuid = { 0x7ee2bd44, 0x3da0, 0x11d4, { 0x9a, 0x38, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // 7ee2bd44-3da0-11d4-9a38-0090273fc14d
static EFI_GUID gEfiIsaAcpiProtocolGuid = { 0x64a892dc, 0x5561, 0x4536, { 0x92, 0xc7, 0x79, 0x9b, 0xfc, 0x18, 0x33, 0x55 } }; // 64a892dc-5561-4536-92c7-799bfc183355
static EFI_GUID gEfiPs2PolicyProtocolGuid = { 0x4df19259, 0xdc71, 0x4d46, { 0xbe, 0xf1, 0x35, 0x7b, 0xb5, 0x78, 0xc4, 0x18 } }; // 4df19259-dc71-4d46-bef1-357bb578c418
static EFI_GUID gEfiOEMBadgingProtocolGuid = { 0x170e13c0, 0xbf1b, 0x4218, { 0x87, 0x1d, 0x2a, 0xbd, 0xc6, 0xf8, 0x87, 0xbc } }; // 170e13c0-bf1b-4218-871d-2abdc6f887bc
static EFI_GUID gExitPmAuthProtocolGuid = { 0xd088a413, 0x0a70, 0x4217, { 0xba, 0x55, 0x9a, 0x3c, 0xb6, 0x5c, 0x41, 0xb3 } }; // d088a413-0a70-4217-ba55-9a3cb65c41b3
static EFI_GUID gEfiCacheSubClassGuid = { 0x7f0013a7, 0xdc79, 0x4b22, { 0x80, 0x99, 0x11, 0xf7, 0x5f, 0xdc, 0x82, 0x9d } }; // 7f0013a7-dc79-4b22-8099-11f75fdc829d
static EFI_GUID gEfiMemorySubClassGuid = { 0x4e8f4ebb, 0x64b9, 0x4e05, { 0x9b, 0x18, 0x4c, 0xfe, 0x49, 0x23, 0x50, 0x97 } }; // 4e8f4ebb-64b9-4e05-9b18-4cfe49235097
static EFI_GUID gEfiMiscSubClassGuid = { 0x772484b2, 0x7482, 0x4b91, { 0x9f, 0x9a, 0xad, 0x43, 0xf8, 0x1c, 0x58, 0x81 } }; // 772484b2-7482-4b91-9f9a-ad43f81c5881
static EFI_GUID gEfiProcessorSubClassGuid = { 0x26fdeb7e, 0xb8af, 0x4ccf, { 0xaa, 0x97, 0x02, 0x63, 0x3c, 0xe4, 0x8c, 0xa7 } }; // 26fdeb7e-b8af-4ccf-aa97-02633ce48ca7
static EFI_GUID gEfiCapsuleGuid = { 0x3b6686bd, 0x0d76, 0x4030, { 0xb7, 0x0e, 0xb5, 0x51, 0x9e, 0x2f, 0xc5, 0xa0 } }; // 3b6686bd-0d76-4030-b70e-b5519e2fc5a0
static EFI_GUID gEfiConfigFileNameGuid = { 0x98b8d59b, 0xe8ba, 0x48ee, { 0x98, 0xdd, 0xc2, 0x95, 0x39, 0x2f, 0x1e, 0xdb } }; // 98b8d59b-e8ba-48ee-98dd-c295392f1edb
static EFI_GUID gEfiSmmPeiSmramMemoryReserveGuid = { 0x6dadf1d1, 0xd4cc, 0x4910, { 0xbb, 0x6e, 0x82, 0xb1, 0xfd, 0x80, 0xff, 0x3d } }; // 6dadf1d1-d4cc-4910-bb6e-82b1fd80ff3d
static EFI_GUID gSmmCommunicateHeaderGuid = { 0xf328e36c, 0x23b6, 0x4a95, { 0x85, 0x4b, 0x32, 0xe1, 0x95, 0x34, 0xcd, 0x75 } }; // f328e36c-23b6-4a95-854b-32e19534cd75
static EFI_GUID gEfiFirmwareFileSystemGuid = { 0x7a9354d9, 0x0468, 0x444a, { 0x81, 0xce, 0x0b, 0xf6, 0x17, 0xd8, 0x90, 0xdf } }; // 7a9354d9-0468-444a-81ce-0bf617d890df
static EFI_GUID gEfiPeiIdeBlockIoPpiGuid = { 0x964e5b22, 0x6459, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b } }; // 964e5b22-6459-11d2-8e39-00a0c969723b
static EFI_GUID gEfiPei144FloppyBlockIoPpiGuid = { 0xda6855bd, 0x07b7, 0x4c05, { 0x9e, 0xd8, 0xe2, 0x59, 0xfd, 0x36, 0x0e, 0x22 } }; // da6855bd-07b7-4c05-9ed8-e259fd360e22
static EFI_GUID gEfiPeiBootScriptExecuterPpiGuid = { 0xabd42895, 0x78cf, 0x4872, { 0x84, 0x44, 0x1b, 0x5c, 0x18, 0x0b, 0xfb, 0xff } }; // abd42895-78cf-4872-8444-1b5c180bfbff
static EFI_GUID gEfiPeiSecurityPpiGuid = { 0x1388066e, 0x3a57, 0x4efa, { 0x98, 0xf3, 0xc1, 0x2f, 0x3a, 0x95, 0x8a, 0x29 } }; // 1388066e-3a57-4efa-98f3-c12f3a958a29
static EFI_GUID gEfiPeiSmbusPpiGuid = { 0xabd42895, 0x78cf, 0x4872, { 0x84, 0x44, 0x1b, 0x5c, 0x18, 0x0b, 0xfb, 0xda } }; // abd42895-78cf-4872-8444-1b5c180bfbda
static EFI_GUID gEfiPciCfgPpiInServiceTableGuid = { 0xe1f2eba0, 0xf7b9, 0x4a26, { 0x86, 0x20, 0x13, 0x12, 0x21, 0x64, 0x2a, 0x90 } }; // e1f2eba0-f7b9-4a26-8620-131221642a90
static EFI_GUID gEfiPeiReadOnlyVariablePpiGuid = { 0x3cdc90c6, 0x13fb, 0x4a75, { 0x9e, 0x79, 0x59, 0xe9, 0xdd, 0x78, 0xb9, 0xfa } }; // 3cdc90c6-13fb-4a75-9e79-59e9dd78b9fa
static EFI_GUID gEfiPeiSectionExtractionPpiGuid = { 0x4f89e208, 0xe144, 0x4804, { 0x9e, 0xc8, 0x0f, 0x89, 0x4f, 0x7e, 0x36, 0xd7 } }; // 4f89e208-e144-4804-9ec8-0f894f7e36d7
static EFI_GUID gEfiPeiFvFileLoaderPpiGuid = { 0x7e1f0d85, 0x04ff, 0x4bb2, { 0x86, 0x6a, 0x31, 0xa2, 0x99, 0x6a, 0x48, 0xa8 } }; // 7e1f0d85-04ff-4bb2-866a-31a2996a48a8
static EFI_GUID gEfiFindFvPpiGuid = { 0x36164812, 0xa023, 0x44e5, { 0xbd, 0x85, 0x05, 0xbf, 0x3c, 0x77, 0x00, 0xaa } }; // 36164812-a023-44e5-bd85-05bf3c7700aa
static EFI_GUID gEfiPeiS3ResumePpiGuid = { 0x4426ccb2, 0xe684, 0x4a8a, { 0xae, 0x40, 0x20, 0xd4, 0xb0, 0x25, 0xb7, 0x10 } }; // 4426ccb2-e684-4a8a-ae40-20d4b025b710
static EFI_GUID gEfiAcpiS3SaveProtocolGuid = { 0x125f2de1, 0xfb85, 0x440c, { 0xa5, 0x4c, 0x4d, 0x99, 0x35, 0x8a, 0x8d, 0x38 } }; // 125f2de1-fb85-440c-a54c-4d99358a8d38
static EFI_GUID gEfiAcpiSupportProtocolGuid = { 0xdbff9d55, 0x89b7, 0x46da, { 0xbd, 0xdf, 0x67, 0x7d, 0x3d, 0xc0, 0x24, 0x1d } }; // dbff9d55-89b7-46da-bddf-677d3dc0241d
static EFI_GUID gEfiBootScriptSaveProtocolGuid = { 0x470e1529, 0xb79e, 0x4e32, { 0xa0, 0xfe, 0x6a, 0x15, 0x6d, 0x29, 0xf9, 0xb2 } }; // 470e1529-b79e-4e32-a0fe-6a156d29f9b2
static EFI_GUID gEfiLegacyBiosProtocolGuid = { 0xdb9a1e3d, 0x45cb, 0x4abb, { 0x85, 0x3b, 0xe5, 0x38, 0x7f, 0xdb, 0x2e, 0x2d } }; // db9a1e3d-45cb-4abb-853b-e5387fdb2e2d
static EFI_GUID gEfiLegacyBiosPlatformProtocolGuid = { 0x783658a3, 0x4172, 0x4421, { 0xa2, 0x99, 0xe0, 0x09, 0x07, 0x9c, 0x0c, 0xb4 } }; // 783658a3-4172-4421-a299-e009079c0cb4
static EFI_GUID gEfiLegacyInterruptProtocolGuid = { 0x31ce593d, 0x108a, 0x485d, { 0xad, 0xb2, 0x78, 0xf2, 0x1f, 0x29, 0x66, 0xbe } }; // 31ce593d-108a-485d-adb2-78f21f2966be
static EFI_GUID gEfiLegacyRegionProtocolGuid = { 0x0fc9013a, 0x0568, 0x4ba9, { 0x9b, 0x7e, 0xc9, 0xc3, 0x90, 0xa6, 0x60, 0x9b } }; // 0fc9013a-0568-4ba9-9b7e-c9c390a6609b
static EFI_GUID gEfiLegacy8259ProtocolGuid = { 0x38321dba, 0x4fe0, 0x4e17, { 0x8a, 0xec, 0x41, 0x30, 0x55, 0xea, 0xed, 0xc1 } }; // 38321dba-4fe0-4e17-8aec-413055eaedc1
static EFI_GUID gEfiCpuIoProtocolGuid = { 0xb0732526, 0x38c8, 0x4b40, { 0x88, 0x77, 0x61, 0xc7, 0xb0, 0x6a, 0xac, 0x45 } }; // b0732526-38c8-4b40-8877-61c7b06aac45
static EFI_GUID gEfiDataHubProtocolGuid = { 0xae80d021, 0x618e, 0x11d4, { 0xbc, 0xd7, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // ae80d021-618e-11d4-bcd7-0080c73c8881
static EFI_GUID gEfiFirmwareVolumeProtocolGuid = { 0x389f751f, 0x1838, 0x4388, { 0x83, 0x90, 0xcd, 0x81, 0x54, 0xbd, 0x27, 0xf8 } }; // 389f751f-1838-4388-8390-cd8154bd27f8
static EFI_GUID gEfiSectionExtractionProtocolGuid = { 0x448f5da4, 0x6dd7, 0x4fe1, { 0x93, 0x07, 0x69, 0x22, 0x41, 0x92, 0x21, 0x5d } }; // 448f5da4-6dd7-4fe1-9307-69224192215d
static EFI_GUID gEfiHiiProtocolGuid = { 0xd7ad636e, 0xb997, 0x459b, { 0xbf, 0x3f, 0x88, 0x46, 0x89, 0x79, 0x80, 0xe1 } }; // d7ad636e-b997-459b-bf3f-8846897980e1
static EFI_GUID gEfiHiiCompatibilityProtocolGuid = { 0x5542cce1, 0xdf5c, 0x4d1b, { 0xab, 0xca, 0x36, 0x4f, 0x77, 0xd3, 0x99, 0xfb } }; // 5542cce1-df5c-4d1b-abca-364f77d399fb
static EFI_GUID gFrameworkEfiMpServiceProtocolGuid = { 0xf33261e7, 0x23cb, 0x11d5, { 0xbd, 0x5c, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // f33261e7-23cb-11d5-bd5c-0080c73c8881
static EFI_GUID gEfiSmmBaseProtocolGuid = { 0x1390954d, 0xda95, 0x4227, { 0x93, 0x28, 0x72, 0x82, 0xc2, 0x17, 0xda, 0xa8 } }; // 1390954d-da95-4227-9328-7282c217daa8
static EFI_GUID gEfiSmmAccessProtocolGuid = { 0x3792095a, 0xe309, 0x4c1e, { 0xaa, 0x01, 0x85, 0xf5, 0x65, 0x5a, 0x17, 0xf1 } }; // 3792095a-e309-4c1e-aa01-85f5655a17f1
static EFI_GUID gEfiSmmControlProtocolGuid = { 0x8d12e231, 0xc667, 0x4fd1, { 0x98, 0xf2, 0x24, 0x49, 0xa7, 0xe7, 0xb2, 0xe5 } }; // 8d12e231-c667-4fd1-98f2-2449a7e7b2e5
static EFI_GUID gEfiSmmSwDispatchProtocolGuid = { 0xe541b773, 0xdd11, 0x420c, { 0xb0, 0x26, 0xdf, 0x99, 0x36, 0x53, 0xf8, 0xbf } }; // e541b773-dd11-420c-b026-df993653f8bf
static EFI_GUID gEfiSmmSxDispatchProtocolGuid = { 0x14fc52be, 0x01dc, 0x426c, { 0x91, 0xae, 0xa2, 0x3c, 0x3e, 0x22, 0x0a, 0xe8 } }; // 14fc52be-01dc-426c-91ae-a23c3e220ae8
static EFI_GUID gEfiSmmPeriodicTimerDispatchProtocolGuid = { 0x9cca03fc, 0x4c9e, 0x4a19, { 0x9b, 0x06, 0xed, 0x7b, 0x47, 0x9b, 0xde, 0x55 } }; // 9cca03fc-4c9e-4a19-9b06-ed7b479bde55
static EFI_GUID gEfiSmmUsbDispatchProtocolGuid = { 0xa05b6ffd, 0x87af, 0x4e42, { 0x95, 0xc9, 0x62, 0x28, 0xb6, 0x3c, 0xf3, 0xf3 } }; // a05b6ffd-87af-4e42-95c9-6228b63cf3f3
static EFI_GUID gEfiSmmGpiDispatchProtocolGuid = { 0xe0744b81, 0x9513, 0x49cd, { 0x8c, 0xea, 0xe9, 0x24, 0x5e, 0x70, 0x39, 0xda } }; // e0744b81-9513-49cd-8cea-e9245e7039da
static EFI_GUID gEfiSmmStandbyButtonDispatchProtocolGuid = { 0x78965b98, 0xb0bf, 0x449e, { 0x8b, 0x22, 0xd2, 0x91, 0x4e, 0x49, 0x8a, 0x98 } }; // 78965b98-b0bf-449e-8b22-d2914e498a98
static EFI_GUID gEfiSmmPowerButtonDispatchProtocolGuid = { 0xb709efa0, 0x47a6, 0x4b41, { 0xb9, 0x31, 0x12, 0xec, 0xe7, 0xa8, 0xee, 0x56 } }; // b709efa0-47a6-4b41-b931-12ece7a8ee56
static EFI_GUID gEfiSmmIchnDispatchProtocolGuid = { 0xc50b323e, 0x9075, 0x4f2a, { 0xac, 0x8e, 0xd2, 0x59, 0x6a, 0x10, 0x85, 0xcc } }; // c50b323e-9075-4f2a-ac8e-d2596a1085cc
static EFI_GUID gEfiSmmCpuIoGuid = { 0x5f439a0b, 0x45d8, 0x4682, { 0xa4, 0xf4, 0xf0, 0x57, 0x6b, 0x51, 0x34, 0x41 } }; // 5f439a0b-45d8-4682-a4f4-f0576b513441
static EFI_GUID gEfiFormCallbackProtocolGuid = { 0xf3e4543d, 0xcf35, 0x6cef, { 0x35, 0xc4, 0x4f, 0xe6, 0x34, 0x4d, 0xfc, 0x54 } }; // f3e4543d-cf35-6cef-35c4-4fe6344dfc54
static EFI_GUID gEfiFormBrowserProtocolGuid = { 0xe5a1333e, 0xe1b4, 0x4d55, { 0xce, 0xeb, 0x35, 0xc3, 0xef, 0x13, 0x34, 0x43 } }; // e5a1333e-e1b4-4d55-ceeb-35c3ef133443
static EFI_GUID gEfiFormBrowserCompatibilityProtocolGuid = { 0x0fb7c852, 0xadca, 0x4853, { 0x8d, 0x0f, 0xfb, 0xa7, 0x1b, 0x1c, 0xe1, 0x1a } }; // 0fb7c852-adca-4853-8d0f-fba71b1ce11a
static EFI_GUID gFramerworkEfiFirmwareVolumeBlockProtocolGuid = { 0xde28bc59, 0x6228, 0x41bd, { 0xbd, 0xf6, 0xa3, 0xb9, 0xad, 0xb5, 0x8d, 0xa1 } }; // de28bc59-6228-41bd-bdf6-a3b9adb58da1
static EFI_GUID gEfiSmmCpuSaveStateProtocolGuid = { 0x21f302ad, 0x6e94, 0x471b, { 0x84, 0xbc, 0xb1, 0x48, 0x00, 0x40, 0x3a, 0x1d } }; // 21f302ad-6e94-471b-84bc-b14800403a1d
static EFI_GUID gIntelFspPkgTokenSpaceGuid = { 0x834c0c5f, 0xadb3, 0x4372, { 0xae, 0xeb, 0x03, 0xe4, 0xe9, 0xe6, 0xc5, 0x91 } }; // 834c0c5f-adb3-4372-aeeb-03e4e9e6c591
static EFI_GUID gFspHeaderFileGuid = { 0x912740be, 0x2284, 0x4734, { 0xb9, 0x71, 0x84, 0xb0, 0x27, 0x35, 0x3f, 0x0c } }; // 912740be-2284-4734-b971-84b027353f0c
static EFI_GUID gFspBootLoaderTemporaryMemoryGuid = { 0xbbcff46c, 0xc8d3, 0x4113, { 0x89, 0x85, 0xb9, 0xd4, 0xf3, 0xb3, 0xf6, 0x4e } }; // bbcff46c-c8d3-4113-8985-b9d4f3b3f64e
static EFI_GUID gFspReservedMemoryResourceHobGuid = { 0x69a79759, 0x1373, 0x4367, { 0xa6, 0xc4, 0xc7, 0xf5, 0x9e, 0xfd, 0x98, 0x6e } }; // 69a79759-1373-4367-a6c4-c7f59efd986e
static EFI_GUID gFspNonVolatileStorageHobGuid = { 0x721acf02, 0x4d77, 0x4c2a, { 0xb3, 0xdc, 0x27, 0x0b, 0x7b, 0xa9, 0xe4, 0xb0 } }; // 721acf02-4d77-4c2a-b3dc-270b7ba9e4b0
static EFI_GUID gFspReservedMemoryResourceHobTsegGuid = { 0xd038747c, 0xd00c, 0x4980, { 0xb3, 0x19, 0x49, 0x01, 0x99, 0xa4, 0x7d, 0x55 } }; // d038747c-d00c-4980-b319-490199a47d55
static EFI_GUID gFspReservedMemoryResourceHobGfxGuid = { 0x9c7c3aa7, 0x5332, 0x4917, { 0x82, 0xb9, 0x56, 0xa5, 0xf3, 0xe6, 0x2a, 0x07 } }; // 9c7c3aa7-5332-4917-82b9-56a5f3e62a07
static EFI_GUID gFspReservedMemoryResourceHobMiscGuid = { 0x00d6b14b, 0x7dd0, 0x4062, { 0x88, 0x21, 0xe5, 0xf9, 0x6a, 0x2a, 0x1b, 0x00 } }; // 00d6b14b-7dd0-4062-8821-e5f96a2a1b00
static EFI_GUID gFspWrapperTokenSpaceGuid = { 0x2bc1c74a, 0x122f, 0x40b2, { 0xb2, 0x23, 0x08, 0x2b, 0x74, 0x65, 0x22, 0x5d } }; // 2bc1c74a-122f-40b2-b223-082b7465225d
static EFI_GUID gFspInitDonePpiGuid = { 0xf5ef05e4, 0xd538, 0x4774, { 0x8f, 0x1b, 0xe9, 0x77, 0x30, 0x11, 0xe0, 0x38 } }; // f5ef05e4-d538-4774-8f1b-e9773011e038
static EFI_GUID gTopOfTemporaryRamPpiGuid = { 0x2f3962b2, 0x57c5, 0x44ec, { 0x9e, 0xfc, 0xa6, 0x9f, 0xd3, 0x02, 0x03, 0x2b } }; // 2f3962b2-57c5-44ec-9efc-a69fd302032b
static EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xa1aff049, 0xfdeb, 0x442a, { 0xb3, 0x20, 0x13, 0xab, 0x4c, 0xb7, 0x2b, 0xbc } }; // a1aff049-fdeb-442a-b320-13ab4cb72bbc
static EFI_GUID gPcdDataBaseHobGuid = { 0xea296d92, 0x0b69, 0x423c, { 0x8c, 0x28, 0x33, 0xb4, 0xe0, 0xa9, 0x12, 0x68 } }; // ea296d92-0b69-423c-8c28-33b4e0a91268
static EFI_GUID gPcdDataBaseSignatureGuid = { 0x3c7d193c, 0x682c, 0x4c14, { 0xa6, 0x8f, 0x55, 0x2d, 0xea, 0x4f, 0x43, 0x7e } }; // 3c7d193c-682c-4c14-a68f-552dea4f437e
static EFI_GUID gEfiIfrTianoGuid = { 0x0f0b1735, 0x87a0, 0x4193, { 0xb2, 0x66, 0x53, 0x8c, 0x38, 0xaf, 0x48, 0xce } }; // 0f0b1735-87a0-4193-b266-538c38af48ce
static EFI_GUID gEfiIfrFrameworkGuid = { 0x31ca5d1a, 0xd511, 0x4931, { 0xb7, 0x82, 0xae, 0x6b, 0x2b, 0x17, 0x8c, 0xd7 } }; // 31ca5d1a-d511-4931-b782-ae6b2b178cd7
static EFI_GUID gEfiSystemNvDataFvGuid = { 0xfff12b8d, 0x7696, 0x4c8b, { 0xa9, 0x85, 0x27, 0x47, 0x07, 0x5b, 0x4f, 0x50 } }; // fff12b8d-7696-4c8b-a985-2747075b4f50
static EFI_GUID gEdkiiWorkingBlockSignatureGuid = { 0x9e58292b, 0x7c68, 0x497d, { 0xa0, 0xce, 0x65, 0x00, 0xfd, 0x9f, 0x1b, 0x95 } }; // 9e58292b-7c68-497d-a0ce-6500fd9f1b95
static EFI_GUID gEdkiiFaultTolerantWriteGuid = { 0x1d3e9cb8, 0x43af, 0x490b, { 0x83, 0x0a, 0x35, 0x16, 0xaa, 0x53, 0x20, 0x47 } }; // 1d3e9cb8-43af-490b-830a-3516aa532047
static EFI_GUID gEfiConsoleOutDeviceGuid = { 0xd3b36f2c, 0xd551, 0x11d4, { 0x9a, 0x46, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // d3b36f2c-d551-11d4-9a46-0090273fc14d
static EFI_GUID gEfiConsoleInDeviceGuid = { 0xd3b36f2b, 0xd551, 0x11d4, { 0x9a, 0x46, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // d3b36f2b-d551-11d4-9a46-0090273fc14d
static EFI_GUID gEfiMemoryTypeInformationGuid = { 0x4c19049f, 0x4137, 0x4dd3, { 0x9c, 0x10, 0x8b, 0x97, 0xa8, 0x3f, 0xfd, 0xfa } }; // 4c19049f-4137-4dd3-9c10-8b97a83ffdfa
static EFI_GUID gEfiCapsuleVendorGuid = { 0x711c703f, 0xc285, 0x4b10, { 0xa3, 0xb0, 0x36, 0xec, 0xbd, 0x3c, 0x8b, 0xe2 } }; // 711c703f-c285-4b10-a3b0-36ecbd3c8be2
static EFI_GUID gEfiStandardErrorDeviceGuid = { 0xd3b36f2d, 0xd551, 0x11d4, { 0x9a, 0x46, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // d3b36f2d-d551-11d4-9a46-0090273fc14d
static EFI_GUID gEfiVariableGuid = { 0xddcf3616, 0x3275, 0x4164, { 0x98, 0xb6, 0xfe, 0x85, 0x70, 0x7f, 0xfe, 0x7d } }; // ddcf3616-3275-4164-98b6-fe85707ffe7d
static EFI_GUID gEfiVariableIndexTableGuid = { 0x8cfdb8c8, 0xd6b2, 0x40f3, { 0x8e, 0x97, 0x02, 0x30, 0x7c, 0xc9, 0x8b, 0x7c } }; // 8cfdb8c8-d6b2-40f3-8e97-02307cc98b7c
static EFI_GUID gSmmVariableWriteGuid = { 0x93ba1826, 0xdffb, 0x45dd, { 0x82, 0xa7, 0xe7, 0xdc, 0xaa, 0x3b, 0xbd, 0xf3 } }; // 93ba1826-dffb-45dd-82a7-e7dcaa3bbdf3
static EFI_GUID gPerformanceProtocolGuid = { 0x76b6bdfa, 0x2acd, 0x4462, { 0x9e, 0x3f, 0xcb, 0x58, 0xc9, 0x69, 0xd9, 0x37 } }; // 76b6bdfa-2acd-4462-9e3f-cb58c969d937
static EFI_GUID gSmmPerformanceProtocolGuid = { 0xf866226a, 0xeaa5, 0x4f5a, { 0xa9, 0x0a, 0x6c, 0xfb, 0xa5, 0x7c, 0x58, 0x8e } }; // f866226a-eaa5-4f5a-a90a-6cfba57c588e
static EFI_GUID gPerformanceExProtocolGuid = { 0x1ea81bec, 0xf01a, 0x4d98, { 0xa2, 0x01, 0x4a, 0x61, 0xce, 0x2f, 0xc0, 0x22 } }; // 1ea81bec-f01a-4d98-a201-4a61ce2fc022
static EFI_GUID gSmmPerformanceExProtocolGuid = { 0x931fc048, 0xc71d, 0x4455, { 0x89, 0x30, 0x47, 0x06, 0x30, 0xe3, 0x0e, 0xe5 } }; // 931fc048-c71d-4455-8930-470630e30ee5
static EFI_GUID gEfiCrc32GuidedSectionExtractionGuid = { 0xfc1bcdb0, 0x7d31, 0x49aa, { 0x93, 0x6a, 0xa4, 0x60, 0x0d, 0x9d, 0xd0, 0x83 } }; // fc1bcdb0-7d31-49aa-936a-a4600d9dd083
static EFI_GUID gEfiNicIp4ConfigVariableGuid = { 0xd8944553, 0xc4dd, 0x41f4, { 0x9b, 0x30, 0xe1, 0x39, 0x7c, 0xfb, 0x26, 0x7b } }; // d8944553-c4dd-41f4-9b30-e1397cfb267b
static EFI_GUID gStatusCodeCallbackGuid = { 0xe701458c, 0x4900, 0x4ca5, { 0xb7, 0x72, 0x3d, 0x37, 0x94, 0x9f, 0x79, 0x27 } }; // e701458c-4900-4ca5-b772-3d37949f7927
static EFI_GUID gMemoryStatusCodeRecordGuid = { 0x060cc026, 0x4c0d, 0x4dda, { 0x8f, 0x41, 0x59, 0x5f, 0xef, 0x00, 0xa5, 0x02 } }; // 060cc026-4c0d-4dda-8f41-595fef00a502
static EFI_GUID gEfiStatusCodeDataTypeDebugGuid = { 0x9a4e9246, 0xd553, 0x11d5, { 0x87, 0xe2, 0x00, 0x06, 0x29, 0x45, 0xc3, 0xb9 } }; // 9a4e9246-d553-11d5-87e2-00062945c3b9
static EFI_GUID gLoadFixedAddressConfigurationTableGuid = { 0x2ca88b53, 0xd296, 0x4080, { 0xa4, 0xa5, 0xca, 0xd9, 0xba, 0xe2, 0x4b, 0x09 } }; // 2ca88b53-d296-4080-a4a5-cad9bae24b09
static EFI_GUID gEfiGenericVariableGuid = { 0x59d1c24f, 0x50f1, 0x401a, { 0xb1, 0x01, 0xf3, 0x3e, 0x0d, 0xae, 0xd4, 0x43 } }; // 59d1c24f-50f1-401a-b101-f33e0daed443
static EFI_GUID gIdleLoopEventGuid = { 0x3c8d294c, 0x5fc3, 0x4451, { 0xbb, 0x31, 0xc4, 0xc0, 0x32, 0x29, 0x5e, 0x6c } }; // 3c8d294c-5fc3-4451-bb31-c4c032295e6c
static EFI_GUID gRecoveryOnFatUsbDiskGuid = { 0x0ffbce19, 0x324c, 0x4690, { 0xa0, 0x09, 0x98, 0xc6, 0xae, 0x2e, 0xb1, 0x86 } }; // 0ffbce19-324c-4690-a009-98c6ae2eb186
static EFI_GUID gRecoveryOnFatIdeDiskGuid = { 0xb38573b6, 0x6200, 0x4ac5, { 0xb5, 0x1d, 0x82, 0xe6, 0x59, 0x38, 0xd7, 0x83 } }; // b38573b6-6200-4ac5-b51d-82e65938d783
static EFI_GUID gRecoveryOnFatFloppyDiskGuid = { 0x2e3d2e75, 0x9b2e, 0x412d, { 0xb4, 0xb1, 0x70, 0x41, 0x6b, 0x87, 0x00, 0xff } }; // 2e3d2e75-9b2e-412d-b4b1-70416b8700ff
static EFI_GUID gRecoveryOnDataCdGuid = { 0x5cac0099, 0x0dc9, 0x48e5, { 0x80, 0x68, 0xbb, 0x95, 0xf5, 0x40, 0x0a, 0x9f } }; // 5cac0099-0dc9-48e5-8068-bb95f5400a9f
static EFI_GUID gEfiSmmLockBoxCommunicationGuid = { 0x2a3cfebd, 0x27e8, 0x4d0a, { 0x8b, 0x79, 0xd6, 0x88, 0xc2, 0xa3, 0xe1, 0xc0 } }; // 2a3cfebd-27e8-4d0a-8b79-d688c2a3e1c0
static EFI_GUID gEfiAcpiVariableGuid = { 0xaf9ffd67, 0xec10, 0x488a, { 0x9d, 0xfc, 0x6c, 0xbf, 0x5e, 0xe2, 0x2c, 0x2e } }; // af9ffd67-ec10-488a-9dfc-6cbf5ee22c2e
static EFI_GUID gEfiAcpiS3ContextGuid = { 0x0ef98d3a, 0x3e33, 0x497a, { 0xa4, 0x01, 0x77, 0xbe, 0x3e, 0xb7, 0x4f, 0x38 } }; // 0ef98d3a-3e33-497a-a401-77be3eb74f38
static EFI_GUID gEfiBootScriptExecutorVariableGuid = { 0x3079818c, 0x46d4, 0x4a73, { 0xae, 0xf3, 0xe3, 0xe4, 0x6c, 0xf1, 0xee, 0xdb } }; // 3079818c-46d4-4a73-aef3-e3e46cf1eedb
static EFI_GUID gEfiBootScriptExecutorContextGuid = { 0x79cb58c4, 0xac51, 0x442f, { 0xaf, 0xd7, 0x98, 0xe4, 0x7d, 0x2e, 0x99, 0x08 } }; // 79cb58c4-ac51-442f-afd7-98e47d2e9908
static EFI_GUID gUsbKeyboardLayoutPackageGuid = { 0x0c0f3b43, 0x44de, 0x4907, { 0xb4, 0x78, 0x22, 0x5f, 0x6f, 0x62, 0x89, 0xdc } }; // 0c0f3b43-44de-4907-b478-225f6f6289dc
static EFI_GUID gUsbKeyboardLayoutKeyGuid = { 0x3a4d7a7c, 0x018a, 0x4b42, { 0x81, 0xb3, 0xdc, 0x10, 0xe3, 0xb5, 0x91, 0xbd } }; // 3a4d7a7c-018a-4b42-81b3-dc10e3b591bd
static EFI_GUID gHiiResourceSamleFormSetGuid = { 0x4f4ef7f0, 0xaa29, 0x4ce9, { 0xba, 0x41, 0x64, 0x3e, 0x01, 0x23, 0xa9, 0x9f } }; // 4f4ef7f0-aa29-4ce9-ba41-643e0123a99f
static EFI_GUID gDriverSampleFormSetGuid = { 0xa04a27f4, 0xdf00, 0x4d42, { 0xb5, 0x52, 0x39, 0x51, 0x13, 0x02, 0x11, 0x3d } }; // a04a27f4-df00-4d42-b552-39511302113d
static EFI_GUID gDriverSampleInventoryGuid = { 0xb3f56470, 0x6141, 0x4621, { 0x8f, 0x19, 0x70, 0x4e, 0x57, 0x7a, 0xa9, 0xe8 } }; // b3f56470-6141-4621-8f19-704e577aa9e8
static EFI_GUID gEfiIfrRefreshIdOpGuid = { 0xf5e655d9, 0x02a6, 0x46f2, { 0x9e, 0x76, 0xb8, 0xbe, 0x8e, 0x60, 0xab, 0x22 } }; // f5e655d9-02a6-46f2-9e76-b8be8e60ab22
static EFI_GUID gPlatformOverridesManagerGuid = { 0x8614567d, 0x35be, 0x4415, { 0x8d, 0x88, 0xbd, 0x7d, 0x0c, 0x9c, 0x70, 0xc0 } }; // 8614567d-35be-4415-8d88-bd7d0c9c70c0
static EFI_GUID gNicIp4ConfigNvDataGuid = { 0x09d5b53f, 0xf4b0, 0x4f59, { 0xa0, 0xb1, 0x7b, 0x57, 0xd3, 0x5c, 0x0e, 0x05 } }; // 09d5b53f-f4b0-4f59-a0b1-7b57d35c0e05
static EFI_GUID gVlanConfigFormSetGuid = { 0xd79df6b0, 0xef44, 0x43bd, { 0x97, 0x97, 0x43, 0xe9, 0x3b, 0xcf, 0x5f, 0xa8 } }; // d79df6b0-ef44-43bd-9797-43e93bcf5fa8
static EFI_GUID gIp4IScsiConfigGuid = { 0x6456ed61, 0x3579, 0x41c9, { 0x8a, 0x26, 0x0a, 0x0b, 0xd6, 0x2b, 0x78, 0xfc } }; // 6456ed61-3579-41c9-8a26-0a0bd62b78fc
static EFI_GUID gIScsiCHAPAuthInfoGuid = { 0x786ec0ac, 0x65ae, 0x4d1b, { 0xb1, 0x37, 0x0d, 0x11, 0x0a, 0x48, 0x37, 0x97 } }; // 786ec0ac-65ae-4d1b-b137-0d110a483797
static EFI_GUID gZeroGuid = { 0x00000000, 0x0000, 0x0000, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }; // 00000000-0000-0000-0000-000000000000
static EFI_GUID gMtcVendorGuid = { 0xeb704011, 0x1402, 0x11d3, { 0x8e, 0x77, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b } }; // eb704011-1402-11d3-8e77-00a0c969723b
static EFI_GUID gEfiFirmwarePerformanceGuid = { 0xc095791a, 0x3001, 0x47b2, { 0x80, 0xc9, 0xea, 0xc7, 0x31, 0x9f, 0x2f, 0xa4 } }; // c095791a-3001-47b2-80c9-eac7319f2fa4
static EFI_GUID gFirmwarePerformanceS3PointerGuid = { 0x0dc65adc, 0xa973, 0x4130, { 0x8d, 0xf0, 0x2a, 0xdb, 0xeb, 0x9e, 0x4a, 0x31 } }; // 0dc65adc-a973-4130-8df0-2adbeb9e4a31
static EFI_GUID gEventExitBootServicesFailedGuid = { 0x4f6c5507, 0x232f, 0x4787, { 0xb9, 0x5e, 0x72, 0xf8, 0x62, 0x49, 0x0c, 0xb1 } }; // 4f6c5507-232f-4787-b95e-72f862490cb1
static EFI_GUID gConnectConInEventGuid = { 0xdb4e8151, 0x57ed, 0x4bed, { 0x88, 0x33, 0x67, 0x51, 0xb5, 0xd1, 0xa8, 0xd7 } }; // db4e8151-57ed-4bed-8833-6751b5d1a8d7
static EFI_GUID gEdkiiStatusCodeDataTypeVariableGuid = { 0xf6ee6dbb, 0xd67f, 0x4ea0, { 0x8b, 0x96, 0x6a, 0x71, 0xb1, 0x9d, 0x84, 0xad } }; // f6ee6dbb-d67f-4ea0-8b96-6a71b19d84ad
static EFI_GUID gEdkiiMemoryProfileGuid = { 0x821c9a09, 0x541a, 0x40f6, { 0x9f, 0x43, 0x0a, 0xd1, 0x93, 0xa1, 0x2c, 0xfe } }; // 821c9a09-541a-40f6-9f43-0ad193a12cfe
static EFI_GUID gEdkiiVarErrorFlagGuid = { 0x04b37fe8, 0xf6ae, 0x480b, { 0xbd, 0xd5, 0x37, 0xd9, 0x8c, 0x5e, 0x89, 0xaa } }; // 04b37fe8-f6ae-480b-bdd5-37d98c5e89aa
static EFI_GUID gPeiAtaControllerPpiGuid = { 0xa45e60d1, 0xc719, 0x44aa, { 0xb0, 0x7a, 0xaa, 0x77, 0x7f, 0x85, 0x90, 0x6d } }; // a45e60d1-c719-44aa-b07a-aa777f85906d
static EFI_GUID gPeiUsbHostControllerPpiGuid = { 0x652b38a9, 0x77f4, 0x453f, { 0x89, 0xd5, 0xe7, 0xbd, 0xc3, 0x52, 0xfc, 0x53 } }; // 652b38a9-77f4-453f-89d5-e7bdc352fc53
static EFI_GUID gPeiUsb2HostControllerPpiGuid = { 0xfedd6305, 0xe2d7, 0x4ed5, { 0x9f, 0xaa, 0xda, 0x08, 0x0e, 0x33, 0x6c, 0x22 } }; // fedd6305-e2d7-4ed5-9faa-da080e336c22
static EFI_GUID gPeiUsbControllerPpiGuid = { 0x3bc1f6de, 0x693e, 0x4547, { 0xa3, 0x00, 0x21, 0x82, 0x3c, 0xa4, 0x20, 0xb2 } }; // 3bc1f6de-693e-4547-a300-21823ca420b2
static EFI_GUID gPeiUsbIoPpiGuid = { 0x7c29785c, 0x66b9, 0x49fc, { 0xb7, 0x97, 0x1c, 0xa5, 0x55, 0x0e, 0xf2, 0x83 } }; // 7c29785c-66b9-49fc-b797-1ca5550ef283
static EFI_GUID gPeiCapsulePpiGuid = { 0x3acf33ee, 0xd892, 0x40f4, { 0xa2, 0xfc, 0x38, 0x54, 0xd2, 0xe1, 0x32, 0x3d } }; // 3acf33ee-d892-40f4-a2fc-3854d2e1323d
static EFI_GUID gPeiSecPerformancePpiGuid = { 0x0ecc666b, 0x4662, 0x47f9, { 0x9d, 0xd5, 0xd0, 0x96, 0xff, 0x7d, 0xa4, 0x9e } }; // 0ecc666b-4662-47f9-9dd5-d096ff7da49e
static EFI_GUID gEfiPeiSmmCommunicationPpiGuid = { 0xae933e1c, 0xcc47, 0x4e38, { 0x8f, 0x0e, 0xe2, 0xf6, 0x1d, 0x26, 0x05, 0xdf } }; // ae933e1c-cc47-4e38-8f0e-e2f61d2605df
static EFI_GUID gPeiSmmAccessPpiGuid = { 0x268f33a9, 0xcccd, 0x48be, { 0x88, 0x17, 0x86, 0x05, 0x3a, 0xc3, 0x2e, 0xd6 } }; // 268f33a9-cccd-48be-8817-86053ac32ed6
static EFI_GUID gPeiSmmControlPpiGuid = { 0x61c68702, 0x4d7e, 0x4f43, { 0x8d, 0xef, 0xa7, 0x43, 0x05, 0xce, 0x74, 0xc5 } }; // 61c68702-4d7e-4f43-8def-a74305ce74c5
static EFI_GUID gPeiPostScriptTablePpiGuid = { 0x88c9d306, 0x0900, 0x4eb5, { 0x82, 0x60, 0x3e, 0x2d, 0xbe, 0xda, 0x1f, 0x89 } }; // 88c9d306-0900-4eb5-8260-3e2dbeda1f89
static EFI_GUID gPeiSerialPortPpiGuid = { 0x490e9d85, 0x8aef, 0x4193, { 0x8e, 0x56, 0xf7, 0x34, 0xa9, 0xff, 0xac, 0x8b } }; // 490e9d85-8aef-4193-8e56-f734a9ffac8b
static EFI_GUID gEfiLoadPeImageProtocolGuid = { 0x5cb5c776, 0x60d5, 0x45ee, { 0x88, 0x3c, 0x45, 0x27, 0x08, 0xcd, 0x74, 0x3f } }; // 5cb5c776-60d5-45ee-883c-452708cd743f
static EFI_GUID gEfiPrint2ProtocolGuid = { 0xf05976ef, 0x83f1, 0x4f3d, { 0x86, 0x19, 0xf7, 0x59, 0x5d, 0x41, 0xe5, 0x38 } }; // f05976ef-83f1-4f3d-8619-f7595d41e538
static EFI_GUID gEfiGenericMemTestProtocolGuid = { 0x309de7f1, 0x7f5e, 0x4ace, { 0xb4, 0x9c, 0x53, 0x1b, 0xe5, 0xaa, 0x95, 0xef } }; // 309de7f1-7f5e-4ace-b49c-531be5aa95ef
static EFI_GUID gEfiDpcProtocolGuid = { 0x480f8ae9, 0x0c46, 0x4aa9, { 0xbc, 0x89, 0xdb, 0x9f, 0xba, 0x61, 0x98, 0x06 } }; // 480f8ae9-0c46-4aa9-bc89-db9fba619806
static EFI_GUID gEfiFaultTolerantWriteProtocolGuid = { 0x3ebd9e82, 0x2c78, 0x4de6, { 0x97, 0x86, 0x8d, 0x4b, 0xfc, 0xb7, 0xc8, 0x81 } }; // 3ebd9e82-2c78-4de6-9786-8d4bfcb7c881
static EFI_GUID gEfiSmmFaultTolerantWriteProtocolGuid = { 0x3868fc3b, 0x7e45, 0x43a7, { 0x90, 0x6c, 0x4b, 0xa4, 0x7d, 0xe1, 0x75, 0x4d } }; // 3868fc3b-7e45-43a7-906c-4ba47de1754d
static EFI_GUID gEfiSwapAddressRangeProtocolGuid = { 0x1259f60d, 0xb754, 0x468e, { 0xa7, 0x89, 0x4d, 0xb8, 0x5d, 0x55, 0xe8, 0x7e } }; // 1259f60d-b754-468e-a789-4db85d55e87e
static EFI_GUID gEfiSmmSwapAddressRangeProtocolGuid = { 0x67c4f112, 0x3385, 0x4e55, { 0x9c, 0x5b, 0xc0, 0x5b, 0x71, 0x7c, 0x42, 0x28 } }; // 67c4f112-3385-4e55-9c5b-c05b717c4228
static EFI_GUID gEfiSmmVariableProtocolGuid = { 0xed32d533, 0x99e6, 0x4209, { 0x9c, 0xc0, 0x2d, 0x72, 0xcd, 0xd9, 0x98, 0xa7 } }; // ed32d533-99e6-4209-9cc0-2d72cdd998a7
static EFI_GUID gEdkiiVariableLockProtocolGuid = { 0xcd3d0a05, 0x9e24, 0x437c, { 0xa8, 0x91, 0x1e, 0xe0, 0x53, 0xdb, 0x76, 0x38 } }; // cd3d0a05-9e24-437c-a891-1ee053db7638
static EFI_GUID gEdkiiVarCheckProtocolGuid = { 0xaf23b340, 0x97b4, 0x4685, { 0x8d, 0x4f, 0xa3, 0xf2, 0x81, 0x69, 0xb2, 0x1d } }; // af23b340-97b4-4685-8d4f-a3f28169b21d
static EFI_GUID gEdkiiSmmVarCheckProtocolGuid = { 0xb0d8f3c1, 0xb7de, 0x4c11, { 0xbc, 0x89, 0x2f, 0xb5, 0x62, 0xc8, 0xc4, 0x11 } }; // b0d8f3c1-b7de-4c11-bc89-2fb562c8c411
static EFI_GUID gEfiSmmFirmwareVolumeBlockProtocolGuid = { 0xd326d041, 0xbd31, 0x4c01, { 0xb5, 0xa8, 0x62, 0x8b, 0xe8, 0x7f, 0x06, 0x53 } }; // d326d041-bd31-4c01-b5a8-628be87f0653
static EFI_GUID gEfiDebugMaskProtocolGuid = { 0x4c8a2451, 0xc207, 0x405b, { 0x96, 0x94, 0x99, 0xea, 0x13, 0x25, 0x13, 0x41 } }; // 4c8a2451-c207-405b-9694-99ea13251341
static EFI_GUID gEfiLockBoxProtocolGuid = { 0xbd445d79, 0xb7ad, 0x4f04, { 0x9a, 0xd8, 0x29, 0xbd, 0x20, 0x40, 0xeb, 0x3c } }; // bd445d79-b7ad-4f04-9ad8-29bd2040eb3c
static EFI_GUID gEfiFormBrowserExProtocolGuid = { 0x1f73b18d, 0x4630, 0x43c1, { 0xa1, 0xde, 0x6f, 0x80, 0x85, 0x5d, 0x7d, 0xa4 } }; // 1f73b18d-4630-43c1-a1de-6f80855d7da4
static EFI_GUID gEfiEbcVmTestProtocolGuid = { 0xaaeaccfd, 0xf27b, 0x4c17, { 0xb6, 0x10, 0x75, 0xca, 0x1f, 0x2d, 0xfb, 0x52 } }; // aaeaccfd-f27b-4c17-b610-75ca1f2dfb52
static EFI_GUID gEfiEbcSimpleDebuggerProtocolGuid = { 0x2a72d11e, 0x7376, 0x40f6, { 0x9c, 0x68, 0x23, 0xfa, 0x2f, 0xe3, 0x63, 0xf1 } }; // 2a72d11e-7376-40f6-9c68-23fa2fe363f1
static EFI_GUID gEfiBootLogoProtocolGuid = { 0xcdea2bd3, 0xfc25, 0x4c1c, { 0xb9, 0x7c, 0xb3, 0x11, 0x86, 0x06, 0x49, 0x90 } }; // cdea2bd3-fc25-4c1c-b97c-b31186064990
static EFI_GUID gEdkiiFormDisplayEngineProtocolGuid = { 0x9bbe29e9, 0xfda1, 0x41ec, { 0xad, 0x52, 0x45, 0x22, 0x13, 0x74, 0x2d, 0x2e } }; // 9bbe29e9-fda1-41ec-ad52-452213742d2e
static EFI_GUID gEdkiiFormBrowserEx2ProtocolGuid = { 0xa770c357, 0xb693, 0x4e6d, { 0xa6, 0xcf, 0xd2, 0x1c, 0x72, 0x8e, 0x55, 0x0b } }; // a770c357-b693-4e6d-a6cf-d21c728e550b
static EFI_GUID gEfiGlobalVariableGuid = { 0x8be4df61, 0x93ca, 0x11d2, { 0xaa, 0x0d, 0x00, 0xe0, 0x98, 0x03, 0x2b, 0x8c } }; // 8be4df61-93ca-11d2-aa0d-00e098032b8c
static EFI_GUID gEfiVT100PlusGuid = { 0x7baec70b, 0x57e0, 0x4c76, { 0x8e, 0x87, 0x2f, 0x9e, 0x28, 0x08, 0x83, 0x43 } }; // 7baec70b-57e0-4c76-8e87-2f9e28088343
static EFI_GUID gEfiVT100Guid = { 0xdfa66065, 0xb419, 0x11d3, { 0x9a, 0x2d, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // dfa66065-b419-11d3-9a2d-0090273fc14d
static EFI_GUID gEfiPcAnsiGuid = { 0xe0c14753, 0xf9be, 0x11d2, { 0x9a, 0x0c, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // e0c14753-f9be-11d2-9a0c-0090273fc14d
static EFI_GUID gEfiVTUTF8Guid = { 0xad15a0d6, 0x8bec, 0x4acf, { 0xa0, 0x73, 0xd0, 0x1d, 0xe7, 0x7e, 0x2d, 0x88 } }; // ad15a0d6-8bec-4acf-a073-d01de77e2d88
static EFI_GUID gEfiUartDevicePathGuid = { 0x37499a9d, 0x542f, 0x4c89, { 0xa0, 0x26, 0x35, 0xda, 0x14, 0x20, 0x94, 0xe4 } }; // 37499a9d-542f-4c89-a026-35da142094e4
static EFI_GUID gEfiSasDevicePathGuid = { 0xd487ddb4, 0x008b, 0x11d9, { 0xaf, 0xdc, 0x00, 0x10, 0x83, 0xff, 0xca, 0x4d } }; // d487ddb4-008b-11d9-afdc-001083ffca4d
static EFI_GUID gEfiPartTypeLegacyMbrGuid = { 0x024dee41, 0x33e7, 0x11d3, { 0x9d, 0x69, 0x00, 0x08, 0xc7, 0x81, 0xf3, 0x9f } }; // 024dee41-33e7-11d3-9d69-0008c781f39f
static EFI_GUID gEfiPartTypeSystemPartGuid = { 0xc12a7328, 0xf81f, 0x11d2, { 0xba, 0x4b, 0x00, 0xa0, 0xc9, 0x3e, 0xc9, 0x3b } }; // c12a7328-f81f-11d2-ba4b-00a0c93ec93b
static EFI_GUID gEfiPartTypeUnusedGuid = { 0x00000000, 0x0000, 0x0000, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }; // 00000000-0000-0000-0000-000000000000
static EFI_GUID gEfiDebugImageInfoTableGuid = { 0x49152e77, 0x1ada, 0x4764, { 0xb7, 0xa2, 0x7a, 0xfe, 0xfe, 0xd9, 0x5e, 0x8b } }; // 49152e77-1ada-4764-b7a2-7afefed95e8b
static EFI_GUID gEfiAcpiTableGuid = { 0x8868e871, 0xe4f1, 0x11d3, { 0xbc, 0x22, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // 8868e871-e4f1-11d3-bc22-0080c73c8881
static EFI_GUID gEfiAcpi20TableGuid = { 0x8868e871, 0xe4f1, 0x11d3, { 0xbc, 0x22, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // 8868e871-e4f1-11d3-bc22-0080c73c8881
static EFI_GUID gEfiAcpi10TableGuid = { 0xeb9d2d30, 0x2d88, 0x11d3, { 0x9a, 0x16, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // eb9d2d30-2d88-11d3-9a16-0090273fc14d
static EFI_GUID gEfiSmbiosTableGuid = { 0xeb9d2d31, 0x2d88, 0x11d3, { 0x9a, 0x16, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // eb9d2d31-2d88-11d3-9a16-0090273fc14d
static EFI_GUID gEfiMpsTableGuid = { 0xeb9d2d2f, 0x2d88, 0x11d3, { 0x9a, 0x16, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // eb9d2d2f-2d88-11d3-9a16-0090273fc14d
static EFI_GUID gEfiSalSystemTableGuid = { 0xeb9d2d32, 0x2d88, 0x11d3, { 0x9a, 0x16, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // eb9d2d32-2d88-11d3-9a16-0090273fc14d
static EFI_GUID gEfiAuthenticationChapLocalGuid = { 0xc280c73e, 0x15ca, 0x11da, { 0xb0, 0xca, 0x00, 0x10, 0x83, 0xff, 0xca, 0x4d } }; // c280c73e-15ca-11da-b0ca-001083ffca4d
static EFI_GUID gEfiAuthenticationChapRadiusGuid = { 0xd6062b50, 0x15ca, 0x11da, { 0x92, 0x19, 0x00, 0x10, 0x83, 0xff, 0xca, 0x4d } }; // d6062b50-15ca-11da-9219-001083ffca4d
static EFI_GUID gEfiFileSystemVolumeLabelInfoIdGuid = { 0xdb47d7d3, 0xfe81, 0x11d3, { 0x9a, 0x35, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // db47d7d3-fe81-11d3-9a35-0090273fc14d
static EFI_GUID gEfiFileSystemInfoGuid = { 0x09576e93, 0x6d3f, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b } }; // 09576e93-6d3f-11d2-8e39-00a0c969723b
static EFI_GUID gEfiFileInfoGuid = { 0x09576e92, 0x6d3f, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b } }; // 09576e92-6d3f-11d2-8e39-00a0c969723b
static EFI_GUID gBootObjectAuthorizationParmsetGuid = { 0xedd35e31, 0x07b9, 0x11d2, { 0x83, 0xa3, 0x00, 0xa0, 0xc9, 0x1f, 0xad, 0xcf } }; // edd35e31-07b9-11d2-83a3-00a0c91fadcf
static EFI_GUID gEfiPlatformToDriverConfigurationClpGuid = { 0x345ecc0e, 0x0cb6, 0x4b75, { 0xbb, 0x57, 0x1b, 0x12, 0x9c, 0x47, 0x33, 0x3e } }; // 345ecc0e-0cb6-4b75-bb57-1b129c47333e
static EFI_GUID gEfiHiiKeyBoardLayoutGuid = { 0x14982a4f, 0xb0ed, 0x45b8, { 0xa8, 0x11, 0x5a, 0x7a, 0x9b, 0xc2, 0x32, 0xdf } }; // 14982a4f-b0ed-45b8-a811-5a7a9bc232df
static EFI_GUID gEfiHashAlgorithmMD5Guid = { 0x0af7c79c, 0x65b5, 0x4319, { 0xb0, 0xae, 0x44, 0xec, 0x48, 0x4e, 0x4a, 0xd7 } }; // 0af7c79c-65b5-4319-b0ae-44ec484e4ad7
static EFI_GUID gEfiHashAlgorithmSha512Guid = { 0xcaa4381e, 0x750c, 0x4770, { 0xb8, 0x70, 0x7a, 0x23, 0xb4, 0xe4, 0x21, 0x30 } }; // caa4381e-750c-4770-b870-7a23b4e42130
static EFI_GUID gEfiHashAlgorithmSha384Guid = { 0xefa96432, 0xde33, 0x4dd2, { 0xae, 0xe6, 0x32, 0x8c, 0x33, 0xdf, 0x77, 0x7a } }; // efa96432-de33-4dd2-aee6-328c33df777a
static EFI_GUID gEfiHashAlgorithmSha256Guid = { 0x51aa59de, 0xfdf2, 0x4ea3, { 0xbc, 0x63, 0x87, 0x5f, 0xb7, 0x84, 0x2e, 0xe9 } }; // 51aa59de-fdf2-4ea3-bc63-875fb7842ee9
static EFI_GUID gEfiHashAlgorithmSha224Guid = { 0x8df01a06, 0x9bd5, 0x4bf7, { 0xb0, 0x21, 0xdb, 0x4f, 0xd9, 0xcc, 0xf4, 0x5b } }; // 8df01a06-9bd5-4bf7-b021-db4fd9ccf45b
static EFI_GUID gEfiHashAlgorithmSha1Guid = { 0x2ae9d80f, 0x3fb2, 0x4095, { 0xb7, 0xb1, 0xe9, 0x31, 0x57, 0xb9, 0x46, 0xb6 } }; // 2ae9d80f-3fb2-4095-b7b1-e93157b946b6
static EFI_GUID gEfiEventReadyToBootGuid = { 0x7ce88fb3, 0x4bd7, 0x4679, { 0x87, 0xa8, 0xa8, 0xd8, 0xde, 0xe5, 0x0d, 0x2b } }; // 7ce88fb3-4bd7-4679-87a8-a8d8dee50d2b
static EFI_GUID gEfiEventMemoryMapChangeGuid = { 0x78bee926, 0x692f, 0x48fd, { 0x9e, 0xdb, 0x01, 0x42, 0x2e, 0xf0, 0xd7, 0xab } }; // 78bee926-692f-48fd-9edb-01422ef0d7ab
static EFI_GUID gEfiEventVirtualAddressChangeGuid = { 0x13fa7698, 0xc831, 0x49c7, { 0x87, 0xea, 0x8f, 0x43, 0xfc, 0xc2, 0x51, 0x96 } }; // 13fa7698-c831-49c7-87ea-8f43fcc25196
static EFI_GUID gEfiEventExitBootServicesGuid = { 0x27abf055, 0xb1b8, 0x4c26, { 0x80, 0x48, 0x74, 0x8f, 0x37, 0xba, 0xa2, 0xdf } }; // 27abf055-b1b8-4c26-8048-748f37baa2df
static EFI_GUID gEfiDebugPortVariableGuid = { 0xeba4e8d2, 0x3858, 0x41ec, { 0xa2, 0x81, 0x26, 0x47, 0xba, 0x96, 0x60, 0xd0 } }; // eba4e8d2-3858-41ec-a281-2647ba9660d0
static EFI_GUID gEfiDebugPortDevicePathGuid = { 0xeba4e8d2, 0x3858, 0x41ec, { 0xa2, 0x81, 0x26, 0x47, 0xba, 0x96, 0x60, 0xd0 } }; // eba4e8d2-3858-41ec-a281-2647ba9660d0
static EFI_GUID gEfiHiiPlatformSetupFormsetGuid = { 0x93039971, 0x8545, 0x4b04, { 0xb4, 0x5e, 0x32, 0xeb, 0x83, 0x26, 0x04, 0x0e } }; // 93039971-8545-4b04-b45e-32eb8326040e
static EFI_GUID gEfiHiiDriverHealthFormsetGuid = { 0xf22fc20c, 0x8cf4, 0x45eb, { 0x8e, 0x06, 0xad, 0x4e, 0x50, 0xb9, 0x5d, 0xd3 } }; // f22fc20c-8cf4-45eb-8e06-ad4e50b95dd3
static EFI_GUID gEfiHiiUserCredentialFormsetGuid = { 0x337f4407, 0x5aee, 0x4b83, { 0xb2, 0xa7, 0x4e, 0xad, 0xca, 0x30, 0x88, 0xcd } }; // 337f4407-5aee-4b83-b2a7-4eadca3088cd
static EFI_GUID gEfiHiiStandardFormGuid = { 0x3bd2f4ec, 0xe524, 0x46e4, { 0xa9, 0xd8, 0x51, 0x01, 0x17, 0x42, 0x55, 0x62 } }; // 3bd2f4ec-e524-46e4-a9d8-510117425562
static EFI_GUID gEfiMemoryOverwriteControlDataGuid = { 0xe20939be, 0x32d4, 0x41be, { 0xa1, 0x50, 0x89, 0x7f, 0x85, 0xd4, 0x98, 0x29 } }; // e20939be-32d4-41be-a150-897f85d49829
static EFI_GUID gEfiCertTypeRsa2048Sha256Guid = { 0xa7717414, 0xc616, 0x4977, { 0x94, 0x20, 0x84, 0x47, 0x12, 0xa7, 0x35, 0xbf } }; // a7717414-c616-4977-9420-844712a735bf
static EFI_GUID gEfiEventNotificationTypeCmcGuid = { 0x2dce8bb1, 0xbdd7, 0x450e, { 0xb9, 0xad, 0x9c, 0xf4, 0xeb, 0xd4, 0xf8, 0x90 } }; // 2dce8bb1-bdd7-450e-b9ad-9cf4ebd4f890
static EFI_GUID gEfiEventNotificationTypeCpeGuid = { 0x4e292f96, 0xd843, 0x4a55, { 0xa8, 0xc2, 0xd4, 0x81, 0xf2, 0x7e, 0xbe, 0xee } }; // 4e292f96-d843-4a55-a8c2-d481f27ebeee
static EFI_GUID gEfiEventNotificationTypeMceGuid = { 0xe8f56ffe, 0x919c, 0x4cc5, { 0xba, 0x88, 0x65, 0xab, 0xe1, 0x49, 0x13, 0xbb } }; // e8f56ffe-919c-4cc5-ba88-65abe14913bb
static EFI_GUID gEfiEventNotificationTypePcieGuid = { 0xcf93c01f, 0x1a16, 0x4dfc, { 0xb8, 0xbc, 0x9c, 0x4d, 0xaf, 0x67, 0xc1, 0x04 } }; // cf93c01f-1a16-4dfc-b8bc-9c4daf67c104
static EFI_GUID gEfiEventNotificationTypeInitGuid = { 0xcc5263e8, 0x9308, 0x454a, { 0x89, 0xd0, 0x34, 0x0b, 0xd3, 0x9b, 0xc9, 0x8e } }; // cc5263e8-9308-454a-89d0-340bd39bc98e
static EFI_GUID gEfiEventNotificationTypeNmiGuid = { 0x5bad89ff, 0xb7e6, 0x42c9, { 0x81, 0x4a, 0xcf, 0x24, 0x85, 0xd6, 0xe9, 0x8a } }; // 5bad89ff-b7e6-42c9-814a-cf2485d6e98a
static EFI_GUID gEfiEventNotificationTypeBootGuid = { 0x3d61a466, 0xab40, 0x409a, { 0xa6, 0x98, 0xf3, 0x62, 0xd4, 0x64, 0xb3, 0x8f } }; // 3d61a466-ab40-409a-a698-f362d464b38f
static EFI_GUID gEfiEventNotificationTypeDmarGuid = { 0x667dd791, 0xc6b3, 0x4c27, { 0x8a, 0x6b, 0x0f, 0x8e, 0x72, 0x2d, 0xeb, 0x41 } }; // 667dd791-c6b3-4c27-8a6b-0f8e722deb41
static EFI_GUID gEfiProcessorGenericErrorSectionGuid = { 0x9876ccad, 0x47b4, 0x4bdb, { 0xb6, 0x5e, 0x16, 0xf1, 0x93, 0xc4, 0xf3, 0xdb } }; // 9876ccad-47b4-4bdb-b65e-16f193c4f3db
static EFI_GUID gEfiProcessorSpecificErrorSectionGuid = { 0xdc3ea0b0, 0xa144, 0x4797, { 0xb9, 0x5b, 0x53, 0xfa, 0x24, 0x2b, 0x6e, 0x1d } }; // dc3ea0b0-a144-4797-b95b-53fa242b6e1d
static EFI_GUID gEfiPlatformMemoryErrorSectionGuid = { 0xa5bc1114, 0x6f64, 0x4ede, { 0xb8, 0x63, 0x3e, 0x83, 0xed, 0x7c, 0x83, 0xb1 } }; // a5bc1114-6f64-4ede-b863-3e83ed7c83b1
static EFI_GUID gEfiPcieErrorSectionGuid = { 0xd995e954, 0xbbc1, 0x430f, { 0xad, 0x91, 0xb4, 0x4d, 0xcb, 0x3c, 0x6f, 0x35 } }; // d995e954-bbc1-430f-ad91-b44dcb3c6f35
static EFI_GUID gEfiFirmwareErrorSectionGuid = { 0x81212a96, 0x09ed, 0x4996, { 0x94, 0x71, 0x8d, 0x72, 0x9c, 0x8e, 0x69, 0xed } }; // 81212a96-09ed-4996-9471-8d729c8e69ed
static EFI_GUID gEfiPciBusErrorSectionGuid = { 0xc5753963, 0x3b84, 0x4095, { 0xbf, 0x78, 0xed, 0xda, 0xd3, 0xf9, 0xc9, 0xdd } }; // c5753963-3b84-4095-bf78-eddad3f9c9dd
static EFI_GUID gEfiPciDevErrorSectionGuid = { 0xeb5e4685, 0xca66, 0x4769, { 0xb6, 0xa2, 0x26, 0x06, 0x8b, 0x00, 0x13, 0x26 } }; // eb5e4685-ca66-4769-b6a2-26068b001326
static EFI_GUID gEfiDMArGenericErrorSectionGuid = { 0x5b51fef7, 0xc79d, 0x4434, { 0x8f, 0x1b, 0xaa, 0x62, 0xde, 0x3e, 0x2c, 0x64 } }; // 5b51fef7-c79d-4434-8f1b-aa62de3e2c64
static EFI_GUID gEfiDirectedIoDMArErrorSectionGuid = { 0x71761d37, 0x32b2, 0x45cd, { 0xa7, 0xd0, 0xb0, 0xfe, 0xdd, 0x93, 0xe8, 0xcf } }; // 71761d37-32b2-45cd-a7d0-b0fedd93e8cf
static EFI_GUID gEfiIommuDMArErrorSectionGuid = { 0x036f84e1, 0x7f37, 0x428c, { 0xa7, 0x9e, 0x57, 0x5f, 0xdf, 0xaa, 0x84, 0xec } }; // 036f84e1-7f37-428c-a79e-575fdfaa84ec
static EFI_GUID gEfiEventUserProfileChangedGuid = { 0xbaf1e6de, 0x209e, 0x4adb, { 0x8d, 0x96, 0xfd, 0x8b, 0x71, 0xf3, 0xf6, 0x83 } }; // baf1e6de-209e-4adb-8d96-fd8b71f3f683
static EFI_GUID gEfiUserCredentialClassUnknownGuid = { 0x5cf32e68, 0x7660, 0x449b, { 0x80, 0xe6, 0x7e, 0xa3, 0x6e, 0x03, 0xf6, 0xa8 } }; // 5cf32e68-7660-449b-80e6-7ea36e03f6a8
static EFI_GUID gEfiUserCredentialClassPasswordGuid = { 0xf8e5058c, 0xccb6, 0x4714, { 0xb2, 0x20, 0x3f, 0x7e, 0x3a, 0x64, 0x0b, 0xd1 } }; // f8e5058c-ccb6-4714-b220-3f7e3a640bd1
static EFI_GUID gEfiUserCredentialClassSmartCardGuid = { 0x5f03ba33, 0x8c6b, 0x4c24, { 0xaa, 0x2e, 0x14, 0xa2, 0x65, 0x7b, 0xd4, 0x54 } }; // 5f03ba33-8c6b-4c24-aa2e-14a2657bd454
static EFI_GUID gEfiUserCredentialClassFingerprintGuid = { 0x32cba21f, 0xf308, 0x4cbc, { 0x9a, 0xb5, 0xf5, 0xa3, 0x69, 0x9f, 0x04, 0x4a } }; // 32cba21f-f308-4cbc-9ab5-f5a3699f044a
static EFI_GUID gEfiUserCredentialClassHandprintGuid = { 0x5917ef16, 0xf723, 0x4bb9, { 0xa6, 0x4b, 0xd8, 0xc5, 0x32, 0xf4, 0xd8, 0xb5 } }; // 5917ef16-f723-4bb9-a64b-d8c532f4d8b5
static EFI_GUID gEfiUserCredentialClassSecureCardGuid = { 0x8a6b4a83, 0x42fe, 0x45d2, { 0xa2, 0xef, 0x46, 0xf0, 0x6c, 0x7d, 0x98, 0x52 } }; // 8a6b4a83-42fe-45d2-a2ef-46f06c7d9852
static EFI_GUID gEfiUserInfoAccessSetupAdminGuid = { 0x85b75607, 0xf7ce, 0x471e, { 0xb7, 0xe4, 0x2a, 0xea, 0x5f, 0x72, 0x32, 0xee } }; // 85b75607-f7ce-471e-b7e4-2aea5f7232ee
static EFI_GUID gEfiUserInfoAccessSetupNormalGuid = { 0x1db29ae0, 0x9dcb, 0x43bc, { 0x8d, 0x87, 0x5d, 0xa1, 0x49, 0x64, 0xdd, 0xe2 } }; // 1db29ae0-9dcb-43bc-8d87-5da14964dde2
static EFI_GUID gEfiUserInfoAccessSetupRestrictedGuid = { 0xbdb38125, 0x4d63, 0x49f4, { 0x82, 0x12, 0x61, 0xcf, 0x5a, 0x19, 0x0a, 0xf8 } }; // bdb38125-4d63-49f4-8212-61cf5a190af8
static EFI_GUID gEfiImageSecurityDatabaseGuid = { 0xd719b2cb, 0x3d3a, 0x4596, { 0xa3, 0xbc, 0xda, 0xd0, 0x0e, 0x67, 0x65, 0x6f } }; // d719b2cb-3d3a-4596-a3bc-dad00e67656f
static EFI_GUID gEfiCertSha256Guid = { 0xc1c41626, 0x504c, 0x4092, { 0xac, 0xa9, 0x41, 0xf9, 0x36, 0x93, 0x43, 0x28 } }; // c1c41626-504c-4092-aca9-41f936934328
static EFI_GUID gEfiCertRsa2048Guid = { 0x3c5766e8, 0x269c, 0x4e34, { 0xaa, 0x14, 0xed, 0x77, 0x6e, 0x85, 0xb3, 0xb6 } }; // 3c5766e8-269c-4e34-aa14-ed776e85b3b6
static EFI_GUID gEfiCertRsa2048Sha256Guid = { 0xe2b36190, 0x879b, 0x4a3d, { 0xad, 0x8d, 0xf2, 0xe7, 0xbb, 0xa3, 0x27, 0x84 } }; // e2b36190-879b-4a3d-ad8d-f2e7bba32784
static EFI_GUID gEfiCertSha1Guid = { 0x826ca512, 0xcf10, 0x4ac9, { 0xb1, 0x87, 0xbe, 0x01, 0x49, 0x66, 0x31, 0xbd } }; // 826ca512-cf10-4ac9-b187-be01496631bd
static EFI_GUID gEfiCertRsa2048Sha1Guid = { 0x67f8444f, 0x8743, 0x48f1, { 0xa3, 0x28, 0x1e, 0xaa, 0xb8, 0x73, 0x60, 0x80 } }; // 67f8444f-8743-48f1-a328-1eaab8736080
static EFI_GUID gEfiCertX509Guid = { 0xa5c059a1, 0x94e4, 0x4aa7, { 0x87, 0xb5, 0xab, 0x15, 0x5c, 0x2b, 0xf0, 0x72 } }; // a5c059a1-94e4-4aa7-87b5-ab155c2bf072
static EFI_GUID gEfiKmsFormatGeneric128Guid = { 0xec8a3d69, 0x6ddf, 0x4108, { 0x94, 0x76, 0x73, 0x37, 0xfc, 0x52, 0x21, 0x36 } }; // ec8a3d69-6ddf-4108-9476-7337fc522136
static EFI_GUID gEfiKmsFormatGeneric160Guid = { 0xa3b3e6f8, 0xefca, 0x4bc1, { 0x88, 0xfb, 0xcb, 0x87, 0x33, 0x9b, 0x25, 0x79 } }; // a3b3e6f8-efca-4bc1-88fb-cb87339b2579
static EFI_GUID gEfiKmsFormatGeneric256Guid = { 0x70f64793, 0xc323, 0x4261, { 0xac, 0x2c, 0xd8, 0x76, 0xf2, 0x7c, 0x53, 0x45 } }; // 70f64793-c323-4261-ac2c-d876f27c5345
static EFI_GUID gEfiKmsFormatGeneric512Guid = { 0x978fe043, 0xd7af, 0x422e, { 0x8a, 0x92, 0x2b, 0x48, 0xe4, 0x63, 0xbd, 0xe6 } }; // 978fe043-d7af-422e-8a92-2b48e463bde6
static EFI_GUID gEfiKmsFormatGeneric1024Guid = { 0x43be0b44, 0x874b, 0x4ead, { 0xb0, 0x9c, 0x24, 0x1a, 0x4f, 0xbd, 0x7e, 0xb3 } }; // 43be0b44-874b-4ead-b09c-241a4fbd7eb3
static EFI_GUID gEfiKmsFormatGeneric2048Guid = { 0x40093f23, 0x630c, 0x4626, { 0x9c, 0x48, 0x40, 0x37, 0x3b, 0x19, 0xcb, 0xbe } }; // 40093f23-630c-4626-9c48-40373b19cbbe
static EFI_GUID gEfiKmsFormatGeneric3072Guid = { 0xb9237513, 0x6c44, 0x4411, { 0xa9, 0x90, 0x21, 0xe5, 0x56, 0xe0, 0x5a, 0xde } }; // b9237513-6c44-4411-a990-21e556e05ade
static EFI_GUID gEfiKmsFormatMd2128Guid = { 0x78be11c4, 0xee44, 0x4a22, { 0x9f, 0x05, 0x03, 0x85, 0x2e, 0xc5, 0xc9, 0x78 } }; // 78be11c4-ee44-4a22-9f05-03852ec5c978
static EFI_GUID gEfiKmsFormatMdc2128Guid = { 0xf7ad60f8, 0xefa8, 0x44a3, { 0x91, 0x13, 0x23, 0x1f, 0x39, 0x9e, 0xb4, 0xc7 } }; // f7ad60f8-efa8-44a3-9113-231f399eb4c7
static EFI_GUID gEfiKmsFormatMd4128Guid = { 0xd1c17aa1, 0xcac5, 0x400f, { 0xbe, 0x17, 0xe2, 0xa2, 0xae, 0x06, 0x67, 0x7c } }; // d1c17aa1-cac5-400f-be17-e2a2ae06677c
static EFI_GUID gEfiKmsFormatMdc4128Guid = { 0x3fa4f847, 0xd8eb, 0x4df4, { 0xbd, 0x49, 0x10, 0x3a, 0x0a, 0x84, 0x7b, 0xbc } }; // 3fa4f847-d8eb-4df4-bd49-103a0a847bbc
static EFI_GUID gEfiKmsFormatMd5128Guid = { 0xdcbc3662, 0x9cda, 0x4b52, { 0xa0, 0x4c, 0x82, 0xeb, 0x1d, 0x23, 0x48, 0xc7 } }; // dcbc3662-9cda-4b52-a04c-82eb1d2348c7
static EFI_GUID gEfiKmsFormatMd5sha128Guid = { 0x1c178237, 0x6897, 0x459e, { 0x9d, 0x36, 0x67, 0xce, 0x8e, 0xf9, 0x4f, 0x76 } }; // 1c178237-6897-459e-9d36-67ce8ef94f76
static EFI_GUID gEfiKmsFormatSha1160Guid = { 0x453c5e5a, 0x482d, 0x43f0, { 0x87, 0xc9, 0x59, 0x41, 0xf3, 0xa3, 0x8a, 0xc2 } }; // 453c5e5a-482d-43f0-87c9-5941f3a38ac2
static EFI_GUID gEfiKmsFormatSha256256Guid = { 0x6bb4f5cd, 0x8022, 0x448d, { 0xbc, 0x6d, 0x77, 0x1b, 0xae, 0x93, 0x5f, 0xc6 } }; // 6bb4f5cd-8022-448d-bc6d-771bae935fc6
static EFI_GUID gEfiKmsFormatSha512512Guid = { 0x2f240e12, 0xe14d, 0x475c, { 0x83, 0xb0, 0xef, 0xff, 0x22, 0xd7, 0x7b, 0xe7 } }; // 2f240e12-e14d-475c-83b0-efff22d77be7
static EFI_GUID gEfiKmsFormatAesxts128Guid = { 0x4776e33f, 0xdb47, 0x479a, { 0xa2, 0x5f, 0xa1, 0xcd, 0x0a, 0xfa, 0xb3, 0x8b } }; // 4776e33f-db47-479a-a25f-a1cd0afab38b
static EFI_GUID gEfiKmsFormatAesxts256Guid = { 0xdc7e8613, 0xc4bb, 0x4db0, { 0x84, 0x62, 0x13, 0x51, 0x13, 0x57, 0xab, 0xe2 } }; // dc7e8613-c4bb-4db0-8462-13511357abe2
static EFI_GUID gEfiKmsFormatAescbc128Guid = { 0xa0e8ee6a, 0x0e92, 0x44d4, { 0x86, 0x1b, 0x0e, 0xaa, 0x4a, 0xca, 0x44, 0xa2 } }; // a0e8ee6a-0e92-44d4-861b-0eaa4aca44a2
static EFI_GUID gEfiKmsFormatAescbc256Guid = { 0xd7e69789, 0x1f68, 0x45e8, { 0x96, 0xef, 0x3b, 0x64, 0x07, 0xa5, 0xb2, 0xdc } }; // d7e69789-1f68-45e8-96ef-3b6407a5b2dc
static EFI_GUID gEfiKmsFormatRsasha11024Guid = { 0x56417bed, 0x6bbe, 0x4882, { 0x86, 0xa0, 0x3a, 0xe8, 0xbb, 0x17, 0xf8, 0xf9 } }; // 56417bed-6bbe-4882-86a0-3ae8bb17f8f9
static EFI_GUID gEfiKmsFormatRsasha12048Guid = { 0xf66447d4, 0x75a6, 0x463e, { 0xa8, 0x19, 0x07, 0x7f, 0x2d, 0xda, 0x05, 0xe9 } }; // f66447d4-75a6-463e-a819-077f2dda05e9
static EFI_GUID gEfiKmsFormatRsasha2562048Guid = { 0xa477af13, 0x877d, 0x4060, { 0xba, 0xa1, 0x25, 0xd1, 0xbe, 0xa0, 0x8a, 0xd3 } }; // a477af13-877d-4060-baa1-25d1bea08ad3
static EFI_GUID gEfiKmsFormatRsasha2563072Guid = { 0x4e1356c2, 0x0eed, 0x463f, { 0x81, 0x47, 0x99, 0x33, 0xab, 0xdb, 0xc7, 0xd5 } }; // 4e1356c2-0eed-463f-8147-9933abdbc7d5
static EFI_GUID gEfiCertSha224Guid = { 0x0b6e5233, 0xa65c, 0x44c9, { 0x94, 0x07, 0xd9, 0xab, 0x83, 0xbf, 0xc8, 0xbd } }; // 0b6e5233-a65c-44c9-9407-d9ab83bfc8bd
static EFI_GUID gEfiCertSha384Guid = { 0xff3e5307, 0x9fd0, 0x48c9, { 0x85, 0xf1, 0x8a, 0xd5, 0x6c, 0x70, 0x1e, 0x01 } }; // ff3e5307-9fd0-48c9-85f1-8ad56c701e01
static EFI_GUID gEfiCertSha512Guid = { 0x093e0fae, 0xa6c4, 0x4f50, { 0x9f, 0x1b, 0xd4, 0x1e, 0x2b, 0x89, 0xc1, 0x9a } }; // 093e0fae-a6c4-4f50-9f1b-d41e2b89c19a
static EFI_GUID gEfiCertPkcs7Guid = { 0x4aafd29d, 0x68df, 0x49ee, { 0x8a, 0xa9, 0x34, 0x7d, 0x37, 0x56, 0x65, 0xa7 } }; // 4aafd29d-68df-49ee-8aa9-347d375665a7
static EFI_GUID gEfiHashAlgorithmSha1NoPadGuid = { 0x24c5dc2f, 0x53e2, 0x40ca, { 0x9e, 0xd6, 0xa5, 0xd9, 0xa4, 0x9f, 0x46, 0x3b } }; // 24c5dc2f-53e2-40ca-9ed6-a5d9a49f463b
static EFI_GUID gEfiHashAlgorithmSha256NoPadGuid = { 0x8628752a, 0x6cb7, 0x4814, { 0x96, 0xfc, 0x24, 0xa8, 0x15, 0xac, 0x22, 0x26 } }; // 8628752a-6cb7-4814-96fc-24a815ac2226
static EFI_GUID gEfiFmpCapsuleGuid = { 0x6dcbd5ed, 0xe82d, 0x4c44, { 0xbd, 0xa1, 0x71, 0x94, 0x19, 0x9a, 0xd9, 0x2a } }; // 6dcbd5ed-e82d-4c44-bda1-7194199ad92a
static EFI_GUID gEfiCertX509Sha256Guid = { 0x3bd2a492, 0x96c0, 0x4079, { 0xb4, 0x20, 0xfc, 0xf9, 0x8e, 0xf1, 0x03, 0xed } }; // 3bd2a492-96c0-4079-b420-fcf98ef103ed
static EFI_GUID gEfiCertX509Sha384Guid = { 0x7076876e, 0x80c2, 0x4ee6, { 0xaa, 0xd2, 0x28, 0xb3, 0x49, 0xa6, 0x86, 0x5b } }; // 7076876e-80c2-4ee6-aad2-28b349a6865b
static EFI_GUID gEfiCertX509Sha512Guid = { 0x446dbf63, 0x2502, 0x4cda, { 0xbc, 0xfa, 0x24, 0x65, 0xd2, 0xb0, 0xfe, 0x9d } }; // 446dbf63-2502-4cda-bcfa-2465d2b0fe9d
static EFI_GUID gEfiRngAlgorithmSp80090Hash256Guid = { 0xa7af67cb, 0x603b, 0x4d42, { 0xba, 0x21, 0x70, 0xbf, 0xb6, 0x29, 0x3f, 0x96 } }; // a7af67cb-603b-4d42-ba21-70bfb6293f96
static EFI_GUID gEfiRngAlgorithmSp80090Hmac256Guid = { 0xc5149b43, 0xae85, 0x4f53, { 0x99, 0x82, 0xb9, 0x43, 0x35, 0xd3, 0xa9, 0xe7 } }; // c5149b43-ae85-4f53-9982-b94335d3a9e7
static EFI_GUID gEfiRngAlgorithmSp80090Ctr256Guid = { 0x44f0de6e, 0x4d8c, 0x4045, { 0xa8, 0xc7, 0x4d, 0xd1, 0x68, 0x85, 0x6b, 0x9e } }; // 44f0de6e-4d8c-4045-a8c7-4dd168856b9e
static EFI_GUID gEfiRngAlgorithmX9313DesGuid = { 0x63c4785a, 0xca34, 0x4012, { 0xa3, 0xc8, 0x0b, 0x6a, 0x32, 0x4f, 0x55, 0x46 } }; // 63c4785a-ca34-4012-a3c8-0b6a324f5546
static EFI_GUID gEfiRngAlgorithmX931AesGuid = { 0xacd03321, 0x777e, 0x4d3d, { 0xb1, 0xc8, 0x20, 0xcf, 0xd8, 0x88, 0x20, 0xc9 } }; // acd03321-777e-4d3d-b1c8-20cfd88820c9
static EFI_GUID gEfiAdapterInfoMediaStateGuid = { 0xd7c74207, 0xa831, 0x4a26, { 0xb1, 0xf5, 0xd1, 0x93, 0x06, 0x5c, 0xe8, 0xb6 } }; // d7c74207-a831-4a26-b1f5-d193065ce8b6
static EFI_GUID gEfiAdapterInfoNetworkBootGuid = { 0x1fbd2960, 0x4130, 0x41e5, { 0x94, 0xac, 0xd2, 0xcf, 0x03, 0x7f, 0xb3, 0x7c } }; // 1fbd2960-4130-41e5-94ac-d2cf037fb37c
static EFI_GUID gEfiAdapterInfoSanMacAddressGuid = { 0x114da5ef, 0x2cf1, 0x4e12, { 0x9b, 0xbb, 0xc4, 0x70, 0xb5, 0x52, 0x05, 0xd9 } }; // 114da5ef-2cf1-4e12-9bbb-c470b55205d9
static EFI_GUID gAprioriGuid = { 0xfc510ee7, 0xffdc, 0x11d4, { 0xbd, 0x41, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // fc510ee7-ffdc-11d4-bd41-0080c73c8881
static EFI_GUID gEfiFirmwareFileSystem2Guid = { 0x8c8ce578, 0x8a3d, 0x4f1c, { 0x99, 0x35, 0x89, 0x61, 0x85, 0xc3, 0x2d, 0xd3 } }; // 8c8ce578-8a3d-4f1c-9935-896185c32dd3
static EFI_GUID gEfiFirmwareVolumeTopFileGuid = { 0x1ba0062e, 0xc779, 0x4582, { 0x85, 0x66, 0x33, 0x6a, 0xe8, 0xf7, 0x8f, 0x09 } }; // 1ba0062e-c779-4582-8566-336ae8f78f09
static EFI_GUID gEfiHobMemoryAllocModuleGuid = { 0xf8e21975, 0x0899, 0x4f58, { 0xa4, 0xbe, 0x55, 0x25, 0xa9, 0xc6, 0xd7, 0x7a } }; // f8e21975-0899-4f58-a4be-5525a9c6d77a
static EFI_GUID gEfiHobMemoryAllocStackGuid = { 0x4ed4bf27, 0x4092, 0x42e9, { 0x80, 0x7d, 0x52, 0x7b, 0x1d, 0x00, 0xc9, 0xbd } }; // 4ed4bf27-4092-42e9-807d-527b1d00c9bd
static EFI_GUID gEfiHobMemoryAllocBspStoreGuid = { 0x564b33cd, 0xc92a, 0x4593, { 0x90, 0xbf, 0x24, 0x73, 0xe4, 0x3c, 0x63, 0x22 } }; // 564b33cd-c92a-4593-90bf-2473e43c6322
static EFI_GUID gEfiEventLegacyBootGuid = { 0x2a571201, 0x4966, 0x47f6, { 0x8b, 0x86, 0xf3, 0x1e, 0x41, 0xf3, 0x2f, 0x10 } }; // 2a571201-4966-47f6-8b86-f31e41f32f10
static EFI_GUID gEfiHobListGuid = { 0x7739f24c, 0x93d7, 0x11d4, { 0x9a, 0x3a, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // 7739f24c-93d7-11d4-9a3a-0090273fc14d
static EFI_GUID gEfiDxeServicesTableGuid = { 0x05ad34ba, 0x6f02, 0x4214, { 0x95, 0x2e, 0x4d, 0xa0, 0x39, 0x8e, 0x2b, 0xb9 } }; // 05ad34ba-6f02-4214-952e-4da0398e2bb9
static EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914aebe7, 0x4635, 0x459b, { 0xaa, 0x1c, 0x11, 0xe2, 0x19, 0xb0, 0x3a, 0x10 } }; // 914aebe7-4635-459b-aa1c-11e219b03a10
static EFI_GUID gEfiHardwareErrorVariableGuid = { 0x414e6bdd, 0xe47b, 0x47cc, { 0xb2, 0x44, 0xbb, 0x61, 0x02, 0x0c, 0xf5, 0x16 } }; // 414e6bdd-e47b-47cc-b244-bb61020cf516
static EFI_GUID gEfiEventDxeDispatchGuid = { 0x7081e22f, 0xcac6, 0x4053, { 0x94, 0x68, 0x67, 0x57, 0x82, 0xcf, 0x88, 0xe5 } }; // 7081e22f-cac6-4053-9468-675782cf88e5
static EFI_GUID gEfiDiskInfoIdeInterfaceGuid = { 0x5e948fe3, 0x26d3, 0x42b5, { 0xaf, 0x17, 0x61, 0x02, 0x87, 0x18, 0x8d, 0xec } }; // 5e948fe3-26d3-42b5-af17-610287188dec
static EFI_GUID gEfiDiskInfoScsiInterfaceGuid = { 0x08f74baa, 0xea36, 0x41d9, { 0x95, 0x21, 0x21, 0xa7, 0x0f, 0x87, 0x80, 0xbc } }; // 08f74baa-ea36-41d9-9521-21a70f8780bc
static EFI_GUID gEfiDiskInfoUsbInterfaceGuid = { 0xcb871572, 0xc11a, 0x47b5, { 0xb4, 0x92, 0x67, 0x5e, 0xaf, 0xa7, 0x77, 0x27 } }; // cb871572-c11a-47b5-b492-675eafa77727
static EFI_GUID gEfiDiskInfoAhciInterfaceGuid = { 0x9e498932, 0x4abc, 0x45af, { 0xa3, 0x4d, 0x02, 0x47, 0x78, 0x7b, 0xe7, 0xc6 } }; // 9e498932-4abc-45af-a34d-0247787be7c6
static EFI_GUID gEfiStatusCodeDataTypeStringGuid = { 0x92d11080, 0x496f, 0x4d95, { 0xbe, 0x7e, 0x03, 0x74, 0x88, 0x38, 0x2b, 0x0a } }; // 92d11080-496f-4d95-be7e-037488382b0a
static EFI_GUID gEfiStatusCodeSpecificDataGuid = { 0x335984bd, 0xe805, 0x409a, { 0xb8, 0xf8, 0xd2, 0x7e, 0xce, 0x5f, 0xf7, 0xa6 } }; // 335984bd-e805-409a-b8f8-d27ece5ff7a6
static EFI_GUID gEfiFirmwareFileSystem3Guid = { 0x5473c07a, 0x3dcb, 0x4dca, { 0xbd, 0x6f, 0x1e, 0x96, 0x89, 0xe7, 0x34, 0x9a } }; // 5473c07a-3dcb-4dca-bd6f-1e9689e7349a
static EFI_GUID gEfiEndOfDxeEventGroupGuid = { 0x02ce967a, 0xdd7e, 0x4ffc, { 0x9e, 0xe7, 0x81, 0x0c, 0xf0, 0x47, 0x08, 0x80 } }; // 02ce967a-dd7e-4ffc-9ee7-810cf0470880
static EFI_GUID gEfiFirmwareContentsSignedGuid = { 0x0f9d89e8, 0x9259, 0x4f76, { 0xa5, 0xaf, 0x0c, 0x89, 0xe3, 0x40, 0x23, 0xdf } }; // 0f9d89e8-9259-4f76-a5af-0c89e34023df
static EFI_GUID gEfiVectorHandoffTableGuid = { 0x996ec11c, 0x5397, 0x4e73, { 0xb5, 0x8f, 0x82, 0x7e, 0x52, 0x90, 0x6d, 0xef } }; // 996ec11c-5397-4e73-b58f-827e52906def
static EFI_GUID gAdapterInfoPlatformSecurityGuid = { 0x6be272c7, 0x1320, 0x4ccd, { 0x90, 0x17, 0xd4, 0x61, 0x2c, 0x01, 0x2b, 0x25 } }; // 6be272c7-1320-4ccd-9017-d4612c012b25
static EFI_GUID gEfiIa32X64ErrorTypeCacheCheckGuid = { 0xa55701f5, 0xe3ef, 0x43de, { 0xac, 0x72, 0x24, 0x9b, 0x57, 0x3f, 0xad, 0x2c } }; // a55701f5-e3ef-43de-ac72-249b573fad2c
static EFI_GUID gEfiIa32X64ErrorTypeTlbCheckGuid = { 0xfc06b535, 0x5e1f, 0x4562, { 0x9f, 0x25, 0x0a, 0x3b, 0x9a, 0xdb, 0x63, 0xc3 } }; // fc06b535-5e1f-4562-9f25-0a3b9adb63c3
static EFI_GUID gEfiIa32X64ErrorTypeBusCheckGuid = { 0x1cf3f8b3, 0xc5b1, 0x49a2, { 0xaa, 0x59, 0x5e, 0xef, 0x92, 0xff, 0xa6, 0x3c } }; // 1cf3f8b3-c5b1-49a2-aa59-5eef92ffa63c
static EFI_GUID gEfiIa32X64ErrorTypeMsCheckGuid = { 0x48ab7f57, 0xdc34, 0x4f6c, { 0xa7, 0xd3, 0xb0, 0xb5, 0xb0, 0xa7, 0x43, 0x14 } }; // 48ab7f57-dc34-4f6c-a7d3-b0b5b0a74314
static EFI_GUID gEfiPeiMasterBootModePpiGuid = { 0x7408d748, 0xfc8c, 0x4ee6, { 0x92, 0x88, 0xc4, 0xbe, 0xc0, 0x92, 0xa4, 0x10 } }; // 7408d748-fc8c-4ee6-9288-c4bec092a410
static EFI_GUID gEfiDxeIplPpiGuid = { 0x0ae8ce5d, 0xe448, 0x4437, { 0xa8, 0xd7, 0xeb, 0xf5, 0xf1, 0x94, 0xf7, 0x31 } }; // 0ae8ce5d-e448-4437-a8d7-ebf5f194f731
static EFI_GUID gEfiPeiMemoryDiscoveredPpiGuid = { 0xf894643d, 0xc449, 0x42d1, { 0x8e, 0xa8, 0x85, 0xbd, 0xd8, 0xc6, 0x5b, 0xde } }; // f894643d-c449-42d1-8ea8-85bdd8c65bde
static EFI_GUID gEfiPeiBootInRecoveryModePpiGuid = { 0x17ee496a, 0xd8e4, 0x4b9a, { 0x94, 0xd1, 0xce, 0x82, 0x72, 0x30, 0x08, 0x50 } }; // 17ee496a-d8e4-4b9a-94d1-ce8272300850
static EFI_GUID gEfiEndOfPeiSignalPpiGuid = { 0x605ea650, 0xc65c, 0x42e1, { 0xba, 0x80, 0x91, 0xa5, 0x2a, 0xb6, 0x18, 0xc6 } }; // 605ea650-c65c-42e1-ba80-91a52ab618c6
static EFI_GUID gEfiPeiResetPpiGuid = { 0xef398d58, 0x9dfd, 0x4103, { 0xbf, 0x94, 0x78, 0xc6, 0xf4, 0xfe, 0x71, 0x2f } }; // ef398d58-9dfd-4103-bf94-78c6f4fe712f
static EFI_GUID gEfiPeiStatusCodePpiGuid = { 0x229832d3, 0x7a30, 0x4b36, { 0xb8, 0x27, 0xf4, 0x0c, 0xb7, 0xd4, 0x54, 0x36 } }; // 229832d3-7a30-4b36-b827-f40cb7d45436
static EFI_GUID gEfiPeiSecurity2PpiGuid = { 0xdcd0be23, 0x9586, 0x40f4, { 0xb6, 0x43, 0x06, 0x52, 0x2c, 0xed, 0x4e, 0xde } }; // dcd0be23-9586-40f4-b643-06522ced4ede
static EFI_GUID gEfiTemporaryRamSupportPpiGuid = { 0xdbe23aa9, 0xa345, 0x4b97, { 0x85, 0xb6, 0xb2, 0x26, 0xf1, 0x61, 0x73, 0x89 } }; // dbe23aa9-a345-4b97-85b6-b226f1617389
static EFI_GUID gEfiPeiCpuIoPpiInstalledGuid = { 0xe6af1f7b, 0xfc3f, 0x46da, { 0xa8, 0x28, 0xa3, 0xb4, 0x57, 0xa4, 0x42, 0x82 } }; // e6af1f7b-fc3f-46da-a828-a3b457a44282
static EFI_GUID gEfiPciCfg2PpiGuid = { 0x057a449a, 0x1fdc, 0x4c06, { 0xbf, 0xc9, 0xf5, 0x3f, 0x6a, 0x99, 0xbb, 0x92 } }; // 057a449a-1fdc-4c06-bfc9-f53f6a99bb92
static EFI_GUID gEfiPeiStallPpiGuid = { 0x1f4c6f90, 0xb06b, 0x48d8, { 0xa2, 0x01, 0xba, 0xe5, 0xf1, 0xcd, 0x7d, 0x56 } }; // 1f4c6f90-b06b-48d8-a201-bae5f1cd7d56
static EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid = { 0x2ab86ef5, 0xecb5, 0x4134, { 0xb5, 0x56, 0x38, 0x54, 0xca, 0x1f, 0xe1, 0xb4 } }; // 2ab86ef5-ecb5-4134-b556-3854ca1fe1b4
static EFI_GUID gEfiSecPlatformInformationPpiGuid = { 0x6f8c2b35, 0xfef4, 0x448d, { 0x82, 0x56, 0xe1, 0x1b, 0x19, 0xd6, 0x10, 0x77 } }; // 6f8c2b35-fef4-448d-8256-e11b19d61077
static EFI_GUID gEfiPeiLoadedImagePpiGuid = { 0xc1fcd448, 0x6300, 0x4458, { 0xb8, 0x64, 0x28, 0xdf, 0x01, 0x53, 0x64, 0xbc } }; // c1fcd448-6300-4458-b864-28df015364bc
static EFI_GUID gEfiPeiSmbus2PpiGuid = { 0x9ca93627, 0xb65b, 0x4324, { 0xa2, 0x02, 0xc0, 0xb4, 0x61, 0x76, 0x45, 0x43 } }; // 9ca93627-b65b-4324-a202-c0b461764543
static EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid = { 0x49edb1c1, 0xbf21, 0x4761, { 0xbb, 0x12, 0xeb, 0x00, 0x31, 0xaa, 0xbb, 0x39 } }; // 49edb1c1-bf21-4761-bb12-eb0031aabb39
static EFI_GUID gEfiPeiLoadFilePpiGuid = { 0xb9e0abfe, 0x5979, 0x4914, { 0x97, 0x7f, 0x6d, 0xee, 0x78, 0xc2, 0x78, 0xa6 } }; // b9e0abfe-5979-4914-977f-6dee78c278a6
static EFI_GUID gEfiPeiDecompressPpiGuid = { 0x1a36e4e7, 0xfab6, 0x476a, { 0x8e, 0x75, 0x69, 0x5a, 0x05, 0x76, 0xfd, 0xd7 } }; // 1a36e4e7-fab6-476a-8e75-695a0576fdd7
static EFI_GUID gPcdPpiGuid = { 0x06e81c58, 0x4ad7, 0x44bc, { 0x83, 0x90, 0xf1, 0x02, 0x65, 0xf7, 0x24, 0x80 } }; // 06e81c58-4ad7-44bc-8390-f10265f72480
static EFI_GUID gGetPcdInfoPpiGuid = { 0x4d8b155b, 0xc059, 0x4c8f, { 0x89, 0x26, 0x06, 0xfd, 0x43, 0x31, 0xdb, 0x8a } }; // 4d8b155b-c059-4c8f-8926-06fd4331db8a
static EFI_GUID gEfiPeiRecoveryModulePpiGuid = { 0xfb6d9542, 0x612d, 0x4f45, { 0x87, 0x2f, 0x5c, 0xff, 0x52, 0xe9, 0x3d, 0xcf } }; // fb6d9542-612d-4f45-872f-5cff52e93dcf
static EFI_GUID gEfiPeiDeviceRecoveryModulePpiGuid = { 0x0de2ce25, 0x446a, 0x45a7, { 0xbf, 0xc9, 0x37, 0xda, 0x26, 0x34, 0x4b, 0x37 } }; // 0de2ce25-446a-45a7-bfc9-37da26344b37
static EFI_GUID gEfiPeiVirtualBlockIoPpiGuid = { 0x695d8aa1, 0x42ee, 0x4c46, { 0x80, 0x5c, 0x6e, 0xa6, 0xbc, 0xe7, 0x99, 0xe3 } }; // 695d8aa1-42ee-4c46-805c-6ea6bce799e3
static EFI_GUID gEfiPeiS3Resume2PpiGuid = { 0x6d582dbc, 0xdb85, 0x4514, { 0x8f, 0xcc, 0x5a, 0xdf, 0x62, 0x27, 0xb1, 0x47 } }; // 6d582dbc-db85-4514-8fcc-5adf6227b147
static EFI_GUID gEfiPeiRscHandlerPpiGuid = { 0x0065d394, 0x9951, 0x4144, { 0x82, 0xa3, 0x0a, 0xfc, 0x85, 0x79, 0xc2, 0x51 } }; // 0065d394-9951-4144-82a3-0afc8579c251
static EFI_GUID gEfiPeiPcdPpiGuid = { 0x01f34d25, 0x4de2, 0x23ad, { 0x3f, 0xf3, 0x36, 0x35, 0x3f, 0xf3, 0x23, 0xf1 } }; // 01f34d25-4de2-23ad-3ff3-36353ff323f1
static EFI_GUID gEfiGetPcdInfoPpiGuid = { 0xa60c6b59, 0xe459, 0x425d, { 0x9c, 0x69, 0x0b, 0xcc, 0x9c, 0xb2, 0x7d, 0x81 } }; // a60c6b59-e459-425d-9c69-0bcc9cb27d81
static EFI_GUID gEfiTemporaryRamDonePpiGuid = { 0xceab683c, 0xec56, 0x4a2d, { 0xa9, 0x06, 0x40, 0x53, 0xfa, 0x4e, 0x9c, 0x16 } }; // ceab683c-ec56-4a2d-a906-4053fa4e9c16
static EFI_GUID gEfiVectorHandoffInfoPpiGuid = { 0x3cd652b4, 0x6d33, 0x4dce, { 0x89, 0xdb, 0x83, 0xdf, 0x97, 0x66, 0xfc, 0xca } }; // 3cd652b4-6d33-4dce-89db-83df9766fcca
static EFI_GUID gEfiPeiI2cMasterPpiGuid = { 0xb3bfab9b, 0x9f9c, 0x4e8b, { 0xad, 0x37, 0x7f, 0x8c, 0x51, 0xfc, 0x62, 0x80 } }; // b3bfab9b-9f9c-4e8b-ad37-7f8c51fc6280
static EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid = { 0xea7ca24b, 0xded5, 0x4dad, { 0xa3, 0x89, 0xbf, 0x82, 0x7e, 0x8f, 0x9b, 0x38 } }; // ea7ca24b-ded5-4dad-a389-bf827e8f9b38
static EFI_GUID gPcdProtocolGuid = { 0x11b34006, 0xd85b, 0x4d0a, { 0xa2, 0x90, 0xd5, 0xa5, 0x71, 0x31, 0x0e, 0xf7 } }; // 11b34006-d85b-4d0a-a290-d5a571310ef7
static EFI_GUID gGetPcdInfoProtocolGuid = { 0x5be40f57, 0xfa68, 0x4610, { 0xbb, 0xbf, 0xe9, 0xc5, 0xfc, 0xda, 0xd3, 0x65 } }; // 5be40f57-fa68-4610-bbbf-e9c5fcdad365
static EFI_GUID gEfiBdsArchProtocolGuid = { 0x665e3ff6, 0x46cc, 0x11d4, { 0x9a, 0x38, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // 665e3ff6-46cc-11d4-9a38-0090273fc14d
static EFI_GUID gEfiCpuArchProtocolGuid = { 0x26baccb1, 0x6f42, 0x11d4, { 0xbc, 0xe7, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // 26baccb1-6f42-11d4-bce7-0080c73c8881
static EFI_GUID gEfiMetronomeArchProtocolGuid = { 0x26baccb2, 0x6f42, 0x11d4, { 0xbc, 0xe7, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // 26baccb2-6f42-11d4-bce7-0080c73c8881
static EFI_GUID gEfiMonotonicCounterArchProtocolGuid = { 0x1da97072, 0xbddc, 0x4b30, { 0x99, 0xf1, 0x72, 0xa0, 0xb5, 0x6f, 0xff, 0x2a } }; // 1da97072-bddc-4b30-99f1-72a0b56fff2a
static EFI_GUID gEfiRealTimeClockArchProtocolGuid = { 0x27cfac87, 0x46cc, 0x11d4, { 0x9a, 0x38, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // 27cfac87-46cc-11d4-9a38-0090273fc14d
static EFI_GUID gEfiResetArchProtocolGuid = { 0x27cfac88, 0x46cc, 0x11d4, { 0x9a, 0x38, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // 27cfac88-46cc-11d4-9a38-0090273fc14d
static EFI_GUID gEfiRuntimeArchProtocolGuid = { 0xb7dfb4e1, 0x052f, 0x449f, { 0x87, 0xbe, 0x98, 0x18, 0xfc, 0x91, 0xb7, 0x33 } }; // b7dfb4e1-052f-449f-87be-9818fc91b733
static EFI_GUID gEfiSecurityArchProtocolGuid = { 0xa46423e3, 0x4617, 0x49f1, { 0xb9, 0xff, 0xd1, 0xbf, 0xa9, 0x11, 0x58, 0x39 } }; // a46423e3-4617-49f1-b9ff-d1bfa9115839
static EFI_GUID gEfiSecurityPolicyProtocolGuid = { 0x78e4d245, 0xcd4d, 0x4a05, { 0xa2, 0xba, 0x47, 0x43, 0xe8, 0x6c, 0xfc, 0xab } }; // 78e4d245-cd4d-4a05-a2ba-4743e86cfcab
static EFI_GUID gEfiTimerArchProtocolGuid = { 0x26baccb3, 0x6f42, 0x11d4, { 0xbc, 0xe7, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // 26baccb3-6f42-11d4-bce7-0080c73c8881
static EFI_GUID gEfiVariableWriteArchProtocolGuid = { 0x6441f818, 0x6362, 0x4e44, { 0xb5, 0x70, 0x7d, 0xba, 0x31, 0xdd, 0x24, 0x53 } }; // 6441f818-6362-4e44-b570-7dba31dd2453
static EFI_GUID gEfiVariableArchProtocolGuid = { 0x1e5668e2, 0x8481, 0x11d4, { 0xbc, 0xf1, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // 1e5668e2-8481-11d4-bcf1-0080c73c8881
static EFI_GUID gEfiWatchdogTimerArchProtocolGuid = { 0x665e3ff5, 0x46cc, 0x11d4, { 0x9a, 0x38, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // 665e3ff5-46cc-11d4-9a38-0090273fc14d
static EFI_GUID gEfiStatusCodeRuntimeProtocolGuid = { 0xd2b2b828, 0x0826, 0x48a7, { 0xb3, 0xdf, 0x98, 0x3c, 0x00, 0x60, 0x24, 0xf0 } }; // d2b2b828-0826-48a7-b3df-983c006024f0
static EFI_GUID gEfiSmbusHcProtocolGuid = { 0xe49d33ed, 0x513d, 0x4634, { 0xb6, 0x98, 0x6f, 0x55, 0xaa, 0x75, 0x1c, 0x1b } }; // e49d33ed-513d-4634-b698-6f55aa751c1b
static EFI_GUID gEfiFirmwareVolume2ProtocolGuid = { 0x220e73b6, 0x6bdb, 0x4413, { 0x84, 0x05, 0xb9, 0x74, 0xb1, 0x08, 0x61, 0x9a } }; // 220e73b6-6bdb-4413-8405-b974b108619a
static EFI_GUID gEfiFirmwareVolumeBlockProtocolGuid = { 0x8f644fa9, 0xe850, 0x4db1, { 0x9c, 0xe2, 0x0b, 0x44, 0x69, 0x8e, 0x8d, 0xa4 } }; // 8f644fa9-e850-4db1-9ce2-0b44698e8da4
static EFI_GUID gEfiCapsuleArchProtocolGuid = { 0x5053697e, 0x2cbc, 0x4819, { 0x90, 0xd9, 0x05, 0x80, 0xde, 0xee, 0x57, 0x54 } }; // 5053697e-2cbc-4819-90d9-0580deee5754
static EFI_GUID gEfiMpServiceProtocolGuid = { 0x3fdda605, 0xa76e, 0x4f46, { 0xad, 0x29, 0x12, 0xf4, 0x53, 0x1b, 0x3d, 0x08 } }; // 3fdda605-a76e-4f46-ad29-12f4531b3d08
static EFI_GUID gEfiPciHostBridgeResourceAllocationProtocolGuid = { 0xcf8034be, 0x6768, 0x4d8b, { 0xb7, 0x39, 0x7c, 0xce, 0x68, 0x3a, 0x9f, 0xbe } }; // cf8034be-6768-4d8b-b739-7cce683a9fbe
static EFI_GUID gEfiPciPlatformProtocolGuid = { 0x07d75280, 0x27d4, 0x4d69, { 0x90, 0xd0, 0x56, 0x43, 0xe2, 0x38, 0xb3, 0x41 } }; // 07d75280-27d4-4d69-90d0-5643e238b341
static EFI_GUID gEfiPciOverrideProtocolGuid = { 0xb5b35764, 0x460c, 0x4a06, { 0x99, 0xfc, 0x77, 0xa1, 0x7c, 0x1b, 0x5c, 0xeb } }; // b5b35764-460c-4a06-99fc-77a17c1b5ceb
static EFI_GUID gEfiPciEnumerationCompleteProtocolGuid = { 0x30cfe3e7, 0x3de1, 0x4586, { 0xbe, 0x20, 0xde, 0xab, 0xa1, 0xb3, 0xb7, 0x93 } }; // 30cfe3e7-3de1-4586-be20-deaba1b3b793
static EFI_GUID gEfiIncompatiblePciDeviceSupportProtocolGuid = { 0xeb23f55a, 0x7863, 0x4ac2, { 0x8d, 0x3d, 0x95, 0x65, 0x35, 0xde, 0x03, 0x75 } }; // eb23f55a-7863-4ac2-8d3d-956535de0375
static EFI_GUID gEfiPciHotPlugInitProtocolGuid = { 0xaa0e8bc1, 0xdabc, 0x46b0, { 0xa8, 0x44, 0x37, 0xb8, 0x16, 0x9b, 0x2b, 0xea } }; // aa0e8bc1-dabc-46b0-a844-37b8169b2bea
static EFI_GUID gEfiPciHotPlugRequestProtocolGuid = { 0x19cb87ab, 0x2cb9, 0x4665, { 0x83, 0x60, 0xdd, 0xcf, 0x60, 0x54, 0xf7, 0x9d } }; // 19cb87ab-2cb9-4665-8360-ddcf6054f79d
static EFI_GUID gEfiIdeControllerInitProtocolGuid = { 0xa1e37052, 0x80d9, 0x4e65, { 0xa3, 0x17, 0x3e, 0x9a, 0x55, 0xc4, 0x3e, 0xc9 } }; // a1e37052-80d9-4e65-a317-3e9a55c43ec9
static EFI_GUID gEfiDiskInfoProtocolGuid = { 0xd432a67f, 0x14dc, 0x484b, { 0xb3, 0xbb, 0x3f, 0x02, 0x91, 0x84, 0x93, 0x27 } }; // d432a67f-14dc-484b-b3bb-3f0291849327
static EFI_GUID gEfiSmbiosProtocolGuid = { 0x03583ff6, 0xcb36, 0x4940, { 0x94, 0x7e, 0xb9, 0xb3, 0x9f, 0x4a, 0xfa, 0xf7 } }; // 03583ff6-cb36-4940-947e-b9b39f4afaf7
static EFI_GUID gEfiS3SaveStateProtocolGuid = { 0xe857caf6, 0xc046, 0x45dc, { 0xbe, 0x3f, 0xee, 0x07, 0x65, 0xfb, 0xa8, 0x87 } }; // e857caf6-c046-45dc-be3f-ee0765fba887
static EFI_GUID gEfiS3SmmSaveStateProtocolGuid = { 0x320afe62, 0xe593, 0x49cb, { 0xa9, 0xf1, 0xd4, 0xc2, 0xf4, 0xaf, 0x01, 0x4c } }; // 320afe62-e593-49cb-a9f1-d4c2f4af014c
static EFI_GUID gEfiRscHandlerProtocolGuid = { 0x86212936, 0x0e76, 0x41c8, { 0xa0, 0x3a, 0x2a, 0xf2, 0xfc, 0x1c, 0x39, 0xe2 } }; // 86212936-0e76-41c8-a03a-2af2fc1c39e2
static EFI_GUID gEfiSmmRscHandlerProtocolGuid = { 0x2ff29fa7, 0x5e80, 0x4ed9, { 0xb3, 0x80, 0x01, 0x7d, 0x3c, 0x55, 0x4f, 0xf4 } }; // 2ff29fa7-5e80-4ed9-b380-017d3c554ff4
static EFI_GUID gEfiAcpiSdtProtocolGuid = { 0xeb97088e, 0xcfdf, 0x49c6, { 0xbe, 0x4b, 0xd9, 0x06, 0xa5, 0xb2, 0x0e, 0x86 } }; // eb97088e-cfdf-49c6-be4b-d906a5b20e86
static EFI_GUID gEfiSioProtocolGuid = { 0x215fdd18, 0xbd50, 0x4feb, { 0x89, 0x0b, 0x58, 0xca, 0x0b, 0x47, 0x39, 0xe9 } }; // 215fdd18-bd50-4feb-890b-58ca0b4739e9
static EFI_GUID gEfiSmmCpuIo2ProtocolGuid = { 0x3242a9d8, 0xce70, 0x4aa0, { 0x95, 0x5d, 0x5e, 0x7b, 0x14, 0x0d, 0xe4, 0xd2 } }; // 3242a9d8-ce70-4aa0-955d-5e7b140de4d2
static EFI_GUID gEfiSmmBase2ProtocolGuid = { 0xf4ccbfb7, 0xf6e0, 0x47fd, { 0x9d, 0xd4, 0x10, 0xa8, 0xf1, 0x50, 0xc1, 0x91 } }; // f4ccbfb7-f6e0-47fd-9dd4-10a8f150c191
static EFI_GUID gEfiSmmAccess2ProtocolGuid = { 0xc2702b74, 0x800c, 0x4131, { 0x87, 0x46, 0x8f, 0xb5, 0xb8, 0x9c, 0xe4, 0xac } }; // c2702b74-800c-4131-8746-8fb5b89ce4ac
static EFI_GUID gEfiSmmControl2ProtocolGuid = { 0x843dc720, 0xab1e, 0x42cb, { 0x93, 0x57, 0x8a, 0x00, 0x78, 0xf3, 0x56, 0x1b } }; // 843dc720-ab1e-42cb-9357-8a0078f3561b
static EFI_GUID gEfiSmmConfigurationProtocolGuid = { 0x26eeb3de, 0xb689, 0x492e, { 0x80, 0xf0, 0xbe, 0x8b, 0xd7, 0xda, 0x4b, 0xa7 } }; // 26eeb3de-b689-492e-80f0-be8bd7da4ba7
static EFI_GUID gEfiSmmReadyToLockProtocolGuid = { 0x47b7fa8c, 0xf4bd, 0x4af6, { 0x82, 0x00, 0x33, 0x30, 0x86, 0xf0, 0xd2, 0xc8 } }; // 47b7fa8c-f4bd-4af6-8200-333086f0d2c8
static EFI_GUID gEfiDxeSmmReadyToLockProtocolGuid = { 0x60ff8964, 0xe906, 0x41d0, { 0xaf, 0xed, 0xf2, 0x41, 0xe9, 0x74, 0xe0, 0x8e } }; // 60ff8964-e906-41d0-afed-f241e974e08e
static EFI_GUID gEfiSmmCommunicationProtocolGuid = { 0xc68ed8e2, 0x9dc6, 0x4cbd, { 0x9d, 0x94, 0xdb, 0x65, 0xac, 0xc5, 0xc3, 0x32 } }; // c68ed8e2-9dc6-4cbd-9d94-db65acc5c332
static EFI_GUID gEfiSmmStatusCodeProtocolGuid = { 0x6afd2b77, 0x98c1, 0x4acd, { 0xa6, 0xf9, 0x8a, 0x94, 0x39, 0xde, 0x0f, 0xb1 } }; // 6afd2b77-98c1-4acd-a6f9-8a9439de0fb1
static EFI_GUID gEfiSmmCpuProtocolGuid = { 0xeb346b97, 0x975f, 0x4a9f, { 0x8b, 0x22, 0xf8, 0xe9, 0x2b, 0xb3, 0xd5, 0x69 } }; // eb346b97-975f-4a9f-8b22-f8e92bb3d569
static EFI_GUID gEfiSmmPciRootBridgeIoProtocolGuid = { 0x8bc1714d, 0xffcb, 0x41c3, { 0x89, 0xdc, 0x6c, 0x74, 0xd0, 0x6d, 0x98, 0xea } }; // 8bc1714d-ffcb-41c3-89dc-6c74d06d98ea
static EFI_GUID gEfiSmmSwDispatch2ProtocolGuid = { 0x18a3c6dc, 0x5eea, 0x48c8, { 0xa1, 0xc1, 0xb5, 0x33, 0x89, 0xf9, 0x89, 0x99 } }; // 18a3c6dc-5eea-48c8-a1c1-b53389f98999
static EFI_GUID gEfiSmmSxDispatch2ProtocolGuid = { 0x456d2859, 0xa84b, 0x4e47, { 0xa2, 0xee, 0x32, 0x76, 0xd8, 0x86, 0x99, 0x7d } }; // 456d2859-a84b-4e47-a2ee-3276d886997d
static EFI_GUID gEfiSmmPeriodicTimerDispatch2ProtocolGuid = { 0x4cec368e, 0x8e8e, 0x4d71, { 0x8b, 0xe1, 0x95, 0x8c, 0x45, 0xfc, 0x8a, 0x53 } }; // 4cec368e-8e8e-4d71-8be1-958c45fc8a53
static EFI_GUID gEfiSmmUsbDispatch2ProtocolGuid = { 0xee9b8d90, 0xc5a6, 0x40a2, { 0xbd, 0xe2, 0x52, 0x55, 0x8d, 0x33, 0xcc, 0xa1 } }; // ee9b8d90-c5a6-40a2-bde2-52558d33cca1
static EFI_GUID gEfiSmmGpiDispatch2ProtocolGuid = { 0x25566b03, 0xb577, 0x4cbf, { 0x95, 0x8c, 0xed, 0x66, 0x3e, 0xa2, 0x43, 0x80 } }; // 25566b03-b577-4cbf-958c-ed663ea24380
static EFI_GUID gEfiSmmStandbyButtonDispatch2ProtocolGuid = { 0x7300c4a1, 0x43f2, 0x4017, { 0xa5, 0x1b, 0xc8, 0x1a, 0x7f, 0x40, 0x58, 0x5b } }; // 7300c4a1-43f2-4017-a51b-c81a7f40585b
static EFI_GUID gEfiSmmPowerButtonDispatch2ProtocolGuid = { 0x1b1183fa, 0x1823, 0x46a7, { 0x88, 0x72, 0x9c, 0x57, 0x87, 0x55, 0x40, 0x9d } }; // 1b1183fa-1823-46a7-8872-9c578755409d
static EFI_GUID gEfiSmmIoTrapDispatch2ProtocolGuid = { 0x58dc368d, 0x7bfa, 0x4e77, { 0xab, 0xbc, 0x0e, 0x29, 0x41, 0x8d, 0xf9, 0x30 } }; // 58dc368d-7bfa-4e77-abbc-0e29418df930
static EFI_GUID gEfiPcdProtocolGuid = { 0x13a3f0f6, 0x264a, 0x3ef0, { 0xf2, 0xe0, 0xde, 0xc5, 0x12, 0x34, 0x2f, 0x34 } }; // 13a3f0f6-264a-3ef0-f2e0-dec512342f34
static EFI_GUID gEfiFirmwareVolumeBlock2ProtocolGuid = { 0x8f644fa9, 0xe850, 0x4db1, { 0x9c, 0xe2, 0x0b, 0x44, 0x69, 0x8e, 0x8d, 0xa4 } }; // 8f644fa9-e850-4db1-9ce2-0b44698e8da4
static EFI_GUID gEfiCpuIo2ProtocolGuid = { 0xad61f191, 0xae5f, 0x4c0e, { 0xb9, 0xfa, 0xe8, 0x69, 0xd2, 0x88, 0xc6, 0x4f } }; // ad61f191-ae5f-4c0e-b9fa-e869d288c64f
static EFI_GUID gEfiLegacyRegion2ProtocolGuid = { 0x70101eaf, 0x0085, 0x440c, { 0xb3, 0x56, 0x8e, 0xe3, 0x6f, 0xef, 0x24, 0xf0 } }; // 70101eaf-0085-440c-b356-8ee36fef24f0
static EFI_GUID gEfiSalMcaInitPmiProtocolGuid = { 0xb60dc6e8, 0x3b6f, 0x11d5, { 0xaf, 0x09, 0x00, 0xa0, 0xc9, 0x44, 0xa0, 0x5b } }; // b60dc6e8-3b6f-11d5-af09-00a0c944a05b
static EFI_GUID gEfiExtendedSalBootServiceProtocolGuid = { 0xde0ee9a4, 0x3c7a, 0x44f2, { 0xb7, 0x8b, 0xe3, 0xcc, 0xd6, 0x9c, 0x3a, 0xf7 } }; // de0ee9a4-3c7a-44f2-b78b-e3ccd69c3af7
static EFI_GUID gEfiExtendedSalBaseIoServicesProtocolGuid = { 0x5aea42b5, 0x31e1, 0x4515, { 0xbc, 0x31, 0xb8, 0xd5, 0x25, 0x75, 0x65, 0xa6 } }; // 5aea42b5-31e1-4515-bc31-b8d5257565a6
static EFI_GUID gEfiExtendedSalStallServicesProtocolGuid = { 0x53a58d06, 0xac27, 0x4d8c, { 0xb5, 0xe9, 0xf0, 0x8a, 0x80, 0x65, 0x41, 0x70 } }; // 53a58d06-ac27-4d8c-b5e9-f08a80654170
static EFI_GUID gEfiExtendedSalRtcServicesProtocolGuid = { 0x7e97a470, 0xefdb, 0x4d02, { 0x8f, 0xce, 0x61, 0x90, 0xd2, 0x7b, 0xa2, 0x96 } }; // 7e97a470-efdb-4d02-8fce-6190d27ba296
static EFI_GUID gEfiExtendedSalVariableServicesProtocolGuid = { 0x4ecb6c53, 0xc641, 0x4370, { 0x8c, 0xb2, 0x3b, 0x0e, 0x49, 0x6e, 0x83, 0x78 } }; // 4ecb6c53-c641-4370-8cb2-3b0e496e8378
static EFI_GUID gEfiExtendedSalMtcServicesProtocolGuid = { 0x899afd18, 0x75e8, 0x408b, { 0xa4, 0x1a, 0x6e, 0x2e, 0x7e, 0xcd, 0xf4, 0x54 } }; // 899afd18-75e8-408b-a41a-6e2e7ecdf454
static EFI_GUID gEfiExtendedSalResetServicesProtocolGuid = { 0x7d019990, 0x8ce1, 0x46f5, { 0xa7, 0x76, 0x3c, 0x51, 0x98, 0x67, 0x6a, 0xa0 } }; // 7d019990-8ce1-46f5-a776-3c5198676aa0
static EFI_GUID gEfiExtendedSalStatusCodeServicesProtocolGuid = { 0x00dbd91d, 0x55e9, 0x420f, { 0x96, 0x39, 0x5e, 0x9f, 0x84, 0x37, 0xb4, 0x4f } }; // 00dbd91d-55e9-420f-9639-5e9f8437b44f
static EFI_GUID gEfiExtendedSalFvBlockServicesProtocolGuid = { 0xa2271df1, 0xbcbb, 0x4f1d, { 0x98, 0xa9, 0x06, 0xbc, 0x17, 0x2f, 0x07, 0x1a } }; // a2271df1-bcbb-4f1d-98a9-06bc172f071a
static EFI_GUID gEfiExtendedSalMpServicesProtocolGuid = { 0x697d81a2, 0xcf18, 0x4dc0, { 0x9e, 0x0d, 0x06, 0x11, 0x3b, 0x61, 0x8a, 0x3f } }; // 697d81a2-cf18-4dc0-9e0d-06113b618a3f
static EFI_GUID gEfiExtendedSalPalServicesProtocolGuid = { 0xe1cd9d21, 0x0fc2, 0x438d, { 0x97, 0x03, 0x04, 0xe6, 0x6d, 0x96, 0x1e, 0x57 } }; // e1cd9d21-0fc2-438d-9703-04e66d961e57
static EFI_GUID gEfiExtendedSalBaseServicesProtocolGuid = { 0xd9e9fa06, 0x0fe0, 0x41c3, { 0x96, 0xfb, 0x83, 0x42, 0x5a, 0x33, 0x94, 0xf8 } }; // d9e9fa06-0fe0-41c3-96fb-83425a3394f8
static EFI_GUID gEfiExtendedSalMcaServicesProtocolGuid = { 0x2a591128, 0x6cc7, 0x42b1, { 0x8a, 0xf0, 0x58, 0x93, 0x3b, 0x68, 0x2d, 0xbb } }; // 2a591128-6cc7-42b1-8af0-58933b682dbb
static EFI_GUID gEfiExtendedSalPciServicesProtocolGuid = { 0xa46b1a31, 0xad66, 0x4905, { 0x92, 0xf6, 0x2b, 0x46, 0x59, 0xdc, 0x30, 0x63 } }; // a46b1a31-ad66-4905-92f6-2b4659dc3063
static EFI_GUID gEfiExtendedSalCacheServicesProtocolGuid = { 0x0edc9494, 0x2743, 0x4ba5, { 0x88, 0x18, 0x0a, 0xef, 0x52, 0x13, 0xf1, 0x88 } }; // 0edc9494-2743-4ba5-8818-0aef5213f188
static EFI_GUID gEfiExtendedSalMcaLogServicesProtocolGuid = { 0xcb3fd86e, 0x38a3, 0x4c03, { 0x9a, 0x5c, 0x90, 0xcf, 0xa3, 0xa2, 0xab, 0x7a } }; // cb3fd86e-38a3-4c03-9a5c-90cfa3a2ab7a
static EFI_GUID gEfiSecurity2ArchProtocolGuid = { 0x94ab2f58, 0x1438, 0x4ef1, { 0x91, 0x52, 0x18, 0x94, 0x1a, 0x3a, 0x0e, 0x68 } }; // 94ab2f58-1438-4ef1-9152-18941a3a0e68
static EFI_GUID gEfiSmmEndOfDxeProtocolGuid = { 0x24e70042, 0xd5c5, 0x4260, { 0x8c, 0x39, 0x0a, 0xd3, 0xaa, 0x32, 0xe9, 0x3d } }; // 24e70042-d5c5-4260-8c39-0ad3aa32e93d
static EFI_GUID gEfiGetPcdInfoProtocolGuid = { 0xfd0f4478, 0x0efd, 0x461d, { 0xba, 0x2d, 0xe5, 0x8c, 0x45, 0xfd, 0x5f, 0x5e } }; // fd0f4478-0efd-461d-ba2d-e58c45fd5f5e
static EFI_GUID gEfiI2cMasterProtocolGuid = { 0xcd72881f, 0x45b5, 0x4feb, { 0x98, 0xc8, 0x31, 0x3d, 0xa8, 0x11, 0x74, 0x62 } }; // cd72881f-45b5-4feb-98c8-313da8117462
static EFI_GUID gEfiI2cIoProtocolGuid = { 0xb60a3e6b, 0x18c4, 0x46e5, { 0xa2, 0x9a, 0xc9, 0xa1, 0x06, 0x65, 0xa2, 0x8e } }; // b60a3e6b-18c4-46e5-a29a-c9a10665a28e
static EFI_GUID gEfiI2cEnumerateProtocolGuid = { 0xda8cd7c4, 0x1c00, 0x49e2, { 0x80, 0x3e, 0x52, 0x14, 0xe7, 0x01, 0x89, 0x4c } }; // da8cd7c4-1c00-49e2-803e-5214e701894c
static EFI_GUID gEfiI2cHostProtocolGuid = { 0xa5aab9e3, 0xc727, 0x48cd, { 0x8b, 0xbf, 0x42, 0x72, 0x33, 0x85, 0x49, 0x48 } }; // a5aab9e3-c727-48cd-8bbf-427233854948
static EFI_GUID gEfiI2cBusConfigurationManagementProtocolGuid = { 0x55b71fb5, 0x17c6, 0x410e, { 0xb5, 0xbd, 0x5f, 0xa2, 0xe3, 0xd4, 0x46, 0x6b } }; // 55b71fb5-17c6-410e-b5bd-5fa2e3d4466b
static EFI_GUID gEfiDebugPortProtocolGuid = { 0xeba4e8d2, 0x3858, 0x41ec, { 0xa2, 0x81, 0x26, 0x47, 0xba, 0x96, 0x60, 0xd0 } }; // eba4e8d2-3858-41ec-a281-2647ba9660d0
static EFI_GUID gEfiDebugSupportProtocolGuid = { 0x2755590c, 0x6f3c, 0x42fa, { 0x9e, 0xa4, 0xa3, 0xba, 0x54, 0x3c, 0xda, 0x25 } }; // 2755590c-6f3c-42fa-9ea4-a3ba543cda25
static EFI_GUID gEfiDecompressProtocolGuid = { 0xd8117cfe, 0x94a6, 0x11d4, { 0x9a, 0x3a, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // d8117cfe-94a6-11d4-9a3a-0090273fc14d
static EFI_GUID gEfiDeviceIoProtocolGuid = { 0xaf6ac311, 0x84c3, 0x11d2, { 0x8e, 0x3c, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b } }; // af6ac311-84c3-11d2-8e3c-00a0c969723b
static EFI_GUID gEfiDevicePathProtocolGuid = { 0x09576e91, 0x6d3f, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b } }; // 09576e91-6d3f-11d2-8e39-00a0c969723b
static EFI_GUID gEfiDevicePathFromTextProtocolGuid = { 0x05c99a21, 0xc70f, 0x4ad2, { 0x8a, 0x5f, 0x35, 0xdf, 0x33, 0x43, 0xf5, 0x1e } }; // 05c99a21-c70f-4ad2-8a5f-35df3343f51e
static EFI_GUID gEfiDevicePathToTextProtocolGuid = { 0x8b843e20, 0x8132, 0x4852, { 0x90, 0xcc, 0x55, 0x1a, 0x4e, 0x4a, 0x7f, 0x1c } }; // 8b843e20-8132-4852-90cc-551a4e4a7f1c
static EFI_GUID gEfiDevicePathUtilitiesProtocolGuid = { 0x0379be4e, 0xd706, 0x437d, { 0xb0, 0x37, 0xed, 0xb8, 0x2f, 0xb7, 0x72, 0xa4 } }; // 0379be4e-d706-437d-b037-edb82fb772a4
static EFI_GUID gEfiDriverBindingProtocolGuid = { 0x18a031ab, 0xb443, 0x4d1a, { 0xa5, 0xc0, 0x0c, 0x09, 0x26, 0x1e, 0x9f, 0x71 } }; // 18a031ab-b443-4d1a-a5c0-0c09261e9f71
static EFI_GUID gEfiPlatformDriverOverrideProtocolGuid = { 0x6b30c738, 0xa391, 0x11d4, { 0x9a, 0x3b, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // 6b30c738-a391-11d4-9a3b-0090273fc14d
static EFI_GUID gEfiDriverFamilyOverrideProtocolGuid = { 0xb1ee129e, 0xda36, 0x4181, { 0x91, 0xf8, 0x04, 0xa4, 0x92, 0x37, 0x66, 0xa7 } }; // b1ee129e-da36-4181-91f8-04a4923766a7
static EFI_GUID gEfiBusSpecificDriverOverrideProtocolGuid = { 0x3bc1b285, 0x8a15, 0x4a82, { 0xaa, 0xbf, 0x4d, 0x7d, 0x13, 0xfb, 0x32, 0x65 } }; // 3bc1b285-8a15-4a82-aabf-4d7d13fb3265
static EFI_GUID gEfiDriverDiagnostics2ProtocolGuid = { 0x4d330321, 0x025f, 0x4aac, { 0x90, 0xd8, 0x5e, 0xd9, 0x00, 0x17, 0x3b, 0x63 } }; // 4d330321-025f-4aac-90d8-5ed900173b63
static EFI_GUID gEfiDriverDiagnosticsProtocolGuid = { 0x0784924f, 0xe296, 0x11d4, { 0x9a, 0x49, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // 0784924f-e296-11d4-9a49-0090273fc14d
static EFI_GUID gEfiComponentName2ProtocolGuid = { 0x6a7a5cff, 0xe8d9, 0x4f70, { 0xba, 0xda, 0x75, 0xab, 0x30, 0x25, 0xce, 0x14 } }; // 6a7a5cff-e8d9-4f70-bada-75ab3025ce14
static EFI_GUID gEfiComponentNameProtocolGuid = { 0x107a772c, 0xd5e1, 0x11d4, { 0x9a, 0x46, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // 107a772c-d5e1-11d4-9a46-0090273fc14d
static EFI_GUID gEfiDriverConfiguration2ProtocolGuid = { 0xbfd7dc1d, 0x24f1, 0x40d9, { 0x82, 0xe7, 0x2e, 0x09, 0xbb, 0x6b, 0x4e, 0xbe } }; // bfd7dc1d-24f1-40d9-82e7-2e09bb6b4ebe
static EFI_GUID gEfiDriverConfigurationProtocolGuid = { 0x107a772b, 0xd5e1, 0x11d4, { 0x9a, 0x46, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // 107a772b-d5e1-11d4-9a46-0090273fc14d
static EFI_GUID gEfiPlatformToDriverConfigurationProtocolGuid = { 0x642cd590, 0x8059, 0x4c0a, { 0xa9, 0x58, 0xc5, 0xec, 0x07, 0xd2, 0x3c, 0x4b } }; // 642cd590-8059-4c0a-a958-c5ec07d23c4b
static EFI_GUID gEfiDriverSupportedEfiVersionProtocolGuid = { 0x5c198761, 0x16a8, 0x4e69, { 0x97, 0x2c, 0x89, 0xd6, 0x79, 0x54, 0xf8, 0x1d } }; // 5c198761-16a8-4e69-972c-89d67954f81d
static EFI_GUID gEfiSimpleTextInProtocolGuid = { 0x387477c1, 0x69c7, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b } }; // 387477c1-69c7-11d2-8e39-00a0c969723b
static EFI_GUID gEfiSimpleTextInputExProtocolGuid = { 0xdd9e7534, 0x7762, 0x4698, { 0x8c, 0x14, 0xf5, 0x85, 0x17, 0xa6, 0x25, 0xaa } }; // dd9e7534-7762-4698-8c14-f58517a625aa
static EFI_GUID gEfiSimpleTextOutProtocolGuid = { 0x387477c2, 0x69c7, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b } }; // 387477c2-69c7-11d2-8e39-00a0c969723b
static EFI_GUID gEfiSimplePointerProtocolGuid = { 0x31878c87, 0x0b75, 0x11d5, { 0x9a, 0x4f, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // 31878c87-0b75-11d5-9a4f-0090273fc14d
static EFI_GUID gEfiAbsolutePointerProtocolGuid = { 0x8d59d32b, 0xc655, 0x4ae9, { 0x9b, 0x15, 0xf2, 0x59, 0x04, 0x99, 0x2a, 0x43 } }; // 8d59d32b-c655-4ae9-9b15-f25904992a43
static EFI_GUID gEfiSerialIoProtocolGuid = { 0xbb25cf6f, 0xf1d4, 0x11d2, { 0x9a, 0x0c, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0xfd } }; // bb25cf6f-f1d4-11d2-9a0c-0090273fc1fd
static EFI_GUID gEfiGraphicsOutputProtocolGuid = { 0x9042a9de, 0x23dc, 0x4a38, { 0x96, 0xfb, 0x7a, 0xde, 0xd0, 0x80, 0x51, 0x6a } }; // 9042a9de-23dc-4a38-96fb-7aded080516a
static EFI_GUID gEfiEdidDiscoveredProtocolGuid = { 0x1c0c34f6, 0xd380, 0x41fa, { 0xa0, 0x49, 0x8a, 0xd0, 0x6c, 0x1a, 0x66, 0xaa } }; // 1c0c34f6-d380-41fa-a049-8ad06c1a66aa
static EFI_GUID gEfiEdidActiveProtocolGuid = { 0xbd8c1056, 0x9f36, 0x44ec, { 0x92, 0xa8, 0xa6, 0x33, 0x7f, 0x81, 0x79, 0x86 } }; // bd8c1056-9f36-44ec-92a8-a6337f817986
static EFI_GUID gEfiEdidOverrideProtocolGuid = { 0x48ecb431, 0xfb72, 0x45c0, { 0xa9, 0x22, 0xf4, 0x58, 0xfe, 0x04, 0x0b, 0xd5 } }; // 48ecb431-fb72-45c0-a922-f458fe040bd5
static EFI_GUID gEfiUgaIoProtocolGuid = { 0x61a4d49e, 0x6f68, 0x4f1b, { 0xb9, 0x22, 0xa8, 0x6e, 0xed, 0x0b, 0x07, 0xa2 } }; // 61a4d49e-6f68-4f1b-b922-a86eed0b07a2
static EFI_GUID gEfiUgaDrawProtocolGuid = { 0x982c298b, 0xf4fa, 0x41cb, { 0xb8, 0x38, 0x77, 0xaa, 0x68, 0x8f, 0xb8, 0x39 } }; // 982c298b-f4fa-41cb-b838-77aa688fb839
static EFI_GUID gEfiLoadedImageProtocolGuid = { 0x5b1b31a1, 0x9562, 0x11d2, { 0x8e, 0x3f, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b } }; // 5b1b31a1-9562-11d2-8e3f-00a0c969723b
static EFI_GUID gEfiLoadedImageDevicePathProtocolGuid = { 0xbc62157e, 0x3e33, 0x4fec, { 0x99, 0x20, 0x2d, 0x3b, 0x36, 0xd7, 0x50, 0xdf } }; // bc62157e-3e33-4fec-9920-2d3b36d750df
static EFI_GUID gEfiLoadFileProtocolGuid = { 0x56ec3091, 0x954c, 0x11d2, { 0x8e, 0x3f, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b } }; // 56ec3091-954c-11d2-8e3f-00a0c969723b
static EFI_GUID gEfiLoadFile2ProtocolGuid = { 0x4006c0c1, 0xfcb3, 0x403e, { 0x99, 0x6d, 0x4a, 0x6c, 0x87, 0x24, 0xe0, 0x6d } }; // 4006c0c1-fcb3-403e-996d-4a6c8724e06d
static EFI_GUID gEfiSimpleFileSystemProtocolGuid = { 0x964e5b22, 0x6459, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b } }; // 964e5b22-6459-11d2-8e39-00a0c969723b
static EFI_GUID gEfiTapeIoProtocolGuid = { 0x1e93e633, 0xd65a, 0x459e, { 0xab, 0x84, 0x93, 0xd9, 0xec, 0x26, 0x6d, 0x18 } }; // 1e93e633-d65a-459e-ab84-93d9ec266d18
static EFI_GUID gEfiDiskIoProtocolGuid = { 0xce345171, 0xba0b, 0x11d2, { 0x8e, 0x4f, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b } }; // ce345171-ba0b-11d2-8e4f-00a0c969723b
static EFI_GUID gEfiBlockIoProtocolGuid = { 0x964e5b21, 0x6459, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b } }; // 964e5b21-6459-11d2-8e39-00a0c969723b
static EFI_GUID gEfiUnicodeCollationProtocolGuid = { 0x1d85cd7f, 0xf43d, 0x11d2, { 0x9a, 0x0c, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // 1d85cd7f-f43d-11d2-9a0c-0090273fc14d
static EFI_GUID gEfiUnicodeCollation2ProtocolGuid = { 0xa4c751fc, 0x23ae, 0x4c3e, { 0x92, 0xe9, 0x49, 0x64, 0xcf, 0x63, 0xf3, 0x49 } }; // a4c751fc-23ae-4c3e-92e9-4964cf63f349
static EFI_GUID gEfiPciRootBridgeIoProtocolGuid = { 0x2f707ebb, 0x4a1a, 0x11d4, { 0x9a, 0x38, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // 2f707ebb-4a1a-11d4-9a38-0090273fc14d
static EFI_GUID gEfiPciIoProtocolGuid = { 0x4cf5b200, 0x68b8, 0x4ca5, { 0x9e, 0xec, 0xb2, 0x3e, 0x3f, 0x50, 0x02, 0x9a } }; // 4cf5b200-68b8-4ca5-9eec-b23e3f50029a
static EFI_GUID gEfiScsiIoProtocolGuid = { 0x932f47e6, 0x2362, 0x4002, { 0x80, 0x3e, 0x3c, 0xd5, 0x4b, 0x13, 0x8f, 0x85 } }; // 932f47e6-2362-4002-803e-3cd54b138f85
static EFI_GUID gEfiExtScsiPassThruProtocolGuid = { 0x143b7632, 0xb81b, 0x4cb7, { 0xab, 0xd3, 0xb6, 0x25, 0xa5, 0xb9, 0xbf, 0xfe } }; // 143b7632-b81b-4cb7-abd3-b625a5b9bffe
static EFI_GUID gEfiScsiPassThruProtocolGuid = { 0xa59e8fcf, 0xbda0, 0x43bb, { 0x90, 0xb1, 0xd3, 0x73, 0x2e, 0xca, 0xa8, 0x77 } }; // a59e8fcf-bda0-43bb-90b1-d3732ecaa877
static EFI_GUID gEfiIScsiInitiatorNameProtocolGuid = { 0x59324945, 0xec44, 0x4c0d, { 0xb1, 0xcd, 0x9d, 0xb1, 0x39, 0xdf, 0x07, 0x0c } }; // 59324945-ec44-4c0d-b1cd-9db139df070c
static EFI_GUID gEfiUsb2HcProtocolGuid = { 0x3e745226, 0x9818, 0x45b6, { 0xa2, 0xac, 0xd7, 0xcd, 0x0e, 0x8b, 0xa2, 0xbc } }; // 3e745226-9818-45b6-a2ac-d7cd0e8ba2bc
static EFI_GUID gEfiUsbHcProtocolGuid = { 0xf5089266, 0x1aa0, 0x4953, { 0x97, 0xd8, 0x56, 0x2f, 0x8a, 0x73, 0xb5, 0x19 } }; // f5089266-1aa0-4953-97d8-562f8a73b519
static EFI_GUID gEfiUsbIoProtocolGuid = { 0x2b2f68d6, 0x0cd2, 0x44cf, { 0x8e, 0x8b, 0xbb, 0xa2, 0x0b, 0x1b, 0x5b, 0x75 } }; // 2b2f68d6-0cd2-44cf-8e8b-bba20b1b5b75
static EFI_GUID gEfiAcpiTableProtocolGuid = { 0xffe06bdd, 0x6107, 0x46a6, { 0x7b, 0xb2, 0x5a, 0x9c, 0x7e, 0xc5, 0x27, 0x5c } }; // ffe06bdd-6107-46a6-7bb2-5a9c7ec5275c
static EFI_GUID gEfiEbcProtocolGuid = { 0x13ac6dd1, 0x73d0, 0x11d4, { 0xb0, 0x6b, 0x00, 0xaa, 0x00, 0xbd, 0x6d, 0xe7 } }; // 13ac6dd1-73d0-11d4-b06b-00aa00bd6de7
static EFI_GUID gEfiSimpleNetworkProtocolGuid = { 0xa19832b9, 0xac25, 0x11d3, { 0x9a, 0x2d, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // a19832b9-ac25-11d3-9a2d-0090273fc14d
static EFI_GUID gEfiNetworkInterfaceIdentifierProtocolGuid = { 0xe18541cd, 0xf755, 0x4f73, { 0x92, 0x8d, 0x64, 0x3c, 0x8a, 0x79, 0xb2, 0x29 } }; // e18541cd-f755-4f73-928d-643c8a79b229
static EFI_GUID gEfiPxeBaseCodeCallbackProtocolGuid = { 0x245dca21, 0xfb7b, 0x11d3, { 0x8f, 0x01, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b } }; // 245dca21-fb7b-11d3-8f01-00a0c969723b
static EFI_GUID gEfiPxeBaseCodeProtocolGuid = { 0x03c4e603, 0xac28, 0x11d3, { 0x9a, 0x2d, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // 03c4e603-ac28-11d3-9a2d-0090273fc14d
static EFI_GUID gEfiBisProtocolGuid = { 0x0b64aab0, 0x5429, 0x11d4, { 0x98, 0x16, 0x00, 0xa0, 0xc9, 0x1f, 0xad, 0xcf } }; // 0b64aab0-5429-11d4-9816-00a0c91fadcf
static EFI_GUID gEfiManagedNetworkServiceBindingProtocolGuid = { 0xf36ff770, 0xa7e1, 0x42cf, { 0x9e, 0xd2, 0x56, 0xf0, 0xf2, 0x71, 0xf4, 0x4c } }; // f36ff770-a7e1-42cf-9ed2-56f0f271f44c
static EFI_GUID gEfiManagedNetworkProtocolGuid = { 0x7ab33a91, 0xace5, 0x4326, { 0xb5, 0x72, 0xe7, 0xee, 0x33, 0xd3, 0x9f, 0x16 } }; // 7ab33a91-ace5-4326-b572-e7ee33d39f16
static EFI_GUID gEfiArpServiceBindingProtocolGuid = { 0xf44c00ee, 0x1f2c, 0x4a00, { 0xaa, 0x09, 0x1c, 0x9f, 0x3e, 0x08, 0x00, 0xa3 } }; // f44c00ee-1f2c-4a00-aa09-1c9f3e0800a3
static EFI_GUID gEfiArpProtocolGuid = { 0xf4b427bb, 0xba21, 0x4f16, { 0xbc, 0x4e, 0x43, 0xe4, 0x16, 0xab, 0x61, 0x9c } }; // f4b427bb-ba21-4f16-bc4e-43e416ab619c
static EFI_GUID gEfiDhcp4ServiceBindingProtocolGuid = { 0x9d9a39d8, 0xbd42, 0x4a73, { 0xa4, 0xd5, 0x8e, 0xe9, 0x4b, 0xe1, 0x13, 0x80 } }; // 9d9a39d8-bd42-4a73-a4d5-8ee94be11380
static EFI_GUID gEfiDhcp4ProtocolGuid = { 0x8a219718, 0x4ef5, 0x4761, { 0x91, 0xc8, 0xc0, 0xf0, 0x4b, 0xda, 0x9e, 0x56 } }; // 8a219718-4ef5-4761-91c8-c0f04bda9e56
static EFI_GUID gEfiTcp4ServiceBindingProtocolGuid = { 0x00720665, 0x67eb, 0x4a99, { 0xba, 0xf7, 0xd3, 0xc3, 0x3a, 0x1c, 0x7c, 0xc9 } }; // 00720665-67eb-4a99-baf7-d3c33a1c7cc9
static EFI_GUID gEfiTcp4ProtocolGuid = { 0x65530bc7, 0xa359, 0x410f, { 0xb0, 0x10, 0x5a, 0xad, 0xc7, 0xec, 0x2b, 0x62 } }; // 65530bc7-a359-410f-b010-5aadc7ec2b62
static EFI_GUID gEfiIp4ServiceBindingProtocolGuid = { 0xc51711e7, 0xb4bf, 0x404a, { 0xbf, 0xb8, 0x0a, 0x04, 0x8e, 0xf1, 0xff, 0xe4 } }; // c51711e7-b4bf-404a-bfb8-0a048ef1ffe4
static EFI_GUID gEfiIp4ProtocolGuid = { 0x41d94cd2, 0x35b6, 0x455a, { 0x82, 0x58, 0xd4, 0xe5, 0x13, 0x34, 0xaa, 0xdd } }; // 41d94cd2-35b6-455a-8258-d4e51334aadd
static EFI_GUID gEfiIp4ConfigProtocolGuid = { 0x3b95aa31, 0x3793, 0x434b, { 0x86, 0x67, 0xc8, 0x07, 0x08, 0x92, 0xe0, 0x5e } }; // 3b95aa31-3793-434b-8667-c8070892e05e
static EFI_GUID gEfiUdp4ServiceBindingProtocolGuid = { 0x83f01464, 0x99bd, 0x45e5, { 0xb3, 0x83, 0xaf, 0x63, 0x05, 0xd8, 0xe9, 0xe6 } }; // 83f01464-99bd-45e5-b383-af6305d8e9e6
static EFI_GUID gEfiUdp4ProtocolGuid = { 0x3ad9df29, 0x4501, 0x478d, { 0xb1, 0xf8, 0x7f, 0x7f, 0xe7, 0x0e, 0x50, 0xf3 } }; // 3ad9df29-4501-478d-b1f8-7f7fe70e50f3
static EFI_GUID gEfiMtftp4ServiceBindingProtocolGuid = { 0x2fe800be, 0x8f01, 0x4aa6, { 0x94, 0x6b, 0xd7, 0x13, 0x88, 0xe1, 0x83, 0x3f } }; // 2fe800be-8f01-4aa6-946b-d71388e1833f
static EFI_GUID gEfiMtftp4ProtocolGuid = { 0x78247c57, 0x63db, 0x4708, { 0x99, 0xc2, 0xa8, 0xb4, 0xa9, 0xa6, 0x1f, 0x6b } }; // 78247c57-63db-4708-99c2-a8b4a9a61f6b
static EFI_GUID gEfiAuthenticationInfoProtocolGuid = { 0x7671d9d0, 0x53db, 0x4173, { 0xaa, 0x69, 0x23, 0x27, 0xf2, 0x1f, 0x0b, 0xc7 } }; // 7671d9d0-53db-4173-aa69-2327f21f0bc7
static EFI_GUID gEfiHashServiceBindingProtocolGuid = { 0x42881c98, 0xa4f3, 0x44b0, { 0xa3, 0x9d, 0xdf, 0xa1, 0x86, 0x67, 0xd8, 0xcd } }; // 42881c98-a4f3-44b0-a39d-dfa18667d8cd
static EFI_GUID gEfiHashProtocolGuid = { 0xc5184932, 0xdba5, 0x46db, { 0xa5, 0xba, 0xcc, 0x0b, 0xda, 0x9c, 0x14, 0x35 } }; // c5184932-dba5-46db-a5ba-cc0bda9c1435
static EFI_GUID gEfiTcgProtocolGuid = { 0xf541796d, 0xa62e, 0x4954, { 0xa7, 0x75, 0x95, 0x84, 0xf6, 0x1b, 0x9c, 0xdd } }; // f541796d-a62e-4954-a775-9584f61b9cdd
static EFI_GUID gEfiTrEEProtocolGuid = { 0x607f766c, 0x7455, 0x42be, { 0x93, 0x0b, 0xe4, 0xd7, 0x6d, 0xb2, 0x72, 0x0f } }; // 607f766c-7455-42be-930b-e4d76db2720f
static EFI_GUID gEfiFormBrowser2ProtocolGuid = { 0xb9d4c360, 0xbcfb, 0x4f9b, { 0x92, 0x98, 0x53, 0xc1, 0x36, 0x98, 0x22, 0x58 } }; // b9d4c360-bcfb-4f9b-9298-53c136982258
static EFI_GUID gEfiHiiStringProtocolGuid = { 0x0fd96974, 0x23aa, 0x4cdc, { 0xb9, 0xcb, 0x98, 0xd1, 0x77, 0x50, 0x32, 0x2a } }; // 0fd96974-23aa-4cdc-b9cb-98d17750322a
static EFI_GUID gEfiHiiImageProtocolGuid = { 0x31a6406a, 0x6bdf, 0x4e46, { 0xb2, 0xa2, 0xeb, 0xaa, 0x89, 0xc4, 0x09, 0x20 } }; // 31a6406a-6bdf-4e46-b2a2-ebaa89c40920
static EFI_GUID gEfiHiiConfigRoutingProtocolGuid = { 0x587e72d7, 0xcc50, 0x4f79, { 0x82, 0x09, 0xca, 0x29, 0x1f, 0xc1, 0xa1, 0x0f } }; // 587e72d7-cc50-4f79-8209-ca291fc1a10f
static EFI_GUID gEfiHiiDatabaseProtocolGuid = { 0xef9fc172, 0xa1b2, 0x4693, { 0xb3, 0x27, 0x6d, 0x32, 0xfc, 0x41, 0x60, 0x42 } }; // ef9fc172-a1b2-4693-b327-6d32fc416042
static EFI_GUID gEfiHiiFontProtocolGuid = { 0xe9ca4775, 0x8657, 0x47fc, { 0x97, 0xe7, 0x7e, 0xd6, 0x5a, 0x08, 0x43, 0x24 } }; // e9ca4775-8657-47fc-97e7-7ed65a084324
static EFI_GUID gEfiHiiConfigAccessProtocolGuid = { 0x330d4706, 0xf2a0, 0x4e4f, { 0xa3, 0x69, 0xb6, 0x6f, 0xa8, 0xd5, 0x43, 0x85 } }; // 330d4706-f2a0-4e4f-a369-b66fa8d54385
static EFI_GUID gEfiHiiPackageListProtocolGuid = { 0x6a1ee763, 0xd47a, 0x43b4, { 0xaa, 0xbe, 0xef, 0x1d, 0xe2, 0xab, 0x56, 0xfc } }; // 6a1ee763-d47a-43b4-aabe-ef1de2ab56fc
static EFI_GUID gEfiIp6ServiceBindingProtocolGuid = { 0xec835dd3, 0xfe0f, 0x617b, { 0xa6, 0x21, 0xb3, 0x50, 0xc3, 0xe1, 0x33, 0x88 } }; // ec835dd3-fe0f-617b-a621-b350c3e13388
static EFI_GUID gEfiIp6ProtocolGuid = { 0x2c8759d5, 0x5c2d, 0x66ef, { 0x92, 0x5f, 0xb6, 0x6c, 0x10, 0x19, 0x57, 0xe2 } }; // 2c8759d5-5c2d-66ef-925f-b66c101957e2
static EFI_GUID gEfiIp6ConfigProtocolGuid = { 0x937fe521, 0x95ae, 0x4d1a, { 0x89, 0x29, 0x48, 0xbc, 0xd9, 0x0a, 0xd3, 0x1a } }; // 937fe521-95ae-4d1a-8929-48bcd90ad31a
static EFI_GUID gEfiMtftp6ServiceBindingProtocolGuid = { 0xd9760ff3, 0x3cca, 0x4267, { 0x80, 0xf9, 0x75, 0x27, 0xfa, 0xfa, 0x42, 0x23 } }; // d9760ff3-3cca-4267-80f9-7527fafa4223
static EFI_GUID gEfiMtftp6ProtocolGuid = { 0xbf0a78ba, 0xec29, 0x49cf, { 0xa1, 0xc9, 0x7a, 0xe5, 0x4e, 0xab, 0x6a, 0x51 } }; // bf0a78ba-ec29-49cf-a1c9-7ae54eab6a51
static EFI_GUID gEfiDhcp6ServiceBindingProtocolGuid = { 0x9fb9a8a1, 0x2f4a, 0x43a6, { 0x88, 0x9c, 0xd0, 0xf7, 0xb6, 0xc4, 0x7a, 0xd5 } }; // 9fb9a8a1-2f4a-43a6-889c-d0f7b6c47ad5
static EFI_GUID gEfiDhcp6ProtocolGuid = { 0x87c8bad7, 0x0595, 0x4053, { 0x82, 0x97, 0xde, 0xde, 0x39, 0x5f, 0x5d, 0x5b } }; // 87c8bad7-0595-4053-8297-dede395f5d5b
static EFI_GUID gEfiUdp6ServiceBindingProtocolGuid = { 0x66ed4721, 0x3c98, 0x4d3e, { 0x81, 0xe3, 0xd0, 0x3d, 0xd3, 0x9a, 0x72, 0x54 } }; // 66ed4721-3c98-4d3e-81e3-d03dd39a7254
static EFI_GUID gEfiUdp6ProtocolGuid = { 0x4f948815, 0xb4b9, 0x43cb, { 0x8a, 0x33, 0x90, 0xe0, 0x60, 0xb3, 0x49, 0x55 } }; // 4f948815-b4b9-43cb-8a33-90e060b34955
static EFI_GUID gEfiTcp6ServiceBindingProtocolGuid = { 0xec20eb79, 0x6c1a, 0x4664, { 0x9a, 0x0d, 0xd2, 0xe4, 0xcc, 0x16, 0xd6, 0x64 } }; // ec20eb79-6c1a-4664-9a0d-d2e4cc16d664
static EFI_GUID gEfiTcp6ProtocolGuid = { 0x46e44855, 0xbd60, 0x4ab7, { 0xab, 0x0d, 0xa6, 0x79, 0xb9, 0x44, 0x7d, 0x77 } }; // 46e44855-bd60-4ab7-ab0d-a679b9447d77
static EFI_GUID gEfiVlanConfigProtocolGuid = { 0x9e23d768, 0xd2f3, 0x4366, { 0x9f, 0xc3, 0x3a, 0x7a, 0xba, 0x86, 0x43, 0x74 } }; // 9e23d768-d2f3-4366-9fc3-3a7aba864374
static EFI_GUID gEfiEapProtocolGuid = { 0x5d9f96db, 0xe731, 0x4caa, { 0xa0, 0x0d, 0x72, 0xe1, 0x87, 0xcd, 0x77, 0x62 } }; // 5d9f96db-e731-4caa-a00d-72e187cd7762
static EFI_GUID gEfiEapManagementProtocolGuid = { 0xbb62e663, 0x625d, 0x40b2, { 0xa0, 0x88, 0xbb, 0xe8, 0x36, 0x23, 0xa2, 0x45 } }; // bb62e663-625d-40b2-a088-bbe83623a245
static EFI_GUID gEfiFtp4ServiceBindingProtocolGuid = { 0x0faaecb1, 0x226e, 0x4782, { 0xaa, 0xce, 0x7d, 0xb9, 0xbc, 0xbf, 0x4d, 0xaf } }; // 0faaecb1-226e-4782-aace-7db9bcbf4daf
static EFI_GUID gEfiFtp4ProtocolGuid = { 0xeb338826, 0x681b, 0x4295, { 0xb3, 0x56, 0x2b, 0x36, 0x4c, 0x75, 0x7b, 0x09 } }; // eb338826-681b-4295-b356-2b364c757b09
static EFI_GUID gEfiIpSecConfigProtocolGuid = { 0xce5e5929, 0xc7a3, 0x4602, { 0xad, 0x9e, 0xc9, 0xda, 0xf9, 0x4e, 0xbf, 0xcf } }; // ce5e5929-c7a3-4602-ad9e-c9daf94ebfcf
static EFI_GUID gEfiDriverHealthProtocolGuid = { 0x2a534210, 0x9280, 0x41d8, { 0xae, 0x79, 0xca, 0xda, 0x01, 0xa2, 0xb1, 0x27 } }; // 2a534210-9280-41d8-ae79-cada01a2b127
static EFI_GUID gEfiDeferredImageLoadProtocolGuid = { 0x15853d7c, 0x3ddf, 0x43e0, { 0xa1, 0xcb, 0xeb, 0xf8, 0x5b, 0x8f, 0x87, 0x2c } }; // 15853d7c-3ddf-43e0-a1cb-ebf85b8f872c
static EFI_GUID gEfiUserCredentialProtocolGuid = { 0x71ee5e94, 0x65b9, 0x45d5, { 0x82, 0x1a, 0x3a, 0x4d, 0x86, 0xcf, 0xe6, 0xbe } }; // 71ee5e94-65b9-45d5-821a-3a4d86cfe6be
static EFI_GUID gEfiUserManagerProtocolGuid = { 0x6fd5b00c, 0xd426, 0x4283, { 0x98, 0x87, 0x6c, 0xf5, 0xcf, 0x1c, 0xb1, 0xfe } }; // 6fd5b00c-d426-4283-9887-6cf5cf1cb1fe
static EFI_GUID gEfiAtaPassThruProtocolGuid = { 0x1d3de7f0, 0x0807, 0x424f, { 0xaa, 0x69, 0x11, 0xa5, 0x4e, 0x19, 0xa4, 0x6f } }; // 1d3de7f0-0807-424f-aa69-11a54e19a46f
static EFI_GUID gEfiFirmwareManagementProtocolGuid = { 0x86c77a67, 0x0b97, 0x4633, { 0xa1, 0x87, 0x49, 0x10, 0x4d, 0x06, 0x85, 0xc7 } }; // 86c77a67-0b97-4633-a187-49104d0685c7
static EFI_GUID gEfiIpSecProtocolGuid = { 0xdfb386f7, 0xe100, 0x43ad, { 0x9c, 0x9a, 0xed, 0x90, 0xd0, 0x8a, 0x5e, 0x12 } }; // dfb386f7-e100-43ad-9c9a-ed90d08a5e12
static EFI_GUID gEfiIpSec2ProtocolGuid = { 0xa3979e64, 0xace8, 0x4ddc, { 0xbc, 0x07, 0x4d, 0x66, 0xb8, 0xfd, 0x09, 0x77 } }; // a3979e64-ace8-4ddc-bc07-4d66b8fd0977
static EFI_GUID gEfiKmsProtocolGuid = { 0xec3a978d, 0x7c4e, 0x48fa, { 0x9a, 0xbe, 0x6a, 0xd9, 0x1c, 0xc8, 0xf8, 0x11 } }; // ec3a978d-7c4e-48fa-9abe-6ad91cc8f811
static EFI_GUID gEfiBlockIo2ProtocolGuid = { 0xa77b2472, 0xe282, 0x4e9f, { 0xa2, 0x45, 0xc2, 0xc0, 0xe2, 0x7b, 0xbc, 0xc1 } }; // a77b2472-e282-4e9f-a245-c2c0e27bbcc1
static EFI_GUID gEfiStorageSecurityCommandProtocolGuid = { 0xc88b0b6d, 0x0dfc, 0x49a7, { 0x9c, 0xb4, 0x49, 0x07, 0x4b, 0x4c, 0x3a, 0x78 } }; // c88b0b6d-0dfc-49a7-9cb4-49074b4c3a78
static EFI_GUID gEfiUserCredential2ProtocolGuid = { 0xe98adb03, 0xb8b9, 0x4af8, { 0xba, 0x20, 0x26, 0xe9, 0x11, 0x4c, 0xbc, 0xe5 } }; // e98adb03-b8b9-4af8-ba20-26e9114cbce5
static EFI_GUID gEfiDiskIo2ProtocolGuid = { 0x151c8eae, 0x7f2c, 0x472c, { 0x9e, 0x54, 0x98, 0x28, 0x19, 0x4f, 0x6a, 0x88 } }; // 151c8eae-7f2c-472c-9e54-9828194f6a88
static EFI_GUID gEfiTimestampProtocolGuid = { 0xafbfde41, 0x2e6e, 0x4262, { 0xba, 0x65, 0x62, 0xb9, 0x23, 0x6e, 0x54, 0x95 } }; // afbfde41-2e6e-4262-ba65-62b9236e5495
static EFI_GUID gEfiRngProtocolGuid = { 0x3152bca5, 0xeade, 0x433d, { 0x86, 0x2e, 0xc0, 0x1c, 0xdc, 0x29, 0x1f, 0x44 } }; // 3152bca5-eade-433d-862e-c01cdc291f44
static EFI_GUID gEfiAdapterInformationProtocolGuid = { 0xe5dd1403, 0xd622, 0xc24e, { 0x84, 0x88, 0xc7, 0x1b, 0x17, 0xf5, 0xe8, 0x02 } }; // e5dd1403-d622-c24e-8488-c71b17f5e802
static EFI_GUID gEfiNetworkPkgTokenSpaceGuid = { 0x40e064b2, 0x0ae0, 0x48b1, { 0xa0, 0x7d, 0xf8, 0xcf, 0x1e, 0x1a, 0x23, 0x10 } }; // 40e064b2-0ae0-48b1-a07d-f8cf1e1a2310
static EFI_GUID gIp6ConfigNvDataGuid = { 0x02eea107, 0x98db, 0x400e, { 0x98, 0x30, 0x46, 0x0a, 0x15, 0x42, 0xd7, 0x99 } }; // 02eea107-98db-400e-9830-460a1542d799
static EFI_GUID gIScsiConfigGuid = { 0x4b47d616, 0xa8d6, 0x4552, { 0x9d, 0x44, 0xcc, 0xad, 0x2e, 0x0f, 0x4c, 0xf9 } }; // 4b47d616-a8d6-4552-9d44-ccad2e0f4cf9
static EFI_GUID gEfiWinNtPassThroughGuid = { 0xcc664eb8, 0x3c24, 0x4086, { 0xb6, 0xf6, 0x34, 0xe8, 0x56, 0xbc, 0xe3, 0x6e } }; // cc664eb8-3c24-4086-b6f6-34e856bce36e
static EFI_GUID gEfiWinNtConsoleGuid = { 0xba73672c, 0xa5d3, 0x11d4, { 0xbd, 0x00, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // ba73672c-a5d3-11d4-bd00-0080c73c8881
static EFI_GUID gEfiWinNtUgaGuid = { 0xab248e99, 0xabe1, 0x11d4, { 0xbd, 0x0d, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // ab248e99-abe1-11d4-bd0d-0080c73c8881
static EFI_GUID gEfiWinNtGopGuid = { 0x4e11e955, 0xccca, 0x11d4, { 0xbd, 0x0d, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // 4e11e955-ccca-11d4-bd0d-0080c73c8881
static EFI_GUID gEfiWinNtSerialPortGuid = { 0x0c95a93d, 0xa006, 0x11d4, { 0xbc, 0xfa, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // 0c95a93d-a006-11d4-bcfa-0080c73c8881
static EFI_GUID gEfiWinNtFileSystemGuid = { 0x0c95a935, 0xa006, 0x11d4, { 0xbc, 0xfa, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // 0c95a935-a006-11d4-bcfa-0080c73c8881
static EFI_GUID gEfiWinNtPhysicalDisksGuid = { 0x0c95a92f, 0xa006, 0x11d4, { 0xbc, 0xfa, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // 0c95a92f-a006-11d4-bcfa-0080c73c8881
static EFI_GUID gEfiWinNtVirtualDisksGuid = { 0x0c95a928, 0xa006, 0x11d4, { 0xbc, 0xfa, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // 0c95a928-a006-11d4-bcfa-0080c73c8881
static EFI_GUID gEfiNt32PkgTokenSpaceGuid = { 0x0d79a645, 0x1d91, 0x40a6, { 0xa8, 0x1f, 0x61, 0xe6, 0x98, 0x2b, 0x32, 0xb4 } }; // 0d79a645-1d91-40a6-a81f-61e6982b32b4
static EFI_GUID gEfiWinNtSystemConfigGuid = { 0xb347f047, 0xaf8c, 0x490e, { 0xac, 0x07, 0x0a, 0xa9, 0xb7, 0xe5, 0x38, 0x58 } }; // b347f047-af8c-490e-ac07-0aa9b7e53858
static EFI_GUID gPeiNtThunkPpiGuid = { 0x98c281e5, 0xf906, 0x43dd, { 0xa9, 0x2b, 0xb0, 0x03, 0xbf, 0x27, 0x65, 0xda } }; // 98c281e5-f906-43dd-a92b-b003bf2765da
static EFI_GUID gPeiNtAutoScanPpiGuid = { 0x0dce384d, 0x007c, 0x4ba5, { 0x94, 0xbd, 0x0f, 0x6e, 0xb6, 0x4d, 0x2a, 0xa9 } }; // 0dce384d-007c-4ba5-94bd-0f6eb64d2aa9
static EFI_GUID gNtPeiLoadFilePpiGuid = { 0xfd0c65eb, 0x0405, 0x4cd2, { 0x8a, 0xee, 0xf4, 0x00, 0xef, 0x13, 0xba, 0xc2 } }; // fd0c65eb-0405-4cd2-8aee-f400ef13bac2
static EFI_GUID gNtFwhPpiGuid = { 0x4e76928f, 0x50ad, 0x4334, { 0xb0, 0x6b, 0xa8, 0x42, 0x13, 0x10, 0x8a, 0x57 } }; // 4e76928f-50ad-4334-b06b-a84213108a57
static EFI_GUID gWinNtBusDriverGuid = { 0x0419f582, 0x0625, 0x4531, { 0x8a, 0x33, 0x85, 0xa9, 0x96, 0x5c, 0x95, 0xbc } }; // 0419f582-0625-4531-8a33-85a9965c95bc
static EFI_GUID gEfiWinNtThunkProtocolGuid = { 0x58c518b1, 0x76f3, 0x11d4, { 0xbc, 0xea, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // 58c518b1-76f3-11d4-bcea-0080c73c8881
static EFI_GUID gEfiWinNtIoProtocolGuid = { 0x96eb4ad6, 0xa32a, 0x11d4, { 0xbc, 0xfd, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // 96eb4ad6-a32a-11d4-bcfd-0080c73c8881
static EFI_GUID gOmap35xxTokenSpaceGuid = { 0x24b09abe, 0x4e47, 0x481c, { 0xa9, 0xad, 0xce, 0xf1, 0x2c, 0x39, 0x23, 0x27 } }; // 24b09abe-4e47-481c-a9ad-cef12c392327
static EFI_GUID gOptionRomPkgTokenSpaceGuid = { 0x1e43298f, 0x3478, 0x41a7, { 0xb5, 0x77, 0x86, 0x06, 0x46, 0x35, 0xc7, 0x28 } }; // 1e43298f-3478-41a7-b577-86064635c728
static EFI_GUID gUefiOvmfPkgTokenSpaceGuid = { 0x93bb96af, 0xb9f2, 0x4eb8, { 0x94, 0x62, 0xe0, 0xba, 0x74, 0x56, 0x42, 0x36 } }; // 93bb96af-b9f2-4eb8-9462-e0ba74564236
static EFI_GUID gEfiXenInfoGuid = { 0xd3b46f3b, 0xd441, 0x1244, { 0x9a, 0x12, 0x00, 0x12, 0x27, 0x3f, 0xc1, 0x4d } }; // d3b46f3b-d441-1244-9a12-0012273fc14d
static EFI_GUID gOvmfPlatformConfigGuid = { 0x7235c51c, 0x0c80, 0x4cab, { 0x87, 0xac, 0x3b, 0x08, 0x4a, 0x63, 0x04, 0xb1 } }; // 7235c51c-0c80-4cab-87ac-3b084a6304b1
static EFI_GUID gVirtioMmioTransportGuid = { 0x837dca9e, 0xe874, 0x4d82, { 0xb2, 0x9a, 0x23, 0xfe, 0x0e, 0x23, 0xd1, 0xe2 } }; // 837dca9e-e874-4d82-b29a-23fe0e23d1e2
static EFI_GUID gVirtioDeviceProtocolGuid = { 0xfa920010, 0x6785, 0x4941, { 0xb6, 0xec, 0x49, 0x8c, 0x57, 0x9f, 0x16, 0x0a } }; // fa920010-6785-4941-b6ec-498c579f160a
static EFI_GUID gBlockMmioProtocolGuid = { 0x6b558ce3, 0x69e5, 0x4c67, { 0xa6, 0x34, 0xf7, 0xfe, 0x72, 0xad, 0xbe, 0x84 } }; // 6b558ce3-69e5-4c67-a634-f7fe72adbe84
static EFI_GUID gXenBusProtocolGuid = { 0x3d3ca290, 0xb9a5, 0x11e3, { 0xb7, 0x5d, 0xb8, 0xac, 0x6f, 0x7d, 0x65, 0xe6 } }; // 3d3ca290-b9a5-11e3-b75d-b8ac6f7d65e6
static EFI_GUID gPcAtChipsetPkgTokenSpaceGuid = { 0x326ae723, 0xae32, 0x4589, { 0x98, 0xb8, 0xca, 0xc2, 0x3c, 0xdc, 0xc1, 0xb1 } }; // 326ae723-ae32-4589-98b8-cac23cdcc1b1
static EFI_GUID gPerformancePkgTokenSpaceGuid = { 0x669346ef, 0xfdad, 0x4aeb, { 0x08, 0xa6, 0x21, 0x46, 0x2d, 0x3f, 0xef, 0x7d } }; // 669346ef-fdad-4aeb-08a6-21462d3fef7d
static EFI_GUID gEfiTscFrequencyGuid = { 0xdba6a7e3, 0xbb57, 0x4be7, { 0x8a, 0xf8, 0xd5, 0x78, 0xdb, 0x7e, 0x56, 0x87 } }; // dba6a7e3-bb57-4be7-8af8-d578db7e5687
static EFI_GUID gAcpi10TableGuid = { 0xeb9d2d30, 0x2d88, 0x11d3, { 0x9a, 0x16, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // eb9d2d30-2d88-11d3-9a16-0090273fc14d
static EFI_GUID gAcpiTableGuid = { 0xeb9d2d30, 0x2d88, 0x11d3, { 0x9a, 0x16, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // eb9d2d30-2d88-11d3-9a16-0090273fc14d
static EFI_GUID gPeiCapsuleOnDataCdGuid = { 0x5cac0099, 0x0dc9, 0x48e5, { 0x80, 0x68, 0xbb, 0x95, 0xf5, 0x40, 0x0a, 0x9f } }; // 5cac0099-0dc9-48e5-8068-bb95f5400a9f
static EFI_GUID gPeiCapsuleOnFatFloppyDiskGuid = { 0x2e3d2e75, 0x9b2e, 0x412d, { 0xb4, 0xb1, 0x70, 0x41, 0x6b, 0x87, 0x00, 0xff } }; // 2e3d2e75-9b2e-412d-b4b1-70416b8700ff
static EFI_GUID gPeiCapsuleOnFatIdeDiskGuid = { 0xb38573b6, 0x6200, 0x4ac5, { 0xb5, 0x1d, 0x82, 0xe6, 0x59, 0x38, 0xd7, 0x83 } }; // b38573b6-6200-4ac5-b51d-82e65938d783
static EFI_GUID gPeiCapsuleOnFatUsbDiskGuid = { 0x0ffbce19, 0x324c, 0x4690, { 0xa0, 0x09, 0x98, 0xc6, 0xae, 0x2e, 0xb1, 0x86 } }; // 0ffbce19-324c-4690-a009-98c6ae2eb186
static EFI_GUID gDxeDebugportExtProtocolGuid = { 0x31a4878f, 0x230d, 0x4fc2, { 0x90, 0xbb, 0xda, 0x5f, 0x41, 0xa4, 0x4b, 0x1b } }; // 31a4878f-230d-4fc2-90bb-da5f41a44b1b
static EFI_GUID gDxeDebugCmdProtocolGuid = { 0xca3b3a50, 0x5698, 0x4551, { 0x8b, 0x18, 0xce, 0xae, 0xef, 0x91, 0x7d, 0x50 } }; // ca3b3a50-5698-4551-8b18-ceaeef917d50
static EFI_GUID gDxeDebugDispatchProtocolGuid = { 0x301af449, 0xe0d7, 0x43a3, { 0x8b, 0x1b, 0xbc, 0x16, 0x72, 0x5d, 0x37, 0x4b } }; // 301af449-e0d7-43a3-8b1b-bc16725d374b
static EFI_GUID gEfiAlertStandardFormatProtocolGuid = { 0xcc93a70b, 0xec27, 0x49c5, { 0x8b, 0x34, 0x13, 0x93, 0x1e, 0xfe, 0xd6, 0xe2 } }; // cc93a70b-ec27-49c5-8b34-13931efed6e2
static EFI_GUID gEfiDebugportProtocolGuid = { 0xeba4e8d2, 0x3858, 0x41ec, { 0xa2, 0x81, 0x26, 0x47, 0xba, 0x96, 0x60, 0xd0 } }; // eba4e8d2-3858-41ec-a281-2647ba9660d0
static EFI_GUID gEfiMpServicesProtocolGuid = { 0xf33261e7, 0x23cb, 0x11d5, { 0xbd, 0x5c, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81 } }; // f33261e7-23cb-11d5-bd5c-0080c73c8881
static EFI_GUID gEfiPeiPeCoffLoaderGuid = { 0xd8117cff, 0x94a6, 0x11d4, { 0x9a, 0x3a, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // d8117cff-94a6-11d4-9a3a-0090273fc14d
static EFI_GUID gEfiSimpleTextInputProtocolGuid = { 0x387477c1, 0x69c7, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b } }; // 387477c1-69c7-11d2-8e39-00a0c969723b
static EFI_GUID gEfiSimpleTextOutputProtocolGuid = { 0x387477c2, 0x69c7, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b } }; // 387477c2-69c7-11d2-8e39-00a0c969723b
static EFI_GUID gEfiTcgPrivateInterfaceGuid = { 0x7a28436a, 0xe113, 0x406a, { 0xaf, 0xf9, 0x0d, 0xbf, 0x7f, 0x64, 0x3e, 0x02 } }; // 7a28436a-e113-406a-aff9-0dbf7f643e02
static EFI_GUID gMpsTableGuid = { 0xeb9d2d2f, 0x2d88, 0x11d3, { 0x9a, 0x16, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // eb9d2d2f-2d88-11d3-9a16-0090273fc14d
static EFI_GUID gPdmWindowButtonGuid = { 0x5f65dfdb, 0xac20, 0x4f43, { 0x9b, 0x21, 0x26, 0x9e, 0x81, 0xa0, 0xea, 0x7e } }; // 5f65dfdb-ac20-4f43-9b21-269e81a0ea7e
static EFI_GUID gPdmWindowSpinGuid = { 0x60b27e1a, 0xd65e, 0x4db0, { 0xb2, 0xbb, 0xc1, 0x6f, 0xa7, 0x1e, 0x44, 0xab } }; // 60b27e1a-d65e-4db0-b2bb-c16fa71e44ab
static EFI_GUID gPeiCachePpiGuid = { 0xc153205a, 0xe898, 0x4c24, { 0x86, 0x89, 0xa4, 0xb4, 0xbc, 0xc5, 0xc8, 0xa2 } }; // c153205a-e898-4c24-8689-a4b4bcc5c8a2
static EFI_GUID gPeiDebugDispatchPpiGuid = { 0xc9737920, 0xc2ad, 0x41c3, { 0xb1, 0x33, 0x0f, 0x9c, 0x25, 0x1b, 0x67, 0x43 } }; // c9737920-c2ad-41c3-b133-0f9c251b6743
static EFI_GUID gPeiPostBootScriptTablePpiGuid = { 0x88c9d306, 0x0900, 0x4eb5, { 0x82, 0x60, 0x3e, 0x2d, 0xbe, 0xda, 0x1f, 0x89 } }; // 88c9d306-0900-4eb5-8260-3e2dbeda1f89
static EFI_GUID gPeiSmbusPolicyPpiGuid = { 0x63b6e435, 0x32bc, 0x49c6, { 0x81, 0xbd, 0xb7, 0xa1, 0xa0, 0xfe, 0x1a, 0x6c } }; // 63b6e435-32bc-49c6-81bd-b7a1a0fe1a6c
static EFI_GUID gPhoenixDesktopMessageProtocolGuid = { 0x87dd3539, 0x0667, 0x4bb7, { 0x9f, 0xb2, 0x47, 0xd3, 0xc5, 0x0b, 0x02, 0x1b } }; // 87dd3539-0667-4bb7-9fb2-47d3c50b021b
static EFI_GUID gPhoenixDesktopWindowProtocolGuid = { 0x6ffec78d, 0x7dbf, 0x4f8b, { 0x96, 0x8d, 0x2f, 0x43, 0xa0, 0x80, 0xc1, 0x3f } }; // 6ffec78d-7dbf-4f8b-968d-2f43a080c13f
static EFI_GUID gPhoenixGdiProtocolGuid = { 0x3f5a74b2, 0xbf80, 0x4850, { 0x85, 0x91, 0x4f, 0x2d, 0xf5, 0xf9, 0xcb, 0x2b } }; // 3f5a74b2-bf80-4850-8591-4f2df5f9cb2b
static EFI_GUID gPhoenixSmmCoreServicesProtocolGuid = { 0x177e63c1, 0xaed6, 0x4d88, { 0x91, 0x7e, 0x9b, 0x4f, 0xb9, 0xfe, 0x40, 0x92 } }; // 177e63c1-aed6-4d88-917e-9b4fb9fe4092
static EFI_GUID gPhoenixEfiSmmSwSmiProtocolGuid = { 0xff052503, 0x1af9, 0x4aeb, { 0x83, 0xc4, 0xc2, 0xd4, 0xce, 0xb1, 0x0c, 0xa3 } }; // ff052503-1af9-4aeb-83c4-c2d4ceb10ca3
static EFI_GUID gPhoenixSmmWatchdogTimerProtocolGuid = { 0x6fde3af8, 0x37ad, 0x43fc, { 0xb7, 0x28, 0xf4, 0xd3, 0x41, 0xf3, 0x92, 0x40 } }; // 6fde3af8-37ad-43fc-b728-f4d341f39240
static EFI_GUID gSalSystemTableGuid = { 0xeb9d2d32, 0x2d88, 0x11d3, { 0x9a, 0x16, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // eb9d2d32-2d88-11d3-9a16-0090273fc14d
static EFI_GUID gSctIsaHcPpiGuid = { 0x8d48bd70, 0xc8a3, 0x4c06, { 0x90, 0x1b, 0x74, 0x79, 0x46, 0xaa, 0xc3, 0x58 } }; // 8d48bd70-c8a3-4c06-901b-747946aac358
static EFI_GUID gSctIsaHcProtocolGuid = { 0x5fac7360, 0xd4f2, 0x4c9e, { 0xa7, 0xed, 0xf2, 0x59, 0x5e, 0x67, 0x08, 0x89 } }; // 5fac7360-d4f2-4c9e-a7ed-f2595e670889
static EFI_GUID gSmbiosTableGuid = { 0xeb9d2d31, 0x2d88, 0x11d3, { 0x9a, 0x16, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d } }; // eb9d2d31-2d88-11d3-9a16-0090273fc14d
static EFI_GUID gPeiSpeakerInterfacePpiGuid = { 0x30ac275e, 0xbb30, 0x4b84, { 0xa1, 0xcd, 0x0a, 0xf1, 0x32, 0x2c, 0x89, 0xc0 } }; // 30ac275e-bb30-4b84-a1cd-0af1322c89c0
static EFI_GUID gPeiMfgMemoryTestPpiGuid = { 0xab294a92, 0xeaf5, 0x4cf3, { 0xab, 0x2b, 0x2d, 0x4b, 0xed, 0x4d, 0xb6, 0x3d } }; // ab294a92-eaf5-4cf3-ab2b-2d4bed4db63d
static EFI_GUID gPeiSha256HashPpiGuid = { 0x950e191b, 0x8524, 0x4f51, { 0x80, 0xa1, 0x5c, 0x4f, 0x1b, 0x03, 0xf3, 0x5c } }; // 950e191b-8524-4f51-80a1-5c4f1b03f35c
static EFI_GUID gEfiPlatformBootModeGuid = { 0xce845704, 0x1683, 0x4d38, { 0xa4, 0xf9, 0x7d, 0x0b, 0x50, 0x77, 0x57, 0x93 } }; // ce845704-1683-4d38-a4f9-7d0b50775793
static EFI_GUID gEfiPlatformInfoGuid = { 0x1e2acc41, 0xe26a, 0x483d, { 0xaf, 0xc7, 0xa0, 0x56, 0xc3, 0x4e, 0x08, 0x7b } }; // 1e2acc41-e26a-483d-afc7-a056c34e087b
static EFI_GUID gEfiMemoryConfigDataGuid = { 0x80dbd530, 0xb74c, 0x4f11, { 0x8c, 0x03, 0x41, 0x86, 0x65, 0x53, 0x28, 0x31 } }; // 80dbd530-b74c-4f11-8c03-418665532831
static EFI_GUID gPlatformModuleTokenSpaceGuid = { 0x69d13bf0, 0xaf91, 0x4d96, { 0xaa, 0x9f, 0x21, 0x84, 0xc5, 0xce, 0x3b, 0xc0 } }; // 69d13bf0-af91-4d96-aa9f-2184c5ce3bc0
static EFI_GUID gEfiSerialPortTokenSpaceGuid = { 0x5fad2389, 0x2bc7, 0x4bd2, { 0x83, 0xd3, 0x42, 0x9f, 0xb6, 0xae, 0xa3, 0x3f } }; // 5fad2389-2bc7-4bd2-83d3-429fb6aea33f
static EFI_GUID gEfiIchTokenSpaceGuid = { 0xe38c11e3, 0x968f, 0x47b8, { 0xac, 0xef, 0xac, 0xc0, 0x69, 0x3d, 0xb9, 0xff } }; // e38c11e3-968f-47b8-acef-acc0693db9ff
static EFI_GUID gEfiPchTokenSpaceGuid = { 0x89a1b278, 0xa1a1, 0x4df7, { 0xb1, 0x37, 0xde, 0x5a, 0xd7, 0xc4, 0x79, 0x13 } }; // 89a1b278-a1a1-4df7-b137-de5ad7c47913
static EFI_GUID gEfiSioVariableGuid = { 0x560bf58a, 0x1e0d, 0x4d7e, { 0x95, 0x3f, 0x29, 0x80, 0xa2, 0x61, 0xe0, 0x31 } }; // 560bf58a-1e0d-4d7e-953f-2980a261e031
static EFI_GUID gProcessorProducerGuid = { 0x1bf06aea, 0x5bec, 0x4a8d, { 0x95, 0x76, 0x74, 0x9b, 0x09, 0x56, 0x2d, 0x30 } }; // 1bf06aea-5bec-4a8d-9576-749b09562d30
static EFI_GUID gEfiPowerOnHobGuid = { 0x0468a601, 0xc535, 0x46fd, { 0xa9, 0x5d, 0xbb, 0xab, 0x99, 0x1b, 0x17, 0x8c } }; // 0468a601-c535-46fd-a95d-bbab991b178c
static EFI_GUID gEfiPlatformCpuInfoGuid = { 0xbb9c7ab7, 0xb8d9, 0x4bf3, { 0x9c, 0x29, 0x9b, 0xf3, 0x41, 0xe2, 0x17, 0xbc } }; // bb9c7ab7-b8d9-4bf3-9c29-9bf341e217bc
static EFI_GUID gEfiBiosIdGuid = { 0xc3e36d09, 0x8294, 0x4b97, { 0xa8, 0x57, 0xd5, 0x28, 0x8f, 0xe3, 0x3e, 0x28 } }; // c3e36d09-8294-4b97-a857-d5288fe33e28
static EFI_GUID gEfiBoardFeaturesGuid = { 0x94b9e8ae, 0x8877, 0x479a, { 0x98, 0x42, 0xf5, 0x97, 0x4b, 0x82, 0xce, 0xd3 } }; // 94b9e8ae-8877-479a-9842-f5974b82ced3
static EFI_GUID gItkDataVarGuid = { 0x3812723d, 0x7e48, 0x4e29, { 0xbc, 0x27, 0xf5, 0xa3, 0x9a, 0xc9, 0x4e, 0xf1 } }; // 3812723d-7e48-4e29-bc27-f5a39ac94ef1
static EFI_GUID gDmiDataGuid = { 0x70e56c5e, 0x280c, 0x44b0, { 0xa4, 0x97, 0x09, 0x68, 0x1a, 0xbc, 0x37, 0x5e } }; // 70e56c5e-280c-44b0-a497-09681abc375e
static EFI_GUID gIdccDataHubGuid = { 0x788e1d9f, 0x1eab, 0x47d2, { 0xa2, 0xf3, 0x78, 0xca, 0xe8, 0x7d, 0x60, 0x12 } }; // 788e1d9f-1eab-47d2-a2f3-78cae87d6012
static EFI_GUID gEfiSetupVariableGuid = { 0xec87d643, 0xeba4, 0x4bb5, { 0xa1, 0xe5, 0x3f, 0x3e, 0x36, 0xb2, 0x0d, 0xa9 } }; // ec87d643-eba4-4bb5-a1e5-3f3e36b20da9
static EFI_GUID gMfgModeVariableGuid = { 0xef14fd78, 0x0793, 0x4e2b, { 0xac, 0x6d, 0x06, 0x28, 0x47, 0xe0, 0x17, 0x91 } }; // ef14fd78-0793-4e2b-ac6d-062847e01791
static EFI_GUID gEfiAcpiTableStorageGuid = { 0x7e374e25, 0x8e01, 0x4fee, { 0x87, 0xf2, 0x39, 0x0c, 0x23, 0xc6, 0x06, 0xcd } }; // 7e374e25-8e01-4fee-87f2-390c23c606cd
static EFI_GUID gACPIOSFRMfgStringVariableGuid = { 0x72234213, 0x0fd7, 0x48a1, { 0xa5, 0x9f, 0xb4, 0x1b, 0xc1, 0x07, 0xfb, 0xcd } }; // 72234213-0fd7-48a1-a59f-b41bc107fbcd
static EFI_GUID gACPIOSFRRefDataBlockVariableGuid = { 0x72234213, 0x0fd7, 0x48a1, { 0xa5, 0x9f, 0xb4, 0x1b, 0xc1, 0x07, 0xfb, 0xcd } }; // 72234213-0fd7-48a1-a59f-b41bc107fbcd
static EFI_GUID gACPIOSFRModelStringVariableGuid = { 0xca1bcad9, 0xe021, 0x4547, { 0xa1, 0xb0, 0x5b, 0x22, 0xc7, 0xf6, 0x87, 0xf4 } }; // ca1bcad9-e021-4547-a1b0-5b22c7f687f4
static EFI_GUID gEfiPciLanInfoGuid = { 0x0d9a1427, 0xe02a, 0x437d, { 0x92, 0x6b, 0xaa, 0x52, 0x1f, 0xd7, 0x22, 0xba } }; // 0d9a1427-e02a-437d-926b-aa521fd722ba
static EFI_GUID gEfiNormalSetupGuid = { 0xec87d643, 0xeba4, 0x4bb5, { 0xa1, 0xe5, 0x3f, 0x3e, 0x36, 0xb2, 0x0d, 0xa9 } }; // ec87d643-eba4-4bb5-a1e5-3f3e36b20da9
static EFI_GUID gFirmwareIdGuid = { 0x5e559c23, 0x1faa, 0x4ae1, { 0x8d, 0x4a, 0xc6, 0xcf, 0x02, 0x6c, 0x76, 0x6f } }; // 5e559c23-1faa-4ae1-8d4a-c6cf026c766f
static EFI_GUID gBmpImageGuid = { 0x878ac2cc, 0x5343, 0x46f2, { 0xb5, 0x63, 0x51, 0xf8, 0x9d, 0xaf, 0x56, 0xba } }; // 878ac2cc-5343-46f2-b563-51f89daf56ba
static EFI_GUID gOsSelectionVariableGuid = { 0x86843f56, 0x675d, 0x40a5, { 0x95, 0x30, 0xbc, 0x85, 0x83, 0x72, 0xf1, 0x03 } }; // 86843f56-675d-40a5-9530-bc858372f103
static EFI_GUID gEfiActiveBiosProtocolGuid = { 0xebbe2d1b, 0x1647, 0x4bda, { 0xab, 0x9a, 0x78, 0x63, 0xe3, 0x96, 0xd4, 0x1a } }; // ebbe2d1b-1647-4bda-ab9a-7863e396d41a
static EFI_GUID gEfiPlatformCpuProtocolGuid = { 0xbd26cdc9, 0xa092, 0x462a, { 0x87, 0x7a, 0x5a, 0xb6, 0xad, 0xce, 0x48, 0x12 } }; // bd26cdc9-a092-462a-877a-5ab6adce4812
static EFI_GUID gDxePchPlatformPolicyProtocolGuid = { 0x4b0165a9, 0x61d6, 0x4e23, { 0xa0, 0xb5, 0x3e, 0xc7, 0x9c, 0x2e, 0x30, 0xd5 } }; // 4b0165a9-61d6-4e23-a0b5-3ec79c2e30d5
static EFI_GUID gEfiTpmMpDriverProtocolGuid = { 0xde161cfe, 0x1e60, 0x42a1, { 0x8c, 0xc3, 0xee, 0x7e, 0xf0, 0x73, 0x52, 0x12 } }; // de161cfe-1e60-42a1-8cc3-ee7ef0735212
static EFI_GUID gEfiLpcWpce791PolicyProtocolGuid = { 0xab2bee2f, 0xc1a6, 0x4399, { 0x85, 0x3d, 0xc0, 0x7c, 0x77, 0x4f, 0xfd, 0x0d } }; // ab2bee2f-c1a6-4399-853d-c07c774ffd0d
static EFI_GUID gUsbPolicyGuid = { 0xf617b358, 0x12cf, 0x414a, { 0xa0, 0x69, 0x60, 0x67, 0x7b, 0xda, 0x13, 0xb4 } }; // f617b358-12cf-414a-a069-60677bda13b4
static EFI_GUID gEfiSpeakerInterfaceProtocolGuid = { 0x400b4476, 0x3081, 0x11d6, { 0x87, 0xed, 0x00, 0x06, 0x29, 0x45, 0xc3, 0xb9 } }; // 400b4476-3081-11d6-87ed-00062945c3b9
static EFI_GUID gDxeVlvPlatformPolicyGuid = { 0x5bab88ba, 0xe0e2, 0x4674, { 0xb6, 0xad, 0xb8, 0x12, 0xf6, 0x88, 0x1c, 0xd6 } }; // 5bab88ba-e0e2-4674-b6ad-b812f6881cd6
static EFI_GUID gEfiSmbiosSlotPopulationGuid = { 0xef7bf7d6, 0xf8ff, 0x4a76, { 0x82, 0x47, 0xc0, 0xd0, 0xd1, 0xcc, 0x49, 0xc0 } }; // ef7bf7d6-f8ff-4a76-8247-c0d0d1cc49c0
static EFI_GUID gObservableProtocolGuid = { 0xe227c522, 0xd5fe, 0x4a53, { 0x87, 0xb1, 0x0f, 0xbe, 0x57, 0x0f, 0x98, 0xe9 } }; // e227c522-d5fe-4a53-87b1-0fbe570f98e9
static EFI_GUID gEfiCk505ClockPlatformInfoGuid = { 0x3c485ea4, 0x449a, 0x46ce, { 0xbb, 0x08, 0x2a, 0x33, 0x6e, 0xa9, 0x6b, 0x4e } }; // 3c485ea4-449a-46ce-bb08-2a336ea96b4e
static EFI_GUID gEfiLpcWpc83627PolicyProtocolGuid = { 0xd3ecc567, 0x9fd5, 0x44c1, { 0x86, 0xcf, 0x5d, 0xa7, 0xa2, 0x4f, 0x4b, 0x5d } }; // d3ecc567-9fd5-44c1-86cf-5da7a24f4b5d
static EFI_GUID gEfiTcoResetProtocolGuid = { 0xa6a79162, 0xe325, 0x4c30, { 0xbc, 0xc3, 0x59, 0x37, 0x30, 0x64, 0xef, 0xb3 } }; // a6a79162-e325-4c30-bcc3-59373064efb3
static EFI_GUID gEfiWatchdogTimerDriverProtocolGuid = { 0xd5b06d16, 0x2ea1, 0x4def, { 0x98, 0xd0, 0xa0, 0x5d, 0x40, 0x72, 0x84, 0x17 } }; // d5b06d16-2ea1-4def-98d0-a05d40728417
static EFI_GUID gEfiPlatformIdeInitProtocolGuid = { 0x377c66a3, 0x8fe7, 0x4ee8, { 0x85, 0xb8, 0xf1, 0xa2, 0x82, 0x56, 0x9e, 0x3b } }; // 377c66a3-8fe7-4ee8-85b8-f1a282569e3b
static EFI_GUID gEnhancedSpeedstepProtocolGuid = { 0x91a1ddcf, 0x5374, 0x4939, { 0x89, 0x51, 0xd7, 0x29, 0x3f, 0x1a, 0x78, 0x6f } }; // 91a1ddcf-5374-4939-8951-d7293f1a786f
static EFI_GUID gPlatformGOPPolicyGuid = { 0xec2e931b, 0x3281, 0x48a5, { 0x81, 0x07, 0xdf, 0x8a, 0x8b, 0xed, 0x3c, 0x5d } }; // ec2e931b-3281-48a5-8107-df8a8bed3c5d
static EFI_GUID gEfiGopDisplayBrightnessProtocolGuid = { 0x6ff23f1d, 0x877c, 0x4b1b, { 0x93, 0xfc, 0xf1, 0x42, 0xb2, 0xee, 0xa6, 0xa7 } }; // 6ff23f1d-877c-4b1b-93fc-f142b2eea6a7
static EFI_GUID gEfiUsbKeyboardConnectGuid = { 0xad9c4381, 0x1ede, 0x430c, { 0x8d, 0x42, 0x23, 0x76, 0x7c, 0x46, 0x5d, 0x52 } }; // ad9c4381-1ede-430c-8d42-23767c465d52
static EFI_GUID gEfiMmioDeviceProtocolGuid = { 0x24486226, 0xf8c2, 0x41f5, { 0xb9, 0xdd, 0x78, 0x3e, 0x9e, 0x56, 0xde, 0xa0 } }; // 24486226-f8c2-41f5-b9dd-783e9e56dea0
static EFI_GUID gEfiI2cBusConfigurationManagementProtocol2Guid = { 0x75032015, 0xd156, 0x423e, { 0xbf, 0xa3, 0x7a, 0x65, 0xab, 0xa4, 0x71, 0x05 } }; // 75032015-d156-423e-bfa3-7a65aba47105
static EFI_GUID gEfiI2cAcpiProtocolGuid = { 0xf30c2915, 0x5782, 0x4e6a, { 0xa8, 0x46, 0x05, 0xba, 0xbc, 0xe7, 0xb6, 0xa0 } }; // f30c2915-5782-4e6a-a846-05babce7b6a0
static EFI_GUID gEfiI2cMasterProtocol2Guid = { 0x578c315a, 0x68cf, 0x4e81, { 0xb5, 0xc6, 0x22, 0xdb, 0x40, 0xd0, 0x10, 0xbc } }; // 578c315a-68cf-4e81-b5c6-22db40d010bc
static EFI_GUID gEfiI2cHostProtocol2Guid = { 0x70b221af, 0xfdff, 0x4fde, { 0x99, 0x68, 0x1a, 0xf6, 0x23, 0xa9, 0x56, 0xd9 } }; // 70b221af-fdff-4fde-9968-1af623a956d9
static EFI_GUID gEfiI2cBusProtocolGuid = { 0x9fa1b225, 0x3346, 0x461b, { 0xa0, 0x69, 0xed, 0x01, 0xb6, 0x73, 0xd2, 0x40 } }; // 9fa1b225-3346-461b-a069-ed01b673d240
static EFI_GUID gEfiI2cSlaveProtocolGuid = { 0xf2c1910e, 0xf5c9, 0x4b72, { 0xb2, 0x43, 0x6d, 0x59, 0x09, 0x6a, 0x79, 0xf0 } }; // f2c1910e-f5c9-4b72-b243-6d59096a79f0
static EFI_GUID gEfiSpiAcpiProtocolGuid = { 0x9f49a879, 0x3d71, 0x42b3, { 0xa0, 0xad, 0xdd, 0xb1, 0xf3, 0x30, 0x10, 0xa3 } }; // 9f49a879-3d71-42b3-a0ad-ddb1f33010a3
static EFI_GUID gEfiSpiHostProtocolGuid = { 0x951b65e5, 0x8872, 0x41ed, { 0xad, 0x1d, 0xd5, 0x68, 0x1f, 0x4a, 0xf0, 0x33 } }; // 951b65e5-8872-41ed-ad1d-d5681f4af033
static EFI_GUID gEfiSpiBusProtocolGuid = { 0x137b3044, 0xf6d7, 0x473e, { 0xa6, 0x25, 0x9f, 0xb9, 0x25, 0x05, 0xc1, 0x80 } }; // 137b3044-f6d7-473e-a625-9fb92505c180
static EFI_GUID gLpssDummyProtocolGuid = { 0xaf4cc162, 0xd41c, 0x455a, { 0xab, 0x45, 0x6d, 0xbc, 0xc1, 0xcd, 0x32, 0xf3 } }; // af4cc162-d41c-455a-ab45-6dbcc1cd32f3
static EFI_GUID gEfiSpiProtocolGuid = { 0x1156efc6, 0xea32, 0x4396, { 0xb5, 0xd5, 0x26, 0x93, 0x2e, 0x83, 0xc3, 0x13 } }; // 1156efc6-ea32-4396-b5d5-26932e83c313
static EFI_GUID gEfiGpioOperationProtocolGuid = { 0x38ddfe8f, 0x8991, 0x44aa, { 0x98, 0x89, 0x83, 0xf4, 0x91, 0x84, 0x65, 0xb0 } }; // 38ddfe8f-8991-44aa-9889-83f4918465b0
static EFI_GUID gEfiEsrtOperationProtocolGuid = { 0x4549ab47, 0x6e60, 0x4293, { 0xb9, 0x1d, 0x31, 0xb6, 0x10, 0xad, 0x80, 0x56 } }; // 4549ab47-6e60-4293-b91d-31b610ad8056
static EFI_GUID gEfiFwDisplayCapsuleGuid = { 0x3b8c8162, 0x188c, 0x46a4, { 0xae, 0xc9, 0xbe, 0x43, 0xf1, 0xd6, 0x56, 0x97 } }; // 3b8c8162-188c-46a4-aec9-be43f1d65697
static EFI_GUID gEfiFirmwareClassGuid = { 0xb122a262, 0x3551, 0x4f48, { 0x88, 0x92, 0x55, 0xf6, 0xc0, 0x61, 0x42, 0x90 } }; // b122a262-3551-4f48-8892-55f6c0614290
static EFI_GUID gEfiDFUVerGuid = { 0x0dc73aed, 0xcbf6, 0x4a25, { 0xa6, 0x8d, 0x59, 0xc8, 0x0f, 0x44, 0xc7, 0xc3 } }; // 0dc73aed-cbf6-4a25-a68d-59c80f44c7c3
static EFI_GUID gEfiEsrtTableGuid = { 0xb122a263, 0x3661, 0x4f68, { 0x99, 0x29, 0x78, 0xf8, 0xb0, 0xd6, 0x21, 0x80 } }; // b122a263-3661-4f68-9929-78f8b0d62180
static EFI_GUID gEfiCapsuleCrashLogVarGuid = { 0xf3ff1468, 0x04ba, 0x4966, { 0x9f, 0xb2, 0xe4, 0xa7, 0x90, 0x05, 0x46, 0x50 } }; // f3ff1468-04ba-4966-9fb2-e4a790054650
static EFI_GUID gEfiCapsuleCrashGuid = { 0x0e1d2972, 0x65af, 0x4ac1, { 0xbf, 0xa3, 0xce, 0xf4, 0xab, 0x0c, 0x38, 0xfe } }; // 0e1d2972-65af-4ac1-bfa3-cef4ab0c38fe
static EFI_GUID gEfiSecurityPkgTokenSpaceGuid = { 0x0d3fb176, 0x9569, 0x4d51, { 0xa3, 0xef, 0x7d, 0x61, 0xc6, 0x4f, 0xea, 0xba } }; // 0d3fb176-9569-4d51-a3ef-7d61c64feaba
static EFI_GUID gEfiAuthenticatedVariableGuid = { 0xaaf32c78, 0x947b, 0x439a, { 0xa1, 0x80, 0x2e, 0x14, 0x4e, 0xc3, 0x77, 0x92 } }; // aaf32c78-947b-439a-a180-2e144ec37792
static EFI_GUID gEfiSecureBootEnableDisableGuid = { 0xf0a30bc7, 0xaf08, 0x4556, { 0x99, 0xc4, 0x00, 0x10, 0x09, 0xc9, 0x3a, 0x44 } }; // f0a30bc7-af08-4556-99c4-001009c93a44
static EFI_GUID gEfiCustomModeEnableGuid = { 0xc076ec0c, 0x7028, 0x4399, { 0xa0, 0x72, 0x71, 0xee, 0x5c, 0x44, 0x8b, 0x9f } }; // c076ec0c-7028-4399-a072-71ee5c448b9f
static EFI_GUID gEfiVendorKeysNvGuid = { 0x9073e4e0, 0x60ec, 0x4b6e, { 0x99, 0x03, 0x4c, 0x22, 0x3c, 0x26, 0x0f, 0x3c } }; // 9073e4e0-60ec-4b6e-9903-4c223c260f3c
static EFI_GUID gEfiCertDbGuid = { 0xd9bee56e, 0x75dc, 0x49d9, { 0xb4, 0xd7, 0xb5, 0x34, 0x21, 0x0f, 0x63, 0x7a } }; // d9bee56e-75dc-49d9-b4d7-b534210f637a
static EFI_GUID gTcgEventEntryHobGuid = { 0x2b9ffb52, 0x1b13, 0x416f, { 0xa8, 0x7b, 0xbc, 0x93, 0x0d, 0xef, 0x92, 0xa8 } }; // 2b9ffb52-1b13-416f-a87b-bc930def92a8
static EFI_GUID gTpmErrorHobGuid = { 0xef598499, 0xb25e, 0x473a, { 0xbf, 0xaf, 0xe7, 0xe5, 0x7d, 0xce, 0x82, 0xc4 } }; // ef598499-b25e-473a-bfaf-e7e57dce82c4
static EFI_GUID gMeasuredFvHobGuid = { 0xb2360b42, 0x7173, 0x420a, { 0x86, 0x96, 0x46, 0xca, 0x6b, 0xab, 0x10, 0x60 } }; // b2360b42-7173-420a-8696-46ca6bab1060
static EFI_GUID gEfiPhysicalPresenceGuid = { 0x0f6499b1, 0xe9ad, 0x493d, { 0xb9, 0xc2, 0x2f, 0x90, 0x81, 0x5c, 0x6c, 0xbc } }; // 0f6499b1-e9ad-493d-b9c2-2f90815c6cbc
static EFI_GUID gPwdCredentialProviderGuid = { 0x78b9ec8b, 0xc000, 0x46c5, { 0xac, 0x93, 0x24, 0xa0, 0xc1, 0xbb, 0x00, 0xce } }; // 78b9ec8b-c000-46c5-ac93-24a0c1bb00ce
static EFI_GUID gUsbCredentialProviderGuid = { 0xd0849ed1, 0xa88c, 0x4ba6, { 0xb1, 0xd6, 0xab, 0x50, 0xe2, 0x80, 0xb7, 0xa9 } }; // d0849ed1-a88c-4ba6-b1d6-ab50e280b7a9
static EFI_GUID gUserIdentifyManagerGuid = { 0x3ccd3dd8, 0x8d45, 0x4fed, { 0x96, 0x2d, 0x2b, 0x38, 0xcd, 0x82, 0xb3, 0xc4 } }; // 3ccd3dd8-8d45-4fed-962d-2b38cd82b3c4
static EFI_GUID gUserProfileManagerGuid = { 0xc35f272c, 0x97c2, 0x465a, { 0xa2, 0x16, 0x69, 0x6b, 0x66, 0x8a, 0x8c, 0xfe } }; // c35f272c-97c2-465a-a216-696b668a8cfe
static EFI_GUID gTcgConfigFormSetGuid = { 0xb0f901e4, 0xc424, 0x45de, { 0x90, 0x81, 0x95, 0xe2, 0x0b, 0xde, 0x6f, 0xb5 } }; // b0f901e4-c424-45de-9081-95e20bde6fb5
static EFI_GUID gSecureBootConfigFormSetGuid = { 0x5daf50a5, 0xea81, 0x4de2, { 0x8f, 0x9b, 0xca, 0xbd, 0xa9, 0xcf, 0x5c, 0x14 } }; // 5daf50a5-ea81-4de2-8f9b-cabda9cf5c14
static EFI_GUID gEfiTrEEPhysicalPresenceGuid = { 0xf24643c2, 0xc622, 0x494e, { 0x8a, 0x0d, 0x46, 0x32, 0x57, 0x9c, 0x2d, 0x5b } }; // f24643c2-c622-494e-8a0d-4632579c2d5b
static EFI_GUID gEfiTpmDeviceInstanceNoneGuid = { 0x00000000, 0x0000, 0x0000, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }; // 00000000-0000-0000-0000-000000000000
static EFI_GUID gEfiTpmDeviceInstanceTpm12Guid = { 0x8b01e5b6, 0x4f19, 0x46e8, { 0xab, 0x93, 0x1c, 0x53, 0x67, 0x1b, 0x90, 0xcc } }; // 8b01e5b6-4f19-46e8-ab93-1c53671b90cc
static EFI_GUID gEfiTpmDeviceInstanceTpm20DtpmGuid = { 0x286bf25a, 0xc2c3, 0x408c, { 0xb3, 0xb4, 0x25, 0xe6, 0x75, 0x8b, 0x73, 0x17 } }; // 286bf25a-c2c3-408c-b3b4-25e6758b7317
static EFI_GUID gEfiTpmDeviceSelectedGuid = { 0x7f4158d3, 0x074d, 0x456d, { 0x8c, 0xb2, 0x01, 0xf9, 0xc8, 0xf7, 0x9d, 0xaa } }; // 7f4158d3-074d-456d-8cb2-01f9c8f79daa
static EFI_GUID gTrEEConfigFormSetGuid = { 0xc54b425f, 0xaa79, 0x48b4, { 0x98, 0x1f, 0x99, 0x8b, 0x3c, 0x4b, 0x64, 0x1c } }; // c54b425f-aa79-48b4-981f-998b3c4b641c
static EFI_GUID gPeiLockPhysicalPresencePpiGuid = { 0xef9aefe5, 0x2bd3, 0x4031, { 0xaf, 0x7d, 0x5e, 0xfe, 0x5a, 0xbb, 0x9a, 0x0d } }; // ef9aefe5-2bd3-4031-af7d-5efe5abb9a0d
static EFI_GUID gPeiTpmInitializedPpiGuid = { 0xe9db0d58, 0xd48d, 0x47f6, { 0x9c, 0x6e, 0x6f, 0x40, 0xe8, 0x6c, 0x7b, 0x41 } }; // e9db0d58-d48d-47f6-9c6e-6f40e86c7b41
static EFI_GUID gPeiTpmInitializationDonePpiGuid = { 0xa030d115, 0x54dd, 0x447b, { 0x90, 0x64, 0xf2, 0x06, 0x88, 0x3d, 0x7c, 0xcc } }; // a030d115-54dd-447b-9064-f206883d7ccc
static EFI_GUID gEfiPeiFirmwareVolumeInfoMeasurementExcludedPpiGuid = { 0x6e056ff9, 0xc695, 0x4364, { 0x9e, 0x2c, 0x61, 0x26, 0xf5, 0xce, 0xea, 0xae } }; // 6e056ff9-c695-4364-9e2c-6126f5ceeaae
static EFI_GUID gEfiShellEnvironment2ExtGuid = { 0xd2c18636, 0x40e5, 0x4eb5, { 0xa3, 0x1b, 0x36, 0x69, 0x5f, 0xd4, 0x2c, 0x87 } }; // d2c18636-40e5-4eb5-a31b-36695fd42c87
static EFI_GUID gEfiShellPkgTokenSpaceGuid = { 0x171e9188, 0x31d3, 0x40f5, { 0xb1, 0x0c, 0x53, 0x9b, 0x2d, 0xb9, 0x40, 0xcd } }; // 171e9188-31d3-40f5-b10c-539b2db940cd
static EFI_GUID gShellVariableGuid = { 0x158def5a, 0xf656, 0x419c, { 0xb0, 0x27, 0x7a, 0x31, 0x92, 0xc0, 0x79, 0xd2 } }; // 158def5a-f656-419c-b027-7a3192c079d2
static EFI_GUID gShellMapGuid = { 0x51271e13, 0x7de3, 0x43af, { 0x8b, 0xc2, 0x71, 0xad, 0x3b, 0x82, 0x43, 0x25 } }; // 51271e13-7de3-43af-8bc2-71ad3b824325
static EFI_GUID gShellAliasGuid = { 0x0053d9d6, 0x2659, 0x4599, { 0xa2, 0x6b, 0xef, 0x45, 0x36, 0xe6, 0x31, 0xa9 } }; // 0053d9d6-2659-4599-a26b-ef4536e631a9
static EFI_GUID gHandleParsingHiiGuid = { 0xb8969637, 0x81de, 0x43af, { 0xbc, 0x9a, 0x24, 0xd9, 0x89, 0x13, 0xf2, 0xf6 } }; // b8969637-81de-43af-bc9a-24d98913f2f6
static EFI_GUID gShellDebug1HiiGuid = { 0x25f200aa, 0xd3cb, 0x470a, { 0xbf, 0x51, 0xe7, 0xd1, 0x62, 0xd2, 0x2e, 0x6f } }; // 25f200aa-d3cb-470a-bf51-e7d162d22e6f
static EFI_GUID gShellDriver1HiiGuid = { 0x0af0b742, 0x63ec, 0x45bd, { 0x8d, 0xb6, 0x71, 0xad, 0x7f, 0x2f, 0xe8, 0xe8 } }; // 0af0b742-63ec-45bd-8db6-71ad7f2fe8e8
static EFI_GUID gShellInstall1HiiGuid = { 0x7d574d54, 0xd364, 0x4d4a, { 0x95, 0xe3, 0x49, 0x45, 0xdb, 0x7a, 0xd3, 0xee } }; // 7d574d54-d364-4d4a-95e3-4945db7ad3ee
static EFI_GUID gShellLevel1HiiGuid = { 0xdec5daa4, 0x6781, 0x4820, { 0x9c, 0x63, 0xa7, 0xb0, 0xe4, 0xf1, 0xdb, 0x31 } }; // dec5daa4-6781-4820-9c63-a7b0e4f1db31
static EFI_GUID gShellLevel2HiiGuid = { 0xf95a7ccc, 0x4c55, 0x4426, { 0xa7, 0xb4, 0xdc, 0x89, 0x61, 0x95, 0x0b, 0xae } }; // f95a7ccc-4c55-4426-a7b4-dc8961950bae
static EFI_GUID gShellLevel3HiiGuid = { 0x4344558d, 0x4ef9, 0x4725, { 0xb1, 0xe4, 0x33, 0x76, 0xe8, 0xd6, 0x97, 0x4f } }; // 4344558d-4ef9-4725-b1e4-3376e8d6974f
static EFI_GUID gShellNetwork1HiiGuid = { 0xf3d301bb, 0xf4a5, 0x45a8, { 0xb0, 0xb7, 0xfa, 0x99, 0x9c, 0x62, 0x37, 0xae } }; // f3d301bb-f4a5-45a8-b0b7-fa999c6237ae
static EFI_GUID gShellBcfgHiiGuid = { 0x5f5f605d, 0x1583, 0x4a2d, { 0xa6, 0xb2, 0xeb, 0x12, 0xda, 0xb4, 0xa2, 0xb6 } }; // 5f5f605d-1583-4a2d-a6b2-eb12dab4a2b6
static EFI_GUID gEfiShellProtocolGuid = { 0x6302d008, 0x7f9b, 0x4f30, { 0x87, 0xac, 0x60, 0xc9, 0xfe, 0xf5, 0xda, 0x4e } }; // 6302d008-7f9b-4f30-87ac-60c9fef5da4e
static EFI_GUID gEfiShellParametersProtocolGuid = { 0x752f3136, 0x4e16, 0x4fdc, { 0xa2, 0x2a, 0xe5, 0xf4, 0x68, 0x12, 0xf4, 0xca } }; // 752f3136-4e16-4fdc-a22a-e5f46812f4ca
static EFI_GUID gEfiShellEnvironment2Guid = { 0x47c7b221, 0xc42a, 0x11d2, { 0x8e, 0x57, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b } }; // 47c7b221-c42a-11d2-8e57-00a0c969723b
static EFI_GUID gEfiShellInterfaceGuid = { 0x47c7b223, 0xc42a, 0x11d2, { 0x8e, 0x57, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b } }; // 47c7b223-c42a-11d2-8e57-00a0c969723b
static EFI_GUID gEfiShellDynamicCommandProtocolGuid = { 0x3c7200e9, 0x005f, 0x4ea4, { 0x87, 0xde, 0xa3, 0xdf, 0xac, 0x8a, 0x27, 0xc3 } }; // 3c7200e9-005f-4ea4-87de-a3dfac8a27c3
static EFI_GUID gEfiDebugAgentGuid = { 0x865a5a9b, 0xb85d, 0x474c, { 0x84, 0x55, 0x65, 0xd1, 0xbe, 0x84, 0x4b, 0xe2 } }; // 865a5a9b-b85d-474c-8455-65d1be844be2
static EFI_GUID gEfiSourceLevelDebugPkgTokenSpaceGuid = { 0x865a5aab, 0xb85d, 0x474c, { 0x84, 0x55, 0x65, 0xd1, 0xbe, 0x84, 0x4b, 0xe2 } }; // 865a5aab-b85d-474c-8455-65d1be844be2
static EFI_GUID gStdLibTokenSpaceGuid = { 0x447559f0, 0xd02e, 0x4cf1, { 0x99, 0xbc, 0xca, 0x11, 0x65, 0x40, 0x54, 0xc2 } }; // 447559f0-d02e-4cf1-99bc-ca11654054c2
static EFI_GUID gEfiSocketProtocolGuid = { 0x58e6ed63, 0x1694, 0x440b, { 0x93, 0x88, 0xe9, 0x8f, 0xed, 0x6b, 0x65, 0xaf } }; // 58e6ed63-1694-440b-9388-e98fed6b65af
static EFI_GUID gEfiSocketServiceBindingProtocolGuid = { 0x8aaedb2a, 0xa6bb, 0x47c6, { 0x94, 0xce, 0x1b, 0x80, 0x96, 0x42, 0x3f, 0x2a } }; // 8aaedb2a-a6bb-47c6-94ce-1b8096423f2a
static EFI_GUID gUefiCpuPkgTokenSpaceGuid = { 0xac05bf33, 0x995a, 0x4ed4, { 0xaa, 0xb8, 0xef, 0x7a, 0xe8, 0x0f, 0x5c, 0xb0 } }; // ac05bf33-995a-4ed4-aab8-ef7ae80f5cb0
static EFI_GUID gVlvPolicyPpiGuid = { 0x7d84b2c2, 0x22a1, 0x4372, { 0xb1, 0x2c, 0xeb, 0xb2, 0x32, 0xd3, 0xa6, 0xa3 } }; // 7d84b2c2-22a1-4372-b12c-ebb232d3a6a3
static EFI_GUID gVlvMmioPolicyPpiGuid = { 0xe767bf7f, 0x4db6, 0x5b34, { 0x10, 0x11, 0x4f, 0xbe, 0x4c, 0xa7, 0xaf, 0xd2 } }; // e767bf7f-4db6-5b34-1011-4fbe4ca7afd2
static EFI_GUID gSeCfTPMPpiGuid = { 0x10e26df1, 0x8775, 0x4ee1, { 0xb5, 0x0a, 0x3a, 0xe8, 0x28, 0x93, 0x70, 0x3a } }; // 10e26df1-8775-4ee1-b50a-3ae82893703a
static EFI_GUID gPchUsbPolicyPpiGuid = { 0xc02b0573, 0x2b4e, 0x4a31, { 0xa3, 0x1a, 0x94, 0x56, 0x7b, 0x50, 0x44, 0x2c } }; // c02b0573-2b4e-4a31-a31a-94567b50442c
static EFI_GUID gPchInitPpiGuid = { 0x09ea894a, 0xbe0d, 0x4230, { 0xa0, 0x03, 0xed, 0xc6, 0x93, 0xb4, 0x8e, 0x95 } }; // 09ea894a-be0d-4230-a003-edc693b48e95
static EFI_GUID gPchPlatformPolicyPpiGuid = { 0x15344673, 0xd365, 0x4be2, { 0x85, 0x13, 0x14, 0x97, 0xcc, 0x07, 0x61, 0x1d } }; // 15344673-d365-4be2-8513-1497cc07611d
static EFI_GUID gPeiSpiPpiGuid = { 0xa38c6898, 0x2b5c, 0x4ff6, { 0x93, 0x26, 0x2e, 0x63, 0x21, 0x2e, 0x56, 0xc2 } }; // a38c6898-2b5c-4ff6-9326-2e63212e56c2
static EFI_GUID gVlvPeiInitPpiGuid = { 0x09ea8911, 0xbe0d, 0x4230, { 0xa0, 0x03, 0xed, 0xc6, 0x93, 0xb4, 0x8e, 0x11 } }; // 09ea8911-be0d-4230-a003-edc693b48e11
static EFI_GUID gSeCUmaPpiGuid = { 0xcbd86677, 0x362f, 0x4c04, { 0x94, 0x59, 0xa7, 0x41, 0x32, 0x6e, 0x05, 0xcf } }; // cbd86677-362f-4c04-9459-a741326e05cf
static EFI_GUID gPeiSeCPlatformPolicyPpiGuid = { 0x7ae3ceb7, 0x2ee2, 0x48fa, { 0xaa, 0x49, 0x35, 0x10, 0xbc, 0x83, 0xca, 0xbf } }; // 7ae3ceb7-2ee2-48fa-aa49-3510bc83cabf
static EFI_GUID gPeiHeciPpiGuid = { 0xee0ea811, 0xfbd9, 0x4777, { 0xb9, 0x5a, 0xba, 0x4f, 0x71, 0x10, 0x1f, 0x74 } }; // ee0ea811-fbd9-4777-b95a-ba4f71101f74
static EFI_GUID gPeiSdhcPpiGuid = { 0xf4ef9d7a, 0x98c5, 0x4c1a, { 0xb4, 0xd9, 0xd8, 0xd8, 0x72, 0x65, 0xbe, 0x0c } }; // f4ef9d7a-98c5-4c1a-b4d9-d8d87265be0c
static EFI_GUID gPeiBlockIoPpiGuid = { 0xbc5fa650, 0xedbb, 0x4d0d, { 0xb3, 0xa3, 0xd9, 0x89, 0x07, 0xf8, 0x47, 0xdf } }; // bc5fa650-edbb-4d0d-b3a3-d98907f847df
static EFI_GUID gSeCfTPMPolicyPpiGuid = { 0x4fd1ba49, 0x8f90, 0x471a, { 0xa2, 0xc9, 0x17, 0x3c, 0x7a, 0x73, 0x2f, 0xd0 } }; // 4fd1ba49-8f90-471a-a2c9-173c7a732fd0
static EFI_GUID gPchPeiInitPpiGuid = { 0xacb93b08, 0x5cdc, 0x4a8f, { 0x93, 0xd4, 0x06, 0xe3, 0x42, 0xdf, 0x18, 0x2e } }; // acb93b08-5cdc-4a8f-93d4-06e342df182e
static EFI_GUID gEfiGlobalNvsAreaProtocolGuid = { 0x074e1e48, 0x8132, 0x47a1, { 0x8c, 0x2c, 0x3f, 0x14, 0xad, 0x9a, 0x66, 0xdc } }; // 074e1e48-8132-47a1-8c2c-3f14ad9a66dc
static EFI_GUID gPpmPlatformPolicyProtocolGuid = { 0xddabfeac, 0xef63, 0x452c, { 0x8f, 0x39, 0xed, 0x7f, 0xae, 0xd8, 0x26, 0x5e } }; // ddabfeac-ef63-452c-8f39-ed7faed8265e
static EFI_GUID gMemInfoProtocolGuid = { 0x6f20f7c8, 0xe5ef, 0x4f21, { 0x8d, 0x19, 0xed, 0xc5, 0xf0, 0xc4, 0x96, 0xae } }; // 6f20f7c8-e5ef-4f21-8d19-edc5f0c496ae
static EFI_GUID gEfiSdHostIoProtocolGuid = { 0xb63f8ec7, 0xa9c9, 0x4472, { 0xa4, 0xc0, 0x4d, 0x8b, 0xf3, 0x65, 0xcc, 0x51 } }; // b63f8ec7-a9c9-4472-a4c0-4d8bf365cc51
static EFI_GUID gEfiSmmSpiProtocolGuid = { 0xd9072c35, 0xeb8f, 0x43ad, { 0xa2, 0x20, 0x34, 0xd4, 0x0e, 0x2a, 0x82, 0x85 } }; // d9072c35-eb8f-43ad-a220-34d40e2a8285
static EFI_GUID gEfiSmmIchnDispatchExProtocolGuid = { 0x3920405b, 0xc897, 0x44da, { 0x88, 0xf3, 0x4c, 0x49, 0x8a, 0x6f, 0xf7, 0x36 } }; // 3920405b-c897-44da-88f3-4c498a6ff736
static EFI_GUID gEfiPchS3SupportProtocolGuid = { 0xe287d20b, 0xd897, 0x4e1e, { 0xa5, 0xd9, 0x97, 0x77, 0x63, 0x93, 0x6a, 0x04 } }; // e287d20b-d897-4e1e-a5d9-977763936a04
static EFI_GUID gPchResetProtocolGuid = { 0xdb63592c, 0xb8cc, 0x44c8, { 0x91, 0x8c, 0x51, 0xf5, 0x34, 0x59, 0x8a, 0x5a } }; // db63592c-b8cc-44c8-918c-51f534598a5a
static EFI_GUID gPchResetCallbackProtocolGuid = { 0x3a3300ab, 0xc929, 0x487d, { 0xab, 0x34, 0x15, 0x9b, 0xc1, 0x35, 0x62, 0xc0 } }; // 3a3300ab-c929-487d-ab34-159bc13562c0
static EFI_GUID gEfiPchInfoProtocolGuid = { 0xd31f0400, 0x7d16, 0x4316, { 0xbf, 0x88, 0x60, 0x65, 0x88, 0x3b, 0x40, 0x2b } }; // d31f0400-7d16-4316-bf88-6065883b402b
static EFI_GUID gEfiPchExtendedResetProtocolGuid = { 0xf0bbfca0, 0x684e, 0x48b3, { 0xba, 0xe2, 0x6c, 0x84, 0xb8, 0x9e, 0x53, 0x39 } }; // f0bbfca0-684e-48b3-bae2-6c84b89e5339
static EFI_GUID gDxeIchPlatformPolicyProtocolGuid = { 0xf617b358, 0x12cf, 0x414a, { 0xa0, 0x69, 0x60, 0x67, 0x7b, 0xda, 0x13, 0xb3 } }; // f617b358-12cf-414a-a069-60677bda13b3
static EFI_GUID gEfiIchInfoProtocolGuid = { 0xd31f0400, 0x7d16, 0x4316, { 0xbf, 0x88, 0x60, 0x65, 0x88, 0x3b, 0x40, 0x2b } }; // d31f0400-7d16-4316-bf88-6065883b402b
static EFI_GUID gEfiSmmIoTrapDispatchProtocolGuid = { 0x58dc368d, 0x7bfa, 0x4e77, { 0xab, 0xbc, 0x0e, 0x29, 0x41, 0x8d, 0xf9, 0x30 } }; // 58dc368d-7bfa-4e77-abbc-0e29418df930
static EFI_GUID gEfiSmmSmbusProtocolGuid = { 0x72e40094, 0x2ee1, 0x497a, { 0x8f, 0x33, 0x4c, 0x93, 0x4a, 0x9e, 0x9c, 0x0c } }; // 72e40094-2ee1-497a-8f33-4c934a9e9c0c
static EFI_GUID gIgdOpRegionProtocolGuid = { 0xcdc5dddf, 0xe79d, 0x41ec, { 0xa9, 0xb0, 0x65, 0x65, 0x49, 0x0d, 0xb9, 0xd3 } }; // cdc5dddf-e79d-41ec-a9b0-6565490db9d3
static EFI_GUID gEfiHeciProtocolGuid = { 0xcfb33810, 0x6e87, 0x4284, { 0xb2, 0x03, 0xa6, 0x6a, 0xbe, 0x07, 0xf6, 0xe8 } }; // cfb33810-6e87-4284-b203-a66abe07f6e8
static EFI_GUID gPlatformSeCHookProtocolGuid = { 0xbc52476e, 0xf67e, 0x4301, { 0xb2, 0x62, 0x36, 0x9c, 0x48, 0x78, 0xaa, 0xc2 } }; // bc52476e-f67e-4301-b262-369c4878aac2
static EFI_GUID gEfiSeCRcInfoProtocolGuid = { 0x11fbfdfb, 0x10d2, 0x43e6, { 0xb5, 0xb1, 0xb4, 0x38, 0x6e, 0xdc, 0xcb, 0x9a } }; // 11fbfdfb-10d2-43e6-b5b1-b4386edccb9a
static EFI_GUID gEfiTdtProtocolGuid = { 0x0bf70067, 0xd53b, 0x42df, { 0xb7, 0x70, 0xe9, 0x2c, 0x91, 0xc6, 0x14, 0x11 } }; // 0bf70067-d53b-42df-b770-e92c91c61411
static EFI_GUID gDxePlatformSeCPolicyGuid = { 0xf8bff014, 0x18fb, 0x4ef9, { 0xb1, 0x0c, 0xae, 0x22, 0x73, 0x8d, 0xbe, 0xed } }; // f8bff014-18fb-4ef9-b10c-ae22738dbeed
static EFI_GUID gEfiEmmcCardInfoProtocolGuid = { 0x1ebe5ab9, 0x2129, 0x49e7, { 0x84, 0xd7, 0xee, 0xb9, 0xfc, 0xe5, 0xde, 0xdd } }; // 1ebe5ab9-2129-49e7-84d7-eeb9fce5dedd
static EFI_GUID gEfiTdtOperationProtocolGuid = { 0xfd301ba4, 0x5e62, 0x4679, { 0xa0, 0x6f, 0xe0, 0x9a, 0xab, 0xdd, 0x2a, 0x91 } }; // fd301ba4-5e62-4679-a06f-e09aabdd2a91
static EFI_GUID gEfiDFUResultGuid = { 0x14a7c46f, 0xbc02, 0x4047, { 0x9f, 0x18, 0xa5, 0xd7, 0x25, 0xd8, 0xbd, 0x19 } }; // 14a7c46f-bc02-4047-9f18-a5d725d8bd19
static EFI_GUID gEfiCPTokenSpaceGuid = { 0x918211ce, 0xa1d2, 0x43a0, { 0xa0, 0x4e, 0x75, 0xb5, 0xbf, 0x44, 0x50, 0x0e } }; // 918211ce-a1d2-43a0-a04e-75b5bf44500e
static EFI_GUID gEfiSmbusArpMapGuid = { 0x707be83e, 0x0bf6, 0x40a5, { 0xbe, 0x64, 0x34, 0xc0, 0x3a, 0xa0, 0xb8, 0xe2 } }; // 707be83e-0bf6-40a5-be64-34c03aa0b8e2
static EFI_GUID gEfiVLVTokenSpaceGuid = { 0xca452c68, 0xdf0c, 0x45c9, { 0x82, 0xfb, 0xea, 0xe4, 0x2b, 0x31, 0x29, 0x46 } }; // ca452c68-df0c-45c9-82fb-eae42b312946
static EFI_GUID gSataControllerDriverGuid = { 0xbb929da9, 0x68f7, 0x4035, { 0xb2, 0x2c, 0xa3, 0xbb, 0x3f, 0x23, 0xda, 0x55 } }; // bb929da9-68f7-4035-b22c-a3bb3f23da55
static EFI_GUID gDxePchPolicyUpdateProtocolGuid = { 0x1a819e49, 0xd8ee, 0x48cb, { 0x9a, 0x9c, 0x0a, 0xa0, 0xd2, 0x81, 0x0a, 0x38 } }; // 1a819e49-d8ee-48cb-9a9c-0aa0d2810a38
static EFI_GUID gPowerManagementAcpiTableStorageGuid = { 0x161be597, 0xe9c5, 0x49db, { 0xae, 0x50, 0xc4, 0x62, 0xab, 0x54, 0xee, 0xda } }; // 161be597-e9c5-49db-ae50-c462ab54eeda
static EFI_GUID gPchInitVariableGuid = { 0xe6c2f70a, 0xb604, 0x4877, { 0x85, 0xba, 0xde, 0xec, 0x89, 0xe1, 0x17, 0xeb } }; // e6c2f70a-b604-4877-85ba-deec89e117eb
static EFI_GUID gVlvRefCodePkgTokenSpaceGuid = { 0x85768e4a, 0x6cdc, 0x444e, { 0x93, 0xdf, 0x93, 0x66, 0x85, 0xb5, 0xdf, 0xcc } }; // 85768e4a-6cdc-444e-93df-936685b5dfcc
static EFI_GUID gSeCPlatformReadyToBootGuid = { 0x03fdf171, 0x1d67, 0x4ace, { 0xa9, 0x04, 0x3e, 0x36, 0xd3, 0x38, 0xfa, 0x74 } }; // 03fdf171-1d67-4ace-a904-3e36d338fa74
static EFI_GUID gAmtReadyToBootGuid = { 0x40b09b5a, 0xf0ef, 0x4627, { 0x93, 0xd5, 0x27, 0xf0, 0x4b, 0x75, 0x4d, 0x05 } }; // 40b09b5a-f0ef-4627-93d5-27f04b754d05
static EFI_GUID gEfiVlv2VariableGuid = { 0x10ba6bbe, 0xa97e, 0x41c3, { 0x9a, 0x07, 0x60, 0x7a, 0xd9, 0xbd, 0x60, 0xe5 } }; // 10ba6bbe-a97e-41c3-9a07-607ad9bd60e5

typedef struct {
	EFI_GUID* guid;
	const char* name;
} guid_name;

static guid_name g_guid_names[]={
{&gAppPkgTokenSpaceGuid, "APP_PKG_TOKEN_SPACE"},
{&gArmJunoTokenSpaceGuid, "ARM_JUNO_TOKEN_SPACE"},
{&gArmTokenSpaceGuid, "ARM_TOKEN_SPACE"},
{&gArmMpCoreInfoGuid, "ARM_MP_CORE_INFO"},
{&gArmMpCoreInfoPpiGuid, "ARM_MP_CORE_INFO_PPI"},
{&gVirtualUncachedPagesProtocolGuid, "VIRTUAL_UNCACHED_PAGES_PROTOCOL"},
{&gArmPlatformTokenSpaceGuid, "ARM_PLATFORM_TOKEN_SPACE"},
{&gVariableRuntimeDxeFileGuid, "VARIABLE_RUNTIME_DXE_FILE"},
{&gArmGlobalVariableGuid, "ARM_GLOBAL_VARIABLE"},
{&gArmBootMonFsFileInfoGuid, "ARM_BOOT_MON_FS_FILE_INFO"},
{&gArmPlatformUpdateFdtEventGuid, "ARM_PLATFORM_UPDATE_FDT_EVENT"},
{&gArmGlobalVariablePpiGuid, "ARM_GLOBAL_VARIABLE_PPI"},
{&gArmRealViewEbPkgTokenSpaceGuid, "ARM_REAL_VIEW_EB_PKG_TOKEN_SPACE"},
{&gArmVExpressTokenSpaceGuid, "ARM_VEXPRESS_TOKEN_SPACE"},
{&gArmVirtualizationTokenSpaceGuid, "ARM_VIRTUALIZATION_TOKEN_SPACE"},
{&gEarlyPL011BaseAddressGuid, "EARLY_PL011_BASE_ADDRESS"},
{&gBeagleBoardTokenSpaceGuid, "BEAGLE_BOARD_TOKEN_SPACE"},
{&gEfiRuntimeCryptProtocolGuid, "EFI_RUNTIME_CRYPT_PROTOCOL"},
{&gEfiPciExpressBaseAddressGuid, "EFI_PCI_EXPRESS_BASE_ADDRESS"},
{&gEfiAcpiDescriptionGuid, "EFI_ACPI_DESCRIPTION"},
{&gEfiFlashMapHobGuid, "EFI_FLASH_MAP_HOB"},
{&gEfiPciOptionRomTableGuid, "EFI_PCI_OPTION_ROM_TABLE"},
{&gDuetConsoleOutConfigGuid, "DUET_CONSOLE_OUT_CONFIG"},
{&gDxeCoreFileNameGuid, "DXE_CORE_FILE_NAME"},
{&gLdrMemoryDescriptorGuid, "LDR_MEMORY_DESCRIPTOR"},
{&gEfiSmmBaseThunkCommunicationGuid, "EFI_SMM_BASE_THUNK_COMMUNICATION"},
{&gEfiBootStateGuid, "EFI_BOOT_STATE"},
{&gEfiEdkCompatibilityPkgTokenSpaceGuid, "EFI_EDK_COMPATIBILITY_PKG_TOKEN_SPACE"},
{&gFrameworkBdsFrontPageFormsetGuid, "FRAMEWORK_BDS_FRONT_PAGE_FORMSET"},
{&gEcpPeiPciCfgPpiGuid, "ECP_PEI_PCI_CFG_PPI"},
{&gEfiPrintProtocolGuid, "EFI_PRINT_PROTOCOL"},
{&gEfiSmmBaseHelperReadyProtocolGuid, "EFI_SMM_BASE_HELPER_READY_PROTOCOL"},
{&gEmbeddedTokenSpaceGuid, "EMBEDDED_TOKEN_SPACE"},
{&gFdtTableGuid, "FDT_TABLE"},
{&gHardwareInterruptProtocolGuid, "HARDWARE_INTERRUPT_PROTOCOL"},
{&gEfiDebugSupportPeriodicCallbackProtocolGuid, "EFI_DEBUG_SUPPORT_PERIODIC_CALLBACK_PROTOCOL"},
{&gEfiEblAddCommandProtocolGuid, "EFI_EBL_ADD_COMMAND_PROTOCOL"},
{&gEmbeddedDeviceGuid, "EMBEDDED_DEVICE"},
{&gEmbeddedExternalDeviceProtocolGuid, "EMBEDDED_EXTERNAL_DEVICE_PROTOCOL"},
{&gEmbeddedGpioProtocolGuid, "EMBEDDED_GPIO_PROTOCOL"},
{&gPeCoffLoaderProtocolGuid, "PE_COFF_LOADER_PROTOCOL"},
{&gEfiMmcHostProtocolGuid, "EFI_MMC_HOST_PROTOCOL"},
{&gAndroidFastbootTransportProtocolGuid, "ANDROID_FASTBOOT_TRANSPORT_PROTOCOL"},
{&gAndroidFastbootPlatformProtocolGuid, "ANDROID_FASTBOOT_PLATFORM_PROTOCOL"},
{&gUsbDeviceProtocolGuid, "USB_DEVICE_PROTOCOL"},
{&gEmuThunkProtocolGuid, "EMU_THUNK_PROTOCOL"},
{&gEmuIoThunkProtocolGuid, "EMU_IO_THUNK_PROTOCOL"},
{&gEmuGraphicsWindowProtocolGuid, "EMU_GRAPHICS_WINDOW_PROTOCOL"},
{&gEmuThreadThunkProtocolGuid, "EMU_THREAD_THUNK_PROTOCOL"},
{&gEmuBlockIoProtocolGuid, "EMU_BLOCK_IO_PROTOCOL"},
{&gEmuSnpProtocolGuid, "EMU_SNP_PROTOCOL"},
{&gEmuThunkPpiGuid, "EMU_THUNK_PPI"},
{&gEmulatorPkgTokenSpaceGuid, "EMULATOR_PKG_TOKEN_SPACE"},
{&gEmuSystemConfigGuid, "EMU_SYSTEM_CONFIG"},
{&gEmuVirtualDisksGuid, "EMU_VIRTUAL_DISKS"},
{&gEmuPhysicalDisksGuid, "EMU_PHYSICAL_DISKS"},
{&gEfiIntelFrameworkModulePkgTokenSpaceGuid, "EFI_INTEL_FRAMEWORK_MODULE_PKG_TOKEN_SPACE"},
{&gEfiDataHubStatusCodeRecordGuid, "EFI_DATA_HUB_STATUS_CODE_RECORD"},
{&gTianoCustomDecompressGuid, "TIANO_CUSTOM_DECOMPRESS"},
{&gLzmaCustomDecompressGuid, "LZMA_CUSTOM_DECOMPRESS"},
{&gLzmaF86CustomDecompressGuid, "LZMA_F86_CUSTOM_DECOMPRESS"},
{&gEfiAcpiVariableCompatiblityGuid, "EFI_ACPI_VARIABLE_COMPATIBLITY"},
{&gEfiLegacyBiosGuid, "EFI_LEGACY_BIOS"},
{&gEfiLegacyDevOrderVariableGuid, "EFI_LEGACY_DEV_ORDER_VARIABLE"},
{&gEfiUpdateDataFileGuid, "EFI_UPDATE_DATA_FILE"},
{&gBlockIoVendorGuid, "BLOCK_IO_VENDOR"},
{&gFrontPageFormSetGuid, "FRONT_PAGE_FORM_SET"},
{&gBootManagerFormSetGuid, "BOOT_MANAGER_FORM_SET"},
{&gDeviceManagerFormSetGuid, "DEVICE_MANAGER_FORM_SET"},
{&gDriverHealthFormSetGuid, "DRIVER_HEALTH_FORM_SET"},
{&gBootMaintFormSetGuid, "BOOT_MAINT_FORM_SET"},
{&gFileExploreFormSetGuid, "FILE_EXPLORE_FORM_SET"},
{&gBdsLibStringPackageGuid, "BDS_LIB_STRING_PACKAGE"},
{&gLastEnumLangGuid, "LAST_ENUM_LANG"},
{&gHdBootDevicePathVariablGuid, "HD_BOOT_DEVICE_PATH_VARIABL"},
{&gEfiVgaMiniPortProtocolGuid, "EFI_VGA_MINI_PORT_PROTOCOL"},
{&gEfiIsaIoProtocolGuid, "EFI_ISA_IO_PROTOCOL"},
{&gEfiIsaAcpiProtocolGuid, "EFI_ISA_ACPI_PROTOCOL"},
{&gEfiPs2PolicyProtocolGuid, "EFI_PS2_POLICY_PROTOCOL"},
{&gEfiOEMBadgingProtocolGuid, "EFI_OEMBADGING_PROTOCOL"},
{&gExitPmAuthProtocolGuid, "EXIT_PM_AUTH_PROTOCOL"},
{&gEfiCacheSubClassGuid, "EFI_CACHE_SUB_CLASS"},
{&gEfiMemorySubClassGuid, "EFI_MEMORY_SUB_CLASS"},
{&gEfiMiscSubClassGuid, "EFI_MISC_SUB_CLASS"},
{&gEfiProcessorSubClassGuid, "EFI_PROCESSOR_SUB_CLASS"},
{&gEfiCapsuleGuid, "EFI_CAPSULE"},
{&gEfiConfigFileNameGuid, "EFI_CONFIG_FILE_NAME"},
{&gEfiSmmPeiSmramMemoryReserveGuid, "EFI_SMM_PEI_SMRAM_MEMORY_RESERVE"},
{&gSmmCommunicateHeaderGuid, "SMM_COMMUNICATE_HEADER"},
{&gEfiFirmwareFileSystemGuid, "EFI_FIRMWARE_FILE_SYSTEM"},
{&gEfiPeiIdeBlockIoPpiGuid, "EFI_PEI_IDE_BLOCK_IO_PPI"},
{&gEfiPei144FloppyBlockIoPpiGuid, "EFI_PEI144_FLOPPY_BLOCK_IO_PPI"},
{&gEfiPeiBootScriptExecuterPpiGuid, "EFI_PEI_BOOT_SCRIPT_EXECUTER_PPI"},
{&gEfiPeiSecurityPpiGuid, "EFI_PEI_SECURITY_PPI"},
{&gEfiPeiSmbusPpiGuid, "EFI_PEI_SMBUS_PPI"},
{&gEfiPciCfgPpiInServiceTableGuid, "EFI_PCI_CFG_PPI_IN_SERVICE_TABLE"},
{&gEfiPeiReadOnlyVariablePpiGuid, "EFI_PEI_READ_ONLY_VARIABLE_PPI"},
{&gEfiPeiSectionExtractionPpiGuid, "EFI_PEI_SECTION_EXTRACTION_PPI"},
{&gEfiPeiFvFileLoaderPpiGuid, "EFI_PEI_FV_FILE_LOADER_PPI"},
{&gEfiFindFvPpiGuid, "EFI_FIND_FV_PPI"},
{&gEfiPeiS3ResumePpiGuid, "EFI_PEI_S3_RESUME_PPI"},
{&gEfiAcpiS3SaveProtocolGuid, "EFI_ACPI_S3_SAVE_PROTOCOL"},
{&gEfiAcpiSupportProtocolGuid, "EFI_ACPI_SUPPORT_PROTOCOL"},
{&gEfiBootScriptSaveProtocolGuid, "EFI_BOOT_SCRIPT_SAVE_PROTOCOL"},
{&gEfiLegacyBiosProtocolGuid, "EFI_LEGACY_BIOS_PROTOCOL"},
{&gEfiLegacyBiosPlatformProtocolGuid, "EFI_LEGACY_BIOS_PLATFORM_PROTOCOL"},
{&gEfiLegacyInterruptProtocolGuid, "EFI_LEGACY_INTERRUPT_PROTOCOL"},
{&gEfiLegacyRegionProtocolGuid, "EFI_LEGACY_REGION_PROTOCOL"},
{&gEfiLegacy8259ProtocolGuid, "EFI_LEGACY8259_PROTOCOL"},
{&gEfiCpuIoProtocolGuid, "EFI_CPU_IO_PROTOCOL"},
{&gEfiDataHubProtocolGuid, "EFI_DATA_HUB_PROTOCOL"},
{&gEfiFirmwareVolumeProtocolGuid, "EFI_FIRMWARE_VOLUME_PROTOCOL"},
{&gEfiSectionExtractionProtocolGuid, "EFI_SECTION_EXTRACTION_PROTOCOL"},
{&gEfiHiiProtocolGuid, "EFI_HII_PROTOCOL"},
{&gEfiHiiCompatibilityProtocolGuid, "EFI_HII_COMPATIBILITY_PROTOCOL"},
{&gFrameworkEfiMpServiceProtocolGuid, "FRAMEWORK_EFI_MP_SERVICE_PROTOCOL"},
{&gEfiSmmBaseProtocolGuid, "EFI_SMM_BASE_PROTOCOL"},
{&gEfiSmmAccessProtocolGuid, "EFI_SMM_ACCESS_PROTOCOL"},
{&gEfiSmmControlProtocolGuid, "EFI_SMM_CONTROL_PROTOCOL"},
{&gEfiSmmSwDispatchProtocolGuid, "EFI_SMM_SW_DISPATCH_PROTOCOL"},
{&gEfiSmmSxDispatchProtocolGuid, "EFI_SMM_SX_DISPATCH_PROTOCOL"},
{&gEfiSmmPeriodicTimerDispatchProtocolGuid, "EFI_SMM_PERIODIC_TIMER_DISPATCH_PROTOCOL"},
{&gEfiSmmUsbDispatchProtocolGuid, "EFI_SMM_USB_DISPATCH_PROTOCOL"},
{&gEfiSmmGpiDispatchProtocolGuid, "EFI_SMM_GPI_DISPATCH_PROTOCOL"},
{&gEfiSmmStandbyButtonDispatchProtocolGuid, "EFI_SMM_STANDBY_BUTTON_DISPATCH_PROTOCOL"},
{&gEfiSmmPowerButtonDispatchProtocolGuid, "EFI_SMM_POWER_BUTTON_DISPATCH_PROTOCOL"},
{&gEfiSmmIchnDispatchProtocolGuid, "EFI_SMM_ICHN_DISPATCH_PROTOCOL"},
{&gEfiSmmCpuIoGuid, "EFI_SMM_CPU_IO"},
{&gEfiFormCallbackProtocolGuid, "EFI_FORM_CALLBACK_PROTOCOL"},
{&gEfiFormBrowserProtocolGuid, "EFI_FORM_BROWSER_PROTOCOL"},
{&gEfiFormBrowserCompatibilityProtocolGuid, "EFI_FORM_BROWSER_COMPATIBILITY_PROTOCOL"},
{&gFramerworkEfiFirmwareVolumeBlockProtocolGuid, "FRAMERWORK_EFI_FIRMWARE_VOLUME_BLOCK_PROTOCOL"},
{&gEfiSmmCpuSaveStateProtocolGuid, "EFI_SMM_CPU_SAVE_STATE_PROTOCOL"},
{&gIntelFspPkgTokenSpaceGuid, "INTEL_FSP_PKG_TOKEN_SPACE"},
{&gFspHeaderFileGuid, "FSP_HEADER_FILE"},
{&gFspBootLoaderTemporaryMemoryGuid, "FSP_BOOT_LOADER_TEMPORARY_MEMORY"},
{&gFspReservedMemoryResourceHobGuid, "FSP_RESERVED_MEMORY_RESOURCE_HOB"},
{&gFspNonVolatileStorageHobGuid, "FSP_NON_VOLATILE_STORAGE_HOB"},
{&gFspReservedMemoryResourceHobTsegGuid, "FSP_RESERVED_MEMORY_RESOURCE_HOB_TSEG"},
{&gFspReservedMemoryResourceHobGfxGuid, "FSP_RESERVED_MEMORY_RESOURCE_HOB_GFX"},
{&gFspReservedMemoryResourceHobMiscGuid, "FSP_RESERVED_MEMORY_RESOURCE_HOB_MISC"},
{&gFspWrapperTokenSpaceGuid, "FSP_WRAPPER_TOKEN_SPACE"},
{&gFspInitDonePpiGuid, "FSP_INIT_DONE_PPI"},
{&gTopOfTemporaryRamPpiGuid, "TOP_OF_TEMPORARY_RAM_PPI"},
{&gEfiMdeModulePkgTokenSpaceGuid, "EFI_MDE_MODULE_PKG_TOKEN_SPACE"},
{&gPcdDataBaseHobGuid, "PCD_DATA_BASE_HOB"},
{&gPcdDataBaseSignatureGuid, "PCD_DATA_BASE_SIGNATURE"},
{&gEfiIfrTianoGuid, "EFI_IFR_TIANO"},
{&gEfiIfrFrameworkGuid, "EFI_IFR_FRAMEWORK"},
{&gEfiSystemNvDataFvGuid, "EFI_SYSTEM_NV_DATA_FV"},
{&gEdkiiWorkingBlockSignatureGuid, "EDKII_WORKING_BLOCK_SIGNATURE"},
{&gEdkiiFaultTolerantWriteGuid, "EDKII_FAULT_TOLERANT_WRITE"},
{&gEfiConsoleOutDeviceGuid, "EFI_CONSOLE_OUT_DEVICE"},
{&gEfiConsoleInDeviceGuid, "EFI_CONSOLE_IN_DEVICE"},
{&gEfiMemoryTypeInformationGuid, "EFI_MEMORY_TYPE_INFORMATION"},
{&gEfiCapsuleVendorGuid, "EFI_CAPSULE_VENDOR"},
{&gEfiStandardErrorDeviceGuid, "EFI_STANDARD_ERROR_DEVICE"},
{&gEfiVariableGuid, "EFI_VARIABLE"},
{&gEfiVariableIndexTableGuid, "EFI_VARIABLE_INDEX_TABLE"},
{&gSmmVariableWriteGuid, "SMM_VARIABLE_WRITE"},
{&gPerformanceProtocolGuid, "PERFORMANCE_PROTOCOL"},
{&gSmmPerformanceProtocolGuid, "SMM_PERFORMANCE_PROTOCOL"},
{&gPerformanceExProtocolGuid, "PERFORMANCE_EX_PROTOCOL"},
{&gSmmPerformanceExProtocolGuid, "SMM_PERFORMANCE_EX_PROTOCOL"},
{&gEfiCrc32GuidedSectionExtractionGuid, "EFI_CRC32_GUIDED_SECTION_EXTRACTION"},
{&gEfiNicIp4ConfigVariableGuid, "EFI_NIC_IP4_CONFIG_VARIABLE"},
{&gStatusCodeCallbackGuid, "STATUS_CODE_CALLBACK"},
{&gMemoryStatusCodeRecordGuid, "MEMORY_STATUS_CODE_RECORD"},
{&gEfiStatusCodeDataTypeDebugGuid, "EFI_STATUS_CODE_DATA_TYPE_DEBUG"},
{&gLoadFixedAddressConfigurationTableGuid, "LOAD_FIXED_ADDRESS_CONFIGURATION_TABLE"},
{&gEfiGenericVariableGuid, "EFI_GENERIC_VARIABLE"},
{&gIdleLoopEventGuid, "IDLE_LOOP_EVENT"},
{&gRecoveryOnFatUsbDiskGuid, "RECOVERY_ON_FAT_USB_DISK"},
{&gRecoveryOnFatIdeDiskGuid, "RECOVERY_ON_FAT_IDE_DISK"},
{&gRecoveryOnFatFloppyDiskGuid, "RECOVERY_ON_FAT_FLOPPY_DISK"},
{&gRecoveryOnDataCdGuid, "RECOVERY_ON_DATA_CD"},
{&gEfiSmmLockBoxCommunicationGuid, "EFI_SMM_LOCK_BOX_COMMUNICATION"},
{&gEfiAcpiVariableGuid, "EFI_ACPI_VARIABLE"},
{&gEfiAcpiS3ContextGuid, "EFI_ACPI_S3_CONTEXT"},
{&gEfiBootScriptExecutorVariableGuid, "EFI_BOOT_SCRIPT_EXECUTOR_VARIABLE"},
{&gEfiBootScriptExecutorContextGuid, "EFI_BOOT_SCRIPT_EXECUTOR_CONTEXT"},
{&gUsbKeyboardLayoutPackageGuid, "USB_KEYBOARD_LAYOUT_PACKAGE"},
{&gUsbKeyboardLayoutKeyGuid, "USB_KEYBOARD_LAYOUT_KEY"},
{&gHiiResourceSamleFormSetGuid, "HII_RESOURCE_SAMLE_FORM_SET"},
{&gDriverSampleFormSetGuid, "DRIVER_SAMPLE_FORM_SET"},
{&gDriverSampleInventoryGuid, "DRIVER_SAMPLE_INVENTORY"},
{&gEfiIfrRefreshIdOpGuid, "EFI_IFR_REFRESH_ID_OP"},
{&gPlatformOverridesManagerGuid, "PLATFORM_OVERRIDES_MANAGER"},
{&gNicIp4ConfigNvDataGuid, "NIC_IP4_CONFIG_NV_DATA"},
{&gVlanConfigFormSetGuid, "VLAN_CONFIG_FORM_SET"},
{&gIp4IScsiConfigGuid, "IP4_ISCSI_CONFIG"},
{&gIScsiCHAPAuthInfoGuid, "ISCSI_CHAPAUTH_INFO"},
{&gZeroGuid, "ZERO"},
{&gMtcVendorGuid, "MTC_VENDOR"},
{&gEfiFirmwarePerformanceGuid, "EFI_FIRMWARE_PERFORMANCE"},
{&gFirmwarePerformanceS3PointerGuid, "FIRMWARE_PERFORMANCE_S3_POINTER"},
{&gEventExitBootServicesFailedGuid, "EVENT_EXIT_BOOT_SERVICES_FAILED"},
{&gConnectConInEventGuid, "CONNECT_CON_IN_EVENT"},
{&gEdkiiStatusCodeDataTypeVariableGuid, "EDKII_STATUS_CODE_DATA_TYPE_VARIABLE"},
{&gEdkiiMemoryProfileGuid, "EDKII_MEMORY_PROFILE"},
{&gEdkiiVarErrorFlagGuid, "EDKII_VAR_ERROR_FLAG"},
{&gPeiAtaControllerPpiGuid, "PEI_ATA_CONTROLLER_PPI"},
{&gPeiUsbHostControllerPpiGuid, "PEI_USB_HOST_CONTROLLER_PPI"},
{&gPeiUsb2HostControllerPpiGuid, "PEI_USB2_HOST_CONTROLLER_PPI"},
{&gPeiUsbControllerPpiGuid, "PEI_USB_CONTROLLER_PPI"},
{&gPeiUsbIoPpiGuid, "PEI_USB_IO_PPI"},
{&gPeiCapsulePpiGuid, "PEI_CAPSULE_PPI"},
{&gPeiSecPerformancePpiGuid, "PEI_SEC_PERFORMANCE_PPI"},
{&gEfiPeiSmmCommunicationPpiGuid, "EFI_PEI_SMM_COMMUNICATION_PPI"},
{&gPeiSmmAccessPpiGuid, "PEI_SMM_ACCESS_PPI"},
{&gPeiSmmControlPpiGuid, "PEI_SMM_CONTROL_PPI"},
{&gPeiPostScriptTablePpiGuid, "PEI_POST_SCRIPT_TABLE_PPI"},
{&gPeiSerialPortPpiGuid, "PEI_SERIAL_PORT_PPI"},
{&gEfiLoadPeImageProtocolGuid, "EFI_LOAD_PE_IMAGE_PROTOCOL"},
{&gEfiPrint2ProtocolGuid, "EFI_PRINT2_PROTOCOL"},
{&gEfiGenericMemTestProtocolGuid, "EFI_GENERIC_MEM_TEST_PROTOCOL"},
{&gEfiDpcProtocolGuid, "EFI_DPC_PROTOCOL"},
{&gEfiFaultTolerantWriteProtocolGuid, "EFI_FAULT_TOLERANT_WRITE_PROTOCOL"},
{&gEfiSmmFaultTolerantWriteProtocolGuid, "EFI_SMM_FAULT_TOLERANT_WRITE_PROTOCOL"},
{&gEfiSwapAddressRangeProtocolGuid, "EFI_SWAP_ADDRESS_RANGE_PROTOCOL"},
{&gEfiSmmSwapAddressRangeProtocolGuid, "EFI_SMM_SWAP_ADDRESS_RANGE_PROTOCOL"},
{&gEfiSmmVariableProtocolGuid, "EFI_SMM_VARIABLE_PROTOCOL"},
{&gEdkiiVariableLockProtocolGuid, "EDKII_VARIABLE_LOCK_PROTOCOL"},
{&gEdkiiVarCheckProtocolGuid, "EDKII_VAR_CHECK_PROTOCOL"},
{&gEdkiiSmmVarCheckProtocolGuid, "EDKII_SMM_VAR_CHECK_PROTOCOL"},
{&gEfiSmmFirmwareVolumeBlockProtocolGuid, "EFI_SMM_FIRMWARE_VOLUME_BLOCK_PROTOCOL"},
{&gEfiDebugMaskProtocolGuid, "EFI_DEBUG_MASK_PROTOCOL"},
{&gEfiLockBoxProtocolGuid, "EFI_LOCK_BOX_PROTOCOL"},
{&gEfiFormBrowserExProtocolGuid, "EFI_FORM_BROWSER_EX_PROTOCOL"},
{&gEfiEbcVmTestProtocolGuid, "EFI_EBC_VM_TEST_PROTOCOL"},
{&gEfiEbcSimpleDebuggerProtocolGuid, "EFI_EBC_SIMPLE_DEBUGGER_PROTOCOL"},
{&gEfiBootLogoProtocolGuid, "EFI_BOOT_LOGO_PROTOCOL"},
{&gEdkiiFormDisplayEngineProtocolGuid, "EDKII_FORM_DISPLAY_ENGINE_PROTOCOL"},
{&gEdkiiFormBrowserEx2ProtocolGuid, "EDKII_FORM_BROWSER_EX2_PROTOCOL"},
{&gEfiGlobalVariableGuid, "EFI_GLOBAL_VARIABLE"},
{&gEfiVT100PlusGuid, "EFI_VT100_PLUS"},
{&gEfiVT100Guid, "EFI_VT100"},
{&gEfiPcAnsiGuid, "EFI_PC_ANSI"},
{&gEfiVTUTF8Guid, "EFI_VTUTF8"},
{&gEfiUartDevicePathGuid, "EFI_UART_DEVICE_PATH"},
{&gEfiSasDevicePathGuid, "EFI_SAS_DEVICE_PATH"},
{&gEfiPartTypeLegacyMbrGuid, "EFI_PART_TYPE_LEGACY_MBR"},
{&gEfiPartTypeSystemPartGuid, "EFI_PART_TYPE_SYSTEM_PART"},
{&gEfiPartTypeUnusedGuid, "EFI_PART_TYPE_UNUSED"},
{&gEfiDebugImageInfoTableGuid, "EFI_DEBUG_IMAGE_INFO_TABLE"},
{&gEfiAcpiTableGuid, "EFI_ACPI_TABLE"},
{&gEfiAcpi20TableGuid, "EFI_ACPI20_TABLE"},
{&gEfiAcpi10TableGuid, "EFI_ACPI10_TABLE"},
{&gEfiSmbiosTableGuid, "EFI_SMBIOS_TABLE"},
{&gEfiMpsTableGuid, "EFI_MPS_TABLE"},
{&gEfiSalSystemTableGuid, "EFI_SAL_SYSTEM_TABLE"},
{&gEfiAuthenticationChapLocalGuid, "EFI_AUTHENTICATION_CHAP_LOCAL"},
{&gEfiAuthenticationChapRadiusGuid, "EFI_AUTHENTICATION_CHAP_RADIUS"},
{&gEfiFileSystemVolumeLabelInfoIdGuid, "EFI_FILE_SYSTEM_VOLUME_LABEL_INFO_ID"},
{&gEfiFileSystemInfoGuid, "EFI_FILE_SYSTEM_INFO"},
{&gEfiFileInfoGuid, "EFI_FILE_INFO"},
{&gBootObjectAuthorizationParmsetGuid, "BOOT_OBJECT_AUTHORIZATION_PARMSET"},
{&gEfiPlatformToDriverConfigurationClpGuid, "EFI_PLATFORM_TO_DRIVER_CONFIGURATION_CLP"},
{&gEfiHiiKeyBoardLayoutGuid, "EFI_HII_KEY_BOARD_LAYOUT"},
{&gEfiHashAlgorithmMD5Guid, "EFI_HASH_ALGORITHM_MD5"},
{&gEfiHashAlgorithmSha512Guid, "EFI_HASH_ALGORITHM_SHA512"},
{&gEfiHashAlgorithmSha384Guid, "EFI_HASH_ALGORITHM_SHA384"},
{&gEfiHashAlgorithmSha256Guid, "EFI_HASH_ALGORITHM_SHA256"},
{&gEfiHashAlgorithmSha224Guid, "EFI_HASH_ALGORITHM_SHA224"},
{&gEfiHashAlgorithmSha1Guid, "EFI_HASH_ALGORITHM_SHA1"},
{&gEfiEventReadyToBootGuid, "EFI_EVENT_READY_TO_BOOT"},
{&gEfiEventMemoryMapChangeGuid, "EFI_EVENT_MEMORY_MAP_CHANGE"},
{&gEfiEventVirtualAddressChangeGuid, "EFI_EVENT_VIRTUAL_ADDRESS_CHANGE"},
{&gEfiEventExitBootServicesGuid, "EFI_EVENT_EXIT_BOOT_SERVICES"},
{&gEfiDebugPortVariableGuid, "EFI_DEBUG_PORT_VARIABLE"},
{&gEfiDebugPortDevicePathGuid, "EFI_DEBUG_PORT_DEVICE_PATH"},
{&gEfiHiiPlatformSetupFormsetGuid, "EFI_HII_PLATFORM_SETUP_FORMSET"},
{&gEfiHiiDriverHealthFormsetGuid, "EFI_HII_DRIVER_HEALTH_FORMSET"},
{&gEfiHiiUserCredentialFormsetGuid, "EFI_HII_USER_CREDENTIAL_FORMSET"},
{&gEfiHiiStandardFormGuid, "EFI_HII_STANDARD_FORM"},
{&gEfiMemoryOverwriteControlDataGuid, "EFI_MEMORY_OVERWRITE_CONTROL_DATA"},
{&gEfiCertTypeRsa2048Sha256Guid, "EFI_CERT_TYPE_RSA2048_SHA256"},
{&gEfiEventNotificationTypeCmcGuid, "EFI_EVENT_NOTIFICATION_TYPE_CMC"},
{&gEfiEventNotificationTypeCpeGuid, "EFI_EVENT_NOTIFICATION_TYPE_CPE"},
{&gEfiEventNotificationTypeMceGuid, "EFI_EVENT_NOTIFICATION_TYPE_MCE"},
{&gEfiEventNotificationTypePcieGuid, "EFI_EVENT_NOTIFICATION_TYPE_PCIE"},
{&gEfiEventNotificationTypeInitGuid, "EFI_EVENT_NOTIFICATION_TYPE_INIT"},
{&gEfiEventNotificationTypeNmiGuid, "EFI_EVENT_NOTIFICATION_TYPE_NMI"},
{&gEfiEventNotificationTypeBootGuid, "EFI_EVENT_NOTIFICATION_TYPE_BOOT"},
{&gEfiEventNotificationTypeDmarGuid, "EFI_EVENT_NOTIFICATION_TYPE_DMAR"},
{&gEfiProcessorGenericErrorSectionGuid, "EFI_PROCESSOR_GENERIC_ERROR_SECTION"},
{&gEfiProcessorSpecificErrorSectionGuid, "EFI_PROCESSOR_SPECIFIC_ERROR_SECTION"},
{&gEfiPlatformMemoryErrorSectionGuid, "EFI_PLATFORM_MEMORY_ERROR_SECTION"},
{&gEfiPcieErrorSectionGuid, "EFI_PCIE_ERROR_SECTION"},
{&gEfiFirmwareErrorSectionGuid, "EFI_FIRMWARE_ERROR_SECTION"},
{&gEfiPciBusErrorSectionGuid, "EFI_PCI_BUS_ERROR_SECTION"},
{&gEfiPciDevErrorSectionGuid, "EFI_PCI_DEV_ERROR_SECTION"},
{&gEfiDMArGenericErrorSectionGuid, "EFI_DMAR_GENERIC_ERROR_SECTION"},
{&gEfiDirectedIoDMArErrorSectionGuid, "EFI_DIRECTED_IO_DMAR_ERROR_SECTION"},
{&gEfiIommuDMArErrorSectionGuid, "EFI_IOMMU_DMAR_ERROR_SECTION"},
{&gEfiEventUserProfileChangedGuid, "EFI_EVENT_USER_PROFILE_CHANGED"},
{&gEfiUserCredentialClassUnknownGuid, "EFI_USER_CREDENTIAL_CLASS_UNKNOWN"},
{&gEfiUserCredentialClassPasswordGuid, "EFI_USER_CREDENTIAL_CLASS_PASSWORD"},
{&gEfiUserCredentialClassSmartCardGuid, "EFI_USER_CREDENTIAL_CLASS_SMART_CARD"},
{&gEfiUserCredentialClassFingerprintGuid, "EFI_USER_CREDENTIAL_CLASS_FINGERPRINT"},
{&gEfiUserCredentialClassHandprintGuid, "EFI_USER_CREDENTIAL_CLASS_HANDPRINT"},
{&gEfiUserCredentialClassSecureCardGuid, "EFI_USER_CREDENTIAL_CLASS_SECURE_CARD"},
{&gEfiUserInfoAccessSetupAdminGuid, "EFI_USER_INFO_ACCESS_SETUP_ADMIN"},
{&gEfiUserInfoAccessSetupNormalGuid, "EFI_USER_INFO_ACCESS_SETUP_NORMAL"},
{&gEfiUserInfoAccessSetupRestrictedGuid, "EFI_USER_INFO_ACCESS_SETUP_RESTRICTED"},
{&gEfiImageSecurityDatabaseGuid, "EFI_IMAGE_SECURITY_DATABASE"},
{&gEfiCertSha256Guid, "EFI_CERT_SHA256"},
{&gEfiCertRsa2048Guid, "EFI_CERT_RSA2048"},
{&gEfiCertRsa2048Sha256Guid, "EFI_CERT_RSA2048_SHA256"},
{&gEfiCertSha1Guid, "EFI_CERT_SHA1"},
{&gEfiCertRsa2048Sha1Guid, "EFI_CERT_RSA2048_SHA1"},
{&gEfiCertX509Guid, "EFI_CERT_X509"},
{&gEfiKmsFormatGeneric128Guid, "EFI_KMS_FORMAT_GENERIC128"},
{&gEfiKmsFormatGeneric160Guid, "EFI_KMS_FORMAT_GENERIC160"},
{&gEfiKmsFormatGeneric256Guid, "EFI_KMS_FORMAT_GENERIC256"},
{&gEfiKmsFormatGeneric512Guid, "EFI_KMS_FORMAT_GENERIC512"},
{&gEfiKmsFormatGeneric1024Guid, "EFI_KMS_FORMAT_GENERIC1024"},
{&gEfiKmsFormatGeneric2048Guid, "EFI_KMS_FORMAT_GENERIC2048"},
{&gEfiKmsFormatGeneric3072Guid, "EFI_KMS_FORMAT_GENERIC3072"},
{&gEfiKmsFormatMd2128Guid, "EFI_KMS_FORMAT_MD2128"},
{&gEfiKmsFormatMdc2128Guid, "EFI_KMS_FORMAT_MDC2128"},
{&gEfiKmsFormatMd4128Guid, "EFI_KMS_FORMAT_MD4128"},
{&gEfiKmsFormatMdc4128Guid, "EFI_KMS_FORMAT_MDC4128"},
{&gEfiKmsFormatMd5128Guid, "EFI_KMS_FORMAT_MD5128"},
{&gEfiKmsFormatMd5sha128Guid, "EFI_KMS_FORMAT_MD5SHA128"},
{&gEfiKmsFormatSha1160Guid, "EFI_KMS_FORMAT_SHA1160"},
{&gEfiKmsFormatSha256256Guid, "EFI_KMS_FORMAT_SHA256256"},
{&gEfiKmsFormatSha512512Guid, "EFI_KMS_FORMAT_SHA512512"},
{&gEfiKmsFormatAesxts128Guid, "EFI_KMS_FORMAT_AESXTS128"},
{&gEfiKmsFormatAesxts256Guid, "EFI_KMS_FORMAT_AESXTS256"},
{&gEfiKmsFormatAescbc128Guid, "EFI_KMS_FORMAT_AESCBC128"},
{&gEfiKmsFormatAescbc256Guid, "EFI_KMS_FORMAT_AESCBC256"},
{&gEfiKmsFormatRsasha11024Guid, "EFI_KMS_FORMAT_RSASHA11024"},
{&gEfiKmsFormatRsasha12048Guid, "EFI_KMS_FORMAT_RSASHA12048"},
{&gEfiKmsFormatRsasha2562048Guid, "EFI_KMS_FORMAT_RSASHA2562048"},
{&gEfiKmsFormatRsasha2563072Guid, "EFI_KMS_FORMAT_RSASHA2563072"},
{&gEfiCertSha224Guid, "EFI_CERT_SHA224"},
{&gEfiCertSha384Guid, "EFI_CERT_SHA384"},
{&gEfiCertSha512Guid, "EFI_CERT_SHA512"},
{&gEfiCertPkcs7Guid, "EFI_CERT_PKCS7"},
{&gEfiHashAlgorithmSha1NoPadGuid, "EFI_HASH_ALGORITHM_SHA1_NO_PAD"},
{&gEfiHashAlgorithmSha256NoPadGuid, "EFI_HASH_ALGORITHM_SHA256_NO_PAD"},
{&gEfiFmpCapsuleGuid, "EFI_FMP_CAPSULE"},
{&gEfiCertX509Sha256Guid, "EFI_CERT_X509_SHA256"},
{&gEfiCertX509Sha384Guid, "EFI_CERT_X509_SHA384"},
{&gEfiCertX509Sha512Guid, "EFI_CERT_X509_SHA512"},
{&gEfiRngAlgorithmSp80090Hash256Guid, "EFI_RNG_ALGORITHM_SP80090_HASH256"},
{&gEfiRngAlgorithmSp80090Hmac256Guid, "EFI_RNG_ALGORITHM_SP80090_HMAC256"},
{&gEfiRngAlgorithmSp80090Ctr256Guid, "EFI_RNG_ALGORITHM_SP80090_CTR256"},
{&gEfiRngAlgorithmX9313DesGuid, "EFI_RNG_ALGORITHM_X9313_DES"},
{&gEfiRngAlgorithmX931AesGuid, "EFI_RNG_ALGORITHM_X931_AES"},
{&gEfiAdapterInfoMediaStateGuid, "EFI_ADAPTER_INFO_MEDIA_STATE"},
{&gEfiAdapterInfoNetworkBootGuid, "EFI_ADAPTER_INFO_NETWORK_BOOT"},
{&gEfiAdapterInfoSanMacAddressGuid, "EFI_ADAPTER_INFO_SAN_MAC_ADDRESS"},
{&gAprioriGuid, "APRIORI"},
{&gEfiFirmwareFileSystem2Guid, "EFI_FIRMWARE_FILE_SYSTEM2"},
{&gEfiFirmwareVolumeTopFileGuid, "EFI_FIRMWARE_VOLUME_TOP_FILE"},
{&gEfiHobMemoryAllocModuleGuid, "EFI_HOB_MEMORY_ALLOC_MODULE"},
{&gEfiHobMemoryAllocStackGuid, "EFI_HOB_MEMORY_ALLOC_STACK"},
{&gEfiHobMemoryAllocBspStoreGuid, "EFI_HOB_MEMORY_ALLOC_BSP_STORE"},
{&gEfiEventLegacyBootGuid, "EFI_EVENT_LEGACY_BOOT"},
{&gEfiHobListGuid, "EFI_HOB_LIST"},
{&gEfiDxeServicesTableGuid, "EFI_DXE_SERVICES_TABLE"},
{&gEfiMdePkgTokenSpaceGuid, "EFI_MDE_PKG_TOKEN_SPACE"},
{&gEfiHardwareErrorVariableGuid, "EFI_HARDWARE_ERROR_VARIABLE"},
{&gEfiEventDxeDispatchGuid, "EFI_EVENT_DXE_DISPATCH"},
{&gEfiDiskInfoIdeInterfaceGuid, "EFI_DISK_INFO_IDE_INTERFACE"},
{&gEfiDiskInfoScsiInterfaceGuid, "EFI_DISK_INFO_SCSI_INTERFACE"},
{&gEfiDiskInfoUsbInterfaceGuid, "EFI_DISK_INFO_USB_INTERFACE"},
{&gEfiDiskInfoAhciInterfaceGuid, "EFI_DISK_INFO_AHCI_INTERFACE"},
{&gEfiStatusCodeDataTypeStringGuid, "EFI_STATUS_CODE_DATA_TYPE_STRING"},
{&gEfiStatusCodeSpecificDataGuid, "EFI_STATUS_CODE_SPECIFIC_DATA"},
{&gEfiFirmwareFileSystem3Guid, "EFI_FIRMWARE_FILE_SYSTEM3"},
{&gEfiEndOfDxeEventGroupGuid, "EFI_END_OF_DXE_EVENT_GROUP"},
{&gEfiFirmwareContentsSignedGuid, "EFI_FIRMWARE_CONTENTS_SIGNED"},
{&gEfiVectorHandoffTableGuid, "EFI_VECTOR_HANDOFF_TABLE"},
{&gAdapterInfoPlatformSecurityGuid, "ADAPTER_INFO_PLATFORM_SECURITY"},
{&gEfiIa32X64ErrorTypeCacheCheckGuid, "EFI_IA32_X64_ERROR_TYPE_CACHE_CHECK"},
{&gEfiIa32X64ErrorTypeTlbCheckGuid, "EFI_IA32_X64_ERROR_TYPE_TLB_CHECK"},
{&gEfiIa32X64ErrorTypeBusCheckGuid, "EFI_IA32_X64_ERROR_TYPE_BUS_CHECK"},
{&gEfiIa32X64ErrorTypeMsCheckGuid, "EFI_IA32_X64_ERROR_TYPE_MS_CHECK"},
{&gEfiPeiMasterBootModePpiGuid, "EFI_PEI_MASTER_BOOT_MODE_PPI"},
{&gEfiDxeIplPpiGuid, "EFI_DXE_IPL_PPI"},
{&gEfiPeiMemoryDiscoveredPpiGuid, "EFI_PEI_MEMORY_DISCOVERED_PPI"},
{&gEfiPeiBootInRecoveryModePpiGuid, "EFI_PEI_BOOT_IN_RECOVERY_MODE_PPI"},
{&gEfiEndOfPeiSignalPpiGuid, "EFI_END_OF_PEI_SIGNAL_PPI"},
{&gEfiPeiResetPpiGuid, "EFI_PEI_RESET_PPI"},
{&gEfiPeiStatusCodePpiGuid, "EFI_PEI_STATUS_CODE_PPI"},
{&gEfiPeiSecurity2PpiGuid, "EFI_PEI_SECURITY2_PPI"},
{&gEfiTemporaryRamSupportPpiGuid, "EFI_TEMPORARY_RAM_SUPPORT_PPI"},
{&gEfiPeiCpuIoPpiInstalledGuid, "EFI_PEI_CPU_IO_PPI_INSTALLED"},
{&gEfiPciCfg2PpiGuid, "EFI_PCI_CFG2_PPI"},
{&gEfiPeiStallPpiGuid, "EFI_PEI_STALL_PPI"},
{&gEfiPeiReadOnlyVariable2PpiGuid, "EFI_PEI_READ_ONLY_VARIABLE2_PPI"},
{&gEfiSecPlatformInformationPpiGuid, "EFI_SEC_PLATFORM_INFORMATION_PPI"},
{&gEfiPeiLoadedImagePpiGuid, "EFI_PEI_LOADED_IMAGE_PPI"},
{&gEfiPeiSmbus2PpiGuid, "EFI_PEI_SMBUS2_PPI"},
{&gEfiPeiFirmwareVolumeInfoPpiGuid, "EFI_PEI_FIRMWARE_VOLUME_INFO_PPI"},
{&gEfiPeiLoadFilePpiGuid, "EFI_PEI_LOAD_FILE_PPI"},
{&gEfiPeiDecompressPpiGuid, "EFI_PEI_DECOMPRESS_PPI"},
{&gPcdPpiGuid, "PCD_PPI"},
{&gGetPcdInfoPpiGuid, "GET_PCD_INFO_PPI"},
{&gEfiPeiRecoveryModulePpiGuid, "EFI_PEI_RECOVERY_MODULE_PPI"},
{&gEfiPeiDeviceRecoveryModulePpiGuid, "EFI_PEI_DEVICE_RECOVERY_MODULE_PPI"},
{&gEfiPeiVirtualBlockIoPpiGuid, "EFI_PEI_VIRTUAL_BLOCK_IO_PPI"},
{&gEfiPeiS3Resume2PpiGuid, "EFI_PEI_S3_RESUME2_PPI"},
{&gEfiPeiRscHandlerPpiGuid, "EFI_PEI_RSC_HANDLER_PPI"},
{&gEfiPeiPcdPpiGuid, "EFI_PEI_PCD_PPI"},
{&gEfiGetPcdInfoPpiGuid, "EFI_GET_PCD_INFO_PPI"},
{&gEfiTemporaryRamDonePpiGuid, "EFI_TEMPORARY_RAM_DONE_PPI"},
{&gEfiVectorHandoffInfoPpiGuid, "EFI_VECTOR_HANDOFF_INFO_PPI"},
{&gEfiPeiI2cMasterPpiGuid, "EFI_PEI_I2C_MASTER_PPI"},
{&gEfiPeiFirmwareVolumeInfo2PpiGuid, "EFI_PEI_FIRMWARE_VOLUME_INFO2_PPI"},
{&gPcdProtocolGuid, "PCD_PROTOCOL"},
{&gGetPcdInfoProtocolGuid, "GET_PCD_INFO_PROTOCOL"},
{&gEfiBdsArchProtocolGuid, "EFI_BDS_ARCH_PROTOCOL"},
{&gEfiCpuArchProtocolGuid, "EFI_CPU_ARCH_PROTOCOL"},
{&gEfiMetronomeArchProtocolGuid, "EFI_METRONOME_ARCH_PROTOCOL"},
{&gEfiMonotonicCounterArchProtocolGuid, "EFI_MONOTONIC_COUNTER_ARCH_PROTOCOL"},
{&gEfiRealTimeClockArchProtocolGuid, "EFI_REAL_TIME_CLOCK_ARCH_PROTOCOL"},
{&gEfiResetArchProtocolGuid, "EFI_RESET_ARCH_PROTOCOL"},
{&gEfiRuntimeArchProtocolGuid, "EFI_RUNTIME_ARCH_PROTOCOL"},
{&gEfiSecurityArchProtocolGuid, "EFI_SECURITY_ARCH_PROTOCOL"},
{&gEfiSecurityPolicyProtocolGuid, "EFI_SECURITY_POLICY_PROTOCOL"},
{&gEfiTimerArchProtocolGuid, "EFI_TIMER_ARCH_PROTOCOL"},
{&gEfiVariableWriteArchProtocolGuid, "EFI_VARIABLE_WRITE_ARCH_PROTOCOL"},
{&gEfiVariableArchProtocolGuid, "EFI_VARIABLE_ARCH_PROTOCOL"},
{&gEfiWatchdogTimerArchProtocolGuid, "EFI_WATCHDOG_TIMER_ARCH_PROTOCOL"},
{&gEfiStatusCodeRuntimeProtocolGuid, "EFI_STATUS_CODE_RUNTIME_PROTOCOL"},
{&gEfiSmbusHcProtocolGuid, "EFI_SMBUS_HC_PROTOCOL"},
{&gEfiFirmwareVolume2ProtocolGuid, "EFI_FIRMWARE_VOLUME2_PROTOCOL"},
{&gEfiFirmwareVolumeBlockProtocolGuid, "EFI_FIRMWARE_VOLUME_BLOCK_PROTOCOL"},
{&gEfiCapsuleArchProtocolGuid, "EFI_CAPSULE_ARCH_PROTOCOL"},
{&gEfiMpServiceProtocolGuid, "EFI_MP_SERVICE_PROTOCOL"},
{&gEfiPciHostBridgeResourceAllocationProtocolGuid, "EFI_PCI_HOST_BRIDGE_RESOURCE_ALLOCATION_PROTOCOL"},
{&gEfiPciPlatformProtocolGuid, "EFI_PCI_PLATFORM_PROTOCOL"},
{&gEfiPciOverrideProtocolGuid, "EFI_PCI_OVERRIDE_PROTOCOL"},
{&gEfiPciEnumerationCompleteProtocolGuid, "EFI_PCI_ENUMERATION_COMPLETE_PROTOCOL"},
{&gEfiIncompatiblePciDeviceSupportProtocolGuid, "EFI_INCOMPATIBLE_PCI_DEVICE_SUPPORT_PROTOCOL"},
{&gEfiPciHotPlugInitProtocolGuid, "EFI_PCI_HOT_PLUG_INIT_PROTOCOL"},
{&gEfiPciHotPlugRequestProtocolGuid, "EFI_PCI_HOT_PLUG_REQUEST_PROTOCOL"},
{&gEfiIdeControllerInitProtocolGuid, "EFI_IDE_CONTROLLER_INIT_PROTOCOL"},
{&gEfiDiskInfoProtocolGuid, "EFI_DISK_INFO_PROTOCOL"},
{&gEfiSmbiosProtocolGuid, "EFI_SMBIOS_PROTOCOL"},
{&gEfiS3SaveStateProtocolGuid, "EFI_S3_SAVE_STATE_PROTOCOL"},
{&gEfiS3SmmSaveStateProtocolGuid, "EFI_S3_SMM_SAVE_STATE_PROTOCOL"},
{&gEfiRscHandlerProtocolGuid, "EFI_RSC_HANDLER_PROTOCOL"},
{&gEfiSmmRscHandlerProtocolGuid, "EFI_SMM_RSC_HANDLER_PROTOCOL"},
{&gEfiAcpiSdtProtocolGuid, "EFI_ACPI_SDT_PROTOCOL"},
{&gEfiSioProtocolGuid, "EFI_SIO_PROTOCOL"},
{&gEfiSmmCpuIo2ProtocolGuid, "EFI_SMM_CPU_IO2_PROTOCOL"},
{&gEfiSmmBase2ProtocolGuid, "EFI_SMM_BASE2_PROTOCOL"},
{&gEfiSmmAccess2ProtocolGuid, "EFI_SMM_ACCESS2_PROTOCOL"},
{&gEfiSmmControl2ProtocolGuid, "EFI_SMM_CONTROL2_PROTOCOL"},
{&gEfiSmmConfigurationProtocolGuid, "EFI_SMM_CONFIGURATION_PROTOCOL"},
{&gEfiSmmReadyToLockProtocolGuid, "EFI_SMM_READY_TO_LOCK_PROTOCOL"},
{&gEfiDxeSmmReadyToLockProtocolGuid, "EFI_DXE_SMM_READY_TO_LOCK_PROTOCOL"},
{&gEfiSmmCommunicationProtocolGuid, "EFI_SMM_COMMUNICATION_PROTOCOL"},
{&gEfiSmmStatusCodeProtocolGuid, "EFI_SMM_STATUS_CODE_PROTOCOL"},
{&gEfiSmmCpuProtocolGuid, "EFI_SMM_CPU_PROTOCOL"},
{&gEfiSmmPciRootBridgeIoProtocolGuid, "EFI_SMM_PCI_ROOT_BRIDGE_IO_PROTOCOL"},
{&gEfiSmmSwDispatch2ProtocolGuid, "EFI_SMM_SW_DISPATCH2_PROTOCOL"},
{&gEfiSmmSxDispatch2ProtocolGuid, "EFI_SMM_SX_DISPATCH2_PROTOCOL"},
{&gEfiSmmPeriodicTimerDispatch2ProtocolGuid, "EFI_SMM_PERIODIC_TIMER_DISPATCH2_PROTOCOL"},
{&gEfiSmmUsbDispatch2ProtocolGuid, "EFI_SMM_USB_DISPATCH2_PROTOCOL"},
{&gEfiSmmGpiDispatch2ProtocolGuid, "EFI_SMM_GPI_DISPATCH2_PROTOCOL"},
{&gEfiSmmStandbyButtonDispatch2ProtocolGuid, "EFI_SMM_STANDBY_BUTTON_DISPATCH2_PROTOCOL"},
{&gEfiSmmPowerButtonDispatch2ProtocolGuid, "EFI_SMM_POWER_BUTTON_DISPATCH2_PROTOCOL"},
{&gEfiSmmIoTrapDispatch2ProtocolGuid, "EFI_SMM_IO_TRAP_DISPATCH2_PROTOCOL"},
{&gEfiPcdProtocolGuid, "EFI_PCD_PROTOCOL"},
{&gEfiFirmwareVolumeBlock2ProtocolGuid, "EFI_FIRMWARE_VOLUME_BLOCK2_PROTOCOL"},
{&gEfiCpuIo2ProtocolGuid, "EFI_CPU_IO2_PROTOCOL"},
{&gEfiLegacyRegion2ProtocolGuid, "EFI_LEGACY_REGION2_PROTOCOL"},
{&gEfiSalMcaInitPmiProtocolGuid, "EFI_SAL_MCA_INIT_PMI_PROTOCOL"},
{&gEfiExtendedSalBootServiceProtocolGuid, "EFI_EXTENDED_SAL_BOOT_SERVICE_PROTOCOL"},
{&gEfiExtendedSalBaseIoServicesProtocolGuid, "EFI_EXTENDED_SAL_BASE_IO_SERVICES_PROTOCOL"},
{&gEfiExtendedSalStallServicesProtocolGuid, "EFI_EXTENDED_SAL_STALL_SERVICES_PROTOCOL"},
{&gEfiExtendedSalRtcServicesProtocolGuid, "EFI_EXTENDED_SAL_RTC_SERVICES_PROTOCOL"},
{&gEfiExtendedSalVariableServicesProtocolGuid, "EFI_EXTENDED_SAL_VARIABLE_SERVICES_PROTOCOL"},
{&gEfiExtendedSalMtcServicesProtocolGuid, "EFI_EXTENDED_SAL_MTC_SERVICES_PROTOCOL"},
{&gEfiExtendedSalResetServicesProtocolGuid, "EFI_EXTENDED_SAL_RESET_SERVICES_PROTOCOL"},
{&gEfiExtendedSalStatusCodeServicesProtocolGuid, "EFI_EXTENDED_SAL_STATUS_CODE_SERVICES_PROTOCOL"},
{&gEfiExtendedSalFvBlockServicesProtocolGuid, "EFI_EXTENDED_SAL_FV_BLOCK_SERVICES_PROTOCOL"},
{&gEfiExtendedSalMpServicesProtocolGuid, "EFI_EXTENDED_SAL_MP_SERVICES_PROTOCOL"},
{&gEfiExtendedSalPalServicesProtocolGuid, "EFI_EXTENDED_SAL_PAL_SERVICES_PROTOCOL"},
{&gEfiExtendedSalBaseServicesProtocolGuid, "EFI_EXTENDED_SAL_BASE_SERVICES_PROTOCOL"},
{&gEfiExtendedSalMcaServicesProtocolGuid, "EFI_EXTENDED_SAL_MCA_SERVICES_PROTOCOL"},
{&gEfiExtendedSalPciServicesProtocolGuid, "EFI_EXTENDED_SAL_PCI_SERVICES_PROTOCOL"},
{&gEfiExtendedSalCacheServicesProtocolGuid, "EFI_EXTENDED_SAL_CACHE_SERVICES_PROTOCOL"},
{&gEfiExtendedSalMcaLogServicesProtocolGuid, "EFI_EXTENDED_SAL_MCA_LOG_SERVICES_PROTOCOL"},
{&gEfiSecurity2ArchProtocolGuid, "EFI_SECURITY2_ARCH_PROTOCOL"},
{&gEfiSmmEndOfDxeProtocolGuid, "EFI_SMM_END_OF_DXE_PROTOCOL"},
{&gEfiGetPcdInfoProtocolGuid, "EFI_GET_PCD_INFO_PROTOCOL"},
{&gEfiI2cMasterProtocolGuid, "EFI_I2C_MASTER_PROTOCOL"},
{&gEfiI2cIoProtocolGuid, "EFI_I2C_IO_PROTOCOL"},
{&gEfiI2cEnumerateProtocolGuid, "EFI_I2C_ENUMERATE_PROTOCOL"},
{&gEfiI2cHostProtocolGuid, "EFI_I2C_HOST_PROTOCOL"},
{&gEfiI2cBusConfigurationManagementProtocolGuid, "EFI_I2C_BUS_CONFIGURATION_MANAGEMENT_PROTOCOL"},
{&gEfiDebugPortProtocolGuid, "EFI_DEBUG_PORT_PROTOCOL"},
{&gEfiDebugSupportProtocolGuid, "EFI_DEBUG_SUPPORT_PROTOCOL"},
{&gEfiDecompressProtocolGuid, "EFI_DECOMPRESS_PROTOCOL"},
{&gEfiDeviceIoProtocolGuid, "EFI_DEVICE_IO_PROTOCOL"},
{&gEfiDevicePathProtocolGuid, "EFI_DEVICE_PATH_PROTOCOL"},
{&gEfiDevicePathFromTextProtocolGuid, "EFI_DEVICE_PATH_FROM_TEXT_PROTOCOL"},
{&gEfiDevicePathToTextProtocolGuid, "EFI_DEVICE_PATH_TO_TEXT_PROTOCOL"},
{&gEfiDevicePathUtilitiesProtocolGuid, "EFI_DEVICE_PATH_UTILITIES_PROTOCOL"},
{&gEfiDriverBindingProtocolGuid, "EFI_DRIVER_BINDING_PROTOCOL"},
{&gEfiPlatformDriverOverrideProtocolGuid, "EFI_PLATFORM_DRIVER_OVERRIDE_PROTOCOL"},
{&gEfiDriverFamilyOverrideProtocolGuid, "EFI_DRIVER_FAMILY_OVERRIDE_PROTOCOL"},
{&gEfiBusSpecificDriverOverrideProtocolGuid, "EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL"},
{&gEfiDriverDiagnostics2ProtocolGuid, "EFI_DRIVER_DIAGNOSTICS2_PROTOCOL"},
{&gEfiDriverDiagnosticsProtocolGuid, "EFI_DRIVER_DIAGNOSTICS_PROTOCOL"},
{&gEfiComponentName2ProtocolGuid, "EFI_COMPONENT_NAME2_PROTOCOL"},
{&gEfiComponentNameProtocolGuid, "EFI_COMPONENT_NAME_PROTOCOL"},
{&gEfiDriverConfiguration2ProtocolGuid, "EFI_DRIVER_CONFIGURATION2_PROTOCOL"},
{&gEfiDriverConfigurationProtocolGuid, "EFI_DRIVER_CONFIGURATION_PROTOCOL"},
{&gEfiPlatformToDriverConfigurationProtocolGuid, "EFI_PLATFORM_TO_DRIVER_CONFIGURATION_PROTOCOL"},
{&gEfiDriverSupportedEfiVersionProtocolGuid, "EFI_DRIVER_SUPPORTED_EFI_VERSION_PROTOCOL"},
{&gEfiSimpleTextInProtocolGuid, "EFI_SIMPLE_TEXT_IN_PROTOCOL"},
{&gEfiSimpleTextInputExProtocolGuid, "EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL"},
{&gEfiSimpleTextOutProtocolGuid, "EFI_SIMPLE_TEXT_OUT_PROTOCOL"},
{&gEfiSimplePointerProtocolGuid, "EFI_SIMPLE_POINTER_PROTOCOL"},
{&gEfiAbsolutePointerProtocolGuid, "EFI_ABSOLUTE_POINTER_PROTOCOL"},
{&gEfiSerialIoProtocolGuid, "EFI_SERIAL_IO_PROTOCOL"},
{&gEfiGraphicsOutputProtocolGuid, "EFI_GRAPHICS_OUTPUT_PROTOCOL"},
{&gEfiEdidDiscoveredProtocolGuid, "EFI_EDID_DISCOVERED_PROTOCOL"},
{&gEfiEdidActiveProtocolGuid, "EFI_EDID_ACTIVE_PROTOCOL"},
{&gEfiEdidOverrideProtocolGuid, "EFI_EDID_OVERRIDE_PROTOCOL"},
{&gEfiUgaIoProtocolGuid, "EFI_UGA_IO_PROTOCOL"},
{&gEfiUgaDrawProtocolGuid, "EFI_UGA_DRAW_PROTOCOL"},
{&gEfiLoadedImageProtocolGuid, "EFI_LOADED_IMAGE_PROTOCOL"},
{&gEfiLoadedImageDevicePathProtocolGuid, "EFI_LOADED_IMAGE_DEVICE_PATH_PROTOCOL"},
{&gEfiLoadFileProtocolGuid, "EFI_LOAD_FILE_PROTOCOL"},
{&gEfiLoadFile2ProtocolGuid, "EFI_LOAD_FILE2_PROTOCOL"},
{&gEfiSimpleFileSystemProtocolGuid, "EFI_SIMPLE_FILE_SYSTEM_PROTOCOL"},
{&gEfiTapeIoProtocolGuid, "EFI_TAPE_IO_PROTOCOL"},
{&gEfiDiskIoProtocolGuid, "EFI_DISK_IO_PROTOCOL"},
{&gEfiBlockIoProtocolGuid, "EFI_BLOCK_IO_PROTOCOL"},
{&gEfiUnicodeCollationProtocolGuid, "EFI_UNICODE_COLLATION_PROTOCOL"},
{&gEfiUnicodeCollation2ProtocolGuid, "EFI_UNICODE_COLLATION2_PROTOCOL"},
{&gEfiPciRootBridgeIoProtocolGuid, "EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL"},
{&gEfiPciIoProtocolGuid, "EFI_PCI_IO_PROTOCOL"},
{&gEfiScsiIoProtocolGuid, "EFI_SCSI_IO_PROTOCOL"},
{&gEfiExtScsiPassThruProtocolGuid, "EFI_EXT_SCSI_PASS_THRU_PROTOCOL"},
{&gEfiScsiPassThruProtocolGuid, "EFI_SCSI_PASS_THRU_PROTOCOL"},
{&gEfiIScsiInitiatorNameProtocolGuid, "EFI_ISCSI_INITIATOR_NAME_PROTOCOL"},
{&gEfiUsb2HcProtocolGuid, "EFI_USB2_HC_PROTOCOL"},
{&gEfiUsbHcProtocolGuid, "EFI_USB_HC_PROTOCOL"},
{&gEfiUsbIoProtocolGuid, "EFI_USB_IO_PROTOCOL"},
{&gEfiAcpiTableProtocolGuid, "EFI_ACPI_TABLE_PROTOCOL"},
{&gEfiEbcProtocolGuid, "EFI_EBC_PROTOCOL"},
{&gEfiSimpleNetworkProtocolGuid, "EFI_SIMPLE_NETWORK_PROTOCOL"},
{&gEfiNetworkInterfaceIdentifierProtocolGuid, "EFI_NETWORK_INTERFACE_IDENTIFIER_PROTOCOL"},
{&gEfiPxeBaseCodeCallbackProtocolGuid, "EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL"},
{&gEfiPxeBaseCodeProtocolGuid, "EFI_PXE_BASE_CODE_PROTOCOL"},
{&gEfiBisProtocolGuid, "EFI_BIS_PROTOCOL"},
{&gEfiManagedNetworkServiceBindingProtocolGuid, "EFI_MANAGED_NETWORK_SERVICE_BINDING_PROTOCOL"},
{&gEfiManagedNetworkProtocolGuid, "EFI_MANAGED_NETWORK_PROTOCOL"},
{&gEfiArpServiceBindingProtocolGuid, "EFI_ARP_SERVICE_BINDING_PROTOCOL"},
{&gEfiArpProtocolGuid, "EFI_ARP_PROTOCOL"},
{&gEfiDhcp4ServiceBindingProtocolGuid, "EFI_DHCP4_SERVICE_BINDING_PROTOCOL"},
{&gEfiDhcp4ProtocolGuid, "EFI_DHCP4_PROTOCOL"},
{&gEfiTcp4ServiceBindingProtocolGuid, "EFI_TCP4_SERVICE_BINDING_PROTOCOL"},
{&gEfiTcp4ProtocolGuid, "EFI_TCP4_PROTOCOL"},
{&gEfiIp4ServiceBindingProtocolGuid, "EFI_IP4_SERVICE_BINDING_PROTOCOL"},
{&gEfiIp4ProtocolGuid, "EFI_IP4_PROTOCOL"},
{&gEfiIp4ConfigProtocolGuid, "EFI_IP4_CONFIG_PROTOCOL"},
{&gEfiUdp4ServiceBindingProtocolGuid, "EFI_UDP4_SERVICE_BINDING_PROTOCOL"},
{&gEfiUdp4ProtocolGuid, "EFI_UDP4_PROTOCOL"},
{&gEfiMtftp4ServiceBindingProtocolGuid, "EFI_MTFTP4_SERVICE_BINDING_PROTOCOL"},
{&gEfiMtftp4ProtocolGuid, "EFI_MTFTP4_PROTOCOL"},
{&gEfiAuthenticationInfoProtocolGuid, "EFI_AUTHENTICATION_INFO_PROTOCOL"},
{&gEfiHashServiceBindingProtocolGuid, "EFI_HASH_SERVICE_BINDING_PROTOCOL"},
{&gEfiHashProtocolGuid, "EFI_HASH_PROTOCOL"},
{&gEfiTcgProtocolGuid, "EFI_TCG_PROTOCOL"},
{&gEfiTrEEProtocolGuid, "EFI_TR_EEPROTOCOL"},
{&gEfiFormBrowser2ProtocolGuid, "EFI_FORM_BROWSER2_PROTOCOL"},
{&gEfiHiiStringProtocolGuid, "EFI_HII_STRING_PROTOCOL"},
{&gEfiHiiImageProtocolGuid, "EFI_HII_IMAGE_PROTOCOL"},
{&gEfiHiiConfigRoutingProtocolGuid, "EFI_HII_CONFIG_ROUTING_PROTOCOL"},
{&gEfiHiiDatabaseProtocolGuid, "EFI_HII_DATABASE_PROTOCOL"},
{&gEfiHiiFontProtocolGuid, "EFI_HII_FONT_PROTOCOL"},
{&gEfiHiiConfigAccessProtocolGuid, "EFI_HII_CONFIG_ACCESS_PROTOCOL"},
{&gEfiHiiPackageListProtocolGuid, "EFI_HII_PACKAGE_LIST_PROTOCOL"},
{&gEfiIp6ServiceBindingProtocolGuid, "EFI_IP6_SERVICE_BINDING_PROTOCOL"},
{&gEfiIp6ProtocolGuid, "EFI_IP6_PROTOCOL"},
{&gEfiIp6ConfigProtocolGuid, "EFI_IP6_CONFIG_PROTOCOL"},
{&gEfiMtftp6ServiceBindingProtocolGuid, "EFI_MTFTP6_SERVICE_BINDING_PROTOCOL"},
{&gEfiMtftp6ProtocolGuid, "EFI_MTFTP6_PROTOCOL"},
{&gEfiDhcp6ServiceBindingProtocolGuid, "EFI_DHCP6_SERVICE_BINDING_PROTOCOL"},
{&gEfiDhcp6ProtocolGuid, "EFI_DHCP6_PROTOCOL"},
{&gEfiUdp6ServiceBindingProtocolGuid, "EFI_UDP6_SERVICE_BINDING_PROTOCOL"},
{&gEfiUdp6ProtocolGuid, "EFI_UDP6_PROTOCOL"},
{&gEfiTcp6ServiceBindingProtocolGuid, "EFI_TCP6_SERVICE_BINDING_PROTOCOL"},
{&gEfiTcp6ProtocolGuid, "EFI_TCP6_PROTOCOL"},
{&gEfiVlanConfigProtocolGuid, "EFI_VLAN_CONFIG_PROTOCOL"},
{&gEfiEapProtocolGuid, "EFI_EAP_PROTOCOL"},
{&gEfiEapManagementProtocolGuid, "EFI_EAP_MANAGEMENT_PROTOCOL"},
{&gEfiFtp4ServiceBindingProtocolGuid, "EFI_FTP4_SERVICE_BINDING_PROTOCOL"},
{&gEfiFtp4ProtocolGuid, "EFI_FTP4_PROTOCOL"},
{&gEfiIpSecConfigProtocolGuid, "EFI_IP_SEC_CONFIG_PROTOCOL"},
{&gEfiDriverHealthProtocolGuid, "EFI_DRIVER_HEALTH_PROTOCOL"},
{&gEfiDeferredImageLoadProtocolGuid, "EFI_DEFERRED_IMAGE_LOAD_PROTOCOL"},
{&gEfiUserCredentialProtocolGuid, "EFI_USER_CREDENTIAL_PROTOCOL"},
{&gEfiUserManagerProtocolGuid, "EFI_USER_MANAGER_PROTOCOL"},
{&gEfiAtaPassThruProtocolGuid, "EFI_ATA_PASS_THRU_PROTOCOL"},
{&gEfiFirmwareManagementProtocolGuid, "EFI_FIRMWARE_MANAGEMENT_PROTOCOL"},
{&gEfiIpSecProtocolGuid, "EFI_IP_SEC_PROTOCOL"},
{&gEfiIpSec2ProtocolGuid, "EFI_IP_SEC2_PROTOCOL"},
{&gEfiKmsProtocolGuid, "EFI_KMS_PROTOCOL"},
{&gEfiBlockIo2ProtocolGuid, "EFI_BLOCK_IO2_PROTOCOL"},
{&gEfiStorageSecurityCommandProtocolGuid, "EFI_STORAGE_SECURITY_COMMAND_PROTOCOL"},
{&gEfiUserCredential2ProtocolGuid, "EFI_USER_CREDENTIAL2_PROTOCOL"},
{&gEfiDiskIo2ProtocolGuid, "EFI_DISK_IO2_PROTOCOL"},
{&gEfiTimestampProtocolGuid, "EFI_TIMESTAMP_PROTOCOL"},
{&gEfiRngProtocolGuid, "EFI_RNG_PROTOCOL"},
{&gEfiAdapterInformationProtocolGuid, "EFI_ADAPTER_INFORMATION_PROTOCOL"},
{&gEfiNetworkPkgTokenSpaceGuid, "EFI_NETWORK_PKG_TOKEN_SPACE"},
{&gIp6ConfigNvDataGuid, "IP6_CONFIG_NV_DATA"},
{&gIScsiConfigGuid, "ISCSI_CONFIG"},
{&gEfiWinNtPassThroughGuid, "EFI_WIN_NT_PASS_THROUGH"},
{&gEfiWinNtConsoleGuid, "EFI_WIN_NT_CONSOLE"},
{&gEfiWinNtUgaGuid, "EFI_WIN_NT_UGA"},
{&gEfiWinNtGopGuid, "EFI_WIN_NT_GOP"},
{&gEfiWinNtSerialPortGuid, "EFI_WIN_NT_SERIAL_PORT"},
{&gEfiWinNtFileSystemGuid, "EFI_WIN_NT_FILE_SYSTEM"},
{&gEfiWinNtPhysicalDisksGuid, "EFI_WIN_NT_PHYSICAL_DISKS"},
{&gEfiWinNtVirtualDisksGuid, "EFI_WIN_NT_VIRTUAL_DISKS"},
{&gEfiNt32PkgTokenSpaceGuid, "EFI_NT32_PKG_TOKEN_SPACE"},
{&gEfiWinNtSystemConfigGuid, "EFI_WIN_NT_SYSTEM_CONFIG"},
{&gPeiNtThunkPpiGuid, "PEI_NT_THUNK_PPI"},
{&gPeiNtAutoScanPpiGuid, "PEI_NT_AUTO_SCAN_PPI"},
{&gNtPeiLoadFilePpiGuid, "NT_PEI_LOAD_FILE_PPI"},
{&gNtFwhPpiGuid, "NT_FWH_PPI"},
{&gWinNtBusDriverGuid, "WIN_NT_BUS_DRIVER"},
{&gEfiWinNtThunkProtocolGuid, "EFI_WIN_NT_THUNK_PROTOCOL"},
{&gEfiWinNtIoProtocolGuid, "EFI_WIN_NT_IO_PROTOCOL"},
{&gOmap35xxTokenSpaceGuid, "OMAP35XX_TOKEN_SPACE"},
{&gOptionRomPkgTokenSpaceGuid, "OPTION_ROM_PKG_TOKEN_SPACE"},
{&gUefiOvmfPkgTokenSpaceGuid, "UEFI_OVMF_PKG_TOKEN_SPACE"},
{&gEfiXenInfoGuid, "EFI_XEN_INFO"},
{&gOvmfPlatformConfigGuid, "OVMF_PLATFORM_CONFIG"},
{&gVirtioMmioTransportGuid, "VIRTIO_MMIO_TRANSPORT"},
{&gVirtioDeviceProtocolGuid, "VIRTIO_DEVICE_PROTOCOL"},
{&gBlockMmioProtocolGuid, "BLOCK_MMIO_PROTOCOL"},
{&gXenBusProtocolGuid, "XEN_BUS_PROTOCOL"},
{&gPcAtChipsetPkgTokenSpaceGuid, "PC_AT_CHIPSET_PKG_TOKEN_SPACE"},
{&gPerformancePkgTokenSpaceGuid, "PERFORMANCE_PKG_TOKEN_SPACE"},
{&gEfiTscFrequencyGuid, "EFI_TSC_FREQUENCY"},
{&gAcpi10TableGuid, "ACPI10_TABLE"},
{&gAcpiTableGuid, "ACPI_TABLE"},
{&gPeiCapsuleOnDataCdGuid, "PEI_CAPSULE_ON_DATA_CD"},
{&gPeiCapsuleOnFatFloppyDiskGuid, "PEI_CAPSULE_ON_FAT_FLOPPY_DISK"},
{&gPeiCapsuleOnFatIdeDiskGuid, "PEI_CAPSULE_ON_FAT_IDE_DISK"},
{&gPeiCapsuleOnFatUsbDiskGuid, "PEI_CAPSULE_ON_FAT_USB_DISK"},
{&gDxeDebugportExtProtocolGuid, "DXE_DEBUGPORT_EXT_PROTOCOL"},
{&gDxeDebugCmdProtocolGuid, "DXE_DEBUG_CMD_PROTOCOL"},
{&gDxeDebugDispatchProtocolGuid, "DXE_DEBUG_DISPATCH_PROTOCOL"},
{&gEfiAlertStandardFormatProtocolGuid, "EFI_ALERT_STANDARD_FORMAT_PROTOCOL"},
{&gEfiDebugportProtocolGuid, "EFI_DEBUGPORT_PROTOCOL"},
{&gEfiMpServicesProtocolGuid, "EFI_MP_SERVICES_PROTOCOL"},
{&gEfiPeiPeCoffLoaderGuid, "EFI_PEI_PE_COFF_LOADER"},
{&gEfiSimpleTextInputProtocolGuid, "EFI_SIMPLE_TEXT_INPUT_PROTOCOL"},
{&gEfiSimpleTextOutputProtocolGuid, "EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL"},
{&gEfiTcgPrivateInterfaceGuid, "EFI_TCG_PRIVATE_INTERFACE"},
{&gMpsTableGuid, "MPS_TABLE"},
{&gPdmWindowButtonGuid, "PDM_WINDOW_BUTTON"},
{&gPdmWindowSpinGuid, "PDM_WINDOW_SPIN"},
{&gPeiCachePpiGuid, "PEI_CACHE_PPI"},
{&gPeiDebugDispatchPpiGuid, "PEI_DEBUG_DISPATCH_PPI"},
{&gPeiPostBootScriptTablePpiGuid, "PEI_POST_BOOT_SCRIPT_TABLE_PPI"},
{&gPeiSmbusPolicyPpiGuid, "PEI_SMBUS_POLICY_PPI"},
{&gPhoenixDesktopMessageProtocolGuid, "PHOENIX_DESKTOP_MESSAGE_PROTOCOL"},
{&gPhoenixDesktopWindowProtocolGuid, "PHOENIX_DESKTOP_WINDOW_PROTOCOL"},
{&gPhoenixGdiProtocolGuid, "PHOENIX_GDI_PROTOCOL"},
{&gPhoenixSmmCoreServicesProtocolGuid, "PHOENIX_SMM_CORE_SERVICES_PROTOCOL"},
{&gPhoenixEfiSmmSwSmiProtocolGuid, "PHOENIX_EFI_SMM_SW_SMI_PROTOCOL"},
{&gPhoenixSmmWatchdogTimerProtocolGuid, "PHOENIX_SMM_WATCHDOG_TIMER_PROTOCOL"},
{&gSalSystemTableGuid, "SAL_SYSTEM_TABLE"},
{&gSctIsaHcPpiGuid, "SCT_ISA_HC_PPI"},
{&gSctIsaHcProtocolGuid, "SCT_ISA_HC_PROTOCOL"},
{&gSmbiosTableGuid, "SMBIOS_TABLE"},
{&gPeiSpeakerInterfacePpiGuid, "PEI_SPEAKER_INTERFACE_PPI"},
{&gPeiMfgMemoryTestPpiGuid, "PEI_MFG_MEMORY_TEST_PPI"},
{&gPeiSha256HashPpiGuid, "PEI_SHA256_HASH_PPI"},
{&gEfiPlatformBootModeGuid, "EFI_PLATFORM_BOOT_MODE"},
{&gEfiPlatformInfoGuid, "EFI_PLATFORM_INFO"},
{&gEfiMemoryConfigDataGuid, "EFI_MEMORY_CONFIG_DATA"},
{&gPlatformModuleTokenSpaceGuid, "PLATFORM_MODULE_TOKEN_SPACE"},
{&gEfiSerialPortTokenSpaceGuid, "EFI_SERIAL_PORT_TOKEN_SPACE"},
{&gEfiIchTokenSpaceGuid, "EFI_ICH_TOKEN_SPACE"},
{&gEfiPchTokenSpaceGuid, "EFI_PCH_TOKEN_SPACE"},
{&gEfiSioVariableGuid, "EFI_SIO_VARIABLE"},
{&gProcessorProducerGuid, "PROCESSOR_PRODUCER"},
{&gEfiPowerOnHobGuid, "EFI_POWER_ON_HOB"},
{&gEfiPlatformCpuInfoGuid, "EFI_PLATFORM_CPU_INFO"},
{&gEfiBiosIdGuid, "EFI_BIOS_ID"},
{&gEfiBoardFeaturesGuid, "EFI_BOARD_FEATURES"},
{&gItkDataVarGuid, "ITK_DATA_VAR"},
{&gDmiDataGuid, "DMI_DATA"},
{&gIdccDataHubGuid, "IDCC_DATA_HUB"},
{&gEfiSetupVariableGuid, "EFI_SETUP_VARIABLE"},
{&gMfgModeVariableGuid, "MFG_MODE_VARIABLE"},
{&gEfiAcpiTableStorageGuid, "EFI_ACPI_TABLE_STORAGE"},
{&gACPIOSFRMfgStringVariableGuid, "ACPIOSFRMFG_STRING_VARIABLE"},
{&gACPIOSFRRefDataBlockVariableGuid, "ACPIOSFRREF_DATA_BLOCK_VARIABLE"},
{&gACPIOSFRModelStringVariableGuid, "ACPIOSFRMODEL_STRING_VARIABLE"},
{&gEfiPciLanInfoGuid, "EFI_PCI_LAN_INFO"},
{&gEfiNormalSetupGuid, "EFI_NORMAL_SETUP"},
{&gFirmwareIdGuid, "FIRMWARE_ID"},
{&gBmpImageGuid, "BMP_IMAGE"},
{&gOsSelectionVariableGuid, "OS_SELECTION_VARIABLE"},
{&gEfiActiveBiosProtocolGuid, "EFI_ACTIVE_BIOS_PROTOCOL"},
{&gEfiPlatformCpuProtocolGuid, "EFI_PLATFORM_CPU_PROTOCOL"},
{&gDxePchPlatformPolicyProtocolGuid, "DXE_PCH_PLATFORM_POLICY_PROTOCOL"},
{&gEfiTpmMpDriverProtocolGuid, "EFI_TPM_MP_DRIVER_PROTOCOL"},
{&gEfiLpcWpce791PolicyProtocolGuid, "EFI_LPC_WPCE791_POLICY_PROTOCOL"},
{&gUsbPolicyGuid, "USB_POLICY"},
{&gEfiSpeakerInterfaceProtocolGuid, "EFI_SPEAKER_INTERFACE_PROTOCOL"},
{&gDxeVlvPlatformPolicyGuid, "DXE_VLV_PLATFORM_POLICY"},
{&gEfiSmbiosSlotPopulationGuid, "EFI_SMBIOS_SLOT_POPULATION"},
{&gObservableProtocolGuid, "OBSERVABLE_PROTOCOL"},
{&gEfiCk505ClockPlatformInfoGuid, "EFI_CK505_CLOCK_PLATFORM_INFO"},
{&gEfiLpcWpc83627PolicyProtocolGuid, "EFI_LPC_WPC83627_POLICY_PROTOCOL"},
{&gEfiTcoResetProtocolGuid, "EFI_TCO_RESET_PROTOCOL"},
{&gEfiWatchdogTimerDriverProtocolGuid, "EFI_WATCHDOG_TIMER_DRIVER_PROTOCOL"},
{&gEfiPlatformIdeInitProtocolGuid, "EFI_PLATFORM_IDE_INIT_PROTOCOL"},
{&gEnhancedSpeedstepProtocolGuid, "ENHANCED_SPEEDSTEP_PROTOCOL"},
{&gPlatformGOPPolicyGuid, "PLATFORM_GOPPOLICY"},
{&gEfiGopDisplayBrightnessProtocolGuid, "EFI_GOP_DISPLAY_BRIGHTNESS_PROTOCOL"},
{&gEfiUsbKeyboardConnectGuid, "EFI_USB_KEYBOARD_CONNECT"},
{&gEfiMmioDeviceProtocolGuid, "EFI_MMIO_DEVICE_PROTOCOL"},
{&gEfiI2cBusConfigurationManagementProtocol2Guid, "EFI_I2C_BUS_CONFIGURATION_MANAGEMENT_PROTOCOL2"},
{&gEfiI2cAcpiProtocolGuid, "EFI_I2C_ACPI_PROTOCOL"},
{&gEfiI2cMasterProtocol2Guid, "EFI_I2C_MASTER_PROTOCOL2"},
{&gEfiI2cHostProtocol2Guid, "EFI_I2C_HOST_PROTOCOL2"},
{&gEfiI2cBusProtocolGuid, "EFI_I2C_BUS_PROTOCOL"},
{&gEfiI2cSlaveProtocolGuid, "EFI_I2C_SLAVE_PROTOCOL"},
{&gEfiSpiAcpiProtocolGuid, "EFI_SPI_ACPI_PROTOCOL"},
{&gEfiSpiHostProtocolGuid, "EFI_SPI_HOST_PROTOCOL"},
{&gEfiSpiBusProtocolGuid, "EFI_SPI_BUS_PROTOCOL"},
{&gLpssDummyProtocolGuid, "LPSS_DUMMY_PROTOCOL"},
{&gEfiSpiProtocolGuid, "EFI_SPI_PROTOCOL"},
{&gEfiGpioOperationProtocolGuid, "EFI_GPIO_OPERATION_PROTOCOL"},
{&gEfiEsrtOperationProtocolGuid, "EFI_ESRT_OPERATION_PROTOCOL"},
{&gEfiFwDisplayCapsuleGuid, "EFI_FW_DISPLAY_CAPSULE"},
{&gEfiFirmwareClassGuid, "EFI_FIRMWARE_CLASS"},
{&gEfiDFUVerGuid, "EFI_DFUVER"},
{&gEfiEsrtTableGuid, "EFI_ESRT_TABLE"},
{&gEfiCapsuleCrashLogVarGuid, "EFI_CAPSULE_CRASH_LOG_VAR"},
{&gEfiCapsuleCrashGuid, "EFI_CAPSULE_CRASH"},
{&gEfiSecurityPkgTokenSpaceGuid, "EFI_SECURITY_PKG_TOKEN_SPACE"},
{&gEfiAuthenticatedVariableGuid, "EFI_AUTHENTICATED_VARIABLE"},
{&gEfiSecureBootEnableDisableGuid, "EFI_SECURE_BOOT_ENABLE_DISABLE"},
{&gEfiCustomModeEnableGuid, "EFI_CUSTOM_MODE_ENABLE"},
{&gEfiVendorKeysNvGuid, "EFI_VENDOR_KEYS_NV"},
{&gEfiCertDbGuid, "EFI_CERT_DB"},
{&gTcgEventEntryHobGuid, "TCG_EVENT_ENTRY_HOB"},
{&gTpmErrorHobGuid, "TPM_ERROR_HOB"},
{&gMeasuredFvHobGuid, "MEASURED_FV_HOB"},
{&gEfiPhysicalPresenceGuid, "EFI_PHYSICAL_PRESENCE"},
{&gPwdCredentialProviderGuid, "PWD_CREDENTIAL_PROVIDER"},
{&gUsbCredentialProviderGuid, "USB_CREDENTIAL_PROVIDER"},
{&gUserIdentifyManagerGuid, "USER_IDENTIFY_MANAGER"},
{&gUserProfileManagerGuid, "USER_PROFILE_MANAGER"},
{&gTcgConfigFormSetGuid, "TCG_CONFIG_FORM_SET"},
{&gSecureBootConfigFormSetGuid, "SECURE_BOOT_CONFIG_FORM_SET"},
{&gEfiTrEEPhysicalPresenceGuid, "EFI_TR_EEPHYSICAL_PRESENCE"},
{&gEfiTpmDeviceInstanceNoneGuid, "EFI_TPM_DEVICE_INSTANCE_NONE"},
{&gEfiTpmDeviceInstanceTpm12Guid, "EFI_TPM_DEVICE_INSTANCE_TPM12"},
{&gEfiTpmDeviceInstanceTpm20DtpmGuid, "EFI_TPM_DEVICE_INSTANCE_TPM20_DTPM"},
{&gEfiTpmDeviceSelectedGuid, "EFI_TPM_DEVICE_SELECTED"},
{&gTrEEConfigFormSetGuid, "TR_EECONFIG_FORM_SET"},
{&gPeiLockPhysicalPresencePpiGuid, "PEI_LOCK_PHYSICAL_PRESENCE_PPI"},
{&gPeiTpmInitializedPpiGuid, "PEI_TPM_INITIALIZED_PPI"},
{&gPeiTpmInitializationDonePpiGuid, "PEI_TPM_INITIALIZATION_DONE_PPI"},
{&gEfiPeiFirmwareVolumeInfoMeasurementExcludedPpiGuid, "EFI_PEI_FIRMWARE_VOLUME_INFO_MEASUREMENT_EXCLUDED_PPI"},
{&gEfiShellEnvironment2ExtGuid, "EFI_SHELL_ENVIRONMENT2_EXT"},
{&gEfiShellPkgTokenSpaceGuid, "EFI_SHELL_PKG_TOKEN_SPACE"},
{&gShellVariableGuid, "SHELL_VARIABLE"},
{&gShellMapGuid, "SHELL_MAP"},
{&gShellAliasGuid, "SHELL_ALIAS"},
{&gHandleParsingHiiGuid, "HANDLE_PARSING_HII"},
{&gShellDebug1HiiGuid, "SHELL_DEBUG1_HII"},
{&gShellDriver1HiiGuid, "SHELL_DRIVER1_HII"},
{&gShellInstall1HiiGuid, "SHELL_INSTALL1_HII"},
{&gShellLevel1HiiGuid, "SHELL_LEVEL1_HII"},
{&gShellLevel2HiiGuid, "SHELL_LEVEL2_HII"},
{&gShellLevel3HiiGuid, "SHELL_LEVEL3_HII"},
{&gShellNetwork1HiiGuid, "SHELL_NETWORK1_HII"},
{&gShellBcfgHiiGuid, "SHELL_BCFG_HII"},
{&gEfiShellProtocolGuid, "EFI_SHELL_PROTOCOL"},
{&gEfiShellParametersProtocolGuid, "EFI_SHELL_PARAMETERS_PROTOCOL"},
{&gEfiShellEnvironment2Guid, "EFI_SHELL_ENVIRONMENT2"},
{&gEfiShellInterfaceGuid, "EFI_SHELL_INTERFACE"},
{&gEfiShellDynamicCommandProtocolGuid, "EFI_SHELL_DYNAMIC_COMMAND_PROTOCOL"},
{&gEfiDebugAgentGuid, "EFI_DEBUG_AGENT"},
{&gEfiSourceLevelDebugPkgTokenSpaceGuid, "EFI_SOURCE_LEVEL_DEBUG_PKG_TOKEN_SPACE"},
{&gStdLibTokenSpaceGuid, "STD_LIB_TOKEN_SPACE"},
{&gEfiSocketProtocolGuid, "EFI_SOCKET_PROTOCOL"},
{&gEfiSocketServiceBindingProtocolGuid, "EFI_SOCKET_SERVICE_BINDING_PROTOCOL"},
{&gUefiCpuPkgTokenSpaceGuid, "UEFI_CPU_PKG_TOKEN_SPACE"},
{&gVlvPolicyPpiGuid, "VLV_POLICY_PPI"},
{&gVlvMmioPolicyPpiGuid, "VLV_MMIO_POLICY_PPI"},
{&gSeCfTPMPpiGuid, "SE_CF_TPMPPI"},
{&gPchUsbPolicyPpiGuid, "PCH_USB_POLICY_PPI"},
{&gPchInitPpiGuid, "PCH_INIT_PPI"},
{&gPchPlatformPolicyPpiGuid, "PCH_PLATFORM_POLICY_PPI"},
{&gPeiSpiPpiGuid, "PEI_SPI_PPI"},
{&gVlvPeiInitPpiGuid, "VLV_PEI_INIT_PPI"},
{&gSeCUmaPpiGuid, "SE_CUMA_PPI"},
{&gPeiSeCPlatformPolicyPpiGuid, "PEI_SE_CPLATFORM_POLICY_PPI"},
{&gPeiHeciPpiGuid, "PEI_HECI_PPI"},
{&gPeiSdhcPpiGuid, "PEI_SDHC_PPI"},
{&gPeiBlockIoPpiGuid, "PEI_BLOCK_IO_PPI"},
{&gSeCfTPMPolicyPpiGuid, "SE_CF_TPMPOLICY_PPI"},
{&gPchPeiInitPpiGuid, "PCH_PEI_INIT_PPI"},
{&gEfiGlobalNvsAreaProtocolGuid, "EFI_GLOBAL_NVS_AREA_PROTOCOL"},
{&gPpmPlatformPolicyProtocolGuid, "PPM_PLATFORM_POLICY_PROTOCOL"},
{&gMemInfoProtocolGuid, "MEM_INFO_PROTOCOL"},
{&gEfiSdHostIoProtocolGuid, "EFI_SD_HOST_IO_PROTOCOL"},
{&gEfiSmmSpiProtocolGuid, "EFI_SMM_SPI_PROTOCOL"},
{&gEfiSmmIchnDispatchExProtocolGuid, "EFI_SMM_ICHN_DISPATCH_EX_PROTOCOL"},
{&gEfiPchS3SupportProtocolGuid, "EFI_PCH_S3_SUPPORT_PROTOCOL"},
{&gPchResetProtocolGuid, "PCH_RESET_PROTOCOL"},
{&gPchResetCallbackProtocolGuid, "PCH_RESET_CALLBACK_PROTOCOL"},
{&gEfiPchInfoProtocolGuid, "EFI_PCH_INFO_PROTOCOL"},
{&gEfiPchExtendedResetProtocolGuid, "EFI_PCH_EXTENDED_RESET_PROTOCOL"},
{&gDxeIchPlatformPolicyProtocolGuid, "DXE_ICH_PLATFORM_POLICY_PROTOCOL"},
{&gEfiIchInfoProtocolGuid, "EFI_ICH_INFO_PROTOCOL"},
{&gEfiSmmIoTrapDispatchProtocolGuid, "EFI_SMM_IO_TRAP_DISPATCH_PROTOCOL"},
{&gEfiSmmSmbusProtocolGuid, "EFI_SMM_SMBUS_PROTOCOL"},
{&gIgdOpRegionProtocolGuid, "IGD_OP_REGION_PROTOCOL"},
{&gEfiHeciProtocolGuid, "EFI_HECI_PROTOCOL"},
{&gPlatformSeCHookProtocolGuid, "PLATFORM_SE_CHOOK_PROTOCOL"},
{&gEfiSeCRcInfoProtocolGuid, "EFI_SE_CRC_INFO_PROTOCOL"},
{&gEfiTdtProtocolGuid, "EFI_TDT_PROTOCOL"},
{&gDxePlatformSeCPolicyGuid, "DXE_PLATFORM_SE_CPOLICY"},
{&gEfiEmmcCardInfoProtocolGuid, "EFI_EMMC_CARD_INFO_PROTOCOL"},
{&gEfiTdtOperationProtocolGuid, "EFI_TDT_OPERATION_PROTOCOL"},
{&gEfiDFUResultGuid, "EFI_DFURESULT"},
{&gEfiCPTokenSpaceGuid, "EFI_CPTOKEN_SPACE"},
{&gEfiSmbusArpMapGuid, "EFI_SMBUS_ARP_MAP"},
{&gEfiVLVTokenSpaceGuid, "EFI_VLVTOKEN_SPACE"},
{&gSataControllerDriverGuid, "SATA_CONTROLLER_DRIVER"},
{&gDxePchPolicyUpdateProtocolGuid, "DXE_PCH_POLICY_UPDATE_PROTOCOL"},
{&gPowerManagementAcpiTableStorageGuid, "POWER_MANAGEMENT_ACPI_TABLE_STORAGE"},
{&gPchInitVariableGuid, "PCH_INIT_VARIABLE"},
{&gVlvRefCodePkgTokenSpaceGuid, "VLV_REF_CODE_PKG_TOKEN_SPACE"},
{&gSeCPlatformReadyToBootGuid, "SE_CPLATFORM_READY_TO_BOOT"},
{&gAmtReadyToBootGuid, "AMT_READY_TO_BOOT"},
{&gEfiVlv2VariableGuid, "EFI_VLV2_VARIABLE"},
{NULL, NULL},
};
