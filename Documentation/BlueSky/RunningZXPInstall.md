#dtruss on ExManCmd while installing a ZXP

Running a ZXP installation:

dtruss "./ExManCmd --install /Users/kris/Desktop/ConditionalTextGroups.zxp"

I've removed any duplicated lines to try and reduce the bulk - so this is not a faithful dump of the output. I am mostly interested to see what files it accesses.

	dtrace: 2056 dynamic variable drops with non-empty dirty list
	thread_selfid(0x0, 0x0, 0x0)		 = 3429817 0
	fstat64(0x3, 0xBFFA6138, 0x0)		 = 0 0
	fcntl(0x3, 0x32, 0xFFFFFFFFBFFA6320)		 = 0 0
	stat64("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS\0", 0xBFFA60C8, 0xFFFFFFFFBFFA6320)	 = 0 0
	csops(0x0, 0x0, 0xBFFA6304)		 = 0 0
	issetugid(0x0, 0x0, 0xBFFA6304)		 = 0 0
	shared_region_check_np(0xBFFA4290, 0x0, 0xBFFA6304)		 = 0 0
	stat64("/usr/lib/dtrace/libdtrace_dyld.dylib\0", 0xBFFA54C8, 0xBFFA6304)		 = 0 0
	fcntl(0x3, 0x3D, 0xFFFFFFFFBFFA3950)		 = 0 0
	mmap(0x92000, 0x2000, 0x1, 0x12, 0x3, 0x6000)		 = 0x92000 0
	mmap(0x94000, 0x1000, 0x3, 0x12, 0x3, 0x8000)		 = 0x94000 0
	mmap(0x95000, 0x1FA0, 0x1, 0x12, 0x3, 0x9000)		 = 0x95000 0
	stat64("/usr/lib/dtrace/libdtrace_dyld.dylib\0", 0xBFFA5DE0, 0x1)		 = 0 0
	stat64("/\0", 0xBFFA3710, 0x1)		 = 0 0
	getattrlist("/Applications\0", 0x8FE73E60, 0xBFFA4FF8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC\0", 0x8FE73E60, 0xBFFA4FF8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app\0", 0x8FE73E60, 0xBFFA4FF8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents\0", 0x8FE73E60, 0xBFFA4FF8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS\0", 0x8FE73E60, 0xBFFA4FF8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS/ExManCmd\0", 0x8FE73E60, 0xBFFA4FF8)		 = 0 0
	stat64("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS/../Frameworks//LibExManCoreLib.dylib\0", 0xBFFA5268, 0xBFFA4FF8)		 = 0 0
	mmap(0x99000, 0x9A9000, 0x1, 0x12, 0x3, 0x0)		 = 0x99000 0
	mmap(0xA42000, 0x60000, 0x3, 0x12, 0x3, 0x9A9000)		 = 0xA42000 0
	mmap(0xAA9000, 0x1000, 0x3, 0x12, 0x3, 0xA09000)		 = 0xAA9000 0
	mmap(0xAAA000, 0x4CE2F0, 0x1, 0x12, 0x3, 0xA0A000)		 = 0xAAA000 0
	fcntl(0x3, 0x32, 0xFFFFFFFFBFFA3208)		 = 0 0
	fcntl(0x3, 0x2C, 0xFFFFFFFFBFFA31B0)		 = 0 0
	madvise(0xAAA000, 0x7000, 0x2)		 = 0 0
	getattrlist("/Applications\0", 0x8FE73E60, 0xBFFA4ED8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC\0", 0x8FE73E60, 0xBFFA4ED8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app\0", 0x8FE73E60, 0xBFFA4ED8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents\0", 0x8FE73E60, 0xBFFA4ED8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS\0", 0x8FE73E60, 0xBFFA4ED8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS/ExManCmd\0", 0x8FE73E60, 0xBFFA4ED8)		 = 0 0
	stat64("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS/./../Frameworks/VulcanMessage4.dylib\0", 0xBFFA5248, 0xBFFA4ED8)		 = 0 0
	mmap(0xF7A000, 0x18000, 0x1, 0x12, 0x3, 0x0)		 = 0xF7A000 0
	mmap(0xF92000, 0x1000, 0x3, 0x12, 0x3, 0x18000)		 = 0xF92000 0
	mmap(0xF93000, 0x1F8C0, 0x1, 0x12, 0x3, 0x19000)		 = 0xF93000 0
	fcntl(0x3, 0x32, 0xFFFFFFFFBFFA3698)		 = 0 0
	fcntl(0x3, 0x2C, 0xFFFFFFFFBFFA3640)		 = 0 0
	stat64("/System/Library/Frameworks/Carbon.framework/Versions/A/Carbon\0", 0xBFFA52E8, 0xFFFFFFFFBFFA3640)		 = 0 0
	getattrlist("/Applications\0", 0x8FE73E60, 0xBFFA4EC8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC\0", 0x8FE73E60, 0xBFFA4EC8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app\0", 0x8FE73E60, 0xBFFA4EC8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents\0", 0x8FE73E60, 0xBFFA4EC8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS\0", 0x8FE73E60, 0xBFFA4EC8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS/ExManCmd\0", 0x8FE73E60, 0xBFFA4EC8)		 = 0 0
	stat64("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS/./../Frameworks/adobe_caps.framework/Versions/A/adobe_caps\0", 0xBFFA5238, 0xBFFA4EC8)		 = 0 0
	mmap(0xFB3000, 0x66000, 0x1, 0x12, 0x3, 0x0)		 = 0xFB3000 0
	mmap(0x1019000, 0x2000, 0x3, 0x12, 0x3, 0x66000)		 = 0x1019000 0
	mmap(0x101B000, 0x5770, 0x1, 0x12, 0x3, 0x68000)		 = 0x101B000 0
	fcntl(0x3, 0x32, 0xFFFFFFFFBFFA35A8)		 = 0 0
	fcntl(0x3, 0x2C, 0xFFFFFFFFBFFA3550)		 = 0 0
	stat64("/usr/lib/libstdc++.6.dylib\0", 0xBFFA52E8, 0xFFFFFFFFBFFA3550)		 = 0 0
	stat64("/usr/lib/libSystem.B.dylib\0", 0xBFFA52E8, 0xFFFFFFFFBFFA3550)		 = 0 0
	getattrlist("/Applications\0", 0x8FE73E60, 0xBFFA4EA8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC\0", 0x8FE73E60, 0xBFFA4EA8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app\0", 0x8FE73E60, 0xBFFA4EA8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents\0", 0x8FE73E60, 0xBFFA4EA8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS\0", 0x8FE73E60, 0xBFFA4EA8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/Frameworks\0", 0x8FE73E60, 0xBFFA4EA8 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/Frameworks/LibExManCoreLib.dylib\0", 0x8FE73E60, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Security.framework/Versions/A/Security\0", 0xBFFA5198, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Cocoa.framework/Versions/A/Cocoa\0", 0xBFFA5198, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation\0", 0xBFFA5198, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libobjc.A.dylib\0", 0xBFFA5198, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation\0", 0xBFFA5198, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices\0", 0xBFFA5198, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libbsm.0.dylib\0", 0xBFFA5018, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libauto.dylib\0", 0xBFFA5018, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libxar.1.dylib\0", 0xBFFA5018, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libz.1.dylib\0", 0xBFFA5018, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libsqlite3.dylib\0", 0xBFFA5018, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libpam.2.dylib\0", 0xBFFA5018, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/IOKit.framework/Versions/A/IOKit\0", 0xBFFA5018, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libOpenScriptingUtil.dylib\0", 0xBFFA5018, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libc++.1.dylib\0", 0xBFFA5018, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libcache.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libcommonCrypto.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libcompiler_rt.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libcopyfile.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libcorecrypto.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libdispatch.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libdyld.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libkeymgr.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/liblaunch.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libmacho.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libquarantine.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libremovefile.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_asl.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_blocks.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_c.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_configuration.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_coreservices.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_coretls.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_dnssd.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_info.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_kernel.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_m.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_malloc.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_network.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_networkextension.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_notify.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_platform.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_pthread.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_sandbox.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_secinit.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libsystem_trace.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libunc.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libunwind.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libxpc.dylib\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libc++abi.dylib\0", 0xBFFA4F38, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libDiagnosticMessagesClient.dylib\0", 0xBFFA4E68, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libbz2.1.0.dylib\0", 0xBFFA4F38, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libxml2.2.dylib\0", 0xBFFA4F38, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libicucore.A.dylib\0", 0xBFFA4E68, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/system/libkxld.dylib\0", 0xBFFA4F18, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/CarbonSound.framework/Versions/A/CarbonSound\0", 0xBFFA4FE8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/CommonPanels.framework/Versions/A/CommonPanels\0", 0xBFFA4FE8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Help.framework/Versions/A/Help\0", 0xBFFA4FE8, 0xBFFA4EA8 = 0 0
	stat64("/System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox\0", 0xBFFA4FE8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HTMLRendering.framework/Versions/A/HTMLRendering\0", 0xBFFA4FE8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/ImageCapture.framework/Versions/A/ImageCapture\0", 0xBFFA4FE8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Ink.framework/Versions/A/Ink\0", 0xBFFA4FE8, 0xBFFA4EA8)	 = 0 0
	stat64("/System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/NavigationServices.framework/Versions/A/NavigationServices\0", 0xBFFA4FE8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/OpenScripting.framework/Versions/A/OpenScripting\0", 0xBFFA4FE8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Print.framework/Versions/A/Print\0", 0xBFFA4FE8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/SecurityHI.framework/Versions/A/SecurityHI\0", 0xBFFA4FE8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/SpeechRecognition.framework/Versions/A/SpeechRecognition\0", 0xBFFA4FE8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices\0", 0xBFFA4FE8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/CoreAudio.framework/Versions/A/CoreAudio\0", 0xBFFA4EE8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork\0", 0xBFFA4D78, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/FSEvents.framework/Versions/A/FSEvents\0", 0xBFFA4D78, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/CarbonCore.framework/Versions/A/CarbonCore\0", 0xBFFA4D78, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/Metadata.framework/Versions/A/Metadata\0", 0xBFFA4D78, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/OSServices.framework/Versions/A/OSServices\0", 0xBFFA4D78, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/SearchKit.framework/Versions/A/SearchKit\0", 0xBFFA4D78, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/AE.framework/Versions/A/AE\0", 0xBFFA4D78, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices\0", 0xBFFA4D78, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/DictionaryServices.framework/Versions/A/DictionaryServices\0", 0xBFFA4D78, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/SystemConfiguration.framework/Versions/A/SystemConfiguration\0", 0xBFFA4BD8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/DiskArbitration.framework/Versions/A/DiskArbitration\0", 0xBFFA4C18, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/NetFS.framework/Versions/A/NetFS\0", 0xBFFA4C18, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/NetAuth.framework/Versions/A/NetAuth\0", 0xBFFA4B08, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/login.framework/Versions/A/Frameworks/loginsupport.framework/Versions/A/loginsupport\0", 0xBFFA4A38, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore\0", 0xBFFA4C08, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/TCC.framework/Versions/A/TCC\0", 0xBFFA4C08, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libmecabra.dylib\0", 0xBFFA4C08, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics\0", 0xBFFA4838, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText\0", 0xBFFA4838, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO\0", 0xBFFA4838, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/ATS.framework/Versions/A/ATS\0", 0xBFFA4838, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/ColorSync.framework/Versions/A/ColorSync\0", 0xBFFA4838, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/HIServices.framework/Versions/A/HIServices\0", 0xBFFA4838, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/LangAnalysis.framework/Versions/A/LangAnalysis\0", 0xBFFA4838, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/PrintCore.framework/Versions/A/PrintCore\0", 0xBFFA4838, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/QD.framework/Versions/A/QD\0", 0xBFFA4838, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/SpeechSynthesis.framework/Versions/A/SpeechSynthesis\0", 0xBFFA4838, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/IOSurface.framework/Versions/A/IOSurface\0", 0xBFFA46B8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Accelerate.framework/Versions/A/Accelerate\0", 0xBFFA46B8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/MultitouchSupport.framework/Versions/A/MultitouchSupport\0", 0xBFFA46B8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vImage.framework/Versions/A/vImage\0", 0xBFFA45D8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vecLib.framework/Versions/A/vecLib\0", 0xBFFA45D8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vecLib.framework/Versions/A/libvDSP.dylib\0", 0xBFFA45D8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vecLib.framework/Versions/A/libvMisc.dylib\0", 0xBFFA44C8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vecLib.framework/Versions/A/libLAPACK.dylib\0", 0xBFFA44C8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vecLib.framework/Versions/A/libBLAS.dylib\0", 0xBFFA44C8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vecLib.framework/Versions/A/libLinearAlgebra.dylib\0", 0xBFFA44C8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/ATS.framework/Versions/A/Resources/libFontParser.dylib\0", 0xBFFA46B8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/ATS.framework/Versions/A/Resources/libFontRegistry.dylib\0", 0xBFFA46B8, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libextension.dylib\0", 0xBFFA44C8, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libarchive.2.dylib\0", 0xBFFA44C8, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/liblangid.dylib\0", 0xBFFA44C8, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libCRFSuite.dylib\0", 0xBFFA44C8, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/liblzma.5.dylib\0", 0xBFFA43C8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/AppleJPEG.framework/Versions/A/AppleJPEG\0", 0xBFFA44C8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/ImageIO.framework/Versions/A/Resources/libJPEG.dylib\0", 0xBFFA44C8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/ImageIO.framework/Versions/A/Resources/libTIFF.dylib\0", 0xBFFA44C8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/ImageIO.framework/Versions/A/Resources/libPng.dylib\0", 0xBFFA44C8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/ImageIO.framework/Versions/A/Resources/libGIF.dylib\0", 0xBFFA44C8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/ImageIO.framework/Versions/A/Resources/libJP2.dylib\0", 0xBFFA44C8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/ImageIO.framework/Versions/A/Resources/libRadiance.dylib\0", 0xBFFA44C8, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libcups.2.dylib\0", 0xBFFA4668, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/Kerberos.framework/Versions/A/Kerberos\0", 0xBFFA4518, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/GSS.framework/Versions/A/GSS\0", 0xBFFA4518, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libresolv.9.dylib\0", 0xBFFA4518, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libiconv.2.dylib\0", 0xBFFA4518, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/Heimdal.framework/Versions/A/Heimdal\0", 0xBFFA4438, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libheimdal-asn1.dylib\0", 0xBFFA4308, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/OpenDirectory.framework/Versions/A/OpenDirectory\0", 0xBFFA43C8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/CommonAuth.framework/Versions/A/CommonAuth\0", 0xBFFA43C8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/OpenDirectory.framework/Versions/A/Frameworks/CFOpenDirectory.framework/Versions/A/CFOpenDirectory\0", 0xBFFA4298, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation\0", 0xBFFA4298, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox\0", 0xBFFA4708, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/LanguageModeling.framework/Versions/A/LanguageModeling\0", 0xBFFA4A68, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libcmph.dylib\0", 0xBFFA4A68, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/CoreData.framework/Versions/A/CoreData\0", 0xBFFA4A68, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/ServiceManagement.framework/Versions/A/ServiceManagement\0", 0xBFFA4A98, 0xBFFA4EA8)		 = 0 0
	stat64("/usr/lib/libxslt.1.dylib\0", 0xBFFA4BD8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore\0", 0xBFFA4C28, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/DesktopServicesPriv.framework/Versions/A/DesktopServicesPriv\0", 0xBFFA4C28, 0xBFFA4EA8)	 = 0 0
	stat64("/System/Library/PrivateFrameworks/GenerationalStorage.framework/Versions/A/GenerationalStorage\0", 0xBFFA4C28, 0xBFFA4EA8)	 = 0 0
	stat64("/System/Library/Frameworks/OpenGL.framework/Versions/A/OpenGL\0", 0xBFFA48A8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/CoreVideo.framework/Versions/A/CoreVideo\0", 0xBFFA48A8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage\0", 0xBFFA48A8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/libGLU.dylib\0", 0xBFFA4708, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/libGFXShared.dylib\0", 0xBFFA4708, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/libGL.dylib\0", 0xBFFA4708, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/libGLImage.dylib\0", 0xBFFA45E8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/libCVMSPluginSupport.dylib\0", 0xBFFA4518, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/libCoreVMClient.dylib\0", 0xBFFA4438, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/CrashReporterSupport.framework/Versions/A/CrashReporterSupport\0", 0xBFFA46A8, 0xBFFA4EA8 = 0 0
	stat64("/System/Library/Frameworks/OpenCL.framework/Versions/A/OpenCL\0", 0xBFFA46A8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/FaceCore.framework/Versions/A/FaceCore\0", 0xBFFA46A8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/Ubiquity.framework/Versions/A/Ubiquity\0", 0xBFFA4A18, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing\0", 0xBFFA4A18, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices\0", 0xBFFA4A18, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/ChunkingLibrary.framework/Versions/A/ChunkingLibrary\0", 0xBFFA4868, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/Apple80211.framework/Versions/A/Apple80211\0", 0xBFFA4868, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN\0", 0xBFFA4868, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth\0", 0xBFFA4868, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi\0", 0xBFFA45E8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/AudioUnit.framework/Versions/A/AudioUnit\0", 0xBFFA46A8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/CoreBluetooth.framework/Versions/A/CoreBluetooth\0", 0xBFFA46A8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/SpeechRecognitionCore.framework/Versions/A/SpeechRecognitionCore\0", 0xBFFA4EC8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/Frameworks/AppKit.framework/Versions/C/AppKit\0", 0xBFFA50B8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/RemoteViewServices.framework/Versions/A/RemoteViewServices\0", 0xBFFA4D58, 0xBFFA4EA8)	 = 0 0
	stat64("/System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation\0", 0xBFFA4D58, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis\0", 0xBFFA4D58, 0xBFFA4EA8)	 = 0 0
	stat64("/System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup\0", 0xBFFA4BF8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/DebugSymbols.framework/Versions/A/DebugSymbols\0", 0xBFFA47E8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/CoreSymbolication.framework/Versions/A/CoreSymbolication\0", 0xBFFA47E8, 0xBFFA4EA8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication\0", 0xBFFA47E8, 0xBFFA4EA8)		 = 0 0
	getpid(0x9B824CA8, 0xBFFA47E8, 0xBFFA4EA8)		 = 28027 0
	madvise(0xAAA000, 0x7000, 0x5)		 = 0 0
	open("/dev/dtracehelper\0", 0x2, 0xBFFA6260)		 = 3 0
	ioctl(0x3, 0x80086804, 0xBFFA61F0)		 = 0 0
	sysctl(0xBFFA4F28, 0x2, 0xBFFA4F34)		 = 0 0
	thread_selfid(0xBFFA4F28, 0x2, 0xBFFA4F34)		 = 3429817 0
	mprotect(0x97000, 0x44, 0x1)		 = 0 0
	mprotect(0x1021000, 0x1000, 0x0)		 = 0 0
	mprotect(0x102D000, 0x1000, 0x0)		 = 0 0
	mprotect(0x102E000, 0x1000, 0x0)		 = 0 0
	mprotect(0x103A000, 0x1000, 0x0)		 = 0 0
	mprotect(0xF79000, 0x1000, 0x1)		 = 0 0
	mprotect(0x97000, 0x44, 0x3)		 = 0 0
	getpid(0x97000, 0x44, 0x1)		 = 28027 0
	stat64("/AppleInternal/XBS/.isChrooted\0", 0xBFFA4ED0, 0x1)		 = -1 Err#2
	stat64("/BuildSupport/makeProject\0", 0xBFFA4ED0, 0x1)		 = -1 Err#2
	stat64("/AppleInternal\0", 0xBFFA4E60, 0x1)		 = -1 Err#2
	csops(0x6D7B, 0x7, 0xBFFA4994)		 = 0 0
	csops(0x6D7B, 0x7, 0xBFFA4234)		 = 0 0
	issetugid(0x6D7B, 0x7, 0xBFFA4234)		 = 0 0
	getattrlist("/Applications\0", 0x8FE73E60, 0xBFFA2E38)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC\0", 0x8FE73E60, 0xBFFA2E38)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app\0", 0x8FE73E60, 0xBFFA2E38)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents\0", 0x8FE73E60, 0xBFFA2E38)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS\0", 0x8FE73E60, 0xBFFA2E38)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS/ExManCmd\0", 0x8FE73E60, 0xBFFA2E38)		 = 0 0
	stat64("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/Frameworks/LibExManCoreLib.dylib\0", 0xBFFA3158, 0xBFFA2E38)		 = 0 0
	madvise(0x103B000, 0x27000, 0x9)		 = 0 0
	getuid(0x103B000, 0x27000, 0x9)		 = 0 0
	geteuid(0x103B000, 0x27000, 0x9)		 = 0 0
	sysctl(0xBFFA48D8, 0x4, 0xBFFA48E8)		 = 0 0
	issetugid(0xBFFA48D8, 0x4, 0xBFFA48E8)		 = 0 0
	getuid(0xBFFA48D8, 0x4, 0xBFFA48E8)		 = 0 0
	sysctl(0xBFFA3304, 0x2, 0xA0C16C2C)		 = 0 0
	fstatfs64(0x3, 0xBFFA3390, 0xA0C16C2C)		 = 0 0
	getdirentries64(0x3, 0x788CD200, 0x1000)		 = 88 0
	getdirentries64(0x3, 0x788CD200, 0x1000)		 = 0 0
	fstatfs64(0x3, 0xBFFA37D0, 0x1)		 = 0 0
	getdirentries64(0x3, 0x788CD200, 0x1000)		 = 272 0
	fstat64(0x3, 0xBFFA3B68, 0x1B6)		 = 0 0
	stat64("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS/./ExManCmd\0", 0xBFFA43A8, 0x89F)	 = 0 0
	getattrlist("/Applications\0", 0x8FE73E60, 0xBFFA3CE8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC\0", 0x8FE73E60, 0xBFFA3CE8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app\0", 0x8FE73E60, 0xBFFA3CE8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents\0", 0x8FE73E60, 0xBFFA3CE8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS\0", 0x8FE73E60, 0xBFFA3CE8)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS/ExManCmd\0", 0x8FE73E60, 0xBFFA3CE8)		 = 0 0
	stat64("/System/Library/PrivateFrameworks/Heimdal.framework/Heimdal\0", 0xBFFA4008, 0xBFFA3CE8)		 = 0 0
	stat64("/System/Library/Frameworks/GSS.framework/GSS\0", 0xBFFA4008, 0xBFFA3CE8)		 = 0 0
	mprotect(0x10A2000, 0x44, 0x1)		 = 0 0
	mprotect(0x10A4000, 0x1000, 0x0)		 = 0 0
	mprotect(0x10B0000, 0x1000, 0x0)		 = 0 0
	mprotect(0x10B1000, 0x1000, 0x0)		 = 0 0
	mprotect(0x10BD000, 0x1000, 0x0)		 = 0 0
	mprotect(0xF79000, 0x1000, 0x3)		 = 0 0
	mprotect(0x10A2000, 0x44, 0x3)		 = 0 0
	__pthread_sigmask(0x1, 0xBFFA5008, 0x0)		 = 0 0
	open_nocancel("/etc/localtime\0", 0x0, 0x1024300)		 = 4 0
	fstat64(0x4, 0xBFFA2820, 0x1024300)		 = 0 0
	mmap(0x0, 0x1000, 0x1, 0x1, 0x4, 0x0)		 = 0x10BE000 0
	gettimeofday(0xBFFA69F0, 0x0, 0x1)		 = 1435980160 0
	fstat64(0x4, 0xBFFA63E8, 0x746E6F43)		 = 0 0
	fcntl_nocancel(0x4, 0x32, 0xFFFFFFFFBFFA6588)		 = 0 0
	stat64("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS\0", 0xBFFA6378, 0xFFFFFFFFBFFA6588)	 = 0 0
	sigaction(0x4, 0xBFFA6960, 0x0)		 = 0 0
	sigaction(0xA, 0xBFFA6960, 0x0)		 = 0 0
	sigaction(0xB, 0xBFFA6960, 0x0)		 = 0 0
	sigaction(0xC, 0xBFFA6960, 0x0)		 = 0 0
	fcntl(0x3, 0x9, 0xFFFFFFFFBFFA6750)		 = 0 0
	read(0x4, "i\247\245\252\306\227\354\312\334\214\231\2254\314;\264K\321;\026~ez\377Pa|q\341\316\314\364\367\344\310.\374\212E\0", 0xFC)		 = 252 0
	read(0x4, "-\005\206{2\340P\347\"p\363\270\266<i\207p\006\327.F\nFF\301\236w\332\323Is\030\241%m\310m\277\261\274\267v\n\207\336/E\034\261\203\343\b\357\207&\223\016#X\001\377T4:\261e3\351\310\\\204\002\375\253\034S\253Q\343.\320{\001\317s\367 \222bf\311\373\340\343Wr\3317\344uT7\"\241\3346\202\241\321\376\376\32615\336\005\025S\027\215\261\266\370g\333\252\262\374\232\260\022\177\0", 0xFC)	 = 252 0
	fstat64(0x4, 0xBFFA6250, 0x0)		 = 0 0
	select(0x5, 0xBFFA61D0, 0x0, 0x0, 0xBFFA61C8)		 = 1 0
	read(0x4, "\204\026\t\"\363\035\261\275}\022\016sOD\354\367\231\221\002\361\246\3375\356\357\361\275\224\2177\234\344\0", 0x20)		 = 32 0
	getuid(0x4, 0xBFFA6398, 0x20)		 = 0 0
	gettimeofday(0xBFFA6160, 0x0, 0x20)		 = 1435980160 0
	issetugid(0xBFFA6160, 0x0, 0x20)		 = 0 0
	gettid(0xBFFA5F5C, 0xBFFA5F58, 0x20)		 = -1 Err#3
	geteuid(0xBFFA5F5C, 0xBFFA5F58, 0x20)		 = 0 0
	getuid(0xBFFA5F5C, 0xBFFA5F58, 0x20)		 = 0 0
	gettid(0xBFFA55DC, 0xBFFA55D8, 0x0)		 = -1 Err#3
	geteuid(0xBFFA55DC, 0xBFFA55D8, 0x0)		 = 0 0
	getuid(0xBFFA55DC, 0xBFFA55D8, 0x0)		 = 0 0
	issetugid(0xBFFA55DC, 0xBFFA55D8, 0x0)		 = 0 0
	stat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/Log\0", 0xBFFA63B8, 0x0)		 = 0 0
	stat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/Log/ExManLog_Fatal\0", 0xBFFA6058, 0x0)		 = -1 Err#2
	stat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/Log/ExManLog_Critical\0", 0xBFFA6058, 0x0)		 = -1 Err#2
	stat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/Log/ExManLog_Error\0", 0xBFFA6058, 0x0)		 = -1 Err#2
	stat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/Log/ExManLog_Warning\0", 0xBFFA6058, 0x0)		 = -1 Err#2
	stat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/Log/ExManLog_Notice\0", 0xBFFA6058, 0x0)		 = -1 Err#2
	stat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/Log/ExManLog_Information\0", 0xBFFA6058, 0x0)		 = -1 Err#2
	stat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/Log/ExManLog_Debug\0", 0xBFFA6058, 0x0)		 = -1 Err#2
	stat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/Log/ExManLog_Trace\0", 0xBFFA6058, 0x0)		 = -1 Err#2
	stat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/Log/ExManCoreLibrary.log\0", 0xBFFA6148, 0x0)		 = 0 0
	lstat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/Log/ExManCoreLibrary.log\0", 0xBFFA60A0, 0x0)		 = 0 0
	stat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/Log/ExManCoreLibrary.log\0", 0xBFFA60A0, 0x0)		 = 0 0
	unlink("/var/root/Library/Application Support/Adobe/Extension Manager CC/Log/ExManCoreLibrary.log\0", 0xBFFA60A0, 0x0)		 = 0 0
	stat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/Log/ExManCoreLibLog.YES\0", 0xBFFA6338, 0x0)		 = -1 Err#2
	lstat64("/tmp/ExmanUpdateTemp/\0", 0xBFFA62F0, 0x0)		 = -1 Err#2
	stat64("/Library/Application Support/Adobe\0", 0xBFFA6168, 0x0)		 = 0 0
	stat64("/Library/Application Support/Adobe/Extension Manager CC\0", 0xBFFA6168, 0x0)		 = 0 0
	stat64("/Library/Application Support/Adobe/Extension Manager CC/EM Store\0", 0xBFFA6128, 0x0)		 = 0 0
	stat64("/Library/Application Support/Adobe/Extension Manager CC/EM Store\0", 0xBFFA6018, 0x0)		 = 0 0
	chmod(0x791726BC, 0x1FF, 0x0)		 = 0 0
	stat64("/Library/Application Support/Adobe/Extension Manager CC/EM Store/Shared\0", 0xBFFA61C8, 0x0)		 = 0 0
	stat64("/Library/Application Support/Adobe/Extension Manager CC/EM Store/Shared\0", 0xBFFA60B8, 0x0)		 = 0 0
	chmod(0x791727EC, 0x1FF, 0x0)		 = 0 0
	stat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/EM Store\0", 0xBFFA61C8, 0x0)		 = 0 0
	stat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/EM Store/Shared\0", 0xBFFA61C8, 0x0)		 = 0 0
	stat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/Temp\0", 0xBFFA6228, 0x0)		 = 0 0
	stat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/Temp\0", 0xBFFA6118, 0x0)		 = 0 0
	chmod(0x791734EC, 0x1FF, 0x0)		 = 0 0
	stat64("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB\0", 0xBFFA6228, 0x0)		 = 0 0
	stat64("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db\0", 0xBFFA6118, 0x0)		 = 0 0
	chmod(0x7917397C, 0x1FF, 0x0)		 = 0 0
	sysctlbyname(0x8DA972, 0x7, 0xBFFA6108)		 = 0 0
	stat64("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db\0", 0xBFFA5290, 0xBFFA6108)		 = 0 0
	fstatfs64(0x4, 0xBFFA5370, 0x1A4)		 = 0 0
	statfs64(0x7A0C7A10, 0xBFFA4A50, 0x1A4)		 = 0 0
	fstat64(0x4, 0xBFFA5250, 0x1A4)		 = 0 0
	fstat64(0x4, 0xBFFA5260, 0x1A4)		 = 0 0
	stat64("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db\0", 0xBFFA5260, 0x1A4)		 = 0 0
	gettimeofday(0xBFFA6220, 0x0, 0x64)		 = 1435980160 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA59C0)		 = 0 0
	access("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db-journal\0", 0x0, 0xFFFFFFFFBFFA59C0)		 = -1 Err#2
	fstat64(0x4, 0xBFFA5980, 0xFFFFFFFFBFFA59C0)		 = 0 0
	access("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db-wal\0", 0x0, 0xFFFFFFFFBFFA59C0)		 = -1 Err#2
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5560)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5C90)		 = 0 0
	access("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db-journal\0", 0x0, 0xFFFFFFFFBFFA5C90)		 = -1 Err#2
	fstat64(0x4, 0xBFFA5C50, 0xFFFFFFFFBFFA5C90)		 = 0 0
	fstat64(0x4, 0xBFFA5C50, 0x10)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5CD0)		 = 0 0
	gettimeofday(0xBFFA61E0, 0x0, 0xFFFFFFFFBFFA5CD0)		 = 1435980160 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5C50)		 = 0 0
	access("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db-journal\0", 0x0, 0xFFFFFFFFBFFA5C50)		 = -1 Err#2
	fstat64(0x4, 0xBFFA5C10, 0xFFFFFFFFBFFA5C50)		 = 0 0
	fstat64(0x4, 0xBFFA5C10, 0x10)		 = 0 0
	gettimeofday(0xBFFA61C0, 0x0, 0xFFFFFFFFBFFA5C90)		 = 1435980160 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5C30)		 = 0 0
	access("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db-journal\0", 0x0, 0xFFFFFFFFBFFA5C30)		 = -1 Err#2
	fstat64(0x4, 0xBFFA5BF0, 0xFFFFFFFFBFFA5C30)		 = 0 0
	fstat64(0x4, 0xBFFA5BF0, 0x10)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5C70)		 = 0 0
	gettimeofday(0xBFFA61C0, 0x0, 0xFFFFFFFFBFFA5C70)		 = 1435980160 0
	gettimeofday(0xBFFA6220, 0x0, 0xFFFFFFFFBFFA5C70)		 = 1435980160 0
	getrlimit(0x1008, 0xBFFA5A28, 0xFFFFFFFFBFFA5CD0)		 = 0 0
	gettimeofday(0xBFFA6260, 0x0, 0xFFFFFFFFBFFA5CD0)		 = 1435980160 0
	access("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db-journal\0", 0x0, 0xFFFFFFFFBFFA5CD0)		 = -1 Err#2
	fstat64(0x4, 0xBFFA5C90, 0xFFFFFFFFBFFA5CD0)		 = 0 0
	fstat64(0x4, 0xBFFA5C90, 0x10)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5D10)		 = 0 0
	lstat64("/Library/Application Support/Adobe/Extension Manager CC/EM Store/Virtual Product\0", 0xBFFA6060, 0xFFFFFFFFBFFA5D10)		 = 0 0
	lstat64("/Library/Application Support/Adobe/Extension Manager CC/EM Store/Virtual Product\0", 0xBFFA6038, 0xFFFFFFFFBFFA5D10)		 = 0 0
	lstat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/EM Store/Virtual Product\0", 0xBFFA60A0, 0xFFFFFFFFBFFA5D10)		 = 0 0
	lstat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/EM Store/Virtual Product\0", 0xBFFA6078, 0xFFFFFFFFBFFA5D10)		 = 0 0
	gettimeofday(0xBFFA61B0, 0x0, 0xFFFFFFFFBFFA5D10)		 = 1435980160 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5C20)		 = 0 0
	access("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db-journal\0", 0x0, 0xFFFFFFFFBFFA5C20)		 = -1 Err#2
	fstat64(0x4, 0xBFFA5BE0, 0xFFFFFFFFBFFA5C20)		 = 0 0
	fstat64(0x4, 0xBFFA5BE0, 0x10)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5C60)		 = 0 0
	gettimeofday(0xBFFA5E30, 0x0, 0xFFFFFFFFBFFA5C60)		 = 1435980160 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA58A0)		 = 0 0
	access("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db-journal\0", 0x0, 0xFFFFFFFFBFFA58A0)		 = -1 Err#2
	fstat64(0x4, 0xBFFA5860, 0xFFFFFFFFBFFA58A0)		 = 0 0
	fstat64(0x4, 0xBFFA5860, 0x10)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA58E0)		 = 0 0
	lstat64("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/Frameworks/../Resources/XManConfig.xml\0", 0xBFFA5C80, 0xFFFFFFFFBFFA58E0)		 = 0 0
	lstat64("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/Frameworks/../Resources/XManConfig.xml\0", 0xBFFA5B10, 0xFFFFFFFFBFFA58E0)		 = 0 0
	lstat64("/tmp/tmp28027aaaaaa\0", 0xBFFA54B0, 0xFFFFFFFFBFFA58E0)		 = -1 Err#2
	lstat64("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/Frameworks/../Resources/XManConfig.xml\0", 0xBFFA5380, 0xFFFFFFFFBFFA58E0)		 = 0 0
	lstat64("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/Frameworks/../Resources/XManConfig.xml\0", 0xBFFA5280, 0xFFFFFFFFBFFA58E0)		 = 0 0
	lstat64("/tmp/tmp28027aaaaaa\0", 0xBFFA4C10, 0xFFFFFFFFBFFA58E0)		 = -1 Err#2
	stat64_extended(0x7917FAF0, 0xBFFA4C10, 0x791800E0)		 = -1 Err#2
	lstat64_extended(0x7917FA60, 0x7917FFF0, 0x791800E0)		 = 0 0
	__mac_syscall(0x91DC8ED8, 0x52, 0xBFFA4B48)		 = -1 Err#93
	lstat64("/tmp/tmp28027aaaaaa\0", 0xBFFA4D80, 0xBFFA4B48)		 = -1 Err#2
	open("/tmp/tmp28027aaaaaa\0", 0xB01, 0x81A4)		 = 6 0
	fstatfs64(0x5, 0xBFFA42B0, 0x0)		 = 0 0
	fstatfs64(0x6, 0xBFFA42B0, 0x0)		 = 0 0
	fcntl(0x6, 0x2A, 0xFFFFFFFFBFFA4268)		 = 0 0
	madvise(0x10BF000, 0x100000, 0x9)		 = -1 Err#22
	fstat64_extended(0x6, 0xBFFA4B28, 0x79071EB0)		 = 0 0
	fstat64(0x6, 0xBFFA4068, 0x50)		 = 0 0
	futimes(0x6, 0xBFFA40D8, 0x50)		 = 0 0
	fstat64(0x5, 0xBFFA4C80, 0x50)		 = 0 0
	fstat64_extended(0x6, 0xBFFA4CF0, 0x79071D10)		 = 0 0
	getattrlist("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/Frameworks/../Resources/XManConfig.xml\0", 0xBFFA4F30, 0xBFFA4F20)		 = 0 0
	setattrlist(0xBFFA4F48, 0xBFFA4F30, 0xBFFA4F24)		 = 0 0
	open("/tmp/tmp28027aaaaaa\0", 0x0, 0x1B6)		 = 5 0
	lstat64("/tmp/tmp28027aaaaaa\0", 0xBFFA5A40, 0xFFC)		 = 0 0
	lstat64("/tmp/tmp28027aaaaaa\0", 0x7918003C, 0xFFC)		 = 0 0
	geteuid(0x79180024, 0x7918003C, 0xFFC)		 = 0 0
	unlink("/tmp/tmp28027aaaaaa\0", 0x7918003C, 0xFFC)		 = 0 0
	stat64("/Library/Application Support/Adobe/Extension Manager CC/Configuration/XManConfigV2.xml\0", 0xBFFA5CC8, 0xFFC)		 = 0 0
	gettimeofday(0xBFFA5A40, 0x0, 0xFFC)		 = 1435980160 0
	stat64("/Library/Application Support/Adobe/Extension Manager CC/Configuration/XManConfigV2.xml\0", 0xBFFA5928, 0xFFC)		 = 0 0
	gettimeofday(0xBFFA59E0, 0x0, 0xFFC)		 = 1435980160 0
	read(0x5, "PluginConfigFile\" locale=\"fr_MA\">$UserLibraryFolder/Preferences/Adobe InDesign/Version 9.0-ME/fr_FR/PlugInConfig.txt</Data>\r\n      <Data key=\"$PluginConfigFile\" locale=\"es_MX\">$UserLibraryFolder/Preferences/Adobe InDesign/Version 9.0/es_ES/PlugInConfig.txt", 0xFFC)		 = 0 0
	stat64("/Library/Application Support/Adobe/caps/pdb.db\0", 0xBFFA5E28, 0x9)		 = 0 0
	stat64("/Library/Application Support/Adobe/caps/pdb.db\0", 0xBFFA5E20, 0x9)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5780)		 = 0 0
	access("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db-journal\0", 0x0, 0xFFFFFFFFBFFA5780)		 = -1 Err#2
	fstat64(0x4, 0xBFFA5740, 0xFFFFFFFFBFFA5780)		 = 0 0
	fstat64(0x4, 0xBFFA5740, 0x10)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA57C0)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA58C0)		 = 0 0
	access("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db-journal\0", 0x0, 0xFFFFFFFFBFFA58C0)		 = -1 Err#2
	fstat64(0x4, 0xBFFA5880, 0xFFFFFFFFBFFA58C0)		 = 0 0
	fstat64(0x4, 0xBFFA5880, 0x10)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5900)		 = 0 0
	stat64("/Library/Application Support/Adobe/Extension Manager CC/Configuration/XManConfigV2.xml\0", 0xBFFA5DA8, 0xFFFFFFFFBFFA5900)	 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5270)		 = 0 0
	access("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db-journal\0", 0x0, 0xFFFFFFFFBFFA5270)		 = -1 Err#2
	fstat64(0x4, 0xBFFA5230, 0xFFFFFFFFBFFA5270)		 = 0 0
	fstat64(0x4, 0xBFFA5230, 0x10)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA52B0)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5750)		 = 0 0
	access("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db-journal\0", 0x0, 0xFFFFFFFFBFFA5750)		 = -1 Err#2
	fstat64(0x4, 0xBFFA5710, 0xFFFFFFFFBFFA5750)		 = 0 0
	fstat64(0x4, 0xBFFA5710, 0x10)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5790)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5710)		 = 0 0
	access("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db-journal\0", 0x0, 0xFFFFFFFFBFFA5710)		 = -1 Err#2
	fstat64(0x4, 0xBFFA56D0, 0xFFFFFFFFBFFA5710)		 = 0 0
	fstat64(0x4, 0xBFFA56D0, 0x10)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5990)		 = 0 0
	access("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db-journal\0", 0x0, 0xFFFFFFFFBFFA5990)		 = -1 Err#2
	fstat64(0x4, 0xBFFA5950, 0xFFFFFFFFBFFA5990)		 = 0 0
	fstat64(0x4, 0xBFFA5950, 0x10)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA59D0)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5930)		 = 0 0
	access("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db-journal\0", 0x0, 0xFFFFFFFFBFFA5930)		 = -1 Err#2
	fstat64(0x4, 0xBFFA58F0, 0xFFFFFFFFBFFA5930)		 = 0 0
	fstat64(0x4, 0xBFFA58F0, 0x10)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5970)		 = 0 0
	stat64("/var/root/Library/Preferences/Adobe/Extension Manager CC/NoAccessInternet\0", 0xBFFA6328, 0xFFFFFFFFBFFA5970)		 = -1 Err#2
	bsdthread_create(0x6E9A90, 0xAA1E28, 0x80000)		 = -1341648896 0
	thread_selfid(0x0, 0x0, 0x0)		 = 3429823 0
	open_nocancel(".\0", 0x0, 0xBFFA5AE8)		 = 5 0
	fstat64(0x5, 0xBFFA5B48, 0xBFFA5AE8)		 = 0 0
	fcntl_nocancel(0x5, 0x32, 0xFFFFFFFFBFFA5CE8)		 = 0 0
	stat64("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS\0", 0xBFFA5AD8, 0xFFFFFFFFBFFA5CE8)	 = 0 0
	sysctl(0xB0080140, 0x6, 0x788D2A00)		 = 0 0
	kqueue(0xB0080140, 0x6, 0x788D2A00)		 = 6 0
	fstatfs64(0x5, 0xBFFA56B0, 0x72656761)		 = 0 0
	getdirentries64(0x5, 0x7A8C8200, 0x1000)		 = 1480 0
	sendto_nocancel(0x7, 0x787B47C0, 0x1C)		 = 28 0
	fstatfs64(0x8, 0xBFFA5570, 0x1)		 = 0 0
	getdirentries64(0x8, 0x7A8C9200, 0x1000)		 = 2736 0
	open_nocancel("/Library/Application Support\0", 0x1100004, 0x1)		 = 9 0
	fstatfs64(0x9, 0xBFFA5430, 0x1)		 = 0 0
	getdirentries64(0x9, 0x7A8CA200, 0x1000)		 = 1064 0
	open_nocancel("/Library/Application Support/Adobe\0", 0x1100004, 0x1)		 = 10 0
	fstatfs64(0xA, 0xBFFA52F0, 0x1)		 = 0 0
	getdirentries64(0xA, 0x7A8CB200, 0x1000)		 = 3400 0
	setsockopt(0xB, 0xFFFF, 0x1100)		 = 0 0
	sendto_nocancel(0x7, 0x787B4830, 0x36)		 = 54 0
	open_nocancel("/Library/Application Support/Adobe/InDesign\0", 0x1100004, 0x1)		 = 12 0
	select_nocancel(0xC, 0xB0080040, 0x0)		 = 1 0
	recvfrom_nocancel(0xB, 0xB008003C, 0x4)		 = 4 0
	fstatfs64(0xC, 0xBFFA51B0, 0x1)		 = 0 0
	getdirentries64(0xC, 0x7A8CC200, 0x1000)		 = 248 0
	open_nocancel("/Library/Application Support/Adobe/InDesign/Version 10.0\0", 0x1100004, 0x1)		 = 14 0
	fstatfs64(0xE, 0xBFFA5070, 0x1)		 = 0 0
	getdirentries64(0xE, 0x7A8CD200, 0x1000)		 = 168 0
	fstatfs64(0xD, 0xBFFA4F30, 0x1)		 = 0 0
	getdirentries64(0xD, 0x788D2A00, 0x1000)		 = 128 0
	open_nocancel("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions\0", 0x1100004, 0x1)		 = 11 0
	fstatfs64(0xB, 0xBFFA4DF0, 0x1)		 = 0 0
	getdirentries64(0xB, 0x788D4200, 0x1000)		 = 4056 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Alignment Panel.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Article Panel.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Asset Library Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	recvfrom_nocancel(0x7, 0x79073D10, 0x39)		 = 57 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Asset PubLibrary.mxi\0", 0xBFFA5678, 0x1000) = 0 0
	select_nocancel(0x8, 0xB0080100, 0x0)		 = 1 0
	recvfrom_nocancel(0x7, 0x79073E20, 0x2E)		 = 46 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Assignment UI.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	recvfrom_nocancel(0x7, 0x79073D10, 0x35)		 = 53 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_BNUI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	sendto_nocancel(0x7, 0x79073F90, 0x1C)		 = 28 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Book Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Bookmark Panel.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_ButtonUI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Character Panel.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Clipping Path Dialog.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Color Management UI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Color Picker Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Conditional Text UI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	socket(0x20, 0x2, 0x2)		 = 15 0
	setsockopt(0xF, 0xFFFF, 0x1022)		 = 0 0
	ioctl(0xF, 0xC0644E03, 0xB007FD70)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_ContentDropper Tool.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	connect(0xF, 0xB007FD50, 0x20)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Control Panel.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	setsockopt(0xF, 0xFFFF, 0x1002)		 = 0 0
	fcntl(0xF, 0x3, 0x0)		 = 2 0
	fcntl(0xF, 0x4, 0x6)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Create Guides Dialog.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	sendto(0xF, 0xB007FEB0, 0x50)		 = 80 0
	recvfrom(0xF, 0xB007FEB0, 0x50)		 = 24 0
	sendto(0xF, 0xB007FE20, 0x14)		 = 20 0
	recvfrom(0xF, 0xB007FE20, 0x84)		 = 132 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Create Outlines.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	sendto(0xF, 0xB007FF00, 0x14)		 = 20 0
	recvfrom(0xF, 0xB007FF00, 0x8C)		 = 140 0
	close(0xF)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_CSXS.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Data Services UI.mxi\0", 0xBFFA5678, 0x1000) = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Data Services.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_DataMerge.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	socket(0x2, 0x1, 0x0)		 = 15 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_DataMergeUI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Dictionary Editor Dialog.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	ioctl(0xF, 0x8004667E, 0xB00804DC)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_DTTransform.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_DynamicDocumentsUI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_EBookExport.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	connect(0xF, 0x79073E38, 0x10)		 = -1 Err#36
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_EPS UI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Eyedropper Tool.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Find and Change Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Find Change Format Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Font Usage Dialog.mxi\0", 0xBFFA5678, 0x1000 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Galley Preferences.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_GapTool.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_General Preferences Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Generic Style Editor.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Glyphs Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Gradient Panel.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Graphic Panels.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Help.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Hyperlinks Panel.mxi\0", 0xBFFA5678, 0x1000) = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Hyphenation Panel.mxi\0", 0xBFFA5678, 0x1000 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Image Import UI.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_InCopy Bridge UI.mxi\0", 0xBFFA5678, 0x1000) = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_InCopy Bridge.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_InCopyExport.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_InCopyExportUI.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_InCopyImport.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_InCopyWorkflow UI.mxi\0", 0xBFFA5678, 0x1000 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Indents and Tabs.mxi\0", 0xBFFA5678, 0x1000) = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Index Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Info Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_JBX.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_JPEG Export UI.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_JPEG Export.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Justification Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Keeps Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Knowledge Base.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Layers Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Layout Adjustment Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Layout Adjustment.mxi\0", 0xBFFA5678, 0x1000 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_LILO.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Links UI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_ME UI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Media Import Filter.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_MediaUI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Metadata UI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Note.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_NotePref.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_ObjectStylesUI.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Optical Kerning.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Output Preview.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_OutputMiscUI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Package and Preflight UI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Package and Preflight.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Page Setup Dialog.mxi\0", 0xBFFA5678, 0x1000 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Pages Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Paragraph Panel.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	getdirentries64(0xB, 0x788D4200, 0x1000)		 = 2776 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Paragraph Rules Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Path Type UI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_PDF UI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Performance UI.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_PerformanceMetrics.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_PNG Import Filter UI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Printer Styles.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_PrintUI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_PS Import UI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_RunIn Styles Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Sangam Preferences UI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_SangamExport.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_SangamServicer-Mapper.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_SaveBack.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Scotch Rules.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Script Label Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Scripts Panel.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Sections UI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_SettingsInCloud.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_SharedContentUI.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Shortcut Editor Dialog.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_SimpleTextImportFilter.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_SING.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Snippet.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Span Columns Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Spelling Panel.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_StepRepeat.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Story Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Style Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Swatch Library Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Swatches Panel.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Tables UI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_TableStylesUI.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Tagged Text Attributes.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Tagged Text Filters UI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Tagged Text Filters.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Text Color Panel.mxi\0", 0xBFFA5678, 0x1000) = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Text Frame Options.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Text Panel.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Text Preferences.mxi\0", 0xBFFA5678, 0x1000) = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Text Ruler.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Text Style Panel.mxi\0", 0xBFFA5678, 0x1000) = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Text Wrap Panel.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_TOC UI Dialog.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Tool Box.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Tool Tips.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Track Changes Preferences.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Track Changes UI.mxi\0", 0xBFFA5678, 0x1000) = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Transform Panel.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Transparency UI.mxi\0", 0xBFFA5678, 0x1000)	 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Username UI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Workgroup UI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	stat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_XMedia UI.mxi\0", 0xBFFA5678, 0x1000)		 = 0 0
	getdirentries64(0xB, 0x788D4200, 0x1000)		 = 0 0
	getdirentries64(0xD, 0x788D2A00, 0x1000)		 = 0 0
	getdirentries64(0xE, 0x7A8CD200, 0x1000)		 = 0 0
	getdirentries64(0xC, 0x7A8CC200, 0x1000)		 = 0 0
	getdirentries64(0xA, 0x7A8CB200, 0x1000)		 = 0 0
	getdirentries64(0x9, 0x7A8CA200, 0x1000)		 = 0 0
	getdirentries64(0x8, 0x7A8C9200, 0x1000)		 = 0 0
	getdirentries64(0x5, 0x7A8C8200, 0x1000)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA54D0)		 = 0 0
	access("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db-journal\0", 0x0, 0xFFFFFFFFBFFA54D0)		 = -1 Err#2
	fstat64(0x4, 0xBFFA5490, 0xFFFFFFFFBFFA54D0)		 = 0 0
	fstat64(0x4, 0xBFFA5490, 0x10)		 = 0 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Alignment Panel.zxp\0", 0xBFFA59E0, 0x3FF)	 = -1 Err#2
	issetugid(0x4, 0x7A0EB600, 0x400)		 = 0 0
	open_nocancel("/usr/share/zoneinfo/UTC\0", 0x0, 0x97000)		 = 5 0
	fstat64(0x5, 0xBFFA2590, 0x97000)		 = 0 0
	stat64("/var/root/Library/Application Support/Adobe/Extension Manager CC/Log/ExManCoreLibrary.log\0", 0xBFFA4900, 0x1)		 = 0 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.467 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Alignment Panel 2014 is not allowed!\n\0", 0x9B)		 = 155 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.467 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Alignment Panel 2014, status = -418!\n\0", 0xAD)		 = 173 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.467 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.467 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Alignment Panel.mxi, status = -418!\n\0", 0xF3)		 = 243 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.467 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Alignment Panel 2014, status = -418!\n\0", 0xC0)		 = 192 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.467 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Alignment Panel.mxi, s", 0x10E)		 = 270 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Article Panel.zxp\0", 0xBFFA59E0, 0x3FF)	 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.468 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Article Panel 2014 is not allowed!\n\0", 0x99)		 = 153 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.468 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Article Panel 2014, status = -418!\n\0", 0xAB)		 = 171 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.468 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.468 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Article Panel.mxi, status = -418!\n\0", 0xF1 = 241 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.468 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Article Panel 2014, status = -418!\n\0", 0xBE)		 = 190 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.468 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Article Panel.mxi, sta", 0x10C)		 = 268 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Asset Library Panel.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.469 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Asset Library Panel 2014 is not allowed!\n\0", 0x9F)		 = 159 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.469 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Asset Library Panel 2014, status = -418!\n\0", 0xB1)		 = 177 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.469 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.469 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Asset Library Panel.mxi, status = -418!\n\0", 0xF7)		 = 247 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.469 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Asset Library Panel 2014, status = -418!\n\0", 0xC4)		 = 196 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.470 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Asset Library Panel.mx", 0x112)		 = 274 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Asset PubLibrary.zxp\0", 0xBFFA59E0, 0x3FF) = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.470 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Asset PubLibrary 2014 is not allowed!\n\0", 0x9C)		 = 156 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.470 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Asset PubLibrary 2014, status = -418!\n\0", 0xAE)		 = 174 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.470 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.470 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Asset PubLibrary.mxi, status = -418!\n\0", 0xF4)		 = 244 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.471 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Asset PubLibrary 2014, status = -418!\n\0", 0xC1)		 = 193 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.471 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Asset PubLibrary.mxi, ", 0x10F)		 = 271 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Assignment UI.zxp\0", 0xBFFA59E0, 0x3FF)	 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.471 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Assignment UI 2014 is not allowed!\n\0", 0x99)		 = 153 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.471 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Assignment UI 2014, status = -418!\n\0", 0xAB)		 = 171 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.471 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.472 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Assignment UI.mxi, status = -418!\n\0", 0xF1 = 241 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.472 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Assignment UI 2014, status = -418!\n\0", 0xBE)		 = 190 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.472 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Assignment UI.mxi, sta", 0x10C)		 = 268 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_BNUI.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.472 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension BNUI 2014 is not allowed!\n\0", 0x90)		 = 144 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.472 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension BNUI 2014, status = -418!\n\0", 0xA2)		 = 162 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.473 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.473 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_BNUI.mxi, status = -418!\n\0", 0xE8)		 = 232 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.473 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension BNUI 2014, status = -418!\n\0", 0xB5)		 = 181 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.473 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_BNUI.mxi, status = -41", 0x103)		 = 259 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Book Panel.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.473 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Book Panel 2014 is not allowed!\n\0", 0x96)		 = 150 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.473 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Book Panel 2014, status = -418!\n\0", 0xA8)		 = 168 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.474 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Book Panel.mxi, status = -418!\n\0", 0xEE)	 = 238 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.474 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Book Panel 2014, status = -418!\n\0", 0xBB)		 = 187 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.474 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Book Panel.mxi, status", 0x109)		 = 265 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Bookmark Panel.zxp\0", 0xBFFA59E0, 0x3FF)	 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.474 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Bookmark Panel 2014 is not allowed!\n\0", 0x9A)		 = 154 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.474 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Bookmark Panel 2014, status = -418!\n\0", 0xAC)		 = 172 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.474 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.474 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Bookmark Panel.mxi, status = -418!\n\0", 0xF2)		 = 242 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.475 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Bookmark Panel 2014, status = -418!\n\0", 0xBF)		 = 191 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.475 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Bookmark Panel.mxi, st", 0x10D)		 = 269 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_ButtonUI.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.475 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension ButtonUI 2014 is not allowed!\n\0", 0x94)		 = 148 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.475 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension ButtonUI 2014, status = -418!\n\0", 0xA6)		 = 166 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.475 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.475 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_ButtonUI.mxi, status = -418!\n\0", 0xEC)		 = 236 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.475 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension ButtonUI 2014, status = -418!\n\0", 0xB9)		 = 185 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.475 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_ButtonUI.mxi, status =", 0x107)		 = 263 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_CSXS.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.476 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension CSXS 2014 is not allowed!\n\0", 0x90)		 = 144 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.476 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension CSXS 2014, status = -418!\n\0", 0xA2)		 = 162 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.476 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.476 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_CSXS.mxi, status = -418!\n\0", 0xE8)		 = 232 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.476 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension CSXS 2014, status = -418!\n\0", 0xB5)		 = 181 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.476 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_CSXS.mxi, status = -41", 0x103)		 = 259 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Character Panel.zxp\0", 0xBFFA59E0, 0x3FF)	 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.477 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Character Panel 2014 is not allowed!\n\0", 0x9B)		 = 155 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.477 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Character Panel 2014, status = -418!\n\0", 0xAD)		 = 173 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.477 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.477 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Character Panel.mxi, status = -418!\n\0", 0xF3)		 = 243 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.477 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Character Panel 2014, status = -418!\n\0", 0xC0)		 = 192 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.477 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Character Panel.mxi, s", 0x10E)		 = 270 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Clipping Path Dialog.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.478 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Clipping Path Dialog 2014 is not allowed!\n\0", 0xA0)		 = 160 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.478 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Clipping Path Dialog 2014, status = -418!\n\0", 0xB2)		 = 178 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.478 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.478 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Clipping Path Dialog.mxi, status = -418!\n\0", 0xF8)		 = 248 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.478 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Clipping Path Dialog 2014, status = -418!\n\0", 0xC5)		 = 197 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.478 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Clipping Path Dialog.m", 0x113)		 = 275 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Color Management UI.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.480 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Color Management UI 2014 is not allowed!\n\0", 0x9F)		 = 159 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.480 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Color Management UI 2014, status = -418!\n\0", 0xB1)		 = 177 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.480 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.480 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Color Management UI.mxi, status = -418!\n\0", 0xF7)		 = 247 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.480 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Color Management UI 2014, status = -418!\n\0", 0xC4)		 = 196 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.480 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Color Management UI.mx", 0x112)		 = 274 0
	select(0x10, 0xB0080440, 0xB00803C0, 0xB0080340, 0xB0080330)		 = 1 0
	getsockopt(0xF, 0xFFFF, 0x1007)		 = 0 0
	setsockopt(0xF, 0xFFFF, 0x1006)		 = 0 0
	setsockopt(0xF, 0x6, 0x1)		 = 0 0
	sendto(0xF, 0x798D7C00, 0x49)		 = 73 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Color Picker Panel.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.482 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Color Picker Panel 2014 is not allowed!\n\0", 0x9E)		 = 158 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.482 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Color Picker Panel 2014, status = -418!\n\0", 0xB0)		 = 176 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.482 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.482 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Color Picker Panel.mxi, status = -418!\n\0", 0xF6)		 = 246 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.482 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Color Picker Panel 2014, status = -418!\n\0", 0xC3)		 = 195 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.482 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Color Picker Panel.mxi", 0x111)		 = 273 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Conditional Text UI.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.483 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Conditional Text UI 2014 is not allowed!\n\0", 0x9F)		 = 159 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.483 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Conditional Text UI 2014, status = -418!\n\0", 0xB1)		 = 177 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.483 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.483 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Conditional Text UI.mxi, status = -418!\n\0", 0xF7)		 = 247 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.483 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Conditional Text UI 2014, status = -418!\n\0", 0xC4)		 = 196 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.483 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Conditional Text UI.mx", 0x112)		 = 274 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_ContentDropper Tool.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.484 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension ContentDropper Tool 2014 is not allowed!\n\0", 0x9F)		 = 159 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.484 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension ContentDropper Tool 2014, status = -418!\n\0", 0xB1)		 = 177 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.484 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.485 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_ContentDropper Tool.mxi, status = -418!\n\0", 0xF7)		 = 247 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.485 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension ContentDropper Tool 2014, status = -418!\n\0", 0xC4)		 = 196 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.485 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_ContentDropper Tool.mx", 0x112)		 = 274 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Control Panel.zxp\0", 0xBFFA59E0, 0x3FF)	 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.486 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Control Panel 2014 is not allowed!\n\0", 0x99)		 = 153 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.486 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Control Panel 2014, status = -418!\n\0", 0xAB)		 = 171 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.486 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.486 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Control Panel.mxi, status = -418!\n\0", 0xF1 = 241 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.486 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Control Panel 2014, status = -418!\n\0", 0xBE)		 = 190 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.486 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Control Panel.mxi, sta", 0x10C)		 = 268 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Create Guides Dialog.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.487 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Create Guides Dialog 2014 is not allowed!\n\0", 0xA0)		 = 160 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.487 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Create Guides Dialog 2014, status = -418!\n\0", 0xB2)		 = 178 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.487 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.487 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Create Guides Dialog.mxi, status = -418!\n\0", 0xF8)		 = 248 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.487 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Create Guides Dialog 2014, status = -418!\n\0", 0xC5)		 = 197 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.487 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Create Guides Dialog.m", 0x113)		 = 275 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Create Outlines.zxp\0", 0xBFFA59E0, 0x3FF)	 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.488 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Create Outlines 2014 is not allowed!\n\0", 0x9B)		 = 155 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.488 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Create Outlines 2014, status = -418!\n\0", 0xAD)		 = 173 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.488 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.488 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Create Outlines.mxi, status = -418!\n\0", 0xF3)		 = 243 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.488 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Create Outlines 2014, status = -418!\n\0", 0xC0)		 = 192 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.488 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Create Outlines.mxi, s", 0x10E)		 = 270 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_DTTransform.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.489 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension DTTransform 2014 is not allowed!\n\0", 0x97)		 = 151 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.489 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension DTTransform 2014, status = -418!\n\0", 0xA9)		 = 169 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.489 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.490 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_DTTransform.mxi, status = -418!\n\0", 0xEF)	 = 239 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.490 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension DTTransform 2014, status = -418!\n\0", 0xBC)		 = 188 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.490 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_DTTransform.mxi, statu", 0x10A)		 = 266 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Data Services UI.zxp\0", 0xBFFA59E0, 0x3FF) = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.491 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Data Services UI 2014 is not allowed!\n\0", 0x9C)		 = 156 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.491 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Data Services UI 2014, status = -418!\n\0", 0xAE)		 = 174 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.491 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.491 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Data Services UI.mxi, status = -418!\n\0", 0xF4)		 = 244 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.491 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Data Services UI 2014, status = -418!\n\0", 0xC1)		 = 193 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.491 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Data Services UI.mxi, ", 0x10F)		 = 271 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Data Services.zxp\0", 0xBFFA59E0, 0x3FF)	 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.492 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Data Services 2014 is not allowed!\n\0", 0x99)		 = 153 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.492 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Data Services 2014, status = -418!\n\0", 0xAB)		 = 171 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.492 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.492 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Data Services.mxi, status = -418!\n\0", 0xF1 = 241 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.492 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Data Services 2014, status = -418!\n\0", 0xBE)		 = 190 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.492 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Data Services.mxi, sta", 0x10C)		 = 268 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_DataMerge.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.493 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension DataMerge 2014 is not allowed!\n\0", 0x95)		 = 149 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.493 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension DataMerge 2014, status = -418!\n\0", 0xA7)		 = 167 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.493 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.493 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_DataMerge.mxi, status = -418!\n\0", 0xED)	 = 237 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.493 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension DataMerge 2014, status = -418!\n\0", 0xBA)		 = 186 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.493 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_DataMerge.mxi, status ", 0x108)		 = 264 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_DataMergeUI.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.494 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension DataMergeUI 2014 is not allowed!\n\0", 0x97)		 = 151 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.494 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension DataMergeUI 2014, status = -418!\n\0", 0xA9)		 = 169 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.494 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.494 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_DataMergeUI.mxi, status = -418!\n\0", 0xEF)	 = 239 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.494 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension DataMergeUI 2014, status = -418!\n\0", 0xBC)		 = 188 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.494 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_DataMergeUI.mxi, statu", 0x10A)		 = 266 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Dictionary Editor Dialog.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.494 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Dictionary Editor Dialog 2014 is not allowed!\n\0", 0xA4)		 = 164 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.494 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Dictionary Editor Dialog 2014, status = -418!\n\0", 0xB6)		 = 182 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.495 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.495 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Dictionary Editor Dialog.mxi, status = -418!\n\0", 0xFC)		 = 252 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.495 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Dictionary Editor Dialog 2014, status = -418!\n\0", 0xC9)		 = 201 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.495 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Dictionary Editor Dial", 0x117)		 = 279 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_DynamicDocumentsUI.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.495 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension DynamicDocumentsUI 2014 is not allowed!\n\0", 0x9E)		 = 158 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.496 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension DynamicDocumentsUI 2014, status = -418!\n\0", 0xB0)		 = 176 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.496 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.496 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_DynamicDocumentsUI.mxi, status = -418!\n\0", 0xF6)		 = 246 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.496 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension DynamicDocumentsUI 2014, status = -418!\n\0", 0xC3)		 = 195 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.496 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_DynamicDocumentsUI.mxi", 0x111)		 = 273 0
	open_nocancel("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_EBookExport.mxi\0", 0x0, 0x1B6)		 = 8 0
	read(0x8, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\n<macromedia-extension name=\"EBookExport\" version=\"10.0.0.070\" show-files=\"true\" locked=\"false\" plugin-manager-type=\"all-users\" type=\"object\">\n  <author name=\"Adobe Systems Incorporated\" />\n  <products>\n    <product n", 0x3FF)		 = 669 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_EBookExport.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.496 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension EBookExport 2014 is not allowed!\n\0", 0x97)		 = 151 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.496 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension EBookExport 2014, status = -418!\n\0", 0xA9)		 = 169 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.496 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_EBookExport.mxi, status = -418!\n\0", 0xEF)	 = 239 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.497 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension EBookExport 2014, status = -418!\n\0", 0xBC)		 = 188 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.497 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_EBookExport.mxi, statu", 0x10A)		 = 266 0
	open_nocancel("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_EPS UI.mxi\0", 0x0, 0x1B6)		 = 8 0
	read(0x8, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\n<macromedia-extension name=\"EPS UI\" version=\"10.0.0.070\" show-files=\"true\" locked=\"false\" plugin-manager-type=\"all-users\" type=\"object\">\n  <author name=\"Adobe Systems Incorporated\" />\n  <products>\n    <product name=\"", 0x3FF)		 = 661 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_EPS UI.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.497 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension EPS UI 2014 is not allowed!\n\0", 0x92)		 = 146 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.497 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension EPS UI 2014, status = -418!\n\0", 0xA4)		 = 164 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.497 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.497 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_EPS UI.mxi, status = -418!\n\0", 0xEA)		 = 234 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.497 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension EPS UI 2014, status = -418!\n\0", 0xB7)		 = 183 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.497 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_EPS UI.mxi, status = -", 0x105)		 = 261 0
	open_nocancel("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Eyedropper Tool.mxi\0", 0x0, 0x1B6)	 = 8 0
	read(0x8, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\n<macromedia-extension name=\"Eyedropper Tool\" version=\"10.0.0.070\" show-files=\"true\" locked=\"false\" plugin-manager-type=\"all-users\" type=\"object\">\n  <author name=\"Adobe Systems Incorporated\" />\n  <products>\n    <produ", 0x3FF)		 = 675 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Eyedropper Tool.zxp\0", 0xBFFA59E0, 0x3FF)	 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.498 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Eyedropper Tool 2014 is not allowed!\n\0", 0x9B)		 = 155 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.498 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Eyedropper Tool 2014, status = -418!\n\0", 0xAD)		 = 173 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.498 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.498 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Eyedropper Tool.mxi, status = -418!\n\0", 0xF3)		 = 243 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.498 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Eyedropper Tool 2014, status = -418!\n\0", 0xC0)		 = 192 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.498 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Eyedropper Tool.mxi, s", 0x10E)		 = 270 0
	open_nocancel("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Find Change Format Panel.mxi\0", 0x0, 0x1B6)		 = 8 0
	read(0x8, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\n<macromedia-extension name=\"Find Change Format Panel\" version=\"10.0.0.070\" show-files=\"true\" locked=\"false\" plugin-manager-type=\"all-users\" type=\"object\">\n  <author name=\"Adobe Systems Incorporated\" />\n  <products>\n ", 0x3FF)		 = 728 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Find Change Format Panel.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.499 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Find Change Format Panel 2014 is not allowed!\n\0", 0xA4)		 = 164 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.499 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Find Change Format Panel 2014, status = -418!\n\0", 0xB6)		 = 182 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.499 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.499 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Find Change Format Panel.mxi, status = -418!\n\0", 0xFC)		 = 252 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.499 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Find Change Format Panel 2014, status = -418!\n\0", 0xC9)		 = 201 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.499 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Find Change Format Pan", 0x117)		 = 279 0
	open_nocancel("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Find and Change Panel.mxi\0", 0x0, 0x1B6)		 = 8 0
	read(0x8, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\n<macromedia-extension name=\"Find and Change Panel\" version=\"10.0.0.070\" show-files=\"true\" locked=\"false\" plugin-manager-type=\"all-users\" type=\"object\">\n  <author name=\"Adobe Systems Incorporated\" />\n  <products>\n    ", 0x3FF)		 = 772 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Find and Change Panel.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.500 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Find and Change Panel 2014 is not allowed!\n\0", 0xA1)		 = 161 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.500 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Find and Change Panel 2014, status = -418!\n\0", 0xB3)		 = 179 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.500 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.500 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Find and Change Panel.mxi, status = -418!\n\0", 0xF9)		 = 249 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.500 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Find and Change Panel 2014, status = -418!\n\0", 0xC6)		 = 198 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.500 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Find and Change Panel.", 0x114)		 = 276 0
	open_nocancel("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Font Usage Dialog.mxi\0", 0x0, 0x1B6) = 8 0
	read(0x8, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\n<macromedia-extension name=\"Font Usage Dialog\" version=\"10.0.0.070\" show-files=\"true\" locked=\"false\" plugin-manager-type=\"all-users\" type=\"object\">\n  <author name=\"Adobe Systems Incorporated\" />\n  <products>\n    <pro", 0x3FF)		 = 714 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Font Usage Dialog.zxp\0", 0xBFFA59E0, 0x3FF = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.501 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Font Usage Dialog 2014 is not allowed!\n\0", 0x9D)		 = 157 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.501 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Font Usage Dialog 2014, status = -418!\n\0", 0xAF)		 = 175 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.501 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.501 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Font Usage Dialog.mxi, status = -418!\n\0", 0xF5)		 = 245 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.501 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Font Usage Dialog 2014, status = -418!\n\0", 0xC2)		 = 194 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.501 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Font Usage Dialog.mxi,", 0x110)		 = 272 0
	open_nocancel("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Galley Preferences.mxi\0", 0x0, 0x1B6 = 8 0
	read(0x8, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\n<macromedia-extension name=\"Galley Preferences\" version=\"10.0.0.070\" show-files=\"true\" locked=\"false\" plugin-manager-type=\"all-users\" type=\"object\">\n  <author name=\"Adobe Systems Incorporated\" />\n  <products>\n    <pr", 0x3FF)		 = 712 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Galley Preferences.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.502 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension Galley Preferences 2014 is not allowed!\n\0", 0x9E)		 = 158 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.502 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension Galley Preferences 2014, status = -418!\n\0", 0xB0)		 = 176 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.502 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.502 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Galley Preferences.mxi, status = -418!\n\0", 0xF6)		 = 246 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.502 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension Galley Preferences 2014, status = -418!\n\0", 0xC3)		 = 195 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.502 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Galley Preferences.mxi", 0x111)		 = 273 0
	open_nocancel("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_GapTool.mxi\0", 0x0, 0x1B6)		 = 8 0
	read(0x8, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\n<macromedia-extension name=\"GapTool\" version=\"10.0.0.070\" show-files=\"true\" locked=\"false\" plugin-manager-type=\"all-users\" type=\"object\">\n  <author name=\"Adobe Systems Incorporated\" />\n  <products>\n    <product name=", 0x3FF)		 = 651 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_GapTool.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.503 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension GapTool 2014 is not allowed!\n\0", 0x93)		 = 147 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.503 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension GapTool 2014, status = -418!\n\0", 0xA5)		 = 165 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.503 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.503 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_GapTool.mxi, status = -418!\n\0", 0xEB)		 = 235 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.503 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension GapTool 2014, status = -418!\n\0", 0xB8)		 = 184 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.503 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_GapTool.mxi, status = ", 0x106)		 = 262 0
	open_nocancel("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_General Preferences Panel.mxi\0", 0x0, 0x1B6)		 = 8 0
	read(0x8, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\n<macromedia-extension name=\"General Preferences Panel\" version=\"10.0.0.070\" show-files=\"true\" locked=\"false\" plugin-manager-type=\"all-users\" type=\"object\">\n  <author name=\"Adobe Systems Incorporated\" />\n  <products>\n", 0x3FF)		 = 687 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_General Preferences Panel.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	write(0x5, "[Error] Sat Jul 04 15:22:40.504 2015 (ExtensionBase.cpp, 447) -CExtensionBase::validateUpdate:  downgrading extension General Preferences Panel 2014 is not allowed!\n\0", 0xA5)		 = 165 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.504 2015 (ExtensionBase.cpp, 232) -CExtensionBase::validateExtension: validateUpdate() failed for extension General Preferences Panel 2014, status = -418!\n\0", 0xB7)		 = 183 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.504 2015 (ExtensionBase.cpp, 607) -CExtensionBase::install: validateExtension() failed for zxp , status = -418!\n\0", 0x8C)		 = 140 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.504 2015 (Product.cpp, 850) -CProduct::installPreinstalledExtension: install() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_General Preferences Panel.mxi, status = -418!\n\0", 0xFD)		 = 253 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.504 2015 (Product.cpp, 786) -CProduct::processSinglePreinstalledExtension: installPreinstalledExtension() failed for extension General Preferences Panel 2014, status = -418!\n\0", 0xCA)		 = 202 0
	write(0x5, "[Error] Sat Jul 04 15:22:40.504 2015 (Product.cpp, 539) -CProduct::processPreinstalledExtension: processSinglePreinstalledExtension() failed for extension /Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_General Preferences Pa", 0x118)			 = 280 0
	open_nocancel("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Generic Style Editor.mxi\0", 0x0, 0x1B6)		 = 8 0
	read(0x8, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\n<macromedia-extension name=\"Generic Style Editor\" version=\"10.0.0.070\" show-files=\"true\" locked=\"false\" plugin-manager-type=\"all-users\" type=\"object\">\n  <author name=\"Adobe Systems Incorporated\" />\n  <products>\n    <", 0x3FF)		 = 689 0
	lstat64("/Library/Application Support/Adobe/InDesign/Version 10.0/en_US/Extensions/idcc_Generic Style Editor.zxp\0", 0xBFFA59E0, 0x3FF)		 = -1 Err#2
	dtrace: error on enabled probe ID 1993 (ID 150: syscall::write:return): invalid address (0x0) in action #12 at DIF offset 92
	dtrace: 13 dynamic variable drops with non-empty dirty list
	recvfrom(0xF, 0x798D6C00, 0x1000)		 = 352 0
	kqueue(0xF, 0x798D6C00, 0x1000)		 = 8 0
	kevent(0x8, 0xB0080258, 0x1)		 = 0 0
	sendto_nocancel(0x7, 0x787B4C80, 0x40)		 = 64 0
	sendto_nocancel(0x7, 0x79471B80, 0x40)		 = 64 0
	kevent(0x8, 0x0, 0x0)		 = 1 0
	recvfrom_nocancel(0x7, 0x79377CB0, 0x52)		 = 82 0
	kevent(0x8, 0xB007FBC8, 0x1)		 = 0 0
	recvfrom_nocancel(0x7, 0x79377CB0, 0x54)		 = 84 0
	recvfrom_nocancel(0x7, 0x79377D60, 0x31)		 = 49 0
	recvfrom_nocancel(0x7, 0x7868A850, 0x3F)		 = 63 0
	sendto_nocancel(0x7, 0x7868A760, 0x1C)		 = 28 0
	connect(0x8, 0x7868A768, 0x10)		 = -1 Err#36
	select(0x9, 0xB0080440, 0xB00803C0, 0xB0080340, 0xB0080330)		 = 1 0
	getsockopt(0x8, 0xFFFF, 0x1007)		 = 0 0
	setsockopt(0x8, 0xFFFF, 0x1006)		 = 0 0
	setsockopt(0x8, 0x6, 0x1)		 = 0 0
	sendto(0x8, 0x798D6C00, 0x69)		 = 105 0
	recvfrom(0x8, 0x798D7C00, 0x1000)		 = 1448 0
	open("/tmp/tmp28027baaaaa\0", 0x601, 0x1B6)		 = 9 0
	recvfrom(0x8, 0x798D6C04, 0xFFC)		 = 1448 0
	recvfrom(0x8, 0x798D6C04, 0xFFC)		 = 1179 0
	recvfrom(0x8, 0x798D6C04, 0xFFC)		 = 1200 0
	write(0x9, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n<Configuration version=\"3.1.13\">\r\n   <Product name=\"Virtual Product\" id=\"0\">\r\n      <Data key=\"others-destination\">$downloads</Data>\r\n   </Product>\r\n   <Product name=\"dreamweaver-13.0\" id=\"1\">\r\n      <Data key=\"$shar", 0x1000)		 = 4096 0
	write(0x9, "r/Presets.localized</Data>\r\n      <Data key=\"$localizedpresets\">$presets/$Locale</Data>\r\n      <Data key=\"$localizedUserPresets\">$UserDataFolder/Adobe/Adobe Illustrator 17 Settings/$LOCALE</Data>\r\n      <Data key=\"DisplayName\">Illustrator CC</Data>\r\n      ", 0x1000)		 = 4096 0
	write(0x9, "iguration/Icon.png</Data>\r\n      <Data key=\"DefaultLocale\">en_US</Data>\r\n      <Data key=\"Bit\">64</Data>\r\n      <Data key=\"$PreExtensionFolder\" locale=\"ja_JP\">$SharedCommonDataFolder/Adobe/InDesign/Version 9.0-J/ja_JP/Extensions</Data>\r\n      <Data key=\"$P", 0x1000)		 = 4096 0
	write(0x9, "r/Preferences/Adobe InDesign/Version 9.0-J/ja_JP/PlugInConfig.txt</Data>\r\n      <Data key=\"$PluginConfigFile\" locale=\"ko_KR\">$UserLibraryFolder/Preferences/Adobe InDesign/Version 9.0-J/ko_KR/PlugInConfig.txt</Data>\r\n      <Data key=\"$PluginConfigFile\" loca", 0x1000)		 = 4096 0
	write(0x9, ">\r\n      <Data key=\"$PluginConfigFile\">$UserDataFolder/Adobe/InCopy/Version 9.0/$locale/PlugInConfig32.txt</Data>\r\n      <Data key=\"MinExManVersion\">7.0.0</Data>\r\n   </Product>\r\n   <Product name=\"incopy-9.064\" platform=\"win\" id=\"10\">\r\n      <Data key=\"$inc", 0x1000)		 = 4096 0
	write(0x9, "cale=\"en_AE\">$SharedCommonDataFolder/Adobe/InCopy/Version 9.0-ME/en_AE/Extensions</Data>\r\n      <Data key=\"$PreExtensionFolder\" locale=\"en_IL\">$SharedCommonDataFolder/Adobe/InCopy/Version 9.0-ME/en_IL/Extensions</Data>\r\n      <Data key=\"$PreExtensionFolder", 0x1000)		 = 4096 0
	write(0x9, " key=\"$selectivecolor\">$presetsfolder/Selective Color</Data>\r\n      <Data key=\"$shadowhighlight\">$presetsfolder/Shadow Highlight</Data>\r\n      <Data key=\"$smartsharpen\">$presetsfolder/Smart Sharpen</Data>\r\n      <Data key=\"$styles\">$presetsfolder/Styles</D", 0x1000)		 = 4096 0
	write(0x9, "etsfolder/Color Range</Data>\r\n      <Data key=\"$colorswatches\">$presetsfolder/Color Swatches</Data>\r\n      <Data key=\"$contours\">$presetsfolder/Contours</Data>\r\n      <Data key=\"$curves\">$presetsfolder/Curves</Data>\r\n      <Data key=\"$customshapes\">$preset", 0x1000)		 = 4096 0
	write(0x9, "les</Data>\r\n      <Data key=\"$matlab\">$photoshopappfolder/MATLAB</Data>\r\n      <Data key=\"$photoshop\">$UserDataFolder/Adobe/Adobe Photoshop CC/Configuration</Data>\r\n      <Data key=\"DisplayName\">Photoshop CC 64</Data>\r\n      <Data key=\"ProductName\">Photosh", 0x1000)		 = 4096 0
	write(0x9, "alesfolder\">$photoshopappfolder/Locales</Data>\r\n      <Data key=\"$additionalplugins\">$localesfolder/$LOCALE/Additional Plug-ins</Data>\r\n      <Data key=\"$additionalpresets\">$localesfolder/$LOCALE/Additional Presets</Data>\r\n      <Data key=\"$localeskeyboard", 0x1000)		 = 4096 0
	write(0x9, "ta>\r\n      <Data key=\"DisplayName\">Captivate CC 64</Data>\r\n      <Data key=\"ProductName\">Captivate64</Data>\r\n      <Data key=\"FamilyName\">Captivate</Data>\r\n      <Data key=\"HostNameForCSXS\">CPTV</Data>\r\n      <Data key=\"$IconPath\">$InstallFolder/Resources/", 0x1000)		 = 4096 0
	write(0x9, "suite\">2014</Data>\r\n      <Data key=\"MinExManVersion\">7.2.0</Data>\r\n   </Product>\r\n   <Product name=\"illustrator-18.032\" platform=\"win\" id=\"24\">\r\n      <Data key=\"$illustrator\">$InstallFolder/../../..</Data>\r\n      <Data key=\"$plugin\">$InstallFolder/../../", 0x1000)		 = 4096 0
	write(0x9, "xtensions32</Data>\r\n      <Data key=\"$PreExtensionFolder\" locale=\"ko_KR\">$SharedCommonDataFolder/Adobe/InDesign/Version 10.0-J/ko_KR/Extensions32</Data>\r\n      <Data key=\"$PreExtensionFolder\" locale=\"zh_CN\">$SharedCommonDataFolder/Adobe/InDesign/Version 10", 0x1000)		 = 4096 0
	write(0x9, "_KR\">$UserDataFolder/Adobe/InDesign/Version 10.0-J/ko_KR/PlugInConfig.txt</Data>\r\n      <Data key=\"$PluginConfigFile\" locale=\"zh_CN\">$UserDataFolder/Adobe/InDesign/Version 10.0-J/zh_CN/PlugInConfig.txt</Data>\r\n      <Data key=\"$PluginConfigFile\" locale=\"zh", 0x1000)		 = 4096 0
	recvfrom(0x8, 0x798D6C04, 0xFFC)		 = 1120 0
	write(0x9, "e\">$UserLibraryFolder/Preferences/Adobe InDesign/Version 10.0/$locale/PlugInConfig.txt</Data>\r\n      <Data key=\"MinExManVersion\">7.2.0</Data>\r\n   </Product>\r\n   <Product name=\"incopy-10.032\" platform=\"win\" id=\"30\">\r\n      <Data key=\"$incopy\">$InstallFolder", 0x1000)		 = 4096 0
	write(0x9, "ocale=\"zh_TW\">$SharedCommonDataFolder/Adobe/InCopy/Version 10.0-J/zh_TW/Extensions</Data>\r\n      <Data key=\"$PreExtensionFolder\" locale=\"en_AE\">$SharedCommonDataFolder/Adobe/InCopy/Version 10.0-ME/en_AE/Extensions</Data>\r\n      <Data key=\"$PreExtensionFold", 0x1000)		 = 4096 0
	write(0x9, "e\" locale=\"en_AE\">$UserLibraryFolder/Preferences/Adobe InCopy/Version 10.0-ME/en_AE/PlugInConfig.txt</Data>\r\n      <Data key=\"$PluginConfigFile\" locale=\"en_IL\">$UserLibraryFolder/Preferences/Adobe InCopy/Version 10.0-ME/en_IL/PlugInConfig.txt</Data>\r\n     ", 0x1000)		 = 4096 0
	write(0x9, "esetsfolder/Widgets</Data>\r\n      <Data key=\"$localesfolder\">$photoshopappfolder/Locales</Data>\r\n      <Data key=\"$additionalplugins\">$localesfolder/$LOCALE/Additional Plug-ins</Data>\r\n      <Data key=\"$additionalpresets\">$localesfolder/$LOCALE/Additional ", 0x1000)		 = 4096 0
	write(0x9, "</Data>\r\n      <Data key=\"$optimizedcolors\">$presetsfolder/Optimized Colors</Data>\r\n      <Data key=\"$optimizedoutputSettings\">$presetsfolder/Optimized Output Settings</Data>\r\n      <Data key=\"$optimizedsettings\">$presetsfolder/Optimized Settings</Data>\r\n ", 0x1000)		 = 4096 0
	write(0x9, "r\">$photoshopappfolder/Plug-Ins</Data>\r\n      <Data key=\"$presetsfolder\">$photoshopappfolder/Presets</Data>\r\n      <Data key=\"$platform\">Mac</Data>\r\n      <Data key=\"$actions\">$presetsfolder/Actions</Data>\r\n      <Data key=\"$blackandwhite\">$presetsfolder/B", 0x1000)		 = 4096 0
	write(0x9, "      <Data key=\"$filters\">$pluginsfolder/Filters</Data>\r\n      <Data key=\"$imagestacks\">$pluginsfolder/Image Stacks</Data>\r\n      <Data key=\"$importexport\">$pluginsfolder/Import-Export</Data>\r\n      <Data key=\"$measurements\">$pluginsfolder/Measurements</D", 0x1000)		 = 4096 0
	write(0x9, "sionfolder\">$shareddatafolder/Adobe/Dreamweaver CC 2015 (64 bit)/$LOCALE/Configuration/Extensions</Data>\r\n      <Data key=\"$dreamweaver\">$installfolder</Data>\r\n      <Data key=\"$dreamweaver/Configuration\">$userdatafolder/Adobe/Dreamweaver CC 2015/$LOCALE/C", 0x1000)		 = 4096 0
	write(0x9, ">InDesign</Data>\r\n      <Data key=\"FamilyName\">InDesign</Data>\r\n\t  <Data key=\"suite\">2014</Data>\r\n      <Data key=\"HostNameForCSXS\">IDSN</Data>\r\n      <Data key=\"$IconPath\">$InstallFolder/Configuration/Icon.png</Data>\r\n      <Data key=\"DefaultLocale\">en_US", 0x1000)		 = 4096 0
	write(0x9, "key=\"$PreExtensionFolder\" locale=\"fr_MA\">$SharedCommonDataFolder/Adobe/InDesign/Version 11.0-ME/fr_MA/Extensions</Data>\r\n      <Data key=\"$PreExtensionFolder\">$SharedCommonDataFolder/Adobe/InDesign/Version 11.0/$locale/Extensions</Data>\r\n      <Data key=\"$", 0x1000)		 = 4096 0
	write(0x9, "MA\">$UserLibraryFolder/Preferences/Adobe InDesign/Version 11.0-ME/fr_FR/PlugInConfig.txt</Data>\r\n      <Data key=\"$PluginConfigFile\" locale=\"es_MX\">$UserLibraryFolder/Preferences/Adobe InDesign/Version 11.0/es_ES/PlugInConfig.txt</Data>\r\n      <Data key=\"$", 0x1000)		 = 4096 0
	write(0x9, "setsfolder\">$photoshopappfolder/Presets</Data>\r\n      <Data key=\"$platform\">Win</Data>\r\n      <Data key=\"$actions\">$presetsfolder/Actions</Data>\r\n      <Data key=\"$blackandwhite\">$presetsfolder/Black and White</Data>\r\n      <Data key=\"$brushes\">$presetsfol", 0x1000)		 = 4096 0
	write(0x9, "   <Data key=\"$imagestacks\">$pluginsfolder/Image Stacks</Data>\r\n      <Data key=\"$importexport\">$pluginsfolder/Import-Export</Data>\r\n      <Data key=\"$measurements\">$pluginsfolder/Measurements</Data>\r\n      <Data key=\"$panels\">$pluginsfolder/Panels</Data>\r", 0x1000)		 = 4096 0
	write(0x9, "sfolder/Workspaces</Data>\r\n      <Data key=\"$zoomify\">$presetsfolder/Zoomify</Data>\r\n      <Data key=\"$hueandsaturation\">$presetsfolder/Hue and Saturation</Data>\r\n      <Data key=\"$lights\">$presetsfolder/Lights</Data>\r\n      <Data key=\"$materials\">$presets", 0x1000)		 = 4096 0
	write(0x9, "sfolder/Image Statistics</Data>\r\n      <Data key=\"$keyboardshortcuts\">$presetsfolder/Keyboard Shortcuts</Data>\r\n      <Data key=\"$layouts\">$presetsfolder/Layouts</Data>\r\n      <Data key=\"$lenscorrection\">$presetsfolder/Lens Correction</Data>\r\n      <Data k", 0x1000)		 = 4096 0
	write(0x9, "ype\">abr,atn,pat,aco</Data>\r\n      <Data key=\"abr-destination\">$downloads</Data>\r\n      <Data key=\"atn-destination\">$downloads</Data>\r\n      <Data key=\"pat-destination\">$downloads</Data>\r\n      <Data key=\"aco-destination\">$downloads</Data>\r\n   </Product>\r\n", 0x1000)		 = 4096 0
	recvfrom(0x8, 0x798D6C04, 0xCA9)		 = 1448 0
	recvfrom(0x8, 0x798D6C04, 0x701)		 = 1448 0
	recvfrom(0x8, 0x798D6C04, 0x159)		 = 345 0
	write(0x9, "older/Adobe/InCopy/Version 10.0-J/zh_CN/Extensions</Data>\r\n      <Data key=\"$PreExtensionFolder\" locale=\"zh_TW\">$SharedCommonDataFolder/Adobe/InCopy/Version 10.0-J/zh_TW/Extensions</Data>\r\n      <Data key=\"$PreExtensionFolder\" locale=\"en_AE\">$SharedCommonD", 0x1000)		 = 4096 0
	write(0x9, "ences/Adobe InCopy/Version 10.0-J/zh_TW/PlugInConfig.txt</Data>\r\n      <Data key=\"$PluginConfigFile\" locale=\"en_AE\">$UserLibraryFolder/Preferences/Adobe InCopy/Version 10.0-ME/en_AE/PlugInConfig.txt</Data>\r\n      <Data key=\"$PluginConfigFile\" locale=\"en_IL", 0xE1B)		 = 3611 0
	close(0x9)		 = 0 0
	stat64("/tmp/tmp28027baaaaa\0", 0xB0080D68, 0xE1B)		 = 0 0
	lstat64("/tmp/tmp28027baaaaa\0", 0xB0080BB0, 0xE1B)		 = 0 0
	lstat64("/tmp/tmp28027daaaaa\0", 0xB0080550, 0xE1B)		 = -1 Err#2
	lstat64("/tmp/tmp28027baaaaa\0", 0xB0080420, 0xE1B)		 = 0 0
	lstat64("/tmp/tmp28027baaaaa\0", 0xB0080320, 0xE1B)		 = 0 0
	lstat64("/tmp/tmp28027daaaaa\0", 0xB007FCB0, 0xE1B)		 = -1 Err#2
	stat64_extended(0x787B4D50, 0xB007FCB0, 0x787B4E90)		 = -1 Err#2
	lstat64_extended(0x787B4D70, 0x787B4DA0, 0x787B4E90)		 = 0 0
	open("/tmp/tmp28027baaaaa\0", 0x0, 0x0)		 = 8 0
	__mac_syscall(0x91DC8ED8, 0x52, 0xB007FBE8)		 = -1 Err#93
	lstat64("/tmp/tmp28027daaaaa\0", 0xB007FE20, 0xB007FBE8)		 = -1 Err#2
	open("/tmp/tmp28027daaaaa\0", 0xB01, 0x81A4)		 = 9 0
	fcntl(0x8, 0x30, 0x1)		 = 0 0
	fcntl(0x9, 0x30, 0x1)		 = 0 0
	fcntl(0x9, 0x4C, 0x1)		 = 0 0
	flistxattr(0x9, 0x0, 0x0)		 = 0 0
	flistxattr(0x8, 0x0, 0x0)		 = 0 0
	fstatfs64(0x8, 0xB007F350, 0x0)		 = 0 0
	fstatfs64(0x9, 0xB007F350, 0x0)		 = 0 0
	fcntl(0x9, 0x2A, 0xFFFFFFFFB007F308)		 = 0 0
	read(0x8, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n<Configuration version=\"3.1.13\">\r\n   <Product name=\"Virtual Product\" id=\"0\">\r\n      <Data key=\"others-destination\">$downloads</Data>\r\n   </Product>\r\n   <Product name=\"dreamweaver-13.0\" id=\"1\">\r\n      <Data key=\"$shar", 0x100000)		 = 130587 0
	write(0x9, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n<Configuration version=\"3.1.13\">\r\n   <Product name=\"Virtual Product\" id=\"0\">\r\n      <Data key=\"others-destination\">$downloads</Data>\r\n   </Product>\r\n   <Product name=\"dreamweaver-13.0\" id=\"1\">\r\n      <Data key=\"$shar", 0x1FE1B)		 = 130587 0
	read(0x8, "\">$installfolder/Configuration/Icon.png</Data>\r\n      <Data key=\"MinExManVersion\">7.0.0</Data>\r\n   </Product>\r\n   <Product name=\"flash-13.0\" id=\"2\">\r\n      <Data key=\"HostNameForCSXS\">FLPR</Data>\r\n      <Data key=\"Bit\">64</Data>\r\n      <Data key=\"$RootFold", 0x100000)		 = 0 0
	ftruncate(0x9, 0x1FE1B, 0x100000)		 = 0 0
	fstat64_extended(0x9, 0xB007FBC8, 0x7868ACF0)		 = 0 0
	fchmod_extended(0x9, 0x0, 0x0)		 = 0 0
	fstat64(0x9, 0xB007F108, 0x0)		 = 0 0
	fchflags(0x9, 0x0, 0x0)		 = 0 0
	fchown(0x9, 0x0, 0x0)		 = 0 0
	fchmod(0x9, 0x1A4, 0x0)		 = 0 0
	futimes(0x9, 0xB007F178, 0x0)		 = 0 0
	fstat64(0x8, 0xB007FD20, 0x0)		 = 0 0
	fstat64_extended(0x9, 0xB007FD90, 0x7868ACF0)		 = 0 0
	getattrlist("/tmp/tmp28027baaaaa\0", 0xB007FFD0, 0xB007FFC0)		 = 0 0
	setattrlist(0xB007FFE8, 0xB007FFD0, 0xB007FFC4)		 = 0 0
	open("/tmp/tmp28027daaaaa\0", 0x0, 0x1B6)		 = 8 0
	read(0x8, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n<Configuration version=\"3.1.13\">\r\n   <Product name=\"Virtual Product\" id=\"0\">\r\n      <Data key=\"others-destination\">$downloads</Data>\r\n   </Product>\r\n   <Product name=\"dreamweaver-13.0\" id=\"1\">\r\n      <Data key=\"$shar", 0xFFC)		 = 4092 0
	read(0x8, "older/Presets.localized</Data>\r\n      <Data key=\"$localizedpresets\">$presets/$Locale</Data>\r\n      <Data key=\"$localizedUserPresets\">$UserDataFolder/Adobe/Adobe Illustrator 17 Settings/$LOCALE</Data>\r\n      <Data key=\"DisplayName\">Illustrator CC</Data>\r\n  ", 0xFFC)		 = 4092 0
	read(0x8, "der/Configuration/Icon.png</Data>\r\n      <Data key=\"DefaultLocale\">en_US</Data>\r\n      <Data key=\"Bit\">64</Data>\r\n      <Data key=\"$PreExtensionFolder\" locale=\"ja_JP\">$SharedCommonDataFolder/Adobe/InDesign/Version 9.0-J/ja_JP/Extensions</Data>\r\n      <Data", 0xFFC)		 = 4092 0
	read(0x8, "LibraryFolder/Preferences/Adobe InDesign/Version 9.0-J/ja_JP/PlugInConfig.txt</Data>\r\n      <Data key=\"$PluginConfigFile\" locale=\"ko_KR\">$UserLibraryFolder/Preferences/Adobe InDesign/Version 9.0-J/ko_KR/PlugInConfig.txt</Data>\r\n      <Data key=\"$PluginConf", 0xFFC)		 = 4092 0
	read(0x8, "nfig32.txt</Data>\r\n      <Data key=\"$PluginConfigFile\">$UserDataFolder/Adobe/InCopy/Version 9.0/$locale/PlugInConfig32.txt</Data>\r\n      <Data key=\"MinExManVersion\">7.0.0</Data>\r\n   </Product>\r\n   <Product name=\"incopy-9.064\" platform=\"win\" id=\"10\">\r\n     ", 0xFFC)		 = 4092 0
	read(0x8, "eExtensionFolder\" locale=\"en_AE\">$SharedCommonDataFolder/Adobe/InCopy/Version 9.0-ME/en_AE/Extensions</Data>\r\n      <Data key=\"$PreExtensionFolder\" locale=\"en_IL\">$SharedCommonDataFolder/Adobe/InCopy/Version 9.0-ME/en_IL/Extensions</Data>\r\n      <Data key=", 0xFFC)		 = 4092 0
	read(0x8, "ipts</Data>\r\n      <Data key=\"$selectivecolor\">$presetsfolder/Selective Color</Data>\r\n      <Data key=\"$shadowhighlight\">$presetsfolder/Shadow Highlight</Data>\r\n      <Data key=\"$smartsharpen\">$presetsfolder/Smart Sharpen</Data>\r\n      <Data key=\"$styles\">", 0xFFC)		 = 4092 0
	read(0x8, "Data key=\"$colorrange\">$presetsfolder/Color Range</Data>\r\n      <Data key=\"$colorswatches\">$presetsfolder/Color Swatches</Data>\r\n      <Data key=\"$contours\">$presetsfolder/Contours</Data>\r\n      <Data key=\"$curves\">$presetsfolder/Curves</Data>\r\n      <Data", 0xFFC)		 = 4092 0
	read(0x8, "uginsfolder/Filters/Lighting Styles</Data>\r\n      <Data key=\"$matlab\">$photoshopappfolder/MATLAB</Data>\r\n      <Data key=\"$photoshop\">$UserDataFolder/Adobe/Adobe Photoshop CC/Configuration</Data>\r\n      <Data key=\"DisplayName\">Photoshop CC 64</Data>\r\n     ", 0xFFC)		 = 4092 0
	read(0x8, "idgets</Data>\r\n      <Data key=\"$localesfolder\">$photoshopappfolder/Locales</Data>\r\n      <Data key=\"$additionalplugins\">$localesfolder/$LOCALE/Additional Plug-ins</Data>\r\n      <Data key=\"$additionalpresets\">$localesfolder/$LOCALE/Additional Presets</Data", 0xFFC)		 = 4092 0
	read(0x8, "Data key=\"$captivate\">$InstallFolder</Data>\r\n      <Data key=\"DisplayName\">Captivate CC 64</Data>\r\n      <Data key=\"ProductName\">Captivate64</Data>\r\n      <Data key=\"FamilyName\">Captivate</Data>\r\n      <Data key=\"HostNameForCSXS\">CPTV</Data>\r\n      <Data k", 0xFFC)		 = 4092 0
	read(0x8, "iguration/appIcon.png</Data>\r\n\t  <Data key=\"suite\">2014</Data>\r\n      <Data key=\"MinExManVersion\">7.2.0</Data>\r\n   </Product>\r\n   <Product name=\"illustrator-18.032\" platform=\"win\" id=\"24\">\r\n      <Data key=\"$illustrator\">$InstallFolder/../../..</Data>\r\n   ", 0xFFC)		 = 4092 0
	read(0x8, "DataFolder/Adobe/InDesign/Version 10.0-J/ja_JP/Extensions32</Data>\r\n      <Data key=\"$PreExtensionFolder\" locale=\"ko_KR\">$SharedCommonDataFolder/Adobe/InDesign/Version 10.0-J/ko_KR/Extensions32</Data>\r\n      <Data key=\"$PreExtensionFolder\" locale=\"zh_CN\">$", 0xFFC)		 = 4092 0
	read(0x8, "ata>\r\n      <Data key=\"$PluginConfigFile\" locale=\"ko_KR\">$UserDataFolder/Adobe/InDesign/Version 10.0-J/ko_KR/PlugInConfig.txt</Data>\r\n      <Data key=\"$PluginConfigFile\" locale=\"zh_CN\">$UserDataFolder/Adobe/InDesign/Version 10.0-J/zh_CN/PlugInConfig.txt</D", 0xFFC)		 = 4092 0
	read(0x8, "ugInConfig.txt</Data>\r\n      <Data key=\"$PluginConfigFile\">$UserLibraryFolder/Preferences/Adobe InDesign/Version 10.0/$locale/PlugInConfig.txt</Data>\r\n      <Data key=\"MinExManVersion\">7.2.0</Data>\r\n   </Product>\r\n   <Product name=\"incopy-10.032\" platform=", 0xFFC)		 = 4092 0
	read(0x8, "N/Extensions</Data>\r\n      <Data key=\"$PreExtensionFolder\" locale=\"zh_TW\">$SharedCommonDataFolder/Adobe/InCopy/Version 10.0-J/zh_TW/Extensions</Data>\r\n      <Data key=\"$PreExtensionFolder\" locale=\"en_AE\">$SharedCommonDataFolder/Adobe/InCopy/Version 10.0-ME", 0xFFC)		 = 4092 0
	read(0x8, "zh_TW/PlugInConfig.txt</Data>\r\n      <Data key=\"$PluginConfigFile\" locale=\"en_AE\">$UserLibraryFolder/Preferences/Adobe InCopy/Version 10.0-ME/en_AE/PlugInConfig.txt</Data>\r\n      <Data key=\"$PluginConfigFile\" locale=\"en_IL\">$UserLibraryFolder/Preferences/A", 0xFFC)		 = 4092 0
	read(0x8, "lumes\">$presetsfolder/Volumes</Data>\r\n      <Data key=\"$widgets\">$presetsfolder/Widgets</Data>\r\n      <Data key=\"$localesfolder\">$photoshopappfolder/Locales</Data>\r\n      <Data key=\"$additionalplugins\">$localesfolder/$LOCALE/Additional Plug-ins</Data>\r\n   ", 0xFFC)		 = 4092 0
	read(0x8, "\r\n      <Data key=\"$menucustomization\">$presetsfolder/Menu Customization</Data>\r\n      <Data key=\"$optimizedcolors\">$presetsfolder/Optimized Colors</Data>\r\n      <Data key=\"$optimizedoutputSettings\">$presetsfolder/Optimized Output Settings</Data>\r\n      <D", 0xFFC)		 = 4092 0
	read(0x8, "=\"$photoshopappfolder\">$installfolder</Data>\r\n      <Data key=\"$pluginsfolder\">$photoshopappfolder/Plug-Ins</Data>\r\n      <Data key=\"$presetsfolder\">$photoshopappfolder/Presets</Data>\r\n      <Data key=\"$platform\">Mac</Data>\r\n      <Data key=\"$actions\">$pre", 0xFFC)		 = 4092 0
	read(0x8, "ions</Data>\r\n      <Data key=\"$fileformats\">$pluginsfolder/File Formats</Data>\r\n      <Data key=\"$filters\">$pluginsfolder/Filters</Data>\r\n      <Data key=\"$imagestacks\">$pluginsfolder/Image Stacks</Data>\r\n      <Data key=\"$importexport\">$pluginsfolder/Impo", 0xFFC)		 = 4092 0
	read(0x8, "uct name=\"dreamweaver-16.0.64\" platform=\"win\" id=\"39\">\r\n     <Data key=\"$sharedextensionfolder\">$shareddatafolder/Adobe/Dreamweaver CC 2015 (64 bit)/$LOCALE/Configuration/Extensions</Data>\r\n      <Data key=\"$dreamweaver\">$installfolder</Data>\r\n      <Data ", 0xFFC)		 = 4092 0
	read(0x8, "\n      <Data key=\"DisplayName\">InDesign CC 2015 32</Data>\r\n      <Data key=\"ProductName\">InDesign</Data>\r\n      <Data key=\"FamilyName\">InDesign</Data>\r\n\t  <Data key=\"suite\">2014</Data>\r\n      <Data key=\"HostNameForCSXS\">IDSN</Data>\r\n      <Data key=\"$IconP", 0xFFC)		 = 4092 0
	read(0x8, "$SharedCommonDataFolder/Adobe/InDesign/Version 11.0-ME/en_IL/Extensions</Data>\r\n      <Data key=\"$PreExtensionFolder\" locale=\"fr_MA\">$SharedCommonDataFolder/Adobe/InDesign/Version 11.0-ME/fr_MA/Extensions</Data>\r\n      <Data key=\"$PreExtensionFolder\">$Shar", 0xFFC)		 = 4092 0
	read(0x8, "n/Version 11.0-ME/en_IL/PlugInConfig.txt</Data>\r\n      <Data key=\"$PluginConfigFile\" locale=\"fr_MA\">$UserLibraryFolder/Preferences/Adobe InDesign/Version 11.0-ME/fr_FR/PlugInConfig.txt</Data>\r\n      <Data key=\"$PluginConfigFile\" locale=\"es_MX\">$UserLibrary", 0xFFC)		 = 4092 0
	read(0x8, "</Data>\r\n      <Data key=\"$pluginsfolder\">$photoshopappfolder/Plug-Ins</Data>\r\n      <Data key=\"$presetsfolder\">$photoshopappfolder/Presets</Data>\r\n      <Data key=\"$platform\">Win</Data>\r\n      <Data key=\"$actions\">$presetsfolder/Actions</Data>\r\n      <Dat", 0xFFC)		 = 4092 0
	read(0x8, "rmats\">$pluginsfolder/File Formats</Data>\r\n      <Data key=\"$filters\">$pluginsfolder/Filters</Data>\r\n      <Data key=\"$imagestacks\">$pluginsfolder/Image Stacks</Data>\r\n      <Data key=\"$importexport\">$pluginsfolder/Import-Export</Data>\r\n      <Data key=\"$m", 0xFFC)		 = 4092 0
	read(0x8, " <Data key=\"$webphotogallery\">$presetsfolder/Web Photo Gallery</Data>\r\n      <Data key=\"$workspaces\">$presetsfolder/Workspaces</Data>\r\n      <Data key=\"$zoomify\">$presetsfolder/Zoomify</Data>\r\n      <Data key=\"$hueandsaturation\">$presetsfolder/Hue and Satu", 0xFFC)		 = 4092 0
	read(0x8, "ents</Data>\r\n      <Data key=\"$huesat\">$presetsfolder/Hue Sat</Data>\r\n      <Data key=\"$imagestatistics\">$presetsfolder/Image Statistics</Data>\r\n      <Data key=\"$keyboardshortcuts\">$presetsfolder/Keyboard Shortcuts</Data>\r\n      <Data key=\"$layouts\">$pres", 0xFFC)		 = 4092 0
	read(0x8, "Data key=\"HostNameForCSXS\">PHSP</Data>\r\n      <Data key=\"MinExManVersion\">7.3.2</Data>\r\n      <Data key=\"NonZxpFileType\">abr,atn,pat,aco</Data>\r\n      <Data key=\"abr-destination\">$downloads</Data>\r\n      <Data key=\"atn-destination\">$downloads</Data>\r\n     ", 0xFFC)		 = 4092 0
	read(0x8, "e/InCopy/Version 10.0-J/ko_KR/Extensions</Data>\r\n      <Data key=\"$PreExtensionFolder\" locale=\"zh_CN\">$SharedCommonDataFolder/Adobe/InCopy/Version 10.0-J/zh_CN/Extensions</Data>\r\n      <Data key=\"$PreExtensionFolder\" locale=\"zh_TW\">$SharedCommonDataFolder/", 0xFFC)		 = 4092 0
	read(0x8, "y/Version 10.0-J/zh_CN/PlugInConfig.txt</Data>\r\n      <Data key=\"$PluginConfigFile\" locale=\"zh_TW\">$UserLibraryFolder/Preferences/Adobe InCopy/Version 10.0-J/zh_TW/PlugInConfig.txt</Data>\r\n      <Data key=\"$PluginConfigFile\" locale=\"en_AE\">$UserLibraryFold", 0xFFC)		 = 3735 0
	read(0x8, "\0", 0xFFC)		 = 0 0
	lstat64("/tmp/tmp28027daaaaa\0", 0xB0080AE0, 0xFFC)		 = 0 0
	lstat64("/tmp/tmp28027daaaaa\0", 0x79571F1C, 0xFFC)		 = 0 0
	geteuid(0x79571F04, 0x79571F1C, 0xFFC)		 = 0 0
	unlink("/tmp/tmp28027daaaaa\0", 0x79571F1C, 0xFFC)		 = 0 0
	lstat64("/Library/Application Support/Adobe/Extension Manager CC/Configuration/XManConfigV2.xml\0", 0xB00806C0, 0xFFC)		 = 0 0
	lstat64("/Library/Application Support/Adobe/Extension Manager CC/Configuration/XManConfigV2.xml\0", 0xB00805F0, 0xFFC)		 = 0 0
	lstat64("/Library/Application Support/Adobe/Extension Manager CC/Configuration/XManConfigV2.xml\0", 0x79073C3C, 0xFFC)		 = 0 0
	geteuid(0x79073BE4, 0x79073C3C, 0xFFC)		 = 0 0
	unlink("/Library/Application Support/Adobe/Extension Manager CC/Configuration/XManConfigV2.xml\0", 0x79073C3C, 0xFFC)		 = 0 0
	lstat64("/tmp/tmp28027baaaaa\0", 0xB0080590, 0xFFC)		 = 0 0
	lstat64("/tmp/tmp28027baaaaa\0", 0xB0080490, 0xFFC)		 = 0 0
	lstat64("/Library/Application Support/Adobe/Extension Manager CC/Configuration/XManConfigV2.xml\0", 0xB007FE20, 0xFFC)		 = -1 Err#2
	stat64_extended(0x79073D00, 0xB007FE20, 0x79073E60)		 = -1 Err#2
	lstat64_extended(0x79073CE0, 0x79073D70, 0x79073E60)		 = 0 0
	__mac_syscall(0x91DC8ED8, 0x52, 0xB007FD58)		 = -1 Err#93
	lstat64("/Library/Application Support/Adobe/Extension Manager CC/Configuration/XManConfigV2.xml\0", 0xB007FF90, 0xB007FD58)		 = -1 Err#2
	open("/Library/Application Support/Adobe/Extension Manager CC/Configuration/XManConfigV2.xml\0", 0xB01, 0x81A4)		 = 9 0
	fstatfs64(0x8, 0xB007F4C0, 0x0)		 = 0 0
	fstatfs64(0x9, 0xB007F4C0, 0x0)		 = 0 0
	fcntl(0x9, 0x2A, 0xFFFFFFFFB007F478)		 = 0 0
	fstat64_extended(0x9, 0xB007FD38, 0x79073EA0)		 = 0 0
	fstat64(0x9, 0xB007F278, 0x0)		 = 0 0
	futimes(0x9, 0xB007F2E8, 0x0)		 = 0 0
	fstat64(0x8, 0xB007FE90, 0x0)		 = 0 0
	fstat64_extended(0x9, 0xB007FF00, 0x79073EA0)		 = 0 0
	getattrlist("/tmp/tmp28027baaaaa\0", 0xB0080140, 0xB0080130)		 = 0 0
	setattrlist(0xB0080158, 0xB0080140, 0xB0080134)		 = 0 0
	stat64("/Library/Application Support/Adobe/Extension Manager CC/Configuration/XManConfigV2.xml\0", 0xB0080C58, 0xB0080134)		 = 0 0
	chmod(0x7917F91C, 0x1FF, 0xB0080134)		 = 0 0
	__disable_threadsignal(0x1, 0x27000, 0x9)		 = 0 0
	wait4(0x6D7C, 0xBFFA614C, 0x0)		 = 28028 0
	open_nocancel("/tmp/tmp28027caaaaa\0", 0x1100004, 0x1)		 = 8 0
	fstatfs64(0x8, 0xBFFA5720, 0x1)		 = 0 0
	getdirentries64(0x8, 0x7A0E6400, 0x1000)		 = 280 0
	getdirentries64(0x8, 0x7A0E6400, 0x1000)		 = 0 0
	stat64("/tmp/tmp28027caaaaa/com\0", 0xBFFA6088, 0x1000)		 = 0 0
	stat64("/tmp/tmp28027caaaaa/ConditionalTextGroups.swf\0", 0xBFFA6088, 0x1000)		 = 0 0
	stat64("/tmp/tmp28027caaaaa/CSXS\0", 0xBFFA6088, 0x1000)		 = 0 0
	stat64("/tmp/tmp28027caaaaa/icons\0", 0xBFFA6088, 0x1000)		 = 0 0
	stat64("/tmp/tmp28027caaaaa/META-INF\0", 0xBFFA6088, 0x1000)		 = 0 0
	stat64("/tmp/tmp28027caaaaa/mimetype\0", 0xBFFA6088, 0x1000)		 = 0 0
	stat64("/tmp/tmp28027caaaaa/CSXS/manifest.xml\0", 0xBFFA6058, 0x1000)		 = 0 0
	stat64("/tmp/tmp28027caaaaa/META-INF/signatures.xml\0", 0xBFFA6058, 0x1000)		 = 0 0
	lstat64("/tmp/tmp28027caaaaa/CSXS/manifest.xml\0", 0xBFFA54E0, 0x1000)		 = 0 0
	stat64("/tmp/tmp28027caaaaa/CSXS/manifest.xml\0", 0xBFFA52D8, 0x1000)		 = 0 0
	open("/tmp/tmp28027caaaaa/CSXS/manifest.xml\0", 0x0, 0x1B6)		 = 8 0
	read(0x8, "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\r\n<ExtensionManifest xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" ExtensionBundleId=\"Conditional Text Groups\" ExtensionBundleVersion=\"1.0.6\" Version=\"2.0\">\r\n\t <Author>\r\n        <![CDATA[Rorohik", 0xFFC)		 = 2764 0
	read(0x8, "ps up to any depth).\r\n\r\n\342\200\242 Parents with more than one child can define a mutually exclusive child relationship which allows only one of its children (and all their sub-children) to be visible at once.\r\nUse the radio-button toggle to turn this on and off. ", 0xFFC)		 = 0 0
	open("/tmp/tmp28027caaaaa/Conditional Text Groups.mxi\0", 0x601, 0x1B6)		 = 8 0
	write(0x8, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<macromedia-extension name=\"Conditional Text Groups\" version=\"1.0.6\">\n\t<author name=\"Rorohiko Ltd.\"/>\n\t<products>\n\t\t<product maxversion=\"10.9\" name=\"InDesign\" primary=\"true\" version=\"7.0\"/>\n\t</products>\n\t<description ", 0x57B)		 = 1403 0
	open_nocancel("/tmp/tmp28027caaaaa/Conditional Text Groups.mxi\0", 0x0, 0x1B6)		 = 8 0
	read(0x8, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<macromedia-extension name=\"Conditional Text Groups\" version=\"1.0.6\">\n\t<author name=\"Rorohiko Ltd.\"/>\n\t<products>\n\t\t<product maxversion=\"10.9\" name=\"InDesign\" primary=\"true\" version=\"7.0\"/>\n\t</products>\n\t<description ", 0x3FF)		 = 1023 0
	read(0x8, "ren).\n\n\342\200\242 The panel also gives you the ability to highlight conditions. Just right-click a condition\nand select highlight to choose a highlight color.]]></description>\n\t<license-agreement/>\n\t<ui-access/>\n\t<files>\n\t\t<file csxsid=\"Conditional Text Groups\" c", 0x3FF)		 = 380 0
	read(0x8, ">$presetsfolder/Textures</Data>\r\n      <Data key=\"$tools\">$presetsfolder/Tools</Data>\r\n      <Data key=\"$variations\">$presetsfolder/Variations</Data>\r\n      <Data key=\"$webphotogallery\">$presetsfolder/Web Photo Gallery</Data>\r\n      <Data key=\"$workspaces\"", 0x3FF)		 = 0 0
	lstat64("/tmp/tmp28027caaaaa/Conditional Text Groups.mxi\0", 0xBFFA6050, 0x3FF)		 = 0 0
	stat64("/tmp/tmp28027caaaaa/Conditional Text Groups.mxi\0", 0xBFFA6050, 0x3FF)		 = 0 0
	unlink("/tmp/tmp28027caaaaa/Conditional Text Groups.mxi\0", 0xBFFA6050, 0x3FF)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA5090)		 = 0 0
	access("/Library/Application Support/Adobe/Extension Manager CC/Configuration/DB/ExMan.db-journal\0", 0x0, 0xFFFFFFFFBFFA5090)		 = -1 Err#2
	fstat64(0x4, 0xBFFA5050, 0xFFFFFFFFBFFA5090)		 = 0 0
	fstat64(0x4, 0xBFFA5050, 0x10)		 = 0 0
	fcntl(0x4, 0x8, 0xFFFFFFFFBFFA50D0)		 = 0 0
	stat64("/var/root/Library/Preferences/Adobe/Extension Manager CC/NoAccessInternet\0", 0xBFFA5288, 0xFFFFFFFFBFFA50D0)		 = -1 Err#2
	stat64("/tmp\0", 0xBFFA49B0, 0xFFFFFFFFBFFA50D0)		 = 0 0
	open_nocancel(".\0", 0x0, 0xBFFA4878)		 = 8 0
	fstat64(0x8, 0xBFFA48A8, 0xBFFA4878)		 = 0 0
	fcntl_nocancel(0x8, 0x32, 0xFFFFFFFFBFFA4430)		 = 0 0
	stat64("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS\0", 0xBFFA4838, 0xFFFFFFFFBFFA4430)	 = 0 0
	stat64("/tmp\0", 0xBFFA48E0, 0xFFFFFFFFBFFA4430)		 = 0 0
	lstat64("/\0", 0xBFFA48E0, 0xFFFFFFFFBFFA4430)		 = 0 0
	lstat64("/tmp\0", 0xBFFA48E0, 0xFFFFFFFFBFFA4430)		 = 0 0
	readlink("/tmp\0", 0x79372690, 0x40)		 = 11 0
	lstat64("/\0", 0xBFFA48E0, 0x40)		 = 0 0
	lstat64("/private\0", 0xBFFA48E0, 0x40)		 = 0 0
	lstat64("/private/tmp\0", 0xBFFA48E0, 0x40)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa\0", 0xBFFA4B90, 0x40)		 = 0 0
	open_nocancel(".\0", 0x0, 0x1023400)		 = 8 0
	fstat64(0x8, 0xBFFA4A88, 0x1023400)		 = 0 0
	fcntl_nocancel(0x8, 0x32, 0xFFFFFFFFBFFA4610)		 = 0 0
	stat64("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS\0", 0xBFFA4A18, 0xFFFFFFFFBFFA4610)	 = 0 0
	open_nocancel("/dev/random\0", 0x0, 0x0)		 = 8 0
	read_nocancel(0x8, "\366n\f8+\207\332\223\226\3549\003?\374\fat\350\275\244\021\303&=\3322\375[\244\203\205\226s\023\372\r\262\360~\362\a\006\023\225F<\n\240\023\204AT\031\207\254m$5H\n4\201\207\005\220w'\fm\035.\374\330BO%\247\366=\031.\327 w\203\366\021\311(\261\341E\226\306\f=\226\312\361\377\005\371\031\016\n\3533/c\031<\2247\035\251\224*\"!\314\262\006\353\223\264\264F\312\0", 0x80)		 = 128 0
	read_nocancel(0x8, "\310\362\247\253\366#\315\325\274,h\006\255\356\203C\303%\242?\257\311j\022\307+\204+\343\211W\371\201\314\227\f\342\303FI\225:\367\350\352]j1\232}\214\215\367Y=R;\240\314\327\213\260\352\237Y\205\273K0+\214An\236\376\344\016\024\374\242lNh7@\207i\365\243\\'\306\214\374\207\344\220R\326\304\341\t\016\215/\367\220\364t\361\270j\214\003L\035\305\306|\357\a\310Y\315(e\266\265\0", 0x80)		 = 128 0
	stat64("/tmp\0", 0xBFFA4738, 0x80)		 = 0 0
	mkdir("/tmp/zxpsignmZumuP9QY5al3Mjz\0", 0x1C0, 0x80)		 = 0 0
	mkdir("/tmp/zxpsign8z4s2paPgHson5xg\0", 0x1C0, 0x80)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa\0", 0xBFFA4B90, 0x80)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/META-INF/signatures.xml\0", 0xBFFA4B90, 0x80)		 = 0 0
	open_nocancel(".\0", 0x0, 0x3)		 = 8 0
	fstat64(0x8, 0xBFFA4A88, 0x3)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/META-INF/signatures.xml\0", 0xBFFA4AC0, 0xFFFFFFFFBFFA4610)		 = 0 0
	lstat64("/\0", 0xBFFA4AC0, 0xFFFFFFFFBFFA4610)		 = 0 0
	lstat64("/private\0", 0xBFFA4AC0, 0xFFFFFFFFBFFA4610)		 = 0 0
	lstat64("/private/tmp\0", 0xBFFA4AC0, 0xFFFFFFFFBFFA4610)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa\0", 0xBFFA4AC0, 0xFFFFFFFFBFFA4610)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/META-INF\0", 0xBFFA4AC0, 0xFFFFFFFFBFFA4610)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/META-INF/signatures.xml\0", 0xBFFA4AC0, 0xFFFFFFFFBFFA4610)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/META-INF/signatures.xml\0", 0x0, 0x1B6)		 = 8 0
	lseek(0x8, 0x0, 0x2)		 = 226058 0
	lseek(0x8, 0x0, 0x1)		 = 226058 0
	lseek(0x8, 0x0, 0x0)		 = 0 0
	read(0x8, "<signatures>\n  <Signature xmlns=\"http://www.w3.org/2000/09/xmldsig#\" Id=\"PackageSignature\">\n    <SignedInfo>\n      <CanonicalizationMethod Algorithm=\"http://www.w3.org/TR/2001/REC-xml-c14n-20010315\"/>\n      <SignatureMethod Algorithm=\"http://www.w3.org/TR/", 0x3730A)		 = 226058 0
	madvise(0x10BF000, 0x38000, 0x9)		 = 0 0
	read(0x8, "<signatures>\n  <Signature xmlns=\"http://www.w3.org/2000/09/xmldsig#\" Id=\"PackageSignature\">\n    <SignedInfo>\n      <CanonicalizationMethod Algorithm=\"http://www.w3.org/TR/2001/REC-xml-c14n-20010315\"/>\n      <SignatureMethod Algorithm=\"http://www.w3.org/TR/", 0x3FF)		 = 1023 0
	read(0x8, "CYn2Wyar+hg==</SignatureValue>\n    <KeyInfo>\n      <X509Data>\n        <X509Certificate>MIIFUjCCBDqgAwIBAgIRAOOOn9mByvXmV0UvS5vKqRkwDQYJKoZIhvcNAQEFBQAwezELMAkGA1UE\nBhMCR0IxGzAZBgNVBAgTEkdyZWF0ZXIgTWFuY2hlc3RlcjEQMA4GA1UEBxMHU2FsZm9yZDEaMBgG\nA1UEChMRQ09NT0R", 0x3FF)		 = 1023 0
	read(0x8, "DAeEP7bP3vEwHQYDVR0OBBYEFK6V3ux9GUiQs9slJAWnifzdbhIjMA4GA1UdDwEB\n/wQEAwIHgDAMBgNVHRMBAf8EAjAAMBMGA1UdJQQMMAoGCCsGAQUFBwMDMBEGCWCGSAGG+EIBAQQE\nAwIEEDBGBgNVHSAEPzA9MDsGDCsGAQQBsjEBAgEDAjArMCkGCCsGAQUFBwIBFh1odHRwczovL3Nl\nY3VyZS5jb21vZG8ubmV0L0NQUzBBBgNVHR8EO", 0x3FF)		 = 1023 0
	read(0x8, "BhMCVVMxCzAJBgNVBAgTAlVUMRcwFQYDVQQHEw5TYWx0IExha2UgQ2l0eTEeMBwGA1UEChMVVGhl\nIFVTRVJUUlVTVCBOZXR3b3JrMSEwHwYDVQQLExhodHRwOi8vd3d3LnVzZXJ0cnVzdC5jb20xHTAb\nBgNVBAMTFFVUTi1VU0VSRmlyc3QtT2JqZWN0MB4XDTExMDgyNDAwMDAwMFoXDTIwMDUzMDEwNDgz\nOFowezELMAkGA1UEBhMCR0IxG", 0x3FF)		 = 1023 0
	read(0x8, "YxaHR0cDovL2NybC51c2VydHJ1c3QuY29tL1VUTi1VU0VSRmlyc3Qt\nT2JqZWN0LmNybDB0BggrBgEFBQcBAQRoMGYwPQYIKwYBBQUHMAKGMWh0dHA6Ly9jcnQudXNlcnRy\ndXN0LmNvbS9VVE5BZGRUcnVzdE9iamVjdF9DQS5jcnQwJQYIKwYBBQUHMAGGGWh0dHA6Ly9vY3Nw\nLnVzZXJ0cnVzdC5jb20wDQYJKoZIhvcNAQEFBQADggEBAJW", 0x3FF)		 = 1023 0
	read(0x8, "xMYaHR0cDovL3d3dy51c2VydHJ1c3QuY29tMR0wGwYDVQQDExRVVE4tVVNFUkZpcnN0LU9iamVj\ndDCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAM6qgT+jo2F4qjEAVZURnicPHxzfOpuC\naDDASmEd8S8O+r5596Uj71VRloTN2+O5bj4x2AogZ8f02b+U60cEPgLOKqJdhwQJ9jCdGIqXsqoc\n/EHSoTbL+z2RuufZcDX65OeQw5", 0x3FF)		 = 1023 0
	read(0x8, "f+5ivFBjtpF72iZRF8FUESt3/J90GSkD2tLzx5A+ZArv9XQ4uKMG+\nO18aP5cQhLwWPtijnGMdZstcX9o+8w8KCTUi29vAPwD55g1dZ9H9oB4DK9lA977Mh2ZUgKajuPUZ\nYtXSJrGYJu6ay0SnRVqBlRUa9VE=</X509Certificate><X509Certificate>MIIENjCCAx6gAwIBAgIBATANBgkqhkiG9w0BAQUFADBvMQswCQYDVQQGEwJTRT", 0x3FF)		 = 1023 0
	read(0x8, "94CTLVBowCwYDVR0P\nBAQDAgEGMA8GA1UdEwEB/wQFMAMBAf8wgZkGA1UdIwSBkTCBjoAUrb2YejS0Jvf6xCZU7wO94CTL\nVBqhc6RxMG8xCzAJBgNVBAYTAlNFMRQwEgYDVQQKEwtBZGRUcnVzdCBBQjEmMCQGA1UECxMdQWRk\nVHJ1c3QgRXh0ZXJuYWwgVFRQIE5ldHdvcmsxIjAgBgNVBAMTGUFkZFRydXN0IEV4dGVybmFsIENB\nIFJvb3S", 0x3FF)		 = 1023 0
	read(0x8, "DscBw4fCkqK+ZRhcNMTEw\nODI1MTM0MjE2WjAhAhAqF9BklBArm0Q+WtHe42JIFw0xMTA4MjUyMzU5NDRaMCECEHb9EawBjVUu\n0KWnpNqspowXDTExMDgyNjE4MDMxNlowIgIRAJ0D3WH6tBlzaqeizhR/0IcXDTExMDgyNzA2NTYx\nMVowIgIRALFn3+Y/UglHlD1zj+PWEgUXDTExMDgyOTE5NTMyOFowIQIQcRU/QKCnfGYK05qf8MDP\n8Bc", 0x3FF)		 = 1023 0
	read(0x8, "3hcNMTEwOTA3MDkyNTE2WjAhAhA1+J2h93LVnlKwYY6tNBDkFw0xMTA5MDcwOTI2MDlaMCECEBbn\nhIYKp79EGPkp017TJ/YXDTExMDkwNzA5MjY1NVowIQIQW7Srr58x7Yi7LgyWpo8XmBcNMTEwOTA3\nMTMyMDEwWjAiAhEA45ed4zNFZZecsP9wLbarqRcNMTEwOTA4MTMyNTU0WjAhAhBB2Xb1w8JHUoaw\nSkopY4piFw0xMTA5MDkwOTMzN", 0x3FF)		 = 1023 0
	read(0x8, "owIgIRAJggQR4dtwovNQ/YtsuRj20XDTExMDkyMDEyMjYwOVowIgIR\nAPQhNaiNNHmm+qFO1EXEd9IXDTExMDkyMTA4NDIwMVowIgIRAKl3Y58t/DDmb6UNmMA5kLYXDTEx\nMDkyMTA4NTYzOFowIQIQKO/Vvdzsj5ItK6XpdVd6oxcNMTEwOTIxMDg1NzMwWjAiAhEA5DJbfHgo\n77fK5YugsyzqzBcNMTEwOTIxMDg1OTM5WjAhAhAXNKCpUDh", 0x3FF)		 = 1023 0
	read(0x8, "hzQWTHsM1NR/iSIXDTExMTAwNDA3NDE1\nN1owIgIRAJm5PDQorIV8yS1wK8nsGqgXDTExMTAwNDE4MzczN1owIQIQQyRvJK0iAyAaxGiY6u0e\noxcNMTExMDA1MDkwMjEyWjAiAhEA8kXUGWLDDAx6rrvBIS2Y0hcNMTExMDA1MTc1MDQ5WjAiAhEA\n3d48jzxK4PSJx5p+6xYV7RcNMTExMDA1MTc1ODI0WjAiAhEAgFy6nq32iEyLfS2qcv+w1", 0x3FF)		 = 1023 0
	read(0x8, "ExMDEzMTg0\nNzQyWjAhAhBKjErngzFKkxGI//wny76iFw0xMTEwMTMyMDA5NDZaMCICEQD7/mCbWGn1ixGqLqSh\nyBcLFw0xMTEwMTQxODQxNDFaMCICEQChzSccQsGAx0xiGNrEtAI+Fw0xMTEwMTQxODQ1MjhaMCIC\nEQDWK9JUp2guBoBazYIb2ACTFw0xMTEwMTQxOTE4MDZaMCECEFaCPW+vdKSIuJfyx4gmtMoXDTEx\nMTAxNzE2MTQzM1", 0x3FF)		 = 1023 0
	read(0x8, "0MTQwWjAiAhEA6B9uLvi06sb6bZwXgBlDPxcNMTExMDI4MTIwODIzWjAhAhB24my/\n7jCbuagTPYIvI8TKFw0xMTEwMjgxOTUzNDBaMCECEEpz9LSGhwKaUj9149G+ehEXDTExMTAyODE5\nNTcwNVowIQIQQ1KP8GFMdAukYusTZcVzCxcNMTExMDMxMTMxNDM0WjAiAhEAtb4hxMAI5IEjkpDS\nwF9OdxcNMTExMTAxMDA0NzMxWjAhAhAN7Tlo", 0x3FF)		 = 1023 0
	read(0x8, "k6R+REe8vhP7W/h8RcNMTExMTA3MTUxNDUxWjAhAhBg\nUGR1+Z0hnLNeUud0JwkTFw0xMTExMDgxMTA2NTVaMCICEQCy7qq4/GCYL2ersu3EcdUsFw0xMTEx\nMDgxMTEwMzRaMCICEQCOXBEfmXCtRNF09merGHQ1Fw0xMTExMDgyMDU5MzRaMCICEQCMDvZmFqMU\nNVsmpGfex4lDFw0xMTExMDgyMTAxMjJaMCICEQDORZxIRI02hX0gG94Ya4", 0x3FF)		 = 1023 0
	read(0x8, "w0BcNMTExMTE2MjExNjM0\nWjAiAhEAvUsjXAKMhqVrE/hELJ94OhcNMTExMTE2MjE0MDA2WjAiAhEAgVoX73UxGQWAcmk/mwvw\ntRcNMTExMTE2MjIxOTAzWjAiAhEAxOBrK0nKgS2ETaEjNUS50hcNMTExMTE4MjAzNDAzWjAiAhEA\nvy8LGpR6C1S4PUXsxqZQsxcNMTExMTE5MDgwOTMzWjAiAhEAtn0H2w2xLiT3xjIo5ZlLHxcNMTEx\nMTI", 0x3FF)		 = 1023 0
	read(0x8, "NDMwNVowIQIQODav8s9BxwB0vpGePzGoHxcNMTExMTMwMjIyNzEyWjAhAhBBE90ZMi7v8j3uCo4h\n5NEAFw0xMTEyMDEwNjA4MjRaMCECEDH61eydgIiYvOZMj0ntqfkXDTExMTIwMTA3NDY1MVowIgIR\nAMl/YhpbOejhNJCfWzqr/qIXDTExMTIwMTEyMDIwNlowIQIQGTZykWi2euYr9iC5wwsUEBcNMTEx\nMjAxMjEzMDI3WjAhAhBNhR8Ok", 0x3FF)		 = 1023 0
	read(0x8, "+cQABKxpnOWOYAoDqUcBcNMTExMjA5MTUwMzM5WjAiAhEArwyfEzVk\nS7uXB4yvLn9BRxcNMTExMjA5MTUxMTM1WjAiAhEA2GsmDD5lYEYFfJ2aGsYXuxcNMTExMjEwMTE1\nODA3WjAiAhEA/WPqksQtIZi8ysiuihtoaRcNMTExMjExMDk0NjI4WjAhAhAwW43ktP3OSEecGzSp\nYdb/Fw0xMTEyMTExOTM4MzVaMCICEQDRQHCNnQCv+KRJhun", 0x3FF)		 = 1023 0
	read(0x8, "W4yz/joXDTExMTIxOTExMDgyM1owIQIQ\nTJCMFMlD8zqYjjwvqQxyvRcNMTExMjE5MTcyODAxWjAhAhAKzcICd+scJNvRCfkXvgvjFw0xMTEy\nMTkxNzQ3NTNaMCICEQDFbtPa+patqtJ3pJiPCd19Fw0xMTEyMTkyMzU2MTJaMCECEHBy8/2MFezZ\ncWSI77uPgagXDTExMTIyMDIyMDM1MVowIgIRAJy6EBkL15mKq4qESJNP/HcXDTExMTIyM", 0x3FF)		 = 1023 0
	read(0x8, "IzMzgwOFow\nIQIQJm7vr9rM7lJ+1wE8khI2OhcNMTIwMTAzMjAxODM0WjAhAhB/pezkKXJFNiVqPQtJmk8pFw0x\nMjAxMDMyMjI2MDVaMCICEQCz34smFruOfpVe7hDCmhSnFw0xMjAxMDQwMDA1NDNaMCICEQDHRyYg\nYFIgwSwV6hQ196hJFw0xMjAxMDQwMDM0MDZaMCECEA7VrQdjwVgL+Obk2WU3RY0XDTEyMDEwNDA5\nMjg0OVowIQIQBD", 0x3FF)		 = 1023 0
	read(0x8, "QNsbZl1/I6RQQD5wikxB7EhcNMTIwMTEyMjE0OTE0WjAhAhAYVDSqMRtE4s1pWend\ne0lwFw0xMjAxMTMxMjIyNTVaMCECEAUJJOJVz7cy4Ap7I7uXlNcXDTEyMDExMzEyMjcyNVowIQIQ\nP7h0Gt2QSfKTmqs5s7qmFhcNMTIwMTEzMTgyOTEzWjAhAhBOM54p215MdzOJwa7OC6l5Fw0xMjAx\nMTMyMTI2NDNaMCECEBmGsAqBZ9AQoDOIocKh", 0x3FF)		 = 1023 0
	read(0x8, "vDUDhcNMTIwMTIyMTU1NjI0WjAhAhAj8JpWxATfo/7v\nSW2zARPTFw0xMjAxMjIxODUyMjVaMCICEQCCMSkgEQ9t6EbcTFXNxVSEFw0xMjAxMjMxMzAzMTBa\nMCECEBS9ocebXYR+opHR+4NeqqAXDTEyMDEyNDAyMTYyM1owIgIRANOo3mDOrvlMx2fR2hezjx4X\nDTEyMDEyNDA2MTQyMVowIgIRALeTnTRsWySHcP64RpfxuAYXDTEyMDEyND", 0x3FF)		 = 1023 0
	read(0x8, "wMzMyMDZaMCECEBIsGZsY\nvY5tc+YgTuJUfmwXDTEyMDIwNjEwNDQ1OFowIQIQIQfHD65kSUzOaxR5cWeYfhcNMTIwMjA3MTYx\nNTIzWjAiAhEAj2JZoCYiDliSvPlVMJEPihcNMTIwMjA3MTkwNjIzWjAhAhArdAgJRW82+DSTF5xf\nyTcuFw0xMjAyMDgwNDEwMTFaMCECEF9NIObUlnubKGnF1hF2bcQXDTEyMDIwOTA4MzMyOFowIgIR\nAOk", 0x3FF)		 = 1023 0
	read(0x8, "3yJdLEvtYuMmJn5VlswXDTEyMDIxNTE5NTUyOVowIQIQV/n8Kb0t2xJPN+kxh5xpqxcNMTIwMjE1\nMjExMjMzWjAiAhEArXnV4kWHQU2SXhuVUDwcJRcNMTIwMjE2MDg1NzUwWjAhAhAabYl1bnlTwmlz\nojNkzWGLFw0xMjAyMTYxNjI5MjBaMCECEH7XqwDbByFKm8pKctG9ZdcXDTEyMDIxNjE4NDczOVow\nIQIQe61e0CXcFSRwrNJ3KZQMq", 0x3FF)		 = 1023 0
	read(0x8, "eigrkXDTEyMDIyODIzMTE1OFowIgIRAP/WXOBzjuff8Ko9M4A+OpIX\nDTEyMDIyOTE4MzQyNVowIgIRALq9chamzEP7hH5nGOdnsq4XDTEyMDIyOTE5MjY0MFowIQIQGjhx\n9x/7/DQlVRInYmJDwhcNMTIwMjI5MjI1MjQ4WjAhAhA1daugeN8MF1NwHc9cK21NFw0xMjAzMDEx\nNTU2MDhaMCICEQDkseiRGuLOBXYfggQ0O5jvFw0xMjAzMDE", 0x3FF)		 = 1023 0
	read(0x8, "MTgyOTM3WjAiAhEAr632BG2VVVfQ9Rnl\n+Yi4zBcNMTIwMzA3MTk0ODE2WjAiAhEA9p5yvAMujDMTzHgPaXxvNhcNMTIwMzA4MTA0NzU2WjAi\nAhEA15s2ETraBate710UcxEq5BcNMTIwMzA4MTc0ODIwWjAhAhBCg6nCFiIEDKsv1hCzv7EJFw0x\nMjAzMDkxNTM0MjZaMCICEQDfMDRpRXnjNCYJdFCj4GkMFw0xMjAzMDkyMTEzMDdaMCICE", 0x3FF)		 = 1023 0
	read(0x8, "owIQIQLukb\nLDrKtxIuRTvb//nOhRcNMTIwMzE5MjM1MjA4WjAiAhEAsxF15BcU5epknxPFGEB8UhcNMTIwMzE5\nMjM1MzU1WjAhAhAV3dlBzkZttdlAD/EWvws9Fw0xMjAzMjAwMDI0MzhaMCECEDxHLYYKr+fdc7US\nho3gc3oXDTEyMDMyMDIxMjgzMlowIQIQO6VNuZrG7BWOA9zbmnysSRcNMTIwMzIwMjEzMjE5WjAi\nAhEAzT80VQEWSc", 0x3FF)		 = 1023 0
	read(0x8, "ji61TlZIYlBS5ozePFw0xMjAzMjgxMzUxMTZaMCECEH8dvJ0YuGnz5oEmpo3/2HUX\nDTEyMDMyODE4NDYyNlowIgIRAPjlYaLpbuHlmG9rbqYpby0XDTEyMDMyODIwMjk0M1owIQIQSKdb\neuk+AbJANYFMMWTSChcNMTIwMzI4MjMyNTQzWjAhAhBSS4KCl5cE7Plt+V9sHVESFw0xMjAzMjkx\nODM0MDJaMCECEBYhQ/xG0dnXC4ki0yZEYhkX", 0x3FF)		 = 1023 0
	read(0x8, "J90Fw0xMjA0MDQyMjU2MDJaMCICEQCTYhrbYTzfU84T\nXyOzbcpFFw0xMjA0MDUxNTMxNDdaMCECEAK5dzDsLa8jDTCNB3VjRwYXDTEyMDQwNjE2MDkyMFow\nIQIQHzKsehy2VkxwtXXVDzQgARcNMTIwNDA5MTEwNDQ4WjAiAhEAsW+hOdOdc3yR/arftDNVlRcN\nMTIwNDA5MTQyNDIzWjAiAhEA2FAW/TJn1opWRLP3yOVkpBcNMTIwNDA5MT", 0x3FF)		 = 1023 0
	read(0x8, "0MTgxMzUwMTJaMCICEQC2\ncciTEC7S9/S4tYwtyuhWFw0xMjA0MTgxNjUwNDNaMCACD14cdBXkUZRcj4eRG7dhSRcNMTIwNDE4\nMTc1NzIxWjAiAhEA8/Up7uvHK//68WTY+zXcGRcNMTIwNDE4MTgyNjQ3WjAhAhB/bWysLNK/wg8D\nu+lQBQGCFw0xMjA0MTkxMTQwMjJaMCECECdT0Y+Rgu+GHqeUZBsTdQwXDTEyMDQxOTIwNDUxNlow\nIQI", 0x3FF)		 = 1023 0
	read(0x8, "cxnCtzKuNdLhKNWYCjkAzxcNMTIwNDMwMDYyMDMxWjAhAhAGw6D7yPnadkGZyQWtoQKDFw0xMjA0\nMzAxNDMwNTJaMCICEQCFrEWeNAOHNamfBcJhRARmFw0xMjA1MDIxOTA2MTJaMCICEQDhajvc5jBn\nwTCYWVJm49ZXFw0xMjA1MDIxOTA5MTdaMCICEQCqenzewiTsP1wNtSEaBgmGFw0xMjA1MDIxOTEw\nMjBaMCECEG32I59W4K3hWFRV4", 0x3FF)		 = 1023 0
	read(0x8, "cNMTIwNTExMTQyMTQ4WjAiAhEAkdinISNIX0mSEfR8aNgUOBcNMTIw\nNTE1MDk0NDM0WjAhAhBH0rtrm/BgwCrVRhxH4L4cFw0xMjA1MTYxNDQ4NDVaMCECECvaWozQyXDz\noxAmCI/fRqUXDTEyMDUxNjIxMzIxOFowIQIQP2e9MDhTn+Fr62vafjiB0RcNMTIwNTE3MTQxNDI3\nWjAhAhApN9ZmDGwWrXlwmQ8efWgkFw0xMjA1MTcxNDE1Mzd", 0x3FF)		 = 1023 0
	read(0x8, "MjM5WjAhAhBNyanBmR4gYsJVmXRF4Sn1\nFw0xMjA1MjQyMDQyNDlaMCECEFIB2uSkrlcNyY2qz08bRHYXDTEyMDUyNTEwMzUwNVowIQIQJ+mb\nvU5KLv5KU/PwpQDgphcNMTIwNTI1MTQzODE2WjAiAhEAo/DKUYgYI5oJXuOxvODYrxcNMTIwNTI5\nMTIyMTM2WjAhAhAEgv2MU9e0upjWpHKjBYc5Fw0xMjA1MzAwODQ5MjVaMCECEGxOQcppK", 0x3FF)		 = 1023 0
	read(0x8, "T2TJY9b/On\nRI+XmxcNMTIwNjA3MTQ0NTE4WjAiAhEAkiwHAx/UTMmYEpemeLlkfBcNMTIwNjA3MTU1NDEzWjAi\nAhEA4zBpUyIhZHy8ZOt5awP5rRcNMTIwNjA3MTU1OTUwWjAhAhA0S6mVbxXa7i16Y7yAu4CUFw0x\nMjA2MDgxMDI4NDNaMCICEQCU3NNkfgk5aUDl4ALl1OLNFw0xMjA2MDgxNzQ0NDlaMCICEQDQR7NT\nOnHQvHIW8egmfl", 0x3FF)		 = 1023 0
	read(0x8, "97vrBFw0xMjA2MTUyMDI1MjJaMCICEQCum37R2iZzyqwmG97BPFRZFw0xMjA2MTcx\nNTU3MzVaMCECEFJMHxb2ATD7NLBOgyXsFNsXDTEyMDYxODEzMjEzN1owIQIQXHjhKpBcFw8JKElJ\npVW7cxcNMTIwNjE5MDc1MDIyWjAiAhEAs9FuB2AXqySWUGJBd4d6nRcNMTIwNjE0MDAwMDAwWjAi\nAhEAyVqhwhk1MG+84aHrw9LtEhcNMTIwNjIw", 0x3FF)		 = 1023 0
	read(0x8, "jYwMDMxMTdaMCICEQCC5tYuCSByZdsL4ua74+8eFw0x\nMjA2MjYwODU0MTZaMCICEQDjcZUk8WHPVD6Kn7Ss7fNAFw0xMjA2MjYxMzUwMzdaMCICEQD8d6l3\nzSH6EQwJd4IV9m9vFw0xMjA2MjYxNDQ5NTRaMCECEBQRkYfqoBuqXmIS/DshYUUXDTEyMDYyNjIw\nNDUwMlowIQIQIDB/yX4EIK6CNpOttuQtAxcNMTIwNjI3MTIxNTQzWjAiAh", 0x3FF)		 = 1023 0
	read(0x8, "CEQDEZR/t9U9+K0iZQebp\n2B3IFw0xMjA3MDUwODI4MjZaMCICEQCB2c//8yEIGmxXNr80Iku4Fw0xMjA3MDUyMTE4MjRaMCEC\nEA9yX4dcLOFaX/X3MV1sSmsXDTEyMDcwNTIxMjQ1OFowIgIRANdkVacd7pmKJX+2ZPoZsuUXDTEy\nMDcwNjExNDg0MVowIgIRALaWxQGmMvAp0intVIpTKqAXDTEyMDcwNjExNTgyMlowIgIRAIshFLdv\neHm", 0x3FF)		 = 1023 0
	read(0x8, "vQ6zS8MzFw0xMjA3MTMyMDU2MjBaMCECEGSNslZsmA+WPfYwFv/7znIXDTEyMDcxMzIwNTkxN1ow\nIQIQV5GFhZnx9LKP1JPI2kOqUhcNMTIwNzE3MTA1NzA5WjAiAhEAzwgF0JQlatinlQkvaUr3jxcN\nMTIwNzE3MjAxMjQ1WjAhAhA2eWmkx0qQPHEY5i771yN9Fw0xMjA3MTcyMDM4NTJaMCICEQC03LGw\nSEeQm+vYqFwaZEjGFw0xMjA3M", 0x3FF)		 = 1023 0
	read(0x8, "E0MzgxMVowIQIQDua5nG1kVBKpecYDKH/5hRcNMTIwNzI0MjE0NjU3\nWjAiAhEAoQ5ZM/aKyKdUOfIJy25lqxcNMTIwNzI0MjIxMTA1WjAiAhEAzBF8jZlzHHC6vHtFiw01\n0RcNMTIwNzI1MDg0NTM3WjAhAhAdEwvOXzaGy9CtWD3BRz/WFw0xMjA3MjUxMDAyMThaMCICEQDz\nFxkG7fxhzeF6uENl5JByFw0xMjA3MjUxODQ0NDBaMCECEEc", 0x3FF)		 = 1023 0
	read(0x8, "Y1cET+br2sHQtqoV8hcNMTIwODAyMDk0\nODI4WjAiAhEAimphe8tbXtCxwH0hUF1NBxcNMTIwODAzMTUyNDExWjAiAhEAyiggFYA45kSIxsXa\nUhuL8xcNMTIwODAzMTUzMTQ2WjAhAhB84XRoNqkW2uZ03MDMdnS1Fw0xMjA4MDMyMTAxNDBaMCIC\nEQD5AC+FIxdza/r4R61/vTb/Fw0xMjA4MDMyMTE4MTRaMCICEQDS2uGehfHZ+rVlmK3TG", 0x3FF)		 = 1023 0
	read(0x8, "oXDTEyMDgx\nNDA5MDgyNFowIgIRANFVza1mkRm8RTxpQ8yDJ0oXDTEyMDgxNDEzMjYyMlowIQIQW/lKpvOmUbal\n0DTK155X+RcNMTIwODE0MTMyOTA3WjAiAhEAsNmTAebTEimBzXVBZ2+rDxcNMTIwODE0MTMyOTM1\nWjAiAhEAx6yix+/aSTN69NdFo984nBcNMTIwODE0MTMzMzEwWjAhAhAHp+OSYCg47LeshmNLYsSq\nFw0xMjA4MTQxMz", 0x3FF)		 = 1023 0
	read(0x8, "4WjAhAhAqp+kpB0kMczMdrLJqIsTFFw0xMjA4MjIxMjU3MDZaMCICEQDLaYLczgL8\nVd0NjdL2LRi6Fw0xMjA4MjIxODEyMzdaMCECEEBt9sIJhvMvK0LVtPl0Q1UXDTEyMDgyMjE5MTQw\nMVowIgIRAMj1Wbn6eplUDo35WivMpxEXDTEyMDgyMjE5MzUwNFowIgIRALHNKL3I1RZMZhc0nTbS\nO1wXDTEyMDgyMjIwMjA1MFowIgIRAIeiiuYV", 0x3FF)		 = 1023 0
	read(0x8, "olDNqutKSvG5+rGGRcNMTIwODMxMTYxMTEyWjAhAhAT\n93dChonq1YAMSxDu/jbnFw0xMjA4MzExNjE2MjZaMCICEQCTtjvNAsEghH9lBcXq9ZiGFw0xMjA4\nMzExNzAyMzVaMCICEQCmgZVH2FITcKO5lKe9IYEnFw0xMjA4MzExODAzNTBaMCICEQCx8iZSepdo\na84ML+y6/O8eFw0xMjA4MzEyMTIzMzNaMCECEGBQwsHf61n/w+iwoSsW/7", 0x3FF)		 = 1023 0
	read(0x8, "ITRcNMTIwOTA3MTkwOTAx\nWjAiAhEAjDgkpkq1FO1jXuIqPXTiBxcNMTIwOTEwMjAyNTU4WjAhAhA2K319ExOlPpzl0k9yyUwO\nFw0xMjA5MTAyMTE3MzlaMCICEQCXS7j2YFlXau4sa0GKNEBoFw0xMjA5MTExMDU1MTJaMCICEQDj\ntIqgrPfsPbpmC4AhIugFFw0xMjA5MTExMTQ1NTBaMCICEQDivVC99nRQf4AQpGSKButjFw0xMjA5\nMTE", 0x3FF)		 = 1023 0
	read(0x8, "MTJaMCECEEVfEjli/3M+H6n32ja9H9sXDTEyMDkxODEwMjAwOFowIQIQAVI9sSwEkOuKcLjySa8J\nZhcNMTIwOTE4MTE0MjAxWjAhAhBdEBHoLQj/Yc/PUehgZaHnFw0xMjA5MTgxODM1NTNaMCICEQC3\n+GKlSHW7Y9P9trdtddkUFw0xMjA5MTgxOTUxNDZaMCECEAKoT1TBDJ8a7QM1mpNzCOMXDTEyMDkx\nODIwMTYyNVowIgIRAJiWdDzgo", 0x3FF)		 = 1023 0
	read(0x8, "oMh9vxeLneiVvD7x7TFw0xMjA5MjYxNDU3NDdaMCECEAbqqqubUJx+\nvD0Crmx97oUXDTEyMDkyNjIxMTEzNFowIQIQFVf7cUnX4z6KXpWsx6boGxcNMTIwOTI3MDczMzI2\nWjAiAhEAycLQZLINOcg2p7QMsigBvxcNMTIwOTI3MTM0NDM1WjAiAhEAwWNrdPGj8I1u0qxO6nnv\nDBcNMTIwOTI3MjEwNjU1WjAiAhEAvyNJG/qnJBhBDdIiTk9", 0x3FF)		 = 1023 0
	read(0x8, "Fw0xMjEwMDkxOTAxNDBaMCICEQDDKyOj\n6rzikbdqjkqJArdiFw0xMjEwMTAxNTAxNTVaMCICEQCd7lFTI3Fsv9VdD+FtpODMFw0xMjEwMTAx\nODQxMDdaMCICEQD3nYSv7V4g4rlGtunikkFVFw0xMjEwMTAyMDU2MThaMCICEQCK6BTJjoY6nEs+\nslgNt4oIFw0xMjEwMTExMDM0MzhaMCICEQCmcJ4XP+HTrkzzbPZkqA0HFw0xMjEwMTEyM", 0x3FF)		 = 1023 0
	read(0x8, "owIQIQM6dQ\naHzjyuTzYJfeqKQjoxcNMTIxMDIzMTk0NDIzWjAhAhAk8JyHvnXl9krCU5jDf4OKFw0xMjEwMjQy\nMDUyNTNaMCICEQCBqgAybJ95hB5xuhv/BgOtFw0xMjEwMjUwODUyNDhaMCECEDqtMpVCEwjmHc9r\nyTMl1kYXDTEyMTAyNTE1NDAzOVowIgIRANr7kOiT6+z5RPv7AcOmc1YXDTEyMTAyNTE1NDQyM1ow\nIQIQfcpTUJYNAd", 0x3FF)		 = 1023 0
	read(0x8, "3BlV0SzMEALMXDTEyMTEwMTIxNDAyNVowIgIRAMj2qscRgCjE+dJmrxaFKq0XDTEy\nMTEwMjEzMDMxMlowIgIRAIxYTtQ+kZwtHXhAaLNF8GkXDTEyMTEwMjE5MTkwMlowIQIQGLf/EKqZ\nZS9bx3E0jAUxDhcNMTIxMTAyMTkxOTMwWjAiAhEA8lYsx0wlxdFFtL4rjW46jhcNMTIxMTA1MTE0\nOTAwWjAiAhEA4qltkUgo8ZEYU+4gwuIb8hcN", 0x3FF)		 = 1023 0
	read(0x8, "BcNMTIxMTE0MTIwMzM4WjAhAhBjOT9ahyRypoDlNQlk\n+FTvFw0xMjExMTQxNjEyMDhaMCICEQDqzuPLbw7rorLzGKbFrvqMFw0xMjExMTQxNjU3NTlaMCEC\nEAq88Zn9NldlXvcoCuNp+c0XDTEyMTExNDE3MTE0NlowIgIRAOmB3J+8jxiI5l7Rv75S8UEXDTEy\nMTExNTE4NDE0MVowIQIQX2BdCqwfoh+f1p2WT2EDIRcNMTIxMTE2MTUxNz", 0x3FF)		 = 1023 0
	read(0x8, "4WjAhAhA/vcMWib8piyRh\ncUXAn60nFw0xMjExMjExNjQzNDVaMCICEQCiww+ZQZqwqVgYkXIeJ05QFw0xMjExMjExOTI5MzRa\nMCECEE0UUFrJnybxAQBGJ727hC0XDTEyMTEyMTIxMDIxNFowIgIRANlPCxyEqKWgGWjUfn+2lC8X\nDTEyMTEyMzE0NTczM1owIQIQVv/OVUC6DgYBw19yoaY2PxcNMTIxMTIzMjEyMjQwWjAhAhA08TVz\nJM2", 0x3FF)		 = 1023 0
	read(0x8, "k3YEZp1scVPzFw0xMjExMzAxNDMwNDdaMCECEChzvGL+ABpPkGHTcQV5zAwXDTEyMTEzMDE1Mjgx\nNlowIQIQC3nzx7MR4N0p/uYEw15mRRcNMTIxMTMwMTU0MTI3WjAiAhEAjzHtVbUUbsjc8nFqrH+/\nsxcNMTIxMTMwMTU0NDE1WjAiAhEAk4IGKBHpOqRLXqrK4aOprxcNMTIxMTMwMTgzMjMwWjAhAhB0\n1S094rKRy8q+Dxy6KlM7Fw0xM", 0x3FF)		 = 1023 0
	read(0x8, "IxMjA2MTMzMDQwWjAhAhAhE78OWueK7Oqug2nghx57Fw0xMjEyMDYx\nNTU3MTBaMCECEBXurIYH9UAoZQCaPcWhzbQXDTEyMTIwNjE1NTgwOVowIgIRALiqbK9AsMk3H2yK\nPkGGARsXDTEyMTIwNzExNDE0MVowIgIRALwFWeJk4WxR9RYPXU1FOrwXDTEyMTIwNzExNDY1NFow\nIQIQHycMIjTFS/FHn6hLOlagxxcNMTIxMjA3MTYwMTQ1WjA", 0x3FF)		 = 1023 0
	read(0x8, "EQCIl5iItOA//G3zbUEsIt1qFw0xMjEy\nMTQxODM2MjNaMCICEQDIYmIy+YmbZxmlsfYbhG6BFw0xMjEyMTcyMDM4NDRaMCICEQCC5th+r95g\nPu7wVlDsHlwZFw0xMjEyMTcyMTU2NTdaMCECEFP7GL7S34aoWipWnJZpotwXDTEyMTIxNzIxNTgx\nMVowIQIQPdhAHDYyzT/SPG8p8BgnjhcNMTIxMjE4MTc0MDA4WjAhAhBc/t6KTLQCftBJR", 0x3FF)		 = 1023 0
	read(0x8, "AV+FjAFw0x\nMjEyMjcxNjE3NDBaMCICEQCNALUJFF6dBvo97lVKChlKFw0xMjEyMzEwNzU1MzZaMCICEQCtGv1m\n1nm41DNX9kBLubfVFw0xMjEyMzExNTQyMDdaMCECED32KiWTgjQM8rzaB+oCqHEXDTEyMTIzMTE1\nNDgxNVowIQIQYxiVaDSfwMsePuOOiUHgEBcNMTIxMjMxMTcxMTA5WjAhAhBi1jN8HdHDomNiRQXm\n83u4Fw0xMzAxMD", 0x3FF)		 = 1023 0
	read(0x8, "zMTJaMCICEQCk0pxYNWOY4dC19Fqhzj97Fw0xMzAxMDgxNTU2MjFaMCECEG41WYkx\njc3+IrQ0St7KohYXDTEzMDEwOTE5MDg1MlowIgIRAJ65eBGFdzfRaAM7uyjOSCUXDTEzMDExMDA5\nMzI0MVowIQIQHlEi/WFbx0RJRPSZ0halrhcNMTMwMTEwMTMyNDAxWjAhAhBNyfDUeAIc4qSsyiNA\nHz0kFw0xMzAxMTAxMzMzNTZaMCICEQCrENxY", 0x3FF)		 = 1023 0
	read(0x8, "ClZU09dTEeL/MMAFw0xMzAxMjExNDU4MzZaMCECEHHO\nLgS/9CjZs2H3ImaLtOcXDTEzMDEyMTE1MTAzNFowIQIQbW4WYRw9AuVjZTElKotBuBcNMTMwMTIx\nMTUyMjAxWjAhAhA/xjnisxXjhmIa7E9RKusxFw0xMzAxMjMxMDU2MjdaMCICEQCUy/Y/mlZXG2f1\nWJyGQQfeFw0xMzAxMjMxNjEzMjlaMCECEELjNbUI4AWYPAsB3gwxbcQXDT", 0x3FF)		 = 1023 0
	read(0x8, "GxhcNMTMwMjAxMTk0NjIw\nWjAiAhEA9I5Vp9VHTL5DEdBYEjUI2RcNMTMwMjAxMjAyMDMzWjAiAhEArBm89ZU8qb+8//hJvACy\nYRcNMTMwMjA0MTQzNTQ2WjAhAhAvNRq7sAgQELIa7J/93BUqFw0xMzAyMDQxODA0NTRaMCICEQDP\nXbz/mi3MhQprfqg2MQ2lFw0xMzAyMDUxMTI3MTdaMCICEQDj7OMpPI5UojDTbn1nUY2PFw0xMzAy\nMDU", 0x3FF)		 = 1023 0
	read(0x8, "MTM5MDhaMCICEQD0r7Esy9xPUqyigcLlIU23Fw0xMzAyMTEyMTM5NDdaMCECEGJ0IxfAGnGyRUFw\nkheniPYXDTEzMDIxMTIxNDQ1OVowIQIQHHIV4uin/IqcPu1h7MgM3xcNMTMwMjEyMTQzNDAyWjAi\nAhEA1Lc2XDgLEzbLAEKailP2lxcNMTMwMjEzMjMyMTE5WjAhAhAqc4nkDUn2ld5WCEg9hG+dFw0x\nMzAyMTQyMDM4NDBaMCICEQCGs", 0x3FF)		 = 1023 0
	read(0x8, "0CJbVSE00BYFN3I6kXDTEzMDIyMjIwMzYzMFowIQIQB7GgTgHjh+2F\ndyNHKXhPthcNMTMwMjIyMjA1MzM0WjAiAhEAzqYJpnXLui9sg82cSSLZ2BcNMTMwMjI1MTIzMTI2\nWjAhAhB2hMIcvDQAJl84T9K/8nDPFw0xMzAyMjYwODU0NTBaMCECEBpBq2qMIOqPU+kISJ55Ji0X\nDTEzMDIyNjE0MzA1MFowIgIRAK/aCACvjLEiuNtFAiQ6Lco", 0x3FF)		 = 1023 0
	read(0x8, "s2KtPBcNMTMwMzA4MjAxMzEyWjAhAhAa\nLTtVaa3Hd8ZYqwK9DI5GFw0xMzAzMTExNDIyMzFaMCICEQCVp6DjetUUoaUmRYGaRaj/Fw0xMzAz\nMTExNDQwMDZaMCICEQDA3jTEhfbw/yvZ6oEYnCFqFw0xMzAzMTExNDQwMzRaMCECECLGVdfKoBmX\n3HvIKXNJ44sXDTEzMDMxMTE1MDczOFowIgIRAJyKYGYF+LiXFzXr+W4tik4XDTEzMDMxM", 0x3FF)		 = 1023 0
	read(0x8, "AzMjEwOTQz\nMDRaMCICEQD9NyDLiMBh2yas3Q3ErvaUFw0xMzAzMjExOTU4MDBaMCICEQDaE9KpTuxVZCsOobo4\nwFY4Fw0xMzAzMjEyMDIxNThaMCICEQCWP1LsTuD+S/SyW4NaUyYQFw0xMzAzMjIxNzIxMTVaMCEC\nECc2PEDIFU0j74LKvwFvAZkXDTEzMDMyMjIwMzY1N1owIgIRAIAE3blbvIq6VNNmr9ok9JcXDTEz\nMDMyMjIwNTgxNV", 0x3FF)		 = 1023 0
	read(0x8, "5MjlaMCICEQCchgaFkxlMNcVg0iN4gvglFw0xMzA0MDQxNzUwNTNaMCICEQC6hCAS\nd+oiZ0BZzKaIzb13Fw0xMzA0MDQxNzU5MjRaMCECEEwv65lTvVAfaAT8irvyCt0XDTEzMDQwNTE0\nMDg1NFowIQIQF9d9WZ2KkEhmUUBpQQeOHRcNMTMwNDA1MTQwOTM5WjAiAhEA970anDDPgs7pCAcx\nxSep3xcNMTMwNDA1MTQxMDI3WjAhAhBsem/Y", 0x3FF)		 = 1023 0
	read(0x8, "ri3R3Tj9U39nQOyFw0xMzA0MTYwMTA1MDdaMCECEDdx\nZ9EGYd9T4v8Dthz+jLAXDTEyMTIxMzAwMDAwMFowIgIRAO8w1mTQv2RNeA36/FSp6cwXDTEzMDQx\nNjE0MzA0MlowIQIQAlPTVefO5b6qTrQ2vpVq+xcNMTMwNDE2MTY1MzU0WjAhAhA8HW5Wyj45pI4S\ntHfs/ociFw0xMzA0MTcxNTUzNTVaMCECECu9z0iLklW+DgPgJx2rkjMXDT", 0x3FF)		 = 1023 0
	read(0x8, "0MjkxODE4MTNaMCICEQCo\n/rWjFz34lrPNWabR0H6PFw0xMzA0MjkxOTM4MTBaMCECEEv1OBgUREL6bZgS3o2qFIUXDTEzMDQy\nOTIwNDkzMVowIQIQIPNdH3bo77KGLmEFr5hJoRcNMTMwNDMwMTEyNDMxWjAhAhA8ZzgbHyhEjk3Q\n5BOYq110Fw0xMzA0MzAxNDU3MTFaMCICEQDedrkrcoEwlP/oiTpWfmZWFw0xMzA0MzAxNTIxMzFa\nMCI", 0x3FF)		 = 1023 0
	read(0x8, "IQIQEkb4ciHCbafMl0cOZR4w9xcNMTMwNTEwMTgxOTA1WjAiAhEAjgc/LEscDaIbg+npnVmbQhcN\nMTMwNTEzMTAwNzIxWjAiAhEAyLzoDOOKQLag6f1TEvvQyRcNMTMwNTEzMTMwMzI5WjAhAhA0N17C\nrdSDrasS2CxGhvC7Fw0xMzA1MTUxMzExMTdaMCECEAghHTLBH9Ymyt+Z2eFnTOEXDTEzMDUxNjE3\nMjE1N1owIQIQcjhuH3EP0S7T6", 0x3FF)		 = 1023 0
	read(0x8, "j+6RcNMTMwNTI0MTUwOTMwWjAhAhAn3rqxUKuwjTLm01HZUcW+Fw0x\nMzA1MjQxNjI1MjBaMCICEQCqhW2dEw/cscsh53QOwy6sFw0xMzA1MjcxNDA3NTlaMCECEBp5eIm8\naznVE/OHNxTuZy4XDTEzMDUyODE1Mjg0OFowIQIQObmq0OrX7Od2oWQ7ZHV/HBcNMTMwNTI4MTYy\nMDM2WjAiAhEAi6klu7ddFOgurw7yEY9SiRcNMTMwNTI4MTY", 0x3FF)		 = 1023 0
	read(0x8, "IgIRALK3e8rEJqtys6DsbuJO2HEXDTEz\nMDYxMTEzNTMzNlowIQIQOOymXe+bZcS6oocgP6yZuRcNMTMwNjExMTM1NzI2WjAhAhB3DupEMFtu\n+rYUPjLwEih+Fw0xMzA2MTIxNDMyMzJaMCICEQDoCkOGadRADUAiGptiy6m9Fw0xMzA2MTIxNTUz\nMjFaMCECEBCGsTWPsK6j/dUg1GN8nloXDTEzMDYxMzE2NDAwN1owIgIRANDOHaRXMlV5a", 0x3FF)		 = 1023 0
	read(0x8, "8ut2MRQGUI\nFw0xMzA2MjYxODMzMDBaMCECEDvWPzqHEdERbPxB8BIyM2gXDTEzMDYyNzE4NDAyOFowIgIRAPdM\nkkTqOPlKQZmSwsnXJRsXDTEzMDYyODIwMzUwNlowIgIRAJipicRgtfGcaqJWLd8r1ioXDTEzMDYy\nODIwNDEwNlowIQIQE+uDX6lGuPEskmtU6YalchcNMTMwNzAyMTQxNDI5WjAhAhBt+H40tiG7+mrm\nhMQnK181Fw0xMz", 0x3FF)		 = 1023 0
	read(0x8, "xMDI2MDAwMDAwWjAiAhEAid4LZWfHk2oCcmxGZy60KBcNMTMwNzA4MTIzMjQ5WjAi\nAhEAuJ4MlDOnsK0CPCSOIA+32hcNMTMwNzA4MTQzNDQ2WjAhAhBdsAQqfvZWF4kc3hCkc/jfFw0x\nMzA3MDkxMzMxMzBaMCICEQDZnyjWBUDV+KJdFeo1LcBRFw0xMzA3MDkxNzUyMTVaMCICEQCr1HZ8\nvVCzlDc0uuEuhJLAFw0xMzA3MTAxMzI5NDda", 0x3FF)		 = 1023 0
	read(0x8, "lowIQIQHTqDIHSd6vgFuldPzvaMQxcNMTMwNzI2MTUx\nNTU2WjAhAhBYJRwpbwZXj+5mp2nISGsmFw0xMzA3MjkwODA4NDJaMCICEQDkrKCAhFhJy9hRl6td\no341Fw0xMzA3MjkwODIyMDRaMCECEGbemgIAGIvz/hAxy18yMboXDTEzMDcyOTE0MzgzNlowIgIR\nAL/SEbEE5PhkJoJdVsfu838XDTEzMDcyOTE4MjQxNlowIQIQJZ/4OtQsMH", 0x3FF)		 = 1023 0
	read(0x8, "5HgFDoWzi2N0XDTEzMDgx\nMjE1MzEwMlowIQIQEnYc6hBA9pgnBkAhHNqtFRcNMTMwODEyMTU1MzM1WjAiAhEAqrriiYZpf4s3\noBwgwVwvCBcNMTMwODEzMTQ1OTQwWjAiAhEAhl1EpBe50vADAIEg6YdTOxcNMTMwODE0MTUwNTQ5\nWjAhAhA03Ua4shRvdNY9IoGvI+4YFw0xMzA4MTUxOTU1MzVaMCICEQC/j6J8OHQTEFv8d2hqYdYf\nFw0", 0x3FF)		 = 1023 0
	read(0x8, "MzA4MjgwNzI2NDNaMCICEQDxtaQf0KOfWPYQo+SEL939Fw0xMzA4MjgwODQxNTZaMCICEQCwIANK\nF/H4owj0OSOR7Wk9Fw0xMzA4MjkxMzA5MDlaMCECEFT105o1FSvPzNEch5Uz9q4XDTEzMDgyOTEz\nMTg1NVowIgIRALx+9caQUqIXuyBKfpWsvP4XDTEzMDgyOTE1NTQ1M1owIQIQP6EdIxn+GwTkCsEV\ncufLZRcNMTMwODMwMTIyMjQwW", 0x3FF)		 = 1023 0
	read(0x8, "BaMCECEDoRmuMo1Rx6b1ThxYvPlfgXDTEzMDkxMTA5MzU1MlowIQIQ\nFARssHL0SaUed+56VBDlbxcNMTMwOTExMTI1OTMxWjAiAhEAlZMRBlYHx5C7jChhf9G0DRcNMTMw\nOTExMTM0MTE0WjAiAhEAurXVYGKLqwr2qHJxf7+GShcNMTMwOTExMTM0NjQ3WjAhAhAcL86gYa0g\nR8ye0IqJEyHlFw0xMzA5MTExNDU3MzNaMCICEQDRtuvpMxM", 0x3FF)		 = 1023 0
	read(0x8, "5wo4VQQ2OI0tFw0xMzA5MjAxNjAwMjVa\nMCICEQC6PEtX/BX/wGS0KeA9dYt4Fw0xMzA5MjQxMzEzMTNaMCICEQD23EzsYN6cyFFnlE1J994k\nFw0xMzA5MjQxMzI4MjNaMCECEAkqhmCy+WXTefUD574TL5AXDTEzMDkyNDE0MTYxNlowIgIRAMqr\n93fMCFZLwwoNkKKO+ZAXDTEzMDkyNTE1MTE0MlowIQIQGTyau8XZJ9Nbsl2oCsQKmxcNM", 0x3FF)		 = 1023 0
	read(0x8, "cNMTMxMDAz\nMjEwMTM3WjAiAhEA0Sz5N24r9jECw/AM5PylDxcNMTMxMDA0MTczMTE4WjAhAhBd6cnCJLiauop8\nG5xWDaOGFw0xMzEwMDQyMDQxNDZaMCECEHKK7UDKre8ljFITBaTwyt0XDTEzMTAwNzE4MTIxOVow\nIQIQcB3xAbBmUbE01GeFUyWZCRcNMTMxMDA3MTkyNzE2WjAhAhAepODOsWt0t28ZbkR8BpxEFw0x\nMzEwMDgxNDA4MD", 0x3FF)		 = 1023 0
	read(0x8, "yWjAiAhEAl9HAF1PrJYZeBl9Qmf0pbBcNMTMwOTIxMDAwMDAwWjAhAhBKd5jHudcf\ndKlCagNxWB8FFw0xMzEwMjExMjU1MzJaMCICEQDUWDs1hBo5gnvHFs0fw3mbFw0xMzEwMjExODI5\nNTlaMCICEQDt5+/hC/wOyb8ofKFERMBiFw0xMzEwMjIxMzMwMjNaMCICEQD93ZGPeJ53+jm9Iqud\nQRaJFw0xMzEwMjIxNDAxNTJaMCICEQDjXufZ", 0x3FF)		 = 1023 0
	read(0x8, "ER9sW4044TbhFXI8hcNMTMxMTAxMTMzNTMzWjAhAhAo\ncNkpD2eDLeoBC8S3jmiNFw0xMzExMDExNTE3NTNaMCECECRQsK0QTvm7eFgb/z8l60IXDTEzMTEw\nNDEzMjM0N1owIQIQd8/tCjAs9QRLOcCb/76iRRcNMTMxMTA0MTU0OTI2WjAhAhBNeBxbMToa7iye\n2tULMJijFw0xMzExMDQxNzQ5MjZaMCICEQDk7OeNzR3cmsexhSMD07cxFw", 0x3FF)		 = 1023 0
	read(0x8, "xMzA5MTIwMDAwMDBaMCIC\nEQCHfy8ILjZbuocGVwTLHWu+Fw0xMzExMTQxOTI1MjFaMCECEGc7Ki/gpJU69ShTE0nM4xQXDTEz\nMTExNDE5MjU0MlowIQIQGWmYCLlvPEWJsiGVBBsrIBcNMTMxMTE0MTkzMzEzWjAhAhBy5IBi6p6Q\n5QhetordoqbkFw0xMzExMTQyMDA5MjRaMCICEQC1SjI3X5GFdHpKRkPsUoFDFw0xMzExMTQyMDE0\nMzZ", 0x3FF)		 = 1023 0
	read(0x8, "MCECEDbiF3uaQt47nclAV5qWinYXDTEzMTEyNjIwNTQxN1owIQIQQ8StRyog1+cb380js3RnvRcN\nMTMxMTI2MjEwMzU5WjAhAhAb9ZBXgevnmIX1BfCVuVqBFw0xMzAzMTUwMDAwMDBaMCECEEcDUyE1\nXyQBFfsNph253SkXDTEzMTIwMjE3MTkwOVowIgIRANC5WG/obnrlBpcO1w2XlTgXDTEzMTIwMjIw\nMjIxM1owIQIQa6x6CJxpntgup", 0x3FF)		 = 1023 0
	read(0x8, "ftZ6PHyxcNMTMxMjA5MTcxMzEzWjAiAhEA3eqZiNlqWCdoUN7UckW1\nfxcNMTMxMjEwMTUwNjUwWjAhAhAtSkOELPv5iIgHpq3g/Oc5Fw0xMzEyMTAxNTU3MDlaMCECEEQn\nf6oD8tZ8Pk8/KLttrPYXDTEzMTIxMTAyMjYxNVowIQIQd89wikG4rBJRamkl9y5WhBcNMTMxMjEx\nMTYxNDE2WjAiAhEAk9yTcMAYP/9t0PKl+HjZgRcNMTMxMjE", 0x3FF)		 = 1023 0
	read(0x8, "NjI3MTNaMCECECbsxTOsYMW9cRjMG29z\nMaAXDTEzMTIxOTEzNTI0MFowIgIRAOSE2lSOFXtsY0mZ3+IkDbgXDTEzMTIxOTE0NTUyOFowIgIR\nAKo7xYYXF15EC8lfp9+qwLwXDTEzMTIxOTE2NTI1NVowIQIQK+t+WwBlAUJWuWaFGmssORcNMTMx\nMjE5MjAyNjIzWjAiAhEAnBToow0RCIzz6Ki0TMw6ZhcNMTMxMjIwMTM1NTE0WjAhAhBb5", 0x3FF)		 = 1023 0
	read(0x8, "CPp8uZnYMc\nX6k9k5TXwAC8Fw0xNDAxMDMxNzI0MzFaMCECEBS3k+CuAEvdbXh6mOmQfCwXDTE0MDEwNjE1NTAw\nN1owIQIQAtpr+F0Q++8ytQuH9/YiCRcNMTQwMTA2MjAyMzQwWjAhAhBUkKStiXwIJB83voVAlO5j\nFw0xNDAxMDYyMDI5NDhaMCICEQCNayMEjcX8YQ0Tvs2p2thVFw0xNDAxMDcxODU5NTBaMCECEBp1\nyS3HDRbQQCIFIN", 0x3FF)		 = 1023 0
	read(0x8, "zbhDLMhMCxxcNMTQwMTE1MTcxMTUwWjAiAhEAjUsdSJAU8YSG4RH1gh/jvBcNMTQw\nMTE1MTczMzE1WjAiAhEAo1tKGe8J/OhkFB2auObKWxcNMTQwMTE1MjEyODAzWjAhAhA+qRzpSZHr\nk68hs+5CJfBIFw0xNDAxMTYxNTUwMjBaMCICEQCYRHrqJWZ2BmGmpZoxnKfLFw0xNDAxMTYxODU5\nMzNaMCECEA+y6yarg5kSXQ/k2g0r8RsXDTE0", 0x3FF)		 = 1023 0
	read(0x8, "DIwMzE0N1owIQIQNMmcdDQuxBNOsC/2cGAjWxcNMTQw\nMTI0MjE0NTE5WjAhAhBQq6MUpN9IEgDJGE37bPg2Fw0xNDAxMjcxNDEyMTNaMCECEEj2v+HwX2SQ\nloDdTaSlWgEXDTE0MDEyNzE0MTQwNFowIgIRAJswvoZl6LF2ZxPJLMttnGYXDTE0MDEyODE1MjEz\nMFowIQIQSNWQz3YYj6uLx8dkcMms5BcNMTQwMTI4MTU1OTAyWjAhAhAZQW", 0x3FF)		 = 1023 0
	read(0x8, "rydMYFNkj95P2+VJkCpNO\nFw0xNDAyMDUxNDA1MTlaMCECEDpo5PX1+qP4mvXHWHvqq2cXDTEzMTIxMTAwMDAwMFowIgIRAL2j\nBpZV54VG3ODjgKQgZeAXDTEyMDUwODAwMDAwMFowIQIQWN4gYq/OsaX4iuV0QYkl2RcNMTQwMjA1\nMTgxMDE2WjAhAhBWAj6q67gDmkWAHMohAZBuFw0xNDAyMDYxOTA1MjZaMCECEFpR5gJy0/SaJJXF\nn3G", 0x3FF)		 = 1023 0
	read(0x8, "c1cXDTE0MDIxNDE0NDczNlowIQIQAPuqPJX6RTdjOpSlBBZR1BcNMTQwMjE0MjA1MzUwWjAhAhAk\nJEGOEVkkgpoUTX7EwAfdFw0xNDAyMTQyMDU0NTBaMCECEG0b7Bg0KixN1kRpbBaznBQXDTE0MDIx\nNDIxNDUxNVowIgIRAIjGC8tqxGTatoG4bGPtBaEXDTE0MDIxODE1MTAyN1owIgIRAI8NH0JwRBi9\nh74WUv+R6l8XDTE0MDIxODE2N", 0x3FF)		 = 1023 0
	read(0x8, "cxMjMyNThaMCECECSQP9Qyr4q8OpGpDzaW6uYXDTE0MDIyNzE0NTQw\nM1owIgIRAID7hoFxkw5l/nPYQjmxgZ0XDTE0MDIyNzIyMDQwMFowIgIRANHq7dyYFzvJKygI/y6l\ntTMXDTE0MDIyODE1MTQ0NVowIgIRAIZBlvAZcdvscAK0hkKnAToXDTEzMTEwMTAwMDAwMFowIQIQ\nGPUQWQZQDeBJg+VooqIQkRcNMTQwMjI4MTUzMzIxWjAiAhE", 0x3FF)		 = 1023 0
	read(0x8, "AhALDRfsFEm0stOPyw8g+806Fw0xNDAz\nMDYwMDAwMDBaMCECEA1Ho7OlnpHujf9+yEH4YL0XDTE0MDMxMzE3MDEwM1owIgIRAItGQlVpD//v\nIgmP9j8lC0AXDTE0MDMxMzE4NDIxM1owIQIQBq4QLDWUOAapl2hFVJQqsxcNMTQwMzEzMjAzMDE5\nWjAiAhEAgX1AeV5rYAEm7T6mysxe7RcNMTQwMzE0MTA1NjMzWjAhAhAwrVcaH8vC4Rgep", 0x3FF)		 = 1023 0
	read(0x8, "1GYR5QbyUX\nDTE0MDMyNzE3NDE0NFowIQIQJI9Ak4G18Smw5E64awpn7BcNMTQwMzI3MTg1NjU5WjAhAhB//YXD\npf/iBovETA6O4keDFw0xNDAzMjcyMDQ2MTVaMCICEQDNbbnqF4eW4v0kSPNkWLV7Fw0xNDAzMjcy\nMDQ4MzJaMCICEQCGNHXEu8LrsAaXRaFdNcTJFw0xNDAzMjcyMDQ5MjRaMCECEH/5DfwO3+m4wd4m\nNsBq66UXDTE0MD", 0x3FF)		 = 1023 0
	read(0x8, "zMTIwNDUzM1owIQIQP2Jr/LZxK00BdPBWabXhkRcNMTQwNDAxMTAyMjA3WjAiAhEA\nimTchUm0Xm2jjFZMGDOGhxcNMTQwNDAxMTUwODQ2WjAiAhEArCxJFqqJG5MOr61+jUVMbBcNMTQw\nNDAyMDc0OTA2WjAiAhEAu5fI3iJK8PGyYb7y8ALl+RcNMTQwNDAzMTEyMzI5WjAiAhEA8GxZUWwm\n2Z4+D8DBEXNH1hcNMTQwNDAzMTEyNjIzWjAh", 0x3FF)		 = 1023 0
	read(0x8, "hEA/VX3J9MnrUDhOS5ZKqMVuhcNMTQwNDA4MTM0ODAx\nWjAhAhBrz/eghUwkJcnXWyxDGUZKFw0xNDA0MDkxNDAwMjFaMCECEGse36fusSOpXGgfPivUmHUX\nDTE0MDQwOTE1MTgxN1owIgIRAOph1I+s57VREeR6kSgC4yMXDTE0MDQwOTE1MzA0OFowIQIQN/BY\n9JyS5rJHQ183kQNc1hcNMTQwNDA5MTc0MDQxWjAiAhEAimG5NGMooOdu7B", 0x3FF)		 = 1023 0
	read(0x8, "AmLmhiq/J2hcNMTQwNDIy\nMTM0MzA0WjAhAhAfoFdcybdYaplE8uIAJyrtFw0xNDA0MjIxNjIwNTdaMCECEE1kdqRokxM8FkrQ\nyFhn+3QXDTE0MDQyMjE4NDQxOVowIQIQWYHaMMrFFw19sPaYv6UWDhcNMTQwNDIzMTgxMDE2WjAi\nAhEA46Z2sG6xRimoTv/Ou7Hq2xcNMTQwNDIzMTgxMDQ5WjAhAhASVR9yoajDLmYAQDyUoEmHFw0x\nNDA", 0x3FF)		 = 1023 0
	read(0x8, "MDUxNDA5MTZaMCECEGvDqj5k5GYOPY7tgCOZdu0XDTE0MDUwNTIwNDMxOVowIQIQbs29cAyUWfrZ\nOJrzztVsjBcNMTQwNTA2MTE0NTI4WjAiAhEA71HXiMrYvZlclqpHZ147jhcNMTQwNTA2MTE0NzQz\nWjAhAhBifFXYuDTWxdZoaqsGCs4NFw0xNDA1MDYxNjM4MTNaMCICEQD6XduvCeeKbKDIXkmyPKj6\nFw0xNDA1MDYxNzAwMzJaMCECE", 0x3FF)		 = 1023 0
	read(0x8, "Fe36kKQC+AYNFcrBG7ULoXDTE0MDUxNDE5Mzg1MFowIgIRAIW39xAi\nBL/VS/LAd++4/HYXDTE0MDUxNDE5NTIzMlowIgIRAJ8WRYR+h7fdqhJxdheJzGsXDTE0MDUxNTE4\nMjc0NVowIQIQTSTUlRsJwg4CVqlf2TkqtBcNMTQwNTE2MTQyNTA2WjAhAhBU6M8wewpMTXyJmqRM\nodt3Fw0xNDA1MTYxNDMyMjFaMCECEH1w8bVz8kDjcEsUZot", 0x3FF)		 = 1023 0
	read(0x8, "fCEXDTE0MDUyNzE0MDUyMlowIgIRAIXv\nY2rmGBFxcJ7auRpy4KQXDTE0MDUyNzE1MzIxMlowIgIRANKO0YbbbIor9bzkBnkDIZEXDTE0MDUy\nNzE3MDExMVowIQIQFdgHgkKSCAD9om9G8czyPRcNMTQwNTI3MTcwMTQyWjAhAhAeHdljFlM881/x\nGQ/8C/+wFw0xNDA1MjgxMzU3MzVaMCICEQDUpt4wS8OKGUoIodQagaEFFw0xNDA1MjgxO", 0x3FF)		 = 1023 0
	read(0x8, "Q1NzE2WjAh\nAhBhIge/ert0gV1DKA469Sw5Fw0xNDA2MTIxNDU3MzNaMCECEA9UjZLNd1F4R4ihfT/bvFAXDTE0\nMDYxMjE0NTc0OVowIgIRAJvIVVwMuK1LkBrthwti268XDTE0MDYxMjE0NTgxMFowIQIQHct1+Xy8\nO6xTPdBOPZl0hxcNMTQwNjEyMTgzOTEyWjAhAhAFhewqolqDQmSi1JPa56HjFw0xNDA2MTIxODM5\nNDJaMCECEH4Yw4", 0x3FF)		 = 1023 0
	read(0x8, "2riTP6rWIArGBptUXDTE0MDYyNDE0MjczN1owIgIRALNUN9qNv7r5GLtFlTjjoO0X\nDTE0MDUyNjAwMDAwMFowIQIQLFLbem+yeK9x/2NfOEg/jhcNMTQwNjI1MTQwMTA0WjAhAhBuwoHh\ngeJOKDRPW09KxdDYFw0xNDA2MjUxNTA2NTBaMCECEDmfL2jwqZEuJWV7t6ORLVYXDTE0MDYyNTE1\nMzIwMlowIgIRALja2LGijiBYdrNqEwn3UZMX", 0x3FF)		 = 1023 0
	read(0x8, "WYXDTEzMTAwMTAwMDAwMFowIgIRAO4tsTXCi8QbWivI\ni0kDdIgXDTEzMDkxMjAwMDAwMFowIQIQGtQeV01JbquBXPDhAA1SwxcNMTMwOTEzMDAwMDAwWjAh\nAhBn7bI3tFaETadBtdgu7EMsFw0xMzA5MjYwMDAwMDBaMCECEFtHnD8vDgq3ehsGnwkwUS4XDTEz\nMDkxMTAwMDAwMFowIQIQT4RF2gfK+cJNhpkgkluhghcNMTMwOTAzMDAwMD", 0x3FF)		 = 1023 0
	read(0x8, "aMCECEEmjm5hY9vurfv1s\n5FCHjdsXDTEzMDkwMjAwMDAwMFowIQIQAZSlgrUzxVmu7G0z5fxAsRcNMTMwODI3MDAwMDAwWjAi\nAhEA3VaU64MGwZZi89TLR7kyxxcNMTMwODI3MDAwMDAwWjAhAhBwCpljO8cm+1dy7wWoXCo6Fw0x\nMzA4MDgwMDAwMDBaMCECEDi+26MbYtUAuZgoaoDiMOsXDTEzMDgwNjAwMDAwMFowIgIRAPouP8uO\ng7I", 0x3FF)		 = 1023 0
	read(0x8, "UDhzbJ8cCWDfFw0xMzA5MDkwMDAwMDBaMCICEQCtxdCfem9bfixdR1gNoG9/Fw0xMzA4MTIwMDAw\nMDBaMCECEF6uF8TOcmpSi0RvipSuVhIXDTEzMTAwNzAwMDAwMFowIQIQAJ4Y7VdwVkpKBECQ3J8e\nKBcNMTMxMDAxMDAwMDAwWjAhAhBHB9xD4zr/w4SAHagrovGqFw0xMzA5MDMwMDAwMDBaMCECEH3w\n66JkCEKeNgAxjg/U3+MXDTEzM", 0x3FF)		 = 1023 0
	read(0x8, "AzMDAwMDAwWjAiAhEAsu/JBX9xGK2gkW4qVenNgxcNMTMxMDE4MDAw\nMDAwWjAiAhEA3ifbb24FXpInVUmQNOHz7RcNMTMxMDE3MDAwMDAwWjAhAhAQi27wg5MBROWiMnwA\nb/o7Fw0xMzEwMTYwMDAwMDBaMCICEQCHNsj3Z1jOpisd36mOXyCQFw0xMzExMjIwMDAwMDBaMCEC\nECL+28gRyPWzXB5tZoxoLewXDTEzMTAyMzAwMDAwMFowIgI", 0x3FF)		 = 1023 0
	read(0x8, "MCICEQDt5Ts/tBI4sFn31ipWJzrWFw0x\nMzExMjIwMDAwMDBaMCICEQD9LWABQ0lef6Ats+N/ChBPFw0xMzEwMTcwMDAwMDBaMCECECA32ttw\nykHJcl0XCc33iooXDTEzMTAwNzAwMDAwMFowIQIQcYbrVQhgVHnJBQQw2Y9HbxcNMTMxMjA1MDAw\nMDAwWjAiAhEA1a2j7xG0u+ieAJr3KhhlEhcNMTMxMDIyMDAwMDAwWjAhAhByYvlKzKKi/", 0x3FF)		 = 1023 0
	read(0x8, "NN7/TD9Wpo\nFw0xNDA3MDkxMTQ5NDhaMCICEQD9BJlBAaTzRwcoE60IBT1/Fw0xNDA3MDkxOTQyMDVaMCICEQCI\noidv+GupO419R+maAF5IFw0xNDA3MDkyMDA4MDJaMCECEBd9Vv5RCXQ4NV9MGBDubiAXDTE0MDcw\nOTIwMjMxNlowIQIQXzranywd860dbzkxcUkI5RcNMTQwNzA5MjAyMzQ2WjAhAhAx0LxCAezXqnnh\nkwJ6Cyg9Fw0xND", 0x3FF)		 = 1023 0
	read(0x8, "wNzIxMjEwNTA2WjAiAhEAgz988Xro6+JiqOhjtGus5xcNMTQwNzIxMjEwODQwWjAh\nAhBT5T5awzT2Qyd2DjNvofO4Fw0xNDA3MjIxMjU1NTVaMCICEQDmzTtVQ06gBbjrX3oya9rvFw0x\nNDA3MjIxNjE5MjBaMCICEQC71zkSI7UfPMHkahfIV/VlFw0xNDA3MjIyMDE3NTZaMCECEHEUI5+5\nC+xyPAZZS9GjX3kXDTE0MDcyMjIwMjcyOFow", 0x3FF)		 = 1023 0
	read(0x8, "gIRAJUD87fDMQu3LhEqSWu4rxkXDTE0MDgwMTE1MzUz\nMlowIQIQWMzZC5RLlWFdf0xGEgDAaxcNMTQwODA0MTYyOTA4WjAhAhA+EF3IGipgvRWqX6WJlaAm\nFw0xNDA4MDUxMjE0NDdaMCICEQCMJ/W4LILwW8EtrFGXRr9BFw0xNDA4MDUxMjU5MzhaMCECED9B\nuhxhxEMZFbB+1ggLJR4XDTE0MDgwNTE1NTE1OFowIgIRAOuZ9oolBt1MiS", 0x3FF)		 = 1023 0
	read(0x8, "rgMJqFw0xNDA4MTExNDUx\nNDRaMCICEQDO3DyKCd9qa57UO6W3VaY1Fw0xNDA4MTMxMzQ5NThaMCICEQCldiH1ptjboYsFQuZY\n6b8qFw0xNDA4MTMxNjM1MDlaMCICEQD0SsEelD133JeoShWsy9kUFw0xNDA4MTQyMDQ1MTJaMCIC\nEQDWESgLrQG6NXyDqQIq1K9DFw0xNDA4MTQyMTI0MjhaMCECEAkieR1ilgGJ2WMV6Cp3n2AXDTE0\nMDg", 0x3FF)		 = 1023 0
	read(0x8, "ODI4MTQyNTAwWjAhAhBJ4aAlU/CmBpINjbWVZEJZFw0xNDA4MjgxNjExNDlaMCECEFyWzLNTtIeO\n7hSa7TZ5jicXDTE0MDgyODIwMDI0OFowIQIQXRzbiyQaLJDb2YcAsR+gphcNMTQwODI4MjAxOTQy\nWjAiAhEA59vtxlq9FPBwzuQ7hhHmURcNMTQwODI5MTUxMTAyWjAiAhEA17m6XYYQMT1YWqVvYkSe\nJBcNMTQwOTAxMjAwNzA5WjAhA", 0x3FF)		 = 1023 0
	read(0x8, "ECEEDzQ26WiVyj5Q6/bNmFe+YXDTE0MDkyMzIwNTkxNVowIgIRAMu9\nWltpAu0sFi4pd9IBEigXDTE0MDgxOTAwMDAwMFowIQIQDazLwf9J1lg1Zs1mRwvWsxcNMTQwODE5\nMDAwMDAwWjAhAhAEU7lusDmv1smYjIy2mOfJFw0xNDA4MTkwMDAwMDBaMCICEQDQNebVUcNgLHPF\nFXOAAbvJFw0xNDA5MjUxMzQ4MTNaMCICEQCbMXkF0zGSwtZ", 0x3FF)		 = 1023 0
	read(0x8, "g9QLt0i+MCLOFw0xNDEwMzEyMDM5MTZa\nMCICEQCYzYYzA8ULZH+Xn6rrN/InFw0xNDEwMzEyMDU0NDVaMCICEQC1LT2PLkK6dWR2NQ8VacKl\nFw0xNDA0MzAwMDAwMDBaMCECEBDxgVVBhJdFSWIPcF5RhjMXDTE0MTEwNDE3MjUzNVowIgIRAOc2\nqrHgBVGMGJLSFt8baHEXDTE0MTEwNzIwMDM0OVowIQIQOtWBvNimlS4pWjBIwvWpmxcNM", 0x3FF)		 = 1023 0
	read(0x8, "IwMTIxMzI0\nN1owIgIRAIZGJg6Td5XyR7QRxf9UpncXDTE0MTIwMzAwMTA0MFowIQIQEqVAkN5PBHNwKfIb0kp2\nlBcNMTQxMjAzMDAxMDQwWjAhAhBYWkyuSAAmL9iB/03Jmt2uFw0xNDEyMDMwMDEwNDFaMCICEQCz\n+2G81itwCq9ct/1e+EArFw0xNDEyMDMwMDEwNDFaMCECEBMBR1GERhnmtX/eyjTmBKoXDTE0MTAz\nMDAwMDAwMFqgMD", 0x3FF)		 = 1023 0
	read(0x8, "4ULntkVgKsXDTA1MDUyNTA4Mzc0MFowIgIRAIkYSXamkYdoK82aeXODs/gXDTA1MDUyNTA5MDE0\nOFowIQIQda7iLtvamIJ897V4a7kwChcNMDUwNjAyMDAwMDAwWjAiAhEAkQg29HqVnI/UA/XOlxWQ\nNxcNMDUwNjAyMDc1MzU2WjAiAhEAvSGGJPhLTShDQD0i+PJvfRcNMDUwNjAzMTUzOTUwWjAiAhEA\nr+mLoVclTnn0dkQIcdaPWRcNMD", 0x3FF)		 = 1023 0
	read(0x8, "wNTA4MjIxNDA0NTBaMCECED6SheqdCArgyfrTynQnNuYXDTA1MDgy\nNDAyNTY0MFowIQIQPzOqiHJkNT5vY1b+gCCk7BcNMDUwODI0MDc1NTEyWjAiAhEAzXwGzjV1W+t9\nPOoMW+FA3BcNMDUwOTA4MDkyMTQ3WjAhAhBHSh5Dr/r4PE5Nlmnq5AXXFw0wNTA5MTIwOTI4MDZa\nMCECEBPgKBY4/+QKx1WzMbQn0n8XDTA1MDkxMjE0NDY1MFow", 0x3FF)		 = 1023 0
	read(0x8, "hByQyRim8ghfinSp5WA7ucjFw0wNTEx\nMDgyMDQ2MzdaMCICEQCrG0U805gM21ZVEn9VlKMpFw0wNTExMDkxNjQxMzJaMCECEAnc57OQ7PEC\nQgCcO5A60jUXDTA1MTExNTExMDMyNVowIQIQEDHBlKIooCiuf4XNTCbOiRcNMDUxMTE2MTA0NTIz\nWjAhAhBGWiM4ILnDtU4U9QidRh/yFw0wNTExMTgxNDA5NTFaMCECEG+CEbvekNWnVIMO7l", 0x3FF)		 = 1023 0
	read(0x8, "oFw0wNjAx\nMjUwMDAwMDBaMCICEQD13cfJ+PQqOOTgwkH3bSp1Fw0wNjAxMjcxNDAxNTlaMCECEHsiooPZ1lE2\njdjZYtvW6FIXDTA2MDIwNzE1MDk0NFowIgIRALp+y06QPSRAc0bu7Xa1G6YXDTA2MDIwOTA2NDkz\nN1owIQIQaO0X6KLpYaueDYHLCBkFpxcNMDYwMjE1MDk0ODIyWjAiAhEAsuTDSODTWWnCxhNQgXS2\nmRcNMDYwMjE2MTA", 0x3FF)		 = 1023 0
	read(0x8, "Mjc1MVowIgIRAI0c1x7LgCOCqQf9zWZQqAkXDTA2MDQyMDE3MDkxNFowIgIRANsR\nIdM57UfWE0/Sw0TI2eAXDTA2MDQyMTE4MzI1OVowIgIRAILT3EuqLiMCIb9N2s5pFFsXDTA2MDQy\nMTE5MTY0NVowIgIRALO+XPiZzuspbSCh/2hv/E0XDTA2MDQyNzAwNTUxNVowIQIQMuWjyQinqMkT\nlKrPiPqmYxcNMDYwNDI3MDA1NTM1WjAiAhEAx", 0x3FF)		 = 1023 0
	read(0x8, "JjQf9d6wZBcE8Ss3hX2RcNMDYwNjI4MTQ1MjM4WjAh\nAhB4oCiDhyEAaLULD96wLNteFw0wNjA2MzAwOTM2MjZaMCICEQDDPXy6QL8cSDfyuRUp1+scFw0w\nNjA2MzAxMzEyNTlaMCICEQCIqHYj0NkdmGsHer2sLzSKFw0wNjA2MzAxNDM3NDRaMCECEDWAR82C\nc6AfvSw2N6/zFkQXDTA2MDcwODAyMjM0MFowIgIRAMbVtkNu7tULu1uhRh8", 0x3FF)		 = 1023 0
	read(0x8, "TI0XDTA2MDgwODE3MjA1\nMFowIgIRAK09Ov5dNaMkoMK4o6LJ30UXDTA2MDgwOTAyNDgwM1owIQIQRb7BA32exjPk8vhfJaH3\nehcNMDYwODEwMjMyOTEyWjAhAhBIoMs+3Bh+4xWWB3Hv917+Fw0wNjA4MTEwOTM3MTZaMCICEQDF\neACe7YffLyE1thpCYTAxFw0wNjA4MTEwOTQxMDFaMCICEQCTgPaqSVr+ybHi6WjHXmIeFw0wNjA4\nMTMw", 0x3FF)		 = 1023 0
	read(0x8, "zQ3MjZaMCECECauo4HgKYk/TuFtk8fzU0UXDTA2MDkyNzA3MDMyOFowIgIRAPCG1Rd8xSTvJ6zW\nUe7w86wXDTA2MTAwMzA5NTk1NlowIQIQWUs08coic5HCKsrOMC/qqxcNMDYxMDA0MTg0NjE2WjAi\nAhEAm70/tpvp1SQMHuL+7IZGnRcNMDYxMDA2MDcxNDU0WjAiAhEA4NnGplkJ8wjhXiPZ17G7wBcN\nMDYxMDEwMTc1MTI2WjAhAhBwlU", 0x3FF)		 = 1023 0
	read(0x8, "vh65P5dj/Il1w4JFFvSIXDTA2MTAyNjE3NDAxNlowIgIRAKgU5HUN\ndb2jUDfFtirkTOIXDTA2MTEwMTEyMjI0NVowIQIQff7To6/besESp6AxR+OU8RcNMDYxMTAxMTMw\nNzUxWjAiAhEAgvZ0OGZ9cO+7LLv5A/T7chcNMDYxMTAzMDAwMDAwWjAhAhAXLWTVqeSKTC6Z6QHd\nxgwFFw0wNjExMDcxNDEwMjVaMCECEC+raDA4JpJwr9CvAik0", 0x3FF)		 = 1023 0
	read(0x8, "RcNMDYxMjEzMDcyNjQ4WjAhAhAHeMHQ\n8Mgg9sFiypJLffzcFw0wNjEyMTMwNzMzMjNaMCICEQCCRaj3NuCcFfmWEC76rj8ZFw0wNjEyMTMx\nNTI2NTVaMCICEQCPh/gfB5TTu+cn4IELT/NVFw0wNjEyMTgyMTA0NTdaMCECEGZgm2HnZETR5Z3E\nZ0+hw70XDTA2MTIyMTE5MDYxMFowIQIQZkXP1E4cq2WMiWjEtcfsjhcNMDYxMjIxMTkxMD", 0x3FF)		 = 1023 0
	read(0x8, "3WjAhAhBH\n6PaRE0KnXGqS9/WX+/OUFw0wNzAxMjkxNTIxMTlaMCICEQCB8uwJy0cYYZ6qEiXpFygEFw0wNzAy\nMDUyMTEzMzNaMCECEE1AR4N4ue5RAGHKrVBFL8gXDTA3MDIwNjE1NDIxNlowIQIQZ10aecz07/94\nAt8+axRkjhcNMDcwMjA2MTkxMDQxWjAhAhBqLzsQJc6/tZIXVRBLOJg6Fw0wNzAyMDcxNzI2MTVa\nMCICEQDKmjw8DRh", 0x3FF)		 = 1023 0
	read(0x8, "lVh0UNhJoAxV9xcNMDcwMzA3MTAxNDA3WjAiAhEA4Bg8sMfY4G+tEN5uhHSZWBcN\nMDcwMzA4MTEzNjIyWjAhAhA8LTnHtHaKX/LncQaD3XSUFw0wNzAzMTEyMzA0NDBaMCICEQDvwIqR\no6IwCHfaUALZPQm5Fw0wNzAzMTUwMDAwMDBaMCICEQC+TG6GGIisXoH7Z9uLqNSEFw0wNzAzMTUw\nMDAwMDBaMCECECjGgHbKlSe4ZyJTCNRxDYgXD", 0x3FF)		 = 1023 0
	read(0x8, "0wNzA0MTIxNzEyMDZaMCECEDqC0/UjVKU4109tS7cP\nxS4XDTA3MDQxNzExNDUyOFowIQIQVTUf3qnhGM3BLV8jsGDzkBcNMDcwNDE4MTIxNTE0WjAhAhBC\nlpop7JMIrFnn+D/AFelSFw0wNzA0MjAxNjE3MjdaMCICEQDS6+kg6ercywqSI9a0NKXRFw0wNzA0\nMjEwMzUzMDdaMCICEQD/z0rKyBlSPEGqn5a5OHkXFw0wNzA0MjMwMDAwMDB", 0x3FF)		 = 1023 0
	read(0x8, "MCICEQCWQ5ivBlUhRMiB\ngzBXNvZmFw0wNzA1MDMxOTQ3NTFaMCECEHiMJPPVuj6xMOW5dM8BFlsXDTA3MDUwNDAwMDAwMFow\nIgIRAPnaLvejBmyc3qvPNA+C2psXDTA3MDUwNDAwMDAwMFowIQIQQpBD6+fRkCVjrHeizAzquxcN\nMDcwNTA0MjA1MTEyWjAhAhBbJm+nPXDgPk2OERn6wHwVFw0wNzA1MDkxMTUwNTNaMCICEQC2Q7lZ\nNk3r", 0x3FF)		 = 1023 0
	read(0x8, "9jOlTgSSpMzIhcNMDcwNjAxMTc1MDMwWjAiAhEA+5Ih33sTAntRCcnKPzcKhhcNMDcwNjA2MTAz\nMDM4WjAhAhB3xg0K80Z5EVyA81qzeZG4Fw0wNzA2MTExODE2MTlaMCECECeD4rqMwNG0Q5e9O9cP\n2sYXDTA3MDYxMjE5MTMyNlowIQIQAUFy3w/qcMn1BPxdmHGDCxcNMDcwNjEzMTEzNDIxWjAiAhEA\n4zGPYgc5AQ0P6BeYpLhlHxcNMD", 0x3FF)		 = 1023 0
	read(0x8, "XDTA3MDcxMTEyNTYwNVowIQIQUw7jM6evANvvrks2njrelRcNMDcw\nNzExMTI1NjUzWjAhAhAJyWkrdOth/LZC0Tr5MikfFw0wNzA3MTExMzAwNDVaMCECEBFOW2WucJuG\nQ506obSl60sXDTA3MDcxMTEzMzIzMFowIQIQK+ojlcikiC5ijhmkmiwj/hcNMDcwNzExMTQzMjAz\nWjAiAhEAiHsXGZ/pVQDRZqZV06g68xcNMDcwNzEyMDk0OTEw", 0x3FF)		 = 1023 0
	read(0x8, "CICEQDtPtMnHycd6rBK2hX4MOsiFw0w\nNzA3MTgxMTUyNDBaMCICEQC+SPYWSZgsrKu6c8jKXYdXFw0wNzA3MTgxMjM3MjNaMCICEQD1WaGl\n+8vJWe49I0moAjeFFw0wNzA3MTgxMjQzMjhaMCICEQDeLA2Em2Bh1C88LZ+8dWV/Fw0wNzA3MTgx\nMjQ0MTNaMCICEQDCeMB8b4PRlzlKeoJC8A4/Fw0wNzA3MTgxMjQ1MDJaMCICEQDvmIiTc2", 0x3FF)		 = 1023 0
	read(0x8, "zO/8zlFcF\nsnYypBcNMDcwNzMxMTUxMTA4WjAhAhBWV+V4oUXH2OhqCvJLJDNAFw0wNzA4MDEwMjUyNTZaMCEC\nEDfYDeDCm1GPMaJ4/qEFZYkXDTA3MDgwMTEzMzkyOVowIgIRANzzu5UmmchqB7NVv3f2caUXDTA3\nMDgwMjA0MjQ0MFowIQIQL6S0CDi0LI+kctEPN8xMHxcNMDcwODAzMDgzMzA1WjAiAhEAv1vs/Lbb\n/jgdx0A48VM6DBc", 0x3FF)		 = 1023 0
	read(0x8, "MDcwODE1MDUxODQyWjAiAhEA4yWByTWSKZunneQlSFATexcNMDcwODE1MTM0NDU5\nWjAiAhEAqmEbtlqMq4n9P5v1HV+6TxcNMDcwODE1MTQyNDEwWjAiAhEArO5K61EnYOk1bSNjUNkw\nahcNMDcwODE3MTIwNTIwWjAiAhEA4lM+xITqXg3OoI8rfDWQaxcNMDcwODE3MTMxMjI1WjAiAhEA\nmBhXbXoiIl5vg8nBYrEMZRcNMDcwODIwMTAwM", 0x3FF)		 = 1023 0
	read(0x8, "EwMDJaMCICEQDHVgt1zfK+xtIhaUc0w+NfFw0wNzA5\nMTExNTE1MDFaMCICEQDIsVL6irKW+8/8euJD0zI7Fw0wNzA5MTIwMDAwMDBaMCECEFIdo2QLgZ3Y\n1G4MG615RP0XDTA3MDkxMjE0MzgyNFowIgIRAJKq5UdklpUiCbDKTFtmc9cXDTA3MDkxMzE2Mjkz\nMFowIQIQHJnHVh+5LfcU/JQVWzxLUxcNMDcwOTE0MTMwMzE3WjAhAhBFrGS", 0x3FF)		 = 1023 0
	read(0x8, "Xa9RZHslhzskHBcNMDcw\nOTI3MDAwMDAwWjAiAhEAjwg0UL6GifDBhsXjggK4xhcNMDcwOTI3MDAwMDA0WjAiAhEArgHGhZx0\n0AeJ1KyQGDqYaxcNMDcwOTI3MDkwMDQwWjAhAhBMvq6p942FwhJTlIlvFN0aFw0wNzA5MjcwOTAx\nMTNaMCICEQDsLwUdRRlErS8U6/KQX7xIFw0wNzA5MjcxMzIzMTBaMCICEQCvBppLFojBNEl0DX0s\n4Sjt", 0x3FF)		 = 1023 0
	read(0x8, "xqY3CwXDTA3MTAwNTE1MTMxMFowIQIQPFd8iCuVMCrERRrw2NvfbxcNMDcxMDA1MTkwNjIyWjAh\nAhAhTfaMfmBDxY7CuXYTKPMYFw0wNzEwMDkxNzQ1NDJaMCECEBBhFyWJeI2QNsKeT+jnYp4XDTA3\nMTAwOTE5NDk1M1owIgIRAI6maW3XfZUd8f2DTJorpcMXDTA3MTAxMDEzNTYzMFowIQIQdzp3Y0W9\nnOLtXlL6i1cUlxcNMDcxMDEwMT", 0x3FF)		 = 1023 0
	read(0x8, "xOTU4NDRaMCICEQCoIjY3uPbKPuDbSieF94oiFw0wNzEwMjQxNjEy\nMDJaMCECEH6pB/CKQlNWETUdMJPrVnAXDTA3MTAyNDE4Mzk1OVowIgIRANqyPd2LoNsAPbmj/c6S\nOEUXDTA3MTAyNTAwMDAwMFowIgIRANB4ODiCV5xb7TQMl7hO9sMXDTA3MTAyNjAwMDAwMFowIQIQ\nUaAR5SwLY9UsthwhHXLkFxcNMDcxMDMwMTYyNzIwWjAhAhB5", 0x3FF)		 = 1023 0
	read(0x8, "QC7uTO4vn+xoLmT//5UqTolFw0wNzEx\nMTAyMTA3NTVaMCECEBd5bepi04698yqTIcpWGcYXDTA3MTExMjAwMDAwMFowIgIRAMFPfkwt97QG\nPMed4ADEMBgXDTA3MTExMjE0MTc0M1owIgIRALZRXSb+qPqBqej8YYmrF1gXDTA3MTExMjIwMTEx\nNFowIQIQZwxCRXDzZrYYh8xpdJ2lsRcNMDcxMTEzMDk0NzM0WjAiAhEAokPuA7J/TXVD4x", 0x3FF)		 = 1023 0
	read(0x8, "WW5dHSRUX\nDTA3MTEzMDAwMDAwMFowIgIRAKbD0LIhAsikdjw6vNrI4ZIXDTA3MTIwMTAxMjcxOVowIgIRAPjG\n4bL+7jjjIklYbVij8D0XDTA3MTIwMTAyMjMyNlowIQIQYP/nuO2sInNfTA2tW2uGuhcNMDcxMjAy\nMDAwMDAwWjAhAhBB7HHAyITfF3PqtZeMSnkhFw0wNzEyMDIxODU2NDFaMCECEEwSKi4cNt3YQLN8\n/w3KBGEXDTA3MTI", 0x3FF)		 = 1023 0
	read(0x8, "MzIyMzUyNFowIQIQN3TapvKMFOnhw/WMloNS1RcNMDcxMjE3MDAwMDAwWjAhAhBo\ntbRtTnwjTeTHvLRAtPMVFw0wNzEyMTgxOTM4MDZaMCICEQCDJEN4QA/ZuNFG8u2JxeEqFw0wNzEy\nMTkwMDAwMDBaMCICEQCZKgrdqQ8ASxRP3pC+y8IrFw0wNzEyMTkxNjE1NDJaMCECEBI5tAee1Ive\nJuUj9uw9J1wXDTA3MTIxOTE3MTEyMVowIgIRA", 0x3FF)		 = 1023 0
	read(0x8, "1LKej1O/mb05DaoDYXDTA4MDExODAwMDAwMFowIQIQ\nExegVG06UtOpFOU7fIP4DRcNMDgwMTE4MTgwMDQ4WjAhAhAoJ/IPPAZao8N5LB9XwVbEFw0wODAx\nMTgyMDM4NDRaMCICEQCZgdlInl1CZmv4UHL1ZZcPFw0wODAxMjExNzE0MDBaMCICEQChDLHiH5d0\nxZBI6sTQkbJmFw0wODAxMjIwMDAwMDBaMCECEAEgkD/6htapPCOPWVXCW6g", 0x3FF)		 = 1023 0
	read(0x8, "elGGFw0wODAxMjkwMDAw\nMDBaMCECEBnmf3uC7ysVHycGrf/bnVwXDTA4MDEyOTAwMDAwMFowIQIQIRxvZzplw1kHWGn9PXt7\nkxcNMDgwMTI5MDkzMDEwWjAiAhEA3RxhaozxBoqJmKFYv6a16RcNMDgwMTMwMTEzMjM1WjAhAhAk\njfr4yH3jV/bYmP8YOwoZFw0wODAxMzAxNTIxMDJaMCECED1JzTPBHmwbuuKXHjd2xwsXDTA4MDIw\nMTAw", 0x3FF)		 = 1023 0
	read(0x8, "zIxN1owIQIQfvqM8J2WiSUouN/8/+MksRcNMDgwMjE0MjAwNDEyWjAiAhEA3KaZtKO7B8KzBQl1\n9SkLqhcNMDgwMjE0MjM1NjU0WjAiAhEAmOKcz071SzoUTvwG33fmQhcNMDgwMjE0MjM1NzE0WjAh\nAhA6emq2GiTMUT6/98fObTKIFw0wODAyMTUxODI5MjZaMCICEQC2DPHpQ1w1QuUwqUPysuoVFw0w\nODAyMTUyMTM4NTFaMCECEEVuUh", 0x3FF)		 = 1023 0
	read(0x8, "+93AEB99jyhcNMDgwMjI5MTk1NTM0WjAhAhArA9uAb991UIYup49p\nhOpTFw0wODAzMDMxNTM5MjJaMCECEE/BnlFpZ2ejkqycSUdhSckXDTA4MDMwMzE1NDAyMFowIQIQ\nBdzj7GWFl4j7EqW2/ebwRhcNMDgwMzAzMjMzNTE4WjAhAhAyi9zA9nnEZJFH+7PrDpvGFw0wODAz\nMDUwMDAwMDBaMCICEQDswS4qt332bbE5t9vSYZB0Fw0wODAz", 0x3FF)		 = 1023 0
	read(0x8, "DEzMzEzM1owIQIQFrNHU6+YywIWLrfy\nHQeXqBcNMDgwMzIxMjE1ODAyWjAiAhEAx0LDWQFBUrUOSyG7hSXAyhcNMDgwMzI0MTU0MjU1WjAi\nAhEAvr9VkDNNcopRODwc7rUiCBcNMDgwMzI0MTYxNjU4WjAhAhAT5GkDq3y/FwiyfBJUaGfkFw0w\nODAzMjQxNzU2MTlaMCICEQDqW/rTrIPiJn1o5qGIsAQ5Fw0wODAzMjQxNzU3MjRaMCECEF", 0x3FF)		 = 1023 0
	read(0x8, "W7g82oF/c\nYvFk8znNH94XDTA4MDQwNDE0MjI1M1owIQIQTibzWzLWKrBFBsciqvPxXhcNMDgwNDA0MTYwNTUy\nWjAiAhEAwliykLAMK3VUrMw6FbJd0BcNMDgwNDA4MTMyMDI0WjAhAhBG2uu/CLo8aeGheE0lGawj\nFw0wODA0MDgxNzQ4MjFaMCECEAEM3ZlyJASRdGfWhDd5kdQXDTA4MDQwODE4MTE0OFowIgIRAPgM\nbVbehuMce/xkZtE", 0x3FF)		 = 1023 0
	read(0x8, "WnOYdOQXDTA4MDQyMjAwMDAwMFowIQIQPXfv1OBUNpEX37v3P6wGBBcNMDgwNDIz\nMDAwMDAwWjAiAhEAtnwxuxDaGyhwJGQAFj3DHxcNMDgwNDI0MTU1NjE3WjAiAhEAggqqo3NlnbXb\nTBthGPYiLhcNMDgwNDI0MjI0OTAxWjAiAhEA8kU/8a8oaEbyCpqNDVd1HRcNMDgwNDI1MDAwMDAw\nWjAiAhEA5d80p3g3nTix0hD3xPrj9hcNMDgwN", 0x3FF)		 = 1023 0
	read(0x8, "UxNjExMTQxNlowIgIRAK4MKeEpLUbq5B4Mj0+c3WIX\nDTA4MDUxOTIxMzUyNVowIQIQdPug6zACKqZBBIEW4tVnQhcNMDgwNTIwMTYwMTEzWjAiAhEA4eCk\nDr+q9+Cxq3Yb062FBRcNMDgwNTIwMTg0MDIxWjAiAhEA1ovYoz1tIo2GU954GcvYsRcNMDgwNTIz\nMTM1NzMyWjAhAhBPDYMqjVeLs98ymjp3ckgnFw0wODA1MjMyMDU1MjlaMCI", 0x3FF)		 = 1023 0
	read(0x8, "WjAhAhBmIFcppzvWSUdd\nU2thpQabFw0wODA2MTIxMzA0MzNaMCICEQCFqaDr8VOURdCdp9e+DhGfFw0wODA2MTIxNDQ4MTla\nMCICEQCW6KVNmRYAr4ZkS5KMyTpCFw0wODA2MTYxNTM5MDJaMCICEQCGaYvbQsVjaUWbSQBD7xE1\nFw0wODA2MTYxNzU5NTdaMCICEQD4pMxt18ES8/Mz1qVYQCD4Fw0wODA2MTcxMDQxMzhaMCECEBLb\nM5nv", 0x3FF)		 = 1023 0
	read(0x8, "gSZDxJFJgSbnW1PcBcNMDgwNjI3MTk0NjU4WjAhAhAV2h3IZbgndTRN2KDYw69+Fw0wODA2Mjcx\nOTQ4MDhaMCECEHGdFo3+C7HzQtbgSUS7JvwXDTA4MDYyNzIwMTA0NlowIgIRALn2RVedlcVh8deJ\nz7wZNSIXDTA4MDYyODAzMzMwOFowIQIQU8biY6C0zr9keXZ55u0XfxcNMDgwNjMwMTMwNzMxWjAi\nAhEA3I4+nmLhraG9B4LbSu5ejR", 0x3FF)		 = 1023 0
	read(0x8, "yFw0wODA3MjMxMzIyNTlaMCECEALOeLjGGNpnahEfIj7jaA4XDTA4\nMDcyMzIyNTEzMVowIQIQemHX/NRVxs3TeBnVpDtlvhcNMDgwNzI0MDgzNjM5WjAiAhEA2L0STOun\nJFDoobaTEEOZ9hcNMDgwNzI0MTM1NTQ3WjAiAhEAn3RvTLZNYSAikFH7XQp87xcNMDgwNzI0MTgx\nNzMzWjAgAg8xrGm0h5gJh9yYVPSeVBEXDTA4MDcyNTExMTM0", 0x3FF)		 = 1023 0
	read(0x8, "DA2WjAhAhB/ZAMqGd22xzjFGZJWsJw9\nFw0wODA4MDYyMjA0NDJaMCICEQCjzJnqZHTr0HrGG6Qu6ZoDFw0wODA4MDcxNTAyMDNaMCICEQDT\nZypdB8gR1AyZTfnrsCcmFw0wODA4MDcyMTI4MDVaMCECEFy7hlLgnxcVE16a0wdsPWgXDTA4MDgw\nODEzMzAzNVowIgIRAOaLt6fYfbVR92RQgcdE7KQXDTA4MDgwOTA3MDczN1owIQIQP6lBbF", 0x3FF)		 = 1023 0
	read(0x8, "0hFMX5Z9R\nBGdpWmnWKZ7uFw0wODA4MTkxNjI3MDVaMCICEQCjPiInYf6SUIvCsfBwDaznFw0wODA4MjAxMjAz\nMjBaMCICEQCU2vq6YOLAW3k9Hagt4dw2Fw0wODA4MjAxODUxNDRaMCECEGMvmtGxHfFhoHrard9I\nShMXDTA4MDgyMDE5MDQwN1owIgIRALSl/979Ly+ZXzWu9UnYqBQXDTA4MDgyMTExMDIwN1owIQIQ\nbEvnDlsmbCD+PgG", 0x3FF)		 = 1023 0
	read(0x8, "P/mGuBcNMDgwOTE4MjAxNjI5WjAhAhAQJQK48CMjDVfiu4EadtUyFw0wODA5MTkw\nMTIyNThaMCICEQCRFgMM0yykcPXpy2LTbDS5Fw0wODA5MjIwODM2MzBaMCICEQD7Y56c01Em6JBw\nCX+1DHMlFw0wODA5MjIwODM2MzhaMCICEQCeri8HqFPJxlNMOf8bCKNLFw0wODA5MjIxMzUxMjBa\nMCECEESwwyBqPZFmf19Br5OOHhUXDTA4MDkyM", 0x3FF)		 = 1023 0
	read(0x8, "AwNzA2MDk1N1owIQIQANdYfWhwNSxH6h7QjAAQYBcN\nMDgxMDA4MTMxNTE0WjAhAhAbyus2NVSpdpJixeruMjWPFw0wODEwMDkwNjEzMzdaMCICEQC+NW3s\nz78x7khdD0Pr4RgfFw0wODEwMTAwNzA4MTJaMCICEQCCD3FUggYp9OarFcSLEWIXFw0wODEwMTAw\nOTM0MzJaMCICEQCCwFyhjpC0aUytvEYtKNDiFw0wODEwMTAxMzU5MDJaMCI", 0x3FF)		 = 1023 0
	read(0x8, "MVowIQIQUnH59JWpJ5XF\nZYD3ojqyGRcNMDgxMTA2MjE1MjA0WjAiAhEA8cN971MeOHRF+35q6BAI1xcNMDgxMTA3MDc1NzEw\nWjAhAhBBh5rWYa0xtV9UJWE/bG2CFw0wODAxMTgwMDAwMDBaMCECEHoFDq6RUtY4Q1DFEdU7nzMX\nDTA4MDUwNjAwMDAwMFowIQIQcG7kpVoIHEu/WOg2UthVJRcNMDgwNTI4MDAwMDAwWjAiAhEA4s19\nCWr7", 0x3FF)		 = 1023 0
	read(0x8, "bDzrYeBxRYlSFMXDTA4MTExOTE2NTAyMlowIQIQDJCRgThP3ON+5OzzTo5LNRcNMDgxMTIxMDgx\nNzE4WjAhAhB9kXpg92bH1E1JCj9ssnppFw0wODExMjQwOTAxMzVaMCECEC/x2Dfv1ThxL4Js31tu\nkuQXDTA4MTEyNDEwNTMwN1owIQIQdvjiXQ7FTEQAuTVm8zpWLxcNMDgxMTI0MjI1MTEyWjAiAhEA\ntFkUs5nFxc8ey4c8Xq36xRcNMD", 0x3FF)		 = 1023 0
	read(0x8, "wODEyMTUyMTQ1NThaMCECEGE05mgqgtl0thy/w4d2qfYXDTA4MTIx\nNjE1MjQxNVowIgIRAOknaETGWs9Cczt+GoEJ1m8XDTA4MTIxNzE0NTkyM1owIQIQbfds5HS6ZQpY\nXn/QOB1bLxcNMDgxMjE3MTY1NzI5WjAiAhEAjh+a77JdiGyZUFXDNugt5BcNMDgxMjE3MjIyMTA5\nWjAhAhBRyINbn3EZ5VHuCqzkR/uwFw0wODEyMTcyMjI1NDRa", 0x3FF)		 = 1023 0
	read(0x8, "CICEQDVbwhioEl7BLGxB812cUdpFw0w\nOTAxMDgwOTM1NTBaMCICEQDS60nGAFCEUdVrA7V/rGLXFw0wOTAxMDkwOTM2MTRaMCECEEpvsEbj\nzkrESBE1utb6J1kXDTA5MDEwOTE0NTUyMlowIQIQHncgnMfhgSj0urFU2VNLNxcNMDkwMTEyMTUz\nMjEwWjAiAhEAhUbYEbgsU3Wn8AaMqivMqBcNMDkwMTE1MTUxMTUxWjAiAhEAhLOmrE4R7o", 0x3FF)		 = 1023 0
	read(0x8, "QNGuNWH8o\nf2PW3AN7Fw0wOTAxMzAyMjI1MzdaMCICEQC9Zsnm4bZFNrWJCwecaEAUFw0wOTAyMDIxODEyNDRa\nMCICEQDUmn3Aqiuqvg/0xQQ7G76pFw0wOTAyMDIyMjExMzFaMCECECzMMytzAsJumi4eqKNq2RwX\nDTA5MDIwMzIzMTkzN1owIQIQSZvN/F/PzjdzItCoEiY+WhcNMDkwMjA2MjAwMzEyWjAhAhAVYOwB\nBTJqV8r24YfwYCx", 0x3FF)		 = 1023 0
	read(0x8, "KEusUhcNMDkwMzA0MTAxNjE1WjAhAhBfXBajGSUPCtua1yfg6fV8Fw0wOTAzMDQy\nMDQ5NDhaMCICEQCFOfzcwfxDn1N5yAqZF17lFw0wOTAzMDYwNjEyMDFaMCICEQCIcKUCjSg3x1/7\nx+bPQPN8Fw0wOTAzMDkxNTAxMzFaMCICEQCql8OAF1EoKoYE9Kjb1JqwFw0wOTAzMDkxNjI1MDBa\nMCICEQDrf+NSR7dRt+rvAsDtg0VuFw0wOTAzM", 0x3FF)		 = 1023 0
	read(0x8, "E5MDM0NVowIQIQGtc4BlcH1xYUprApxI6XCxcNMDkw\nMzI0MTMyMjUzWjAiAhEA8wMPP1TXbL5kIzMS8hWzXhcNMDkwMzI1MTcxODMwWjAhAhADTMKB/xv2\nF7AZvRaFPq3VFw0wOTAzMjYxNTEwMDVaMCECECbrEepXZrhS56e6/XfkMskXDTA5MDMyNzE1NDYy\nOVowIgIRAM8/4Vv6xnqOgeSkNw9cMicXDTA5MDMzMDA5MjA0M1owIQIQDvK", 0x3FF)		 = 1023 0
	read(0x8, "ZBobMBzVMsqKaxaAdAi4\nFw0wOTA0MTUxMTAyMzBaMCICEQCG7wClm/PWrhmG+waLmEqbFw0wOTA0MTYwODU4MTdaMCICEQCC\naPYnIR/F5yCOO1pyFvdbFw0wOTA0MTYxOTUxNDhaMCICEQDjBoCymyIU0EioHaeeN+Z4Fw0wOTA0\nMTcwODM4MTNaMCECEHaVdfFWSiun0oA4KsHedJIXDTA5MDQxNzE3NDYwNVowIQIQS1F5o+zD0+K+\nGPZg", 0x3FF)		 = 1023 0
	read(0x8, "7t5LMUXDTA5MDUwNTE1NDYwNVowIQIQECkDHp9Fu9UQpeSgq2sJMBcNMDkwNTA4MTgyMDM3WjAi\nAhEAmhE3/15TVGJWbCBHXK94VRcNMDkwNTA4MTk0NzA3WjAiAhEAmQjN1QfoUwezGF5omRCQgxcN\nMDkwNTExMDE0MzA0WjAhAhBneP7BGq40txXHgEnTvVRmFw0wOTA1MTEwNDQxMDlaMCICEQDToK6/\n9x0RQT3Lw78RlOmNFw0wOTA1MT", 0x3FF)		 = 1023 0
	read(0x8, "0MDAwMDAwWjAhAhBRnx4vc+ucD336rEgWspLTFw0wOTAxMjEwMDAw\nMDBaMCICEQD4lUahpCySkRhtwjqoxsEvFw0wOTA1MjgyMTIwNTFaMCECECAlXRJhfGR8HWvPQDKt\noEQXDTA5MDUyOTEwNTM0N1owIQIQWWhGxL5rLQV+MmJJ7S3aAhcNMDkwNjAxMDAzNzE0WjAhAhAO\nCCOrhq943Gz+rt8fiMwbFw0wOTA2MDEwNzQ1MTBaMCECEDyV", 0x3FF)		 = 1023 0
	read(0x8, "e+H4NWwhyHK+TRWIlYXDTA5MDYyMjE4\nMDY0OVowIQIQOJzyuqlUQAUI0kn0Zus1thcNMDkwNjI1MjEwMjQ2WjAhAhAPBG7J2SaB28ihgd02\n14H1Fw0wOTA2MjYwOTQ1MThaMCECEEMoyEvPqlhTLR/VTsISIxgXDTA5MDYyNjEzMTMzNVowIQIQ\nN080u77/uFJu4J4X8op7mRcNMDkwNjI2MTg0MjQ4WjAiAhEAt8B15rG20piNl8LufMUqvh", 0x3FF)		 = 1023 0
	read(0x8, "4Fw0wOTA4\nMDMxMTAzMDdaMCECED4VKYy8HXHjCxfQqVVzHhgXDTA5MDgwMzE1NTM1M1owIQIQCivUtA9JyLat\nquSSaZK6mhcNMDkwODAzMjA1MzE5WjAhAhB3UzaYZG4hWTnvX8yfqYRGFw0wOTA4MDQwMjUyMTha\nMCICEQDFWZll4RhY91RFy7QgIs63Fw0wOTA4MDQyMjA3NTRaMCECEGF9vsyDy6XEJmvnod2kZQEX\nDTA5MDgwNTE3NTE", 0x3FF)		 = 1023 0
	read(0x8, "MCICEQDTyznagaYQunHbglHVRKfQFw0wOTA4MTgxNDEyMjRaMCICEQCBDAoXEiXR\ngfE8TBs1YRXzFw0wOTA4MTgxNzEwMDRaMCECEAjXYh5JBXsPBcYdBGD9K8sXDTA5MDgxODE4MDcz\nOFowIQIQL+Yo5ogV76qKbMLVjo5qgBcNMDkwODIyMTEyNjExWjAiAhEA57Kz/m2W6wgyP0fVECH4\nchcNMDkwODIzMTYzNjM3WjAhAhA0/jqIEXYZg", 0x3FF)		 = 1023 0
	read(0x8, "MvF6ZixBgXDTA5MDkxNDE2MDYzM1owIgIRAMa4kN5k\ns1fbNNsuQ/cNyxoXDTA5MDkxNDE4MTE0MFowIgIRAKR+/Qj2g+RmpfuZQh/MKIwXDTA5MDkxNDIw\nMjc1MFowIQIQWNANiiG0TR8L+xONAhh0ABcNMDkwOTE1MTgyMTQxWjAiAhEA70I7VxQnMC+wYWZp\nQrJlRhcNMDkwOTE1MjExNjQ0WjAiAhEApuPASY5+lk3J+OrMS/iAzhcNMDk", 0x3FF)		 = 1023 0
	read(0x8, "MDkxMDA1MTUwMjI3WjAh\nAhAraYuImyhjxG2NaB1KwIg/Fw0wOTEwMDUyMDM4MzhaMCECECiEdTCJyPUrcbwpuLjVlZYXDTA5\nMTAwNzE0MTQyNVowIQIQPqaCLJavUueTFtgcy2WMGhcNMDkxMDA3MTcxNzM0WjAhAhBY16gBsplG\nUl8Iw1gc+mBSFw0wOTEwMTMxODI0MDhaMCECECiwJUeKso3P/zevuFccta8XDTA5MTAxNDA5MDM1\nM1ow", 0x3FF)		 = 1023 0
	read(0x8, "CICEQDshJBwf0CCdW43w17sokQ5Fw0wOTEwMzAwOTU1NDVaMCICEQCcb9KqTaXG+P1JidOaUmE6\nFw0wOTEwMzAxMTA0MjhaMCECECIf2xbYpT9qqIE6oT++/6wXDTA5MTAzMDE1MzEyM1owIgIRAJ2W\ns1pwzv8wnj/trQAsrckXDTA5MTEwMjE0NTcwNlowIQIQKAz77IQ3m2OTO2r9TlIzGxcNMDkxMTAy\nMTUyOTM4WjAiAhEA/P7b5lVx/t", 0x3FF)		 = 1023 0
	read(0x8, "kGPewh5cvH/qgcA4XDTA5MTExMjEyNTAxNlowIQIQdotYf4+To7t+\nSt84HgmXXhcNMDkxMTEyMTQ0MzE2WjAiAhEAunFzuvAZNrNxT9KiRHG92hcNMDkxMTEyMjE0OTMx\nWjAiAhEA/bVKA6BQ14TGAm13LyrkoBcNMDkxMTE3MjEwODQ2WjAiAhEA/wB+4iAelOJtI2knSh2t\ntBcNMDkxMTE4MTkwODE0WjAhAhBoc0Qq7KlDLLqtET6aQqsr", 0x3FF)		 = 1023 0
	read(0x8, "RcNMDkxMTMwMTg1OTI0WjAhAhA0LZyz\n/hQuMraAaKAJ6iVRFw0wOTEyMDMyMTI5MzFaMCICEQC/U1r2O9F2bO3iEnQ9/XoDFw0wOTEyMDMy\nMjE2MzBaMCECEEDRexLB4YSJtGLBjdIpDxUXDTA5MTIwNDA4NTMwMFowIQIQbzULAiMaNpaUgWcO\n8Nr3UBcNMDkxMjA1MDM1MDIwWjAiAhEAmrMtGzaE+4J0s4AN1ecvMxcNMDkxMjA2MTY1OT", 0x3FF)		 = 1023 0
	read(0x8, "zMDhaMCEC\nEFNF1eeJaZw3LGNe6TA0ZW4XDTA5MTIxNjE5NTA1NlowIgIRAKZSWhTdMKojATZkxBTPXcUXDTA5\nMTIxNzIwNTY0OFowIQIQVfBleiM3kydFk1BBkwsL5xcNMDkxMjE3MjA1NzIwWjAhAhAumg5tkyEz\nzgOdwG5nDvgQFw0wOTEyMTcyMDU3NTNaMCICEQDROKhS8WodIN6+p2uMpx1VFw0wOTEyMTcyMDU4\nMTBaMCECEDvb0K0", 0x3FF)		 = 1023 0
	read(0x8, "43lB0nsruAIDuHWsvRcNMTAwMTA1MTgzMzU2WjAhAhBKaSttEm3w+okxGDUUkOX2\nFw0xMDAxMDUyMDE5MjhaMCECEByrRVuF7OxdsVnZvGVQV6EXDTEwMDEwNTIyMTMzNVowIgIRAN0M\nqR+cn+o8rJZ3QKwHmW8XDTEwMDEwNTIyMTQyMVowIgIRAJe++nHMFKMiIBaLqKk7b/QXDTEwMDEx\nMjE1MDUwN1owIgIRAPtdEk47sMokTnX7EzxJo", 0x3FF)		 = 1023 0
	read(0x8, "cNMTAwMTI1MTczMjM5WjAhAhAVC53bDap4BZJPiPyb\nNuuhFw0xMDAxMjYwOTA4MjJaMCICEQDRvHvWvViDoKmuEtZlpC40Fw0xMDAxMjYwOTIxMTJaMCIC\nEQD9kFeNIwJHPozIfiWKDuUfFw0xMDAxMjYxNzEzMzdaMCICEQCsOsh4B+yFAczwbU2FjG+lFw0x\nMDAxMjYyMjU1MDZaMCECEHubULDj1XmsWNpU0yNOphQXDTEwMDEyNzEzMTE", 0x3FF)		 = 1023 0
	read(0x8, "NFowIgIRAPijky1Z3DIP\nUeNRLfzlr1wXDTEwMDIwNTIwNTUyMVowIQIQUrJBWg0CaE8/v4G4Dj0cmxcNMTAwMjA4MTAzMjQ2\nWjAhAhAk9qtDCDr1cVy3FlqogPdIFw0xMDAyMDgxNTMyMTZaMCICEQDqK7JjJwI4EgppB13Ko1y7\nFw0xMDAyMDgxNjUyMTNaMCICEQDmARMqebcKBl0bSQBKGSyiFw0xMDAyMDgyMDA0MzRaMCICEQDF\nMDHB", 0x3FF)		 = 1023 0
	read(0x8, "7XwutuPLquxz8hvk8U9Fw0xMDAyMTcyMjU3MDJaMCECEBqyvBY7LBvGMVYovosGa5MXDTEwMDIx\nODE1NTQ1NlowIgIRAPo2CR90V/Un9FZMBBluCqEXDTEwMDIxOTE2NDcyM1owIgIRAPoN+EdUZXBo\nN701ZwuzamMXDTEwMDIxOTE4NTMyOVowIgIRAOc8R6UmoSibb+ZJjPBKn98XDTEwMDIyMDE2MjMz\nMFowIQIQIoE1a24Kdkktj7PmOU", 0x3FF)		 = 1023 0
	read(0x8, "XDTEwMDMwMTIwNTAzMVowIQIQWWtBgmGxmql3tZL8GR1UQRcNMTAw\nMzAxMjExNzI5WjAiAhEA/31+Ovd55I5onJlSxEC4xRcNMTAwMzAxMjI1MDQzWjAhAhBBKLL/5ypi\n8Bge+aZDZwQyFw0xMDAzMDMyMjExNDFaMCICEQCrdvS3kAkRdVIjifKboHvmFw0xMDAzMDMyMjI2\nNTVaMCECECA77tpmn0G1sTukuJN6vWsXDTEwMDMwNDAxMDI0", 0x3FF)		 = 1023 0
	read(0x8, "jQxWjAiAhEAlHxJVNR4akrrl5WoLNxg\nHBcNMTAwMzEyMTgyNzQzWjAiAhEAuNyV7UZ+8bwtisG7iTyRJBcNMTAwMzEyMjExMjUyWjAhAhBp\n84kUX9Ve8Ws+qjD0snTqFw0xMDAzMTUxNzAzMzJaMCICEQDw4stVqcGrsAzIvQrZjBpVFw0xMDAz\nMTUxNzU0MjhaMCECEDZ6hr+mrRtHZAuxhG5Gk+sXDTEwMDMxODExNTEwMVowIgIRAIbEFb", 0x3FF)		 = 1023 0
	read(0x8, "cjmXKXvDd\noa2PHmcXDTEwMDQwMTEyMzQzMVowIgIRAJuaDDghwXVySgjjFAn3z2IXDTEwMDQwMTE0MTI0NVow\nIQIQfMIkOVkgWgWKPLYqD4hABBcNMTAwNDAxMTQxNzQ4WjAiAhEAiVVYEnsSEOdEEzl8W8RFexcN\nMTAwNDAyMTQ0ODQxWjAiAhEA2m+0SSXbkRAhPUPtO8VfQRcNMTAwNDA3MDMxMjQxWjAhAhBX/GNZ\n+qLuOqIyFLGrWh7", 0x3FF)		 = 1023 0
	read(0x8, "MTAwNDE5MTkzNDQ0WjAhAhBTSEy2Z4g1f7TUe8hwY0JfFw0xMDA0MjAwOTA5Mzha\nMCECEAuMmQv3pjpW7fu5wk0SkdsXDTEwMDQyMDE1MDY1MFowIgIRAKKoSCdqQ4IYRRdojR7I2s4X\nDTEwMDQyMDE2Mjc1MVowIgIRAN8E8SwMOhyOnwruNxcjzKwXDTEwMDQyMDE3MDAyNVowIgIRAO0b\nzqNalhWpYjNA7bd2fVwXDTEwMDQyMDE4NTkzO", 0x3FF)		 = 1023 0
	read(0x8, "UxWjAhAhAQ/WDCwH2NP9XODZAISLo9Fw0xMDA1MDcx\nNDEyNDVaMCECEHZsqqcvhEKSxVMhf7TjdrkXDTEwMDUwNzE1NTA1N1owIgIRAKrNI+i+T8mYdITk\nInsoHCgXDTEwMDUwNzE5MTk1M1owIgIRAOnrWl+c/oHwu2h263JCqSsXDTEwMDUxMDE0MTMxOFow\nIgIRAKmBbFJSCzIOe1J+JZJGTW0XDTEwMDUxMDE5NTI1OVowIQIQaRV3EUp", 0x3FF)		 = 1023 0
	read(0x8, "5R6OqomOAcTLw6p9Fw0x\nMDA1MjQxNzA5NTFaMCECEAsZNNXX6RwLQvuK0zGPohAXDTEwMDUyNTEyNDI1MlowIgIRAKY7aAUe\ndPWRP+p9f//1EwYXDTEwMDUyNTE4Mjk0N1owIgIRAMaxzNxChGSUpRQwfrANr3QXDTEwMDUyNTIw\nMTIyOVowIgIRAIOp0Ms6zkd99hH8Z8l+rJ0XDTEwMDUyNjEzMTEyNlowIgIRAO4CEjNzDgIxBni2\nCEe8", 0x3FF)		 = 1023 0
	read(0x8, "hcNMTAwNjExMjEwMTI2WjAhAhA1IsaNzr6yToDeutBf+YyDFw0xMDA2MTMxMjM2NTdaMCICEQDR\n63ckDhObxhAfKiKR/PnlFw0xMDA2MTQwNjUyNDhaMCECEF2tXSiJ2GOgEomr2anBJPAXDTEwMDYx\nNTE5MDc1MlowIgIRAI9TRftWqfuc8dEGSsJKfvEXDTEwMDYxNjE3MDIxMFowIgIRAN9Fb2Vg1vC9\nzEUN9Vg8TpcXDTEwMDYxNzA3ND", 0x3FF)		 = 1023 0
	read(0x8, "yN1owIQIQKQxhUxpW3suOjQBCzBKFihcNMTAwNzAxMTQyNTAxWjAi\nAhEAx3l9BDpNjtZvZrR5ZxVMrhcNMTAwNzAxMTkxMTMwWjAhAhBJG6FD4olNdYE1J89+0K/aFw0x\nMDA3MDIwNzE1MzJaMCECEDqPjq0kyjLUkOGlpUKcp7kXDTEwMDcwMjE0MTUyOFowIQIQTA6RLKM/\nMRujKxkqiRD3GhcNMTAwNzAyMTQ0NzU3WjAiAhEA1fFKpkmt", 0x3FF)		 = 1023 0
	read(0x8, "Mzt/ZagVYMBmGcEFw0xMDA3MjAxODM5\nMjFaMCICEQDau33B91YzZvBk5Ki7jz/qFw0xMDA3MjAxODQ2NDhaMCECEGLB5lpxEF2OwQPFfyXY\nc0cXDTEwMDcyMDIwMzYwNFowIgIRANl5tFtL5BnMm6SftYYHU4sXDTEwMDcyMDIxMzY1M1owIQIQ\nZhQouo1m3LmR0nm1QAilKxcNMTAwNzIwMjMwOTUwWjAiAhEA40nF+jYBxauloD+bMlkAyx", 0x3FF)		 = 1023 0
	read(0x8, "NMTAwODAy\nMjI0NTQ0WjAhAhBy0fnACJMTjpVXtEsgImLtFw0xMDA4MDMxNDA1MjNaMCICEQCOnqObMCs4kCyS\nfgsSfLtPFw0xMDA4MDMxNDQ4MTFaMCECEE68ijlq0qW2L1iGNt3A6t4XDTEwMDgwMzIwMDUwOVow\nIQIQTilEQ/t8obD3lnNoCv+M4xcNMTAwODAzMjE0MTQzWjAiAhEAqSTR9AZ+9Ns66kBOPXcRahcN\nMTAwODA1MDIwMzQ", 0x3FF)		 = 1023 0
	read(0x8, "MlowIQIQN0JZvuh2EaDiGgpZfNooIBcNMTAwODE5MDYzODU1WjAiAhEA4JjyKMeZ\nYkUFb11b/joOURcNMTAwODE5MTMyODA0WjAhAhAfNUFSKaYcJmGciavQsU2uFw0xMDA4MTkxOTA0\nNDFaMCECEGuPShbAA9+HtjJriBgdubUXDTEwMDgyMDE5MDExOFowIQIQDXAw3/nPCldjVtAeNw+6\n5hcNMTAwODIwMTk1MzQ1WjAhAhBes+0S+fCYY", 0x3FF)		 = 1023 0
	read(0x8, "O+asWBajra7BcNMTAwOTAxMTk1MDQwWjAhAhBlYWbE\ntRAs7dhrOOonlgWqFw0xMDA5MDMwOTU3NTFaMCICEQChqA8MDsKCSfF3IzEOHvsPFw0xMDA5MDMx\nMTIzNTNaMCICEQCIinX3iHYfLwcjqG+K5xNsFw0xMDA5MDMxMzQ2MzNaMCECEF9tg/geyzBmu/XK\n6WZkSegXDTEwMDkwMzE4MjMxOFowIgIRAN6SBTbaGloUmgXG96OLGK0XDTE", 0x3FF)		 = 1023 0
	read(0x8, "MTAwOTIyMDA1MjU4WjAh\nAhA3OasJZm3MhhGVShPuUEEHFw0xMDA5MjMxMDAwNDlaMCECECT3vSlzcALePxKTeOiV/VEXDTEw\nMDkyMzE5NTUyN1owIgIRAKGuuPj945p7kxm0H+k6iQAXDTEwMDkyMzIxMjkyMVowIgIRAN/tcLaC\nlAV0nIpk0wBi1iEXDTEwMDkyNDEyMjU1OFowIgIRAL9/O3Y452n2XdCSlbZZTWsXDTEwMDkyNDIx\nMDAz", 0x3FF)		 = 1023 0
	read(0x8, "TU1N1owIQIQA+Mr/OpSyhVjr+kDZvaRShcNMTAxMDA0MTc1NjM2WjAhAhBhsKlkBwxVghf46DEo\ncz2lFw0xMDEwMDQxNzU3MDdaMCICEQCxvwvDcx3VUyfJzORGy5XVFw0xMDEwMDQxODA2MjdaMCIC\nEQD5H8e/9kES2nR1vEaDCWqaFw0xMDEwMDQxODA2NDhaMCECEDr8P86Vx5Ww2W4R36ZESP0XDTEw\nMTAwNDE4MTAxN1owIgIRANl2O4", 0x3FF)		 = 1023 0
	read(0x8, "MKpNhPn18oQQYYSwXDTEwMTAxMjE5MDkyOFowIQIQSRN+KL9rbUvO\nzn+Yjx8f3RcNMTAxMDEyMjEyMTM3WjAhAhBSo9zc/eIjxwqtyRcr2fu3Fw0xMDEwMTQwMDQ5MDRa\nMCICEQD3YOBX3nQXb9BRDmRUPadbFw0xMDEwMTQwMTA1NDJaMCECECmrT+6oJDy0HsK3WjEaLmcX\nDTEwMTAxNDA2MjIzN1owIQIQGUeaavyqsPucNdAL6wFCPBcN", 0x3FF)		 = 1023 0
	read(0x8, "DEwMjYxNDM3MDNaMCICEQDF+eqwUr2s\nIaV5WyVXI4iHFw0xMDEwMjcyMTQ1NDJaMCECEA5N4f04PQJYywCJrOoM8ucXDTEwMTAyODExMjQy\nM1owIQIQKsvlZa6QQGH2WeW0pi7z3RcNMTAxMDI4MTQzNjM4WjAiAhEA1F5EFmGAAbRJqo/yiZki\noxcNMTAxMDI4MTQzNzM3WjAiAhEA3E/yxD2ksfQmDQgukIswwBcNMTAxMDI4MTQ0NTQ2Wj", 0x3FF)		 = 1023 0
	read(0x8, "aMCECEC8k\nrMWMN2pzxlmi8gKK2ekXDTEwMTEwNTE5MzE1OVowIgIRAMKDSI5PZBrP0sG7epFZ7roXDTEwMTEw\nNTIxMDAwNlowIQIQK/+YiPcO5N8zdrYHlnp1aBcNMTAxMTA4MTMwOTQ4WjAiAhEA6F3VzY2WTEeD\nW5GrNxF17xcNMTAxMTA4MTcwNzUzWjAiAhEA3Sv5btw0o6ZoFkrVk/vJcRcNMTAxMTA4MjA1NzM3\nWjAhAhAdp2p+2+b", 0x3FF)		 = 1023 0
	read(0x8, "r/aIXHwS57WRFw0xMDExMTcxMzMwNDRaMCECEBp5SjHkcH9HU8r4rwGd9g8XDTEw\nMTExNzIwMjM0MlowIQIQGzP6kDKCgGPeYyFJX3zCJhcNMTAxMTE3MjAzNjIzWjAiAhEAkMS0pPR1\n1e1KCZdYpw6E6BcNMTAxMTE4MDAxOTUwWjAhAhBp7ULd4+6mm7ViGuZml6r8Fw0xMDExMTkyMjE4\nMTdaMCICEQDjbigGDwmJmDLzTsfeLpgYFw0xM", 0x3FF)		 = 1023 0
	read(0x8, "AxMjAyMTkwNjQ1WjAiAhEA2yr9FkAlBx+6txM8eXUK\nmRcNMTAxMjAzMDIzNDQzWjAiAhEAwAZUkz+YJDni5tQ5OcVVYBcNMTAxMjAzMTYwNjUyWjAhAhAb\nhoYWQMGrvInfOJG0IpITFw0xMDEyMDMxODQ4MjRaMCICEQClkfeDAsUtVn2NPSCCFUKgFw0xMDEy\nMDMyMzQwMDJaMCICEQCBSrU6RhzRhsNxR1vliHbhFw0xMDEyMDQxMDA4MzR", 0x3FF)		 = 1023 0
	read(0x8, "IgIRAKFWIwf+yUek5dnd\nRiSawwYXDTEwMTIxNjE4NDYxMVowIgIRANlnOxQxx2k78ky4dUSQIykXDTEwMTIxNzExMDY0NVow\nIQIQZeNQ+HBkVXJbIVQOpy7apRcNMTAxMjE3MTcyNTMyWjAhAhAUlUu3WBOQEBIDxknZ8Rc1Fw0x\nMDEyMTgyMDA2MDVaMCECEDiowyGG10rL4d/sVERZZ5oXDTEwMTIyMDE1NTQwNFowIQIQJnVc1lq+\nsQwt", 0x3FF)		 = 1023 0
	read(0x8, "Tv76xcNMTEwMTA1MTkwNzAxWjAiAhEAxS5RCPMEZuzbBGAVuhybMRcNMTEwMTA2MTc1NzQxWjAg\nAg8/R0qEl4WfhTKYJVwvbkUXDTExMDEwNjIyNTkxMFowIgIRAM9SeQSPC5uS2WtvYmHnF9sXDTEx\nMDEwNzAzMjI1NlowIgIRAIHfKv+PHysS4BZFbQLAWakXDTExMDEwNzE5MDM0NVowIQIQSzUhPZSo\ntaF3ghY0TjNVYBcNMTEwMTEwMD", 0x3FF)		 = 1023 0
	read(0x8, "xNTY0NVowIgIRAMldwdcs9WbX3djz7B+V8qAXDTExMDExNDIxNTc1\nNlowIQIQT4tZft4n8iTqb7LlT7SBihcNMTEwMTE0MjE1OTE1WjAiAhEA2qd3G2Wv7l7F9OZ0xZm7\n3RcNMTEwMTE0MjIwMDAwWjAiAhEArh2NsSv6ClFoiTMpiwSUGxcNMTEwMTE0MjIwMDQ4WjAiAhEA\n+qsBLhd2XkEWzn3X7AtkUBcNMTEwMTE0MjIwMTM4WjAhAhA0", 0x3FF)		 = 1023 0
	read(0x8, "Bh6fYxXqhp8GInxSgBOudEXDTExMDEy\nODAyMTU1NVowIQIQEHNcp+mG7bYm+rbaKxhDShcNMTEwMTI5MTYyMjMzWjAiAhEA8AkrALUzDwKc\nrePlU9nTTxcNMTEwMTI5MTgwMzIxWjAhAhAvRnWhbVn3yBmIqEWLic+hFw0xMTAyMDEyMTUxMzBa\nMCICEQCpOX1zm/tUnqTiO/JpQD09Fw0xMTAyMDEyMjA2NTFaMCECEHYZtzasyC2NkLLS80", 0x3FF)		 = 1023 0
	read(0x8, "sCQSp7Swg\nFw0xMTAyMTIyMDA5MzNaMCICEQDleOoPB2k+ZbVbSFZE8jMvFw0xMTAyMTQxNDUzMjBaMCECEAYv\ngfnTfOTlvsYVIcGTaq0XDTExMDIxNDIwMTkxNVowIgIRAMrBexLiOoabRrQ7uJtJB70XDTExMDIx\nNDIzMzAwMFowIQIQMndlnOmyGViuVhJYhiKGhBcNMTEwMjE1MTA0MzEwWjAiAhEA9Ao89BOdFVWJ\nrR4aAXGL6BcNMTE", 0x3FF)		 = 1023 0
	read(0x8, "MTAyMjUxMDMzMDlaMCECEHbX/RxFLncXe3X3NQ48pDAXDTExMDIyNTEzMTIxNVow\nIQIQIvZUDTW0Xosw7MASlCCBrRcNMTEwMjI1MTYyODI1WjAiAhEAgi2xCWAXr6J94Kg24e2yMBcN\nMTEwMjI1MjIwMjI0WjAhAhBMVoXRTkX6Fe4RR0ptkfFGFw0xMTAyMjUyMjEwMjNaMCECEDIBeqgQ\n2Axh6fQAlWYaRtkXDTExMDIyNTIzMjMyNlowI", 0x3FF)		 = 1023 0
	read(0x8, "NaMCECEDg/1CItwBe8wn6efyrmpBgXDTExMDMwNDIy\nMTEyNlowIQIQVbpYTNS2r9fwvmmd4eXtfBcNMTEwMzA1MTk0OTI3WjAhAhACcFo3WKb2buG0AbVr\nQJ97Fw0xMTAzMDYwOTA0MThaMCECEBXqFW4Q5tM3vEBM19/FvDEXDTExMDMwNzEwMjA0MFowIQIQ\nd9kZv7oCZSQ1qJip32DqPhcNMTEwMzA3MTExNDEzWjAhAhBezbqa3RJDGsK", 0x3FF)		 = 1023 0
	read(0x8, "+hzlj5sCSSqsFw0xMTAz\nMTAxNDEyMzBaMCECEG7TCFdaezYBzvB5Lk7Pr4AXDTExMDMxMDE0NTA1NlowIQIQM2Jb//92yfyw\n7WECU9Hq2RcNMTEwMzEwMjE0MDUzWjAiAhEAjMm0h+nC3X8+cLW1D4G7vxcNMTEwMzExMDAxNDU4\nWjAhAhA/e1C7uFeUDQ0Tcig2ZgzuFw0xMTAzMTEyMDIyMjFaMCECED+HF91xaewxMOUBenCvTlgX\nDTEx", 0x3FF)		 = 1023 0
	read(0x8, "DMyMjE5MTMwNlowIQIQD3OiSsON7LIE8x6dPm9WHxcNMTEwMzIyMjIxNjI5WjAiAhEA4x95KsWN\nrtyMs567+7+5hxcNMTEwMzIzMTcwMTQ2WjAhAhAokH1I++B9rVAAFzoFu7opFw0xMTAzMjMxODM2\nMTNaMCECEFyJjGE4Oq2/+w89JVLAjOsXDTExMDMyNDEwMTQ1MFowIQIQB6RGvt18NaPXzcS1xNub\n7xcNMTEwMzI0MTM1MDUzWjAhAh", 0x3FF)		 = 1023 0
	read(0x8, "VouUgiizTlqP+TJockvoXDTExMDQwNTEzNDk1N1owIgIRAPHppPvZ\nA/ZRfSuczpe4MvUXDTExMDQwNTE3NDYzMFowIgIRAMuKIHHjvkgxi54SSYMQsS8XDTExMDQwNTE3\nNDY1MlowIQIQZxqWwdn0DvSs0KLL+vti+RcNMTEwNDA1MTgzMzUzWjAhAhBhsPkbBSOw01vlFoWA\nRPuLFw0xMTA0MDUyMDQ1MTVaMCECEGoSieRTVW5Av0p7lbuV", 0x3FF)		 = 1023 0
	read(0x8, "r3anxcNMDYwODEwMDAwMDAwWjAhAhBG\no88MVu6Ks2fyHI6vkYKTFw0wNzAyMjUwMDAwMDBaMCECED3v5rGhOF0LnM6K8s8NjJoXDTExMDQx\nNTE5NDMzNVowIgIRAMw6K8D6mP7f+mJNmvWScqIXDTExMDQxODE0NTUzOFowIQIQEWUgz0gaQ9NM\nk7w4BbP02BcNMTEwNDE4MTQ1NjA2WjAhAhBF+RPCpzI5HgfbsGa+VRmQFw0xMTA0MTgxND", 0x3FF)		 = 1023 0
	read(0x8, "yNDdaMCIC\nEQDao/Y7UenxhbqGPG7/cnpzFw0xMTA0MjIxNDAwNDNaMCECECvE8QiTnrWeGPle1/dEDhIXDTEx\nMDQyMjE0NTMzNlowIQIQKKq+G9wYG1QZMOZsPBVThhcNMTEwNDIyMTQ1ODQxWjAiAhEAkUGX2woU\n5i5mki3LDz8h6xcNMTEwNDIyMTUwOTQxWjAhAhAmMT5PTnkQwJuQWKRikpbmFw0xMTA0MjMwMTE3\nNDRaMCECEFqet1p", 0x3FF)		 = 1023 0
	read(0x8, "prq5FnW9czC4E6myXs03LRcNMTEwNTA1MTUzNTIzWjAhAhAuX3o+NXzIxM0y3Egn\nYlekFw0xMTAzMzEwMDAwMDBaMCECECkqVauJKD2W6UPzgNBb37kXDTExMDUwNTE4MDQ0NlowIQIQ\nXZHx3H1hQTehe1Bi5yZtFBcNMTEwNTA1MjAyMDM4WjAhAhAO2e4OrY6Z9HooEgviNqW+Fw0xMTA1\nMDUyMDIxMDRaMCECEHqZw8kQsfPx8RVWhfRR5", 0x3FF)		 = 1023 0
	read(0x8, "/OFw0xMTA1MTMyMDE5NTNaMCICEQD4Cjhpw5ky/Dqo\nYHrb26y3Fw0xMTA1MTYxNTM3MDhaMCECEG8VSBKJMhNhfXruelHOu94XDTExMDUxNjE4NTc1M1ow\nIQIQfGPB+A/bIpXvvEVp6sBG4RcNMTEwNTE2MjM0MzI4WjAhAhAMoe1CFpEpgObw+N66UMYKFw0x\nMTA1MTcxNzA4MjFaMCICEQDaBl0+vjIXZ62PUqVdLTXpFw0xMTA1MTcyMDM", 0x3FF)		 = 1023 0
	read(0x8, "NVowIQIQOobQwbIWOmHN\noRj8wDbMAhcNMTEwNTI1MTk0MzMzWjAiAhEAlyDzuG5dEjbxKaKtO9H/WRcNMTEwNTI1MTk0MzUx\nWjAhAhAG94EhHYF/31tvpxFtyFg4Fw0xMTA1MjUxOTQ0MjZaMCICEQDGcWy1JL61mqT4siADY6I2\nFw0xMTA1MjcwODE0NDJaMCECEDOIJ3HcfgG9HgO45Heg8MIXDTExMDUyNzExMTUxOFowIQIQK3va\n3+eO", 0x3FF)		 = 1023 0
	read(0x8, "HNsl/90ewv89cQXDTExMDYwNjE1MDMwOVowIQIQQC2/nvGaFtjyxF9r/TUcYhcNMTEwNjA2MTUx\nNDU1WjAhAhB9QrLKSdmtUiArnXQtTZ1QFw0xMTA2MDYxOTU3MTdaMCICEQDlWXpw3FFjFcsobrSm\nxDguFw0xMTA2MDYyMDUyMDlaMCICEQDj0DChZvDfu3JnOqpnUFwFFw0xMTA2MDgxOTQ4NDVaMCEC\nEEfSdM8hTiZQgWfBhK7/tH4XDT", 0x3FF)		 = 1023 0
	read(0x8, "UnBQ8q92Zqb1bKE2LPMnYMAsGA1UdFAQEAgIPOjANBgkqhkiG9w0B\nAQUFAAOCAQEAsrWu16mNzKKQvXClnrK4Y7u/RaPdbv8rSxZ/nZ7BClxNQBTEr/il8qWkDUvHz9v0\niR2QsmqLM0uT7pwrx19Ka6s+M9CCU8EJWYLL9bUV01N3+oDwVc4UEjfbYEjiBZZvoHkhYiV+pJsz\nHo4l4kMFoTlo6f0jTVrZra1bb5VOg0GntBebz7FkS4C1u7Vo", 0x3FF)		 = 1023 0
	read(0x8, "8ceHUz7GJzmcEyBnRmCDwoSQy\nOSU0SCNtScEnd7A2UruezqGEfUrpttypxdpRl/lO4JYka40zazg=</X509CRL>\n      </X509Data>\n    </KeyInfo>\n    <Object>\n      <Manifest Id=\"PackageContents\">\n        <Reference URI=\"mimetype\"><DigestMethod Algorithm=\"http://www.w3.org/2001/0", 0x3FF)		 = 1023 0
	read(0x8, "e></Reference><Reference URI=\"com/rorohiko/resources/Copyofradioempty.png\"><DigestMethod Algorithm=\"http://www.w3.org/2001/04/xmlenc#sha256\"></DigestMethod><DigestValue>hByPOf25zSSBQeKUxHA6YCYkBH8YvrqH7sOm2TweqPo=</DigestValue></Reference><Reference URI=\"c", 0x3FF)		 = 1023 0
	read(0x8, "stValue>JwxZySu9/9q6YZOuQpt78xUCjy9eDoW/w5PeA/xSG0U=</DigestValue></Reference><Reference URI=\"com/rorohiko/resources/eye.png\"><DigestMethod Algorithm=\"http://www.w3.org/2001/04/xmlenc#sha256\"></DigestMethod><DigestValue>WQfbBjUXMPKSL0ebAYt8BSxljS0UnD+8k1Im", 0x3FF)		 = 1023 0
	read(0x8, "p://www.w3.org/2001/04/xmlenc#sha256\"></DigestMethod><DigestValue>D3oJWqglbqIHDo6i1eL/Z29a13vjwgBgD2fpsNHC8Ro=</DigestValue></Reference><Reference URI=\"com/rorohiko/resources/radio.png\"><DigestMethod Algorithm=\"http://www.w3.org/2001/04/xmlenc#sha256\"></Di", 0x3FF)		 = 1023 0
	read(0x8, "I=\"com/rorohiko/resources/radioeyeFaded.png\"><DigestMethod Algorithm=\"http://www.w3.org/2001/04/xmlenc#sha256\"></DigestMethod><DigestValue>4DEOg9nEGurB/dsNUjt+DIfUswrn3WWto11JIqYuLBE=</DigestValue></Reference><Reference URI=\"com/rorohiko/resources/resize-d", 0x3FF)		 = 1023 0
	read(0x8, "jlV/OoZxzRCelLSWah9I=</DigestValue></Reference><Reference URI=\"com/rorohiko/resources/tickFaded.png\"><DigestMethod Algorithm=\"http://www.w3.org/2001/04/xmlenc#sha256\"></DigestMethod><DigestValue>tlzp0nFGrZeuvsmXuoJ8c2XnFo0WqBnUE/9A+Xn0FSQ=</DigestValue></R", 0x3FF)		 = 1023 0
	read(0x8, "GhL5zAjJcCm+0BHpANyPqX666/oNY8ul5NM=</DigestValue></Reference><Reference URI=\"icons/ctg-bw.png\"><DigestMethod Algorithm=\"http://www.w3.org/2001/04/xmlenc#sha256\"></DigestMethod><DigestValue>pzGCHOyQMlKsPS90eEaRFzYS58fJsu+aulHGTgZ/cu4=</DigestValue></Refere", 0x3FF)		 = 1023 0
	read(0x8, "QIBAQYCKQIwITAJBgUrDgMCGgUABBQRWFmFGtriwbsQ5MbSAnUTZua6fQIEN3eP0xgP\nMjAxNDEyMDUwMTA4MTZaMAMCATygUaRPME0xCzAJBgNVBAYTAlVTMRUwEwYDVQQKEwxHZW9UcnVz\ndCBJbmMxJzAlBgNVBAMTHkdlb1RydXN0IFRpbWVzdGFtcGluZyBTaWduZXIgMaCCBY8wggLmMIIC\nT6ADAgECAhBejS2spEZlVGu1h5eBkai/MA", 0x3FF)		 = 1023 0
	read(0x8, "NBgkqhkiG9w0BAQUFAAOBgQCp8h1xrhHJJ0mPaN/n3gzf\nqZ5J/SIs9aQD/tZsI6zzsvyS9uxqwrhS2IzRyvrrxQyYgdn2zlwzTn7W1I+yvJ2Bc+rwbOOpwW7X\n9tlGoAdDnNn3YGHDL27aUD4WoCgM7OQBoeRsmdXCMah96y0TAilp2R6WF0D72u9i14QHsYL5kTCC\nAqEwggIKoAMCAQICAQAwDQYJKoZIhvcNAQEEBQAwgYsxCzAJBgNVBAYT", 0x3FF)		 = 1023 0
	read(0x8, "sPwNcHLtSebM3nckKYAnnf6\n/M0nlEIWnNMcaOy/XN3lqXsQCjJ0VBMxi4UDhJG3WAEwFDivKMr8sVAZGQmsiUnTMYIB1jCCAdIC\nAQEwgaAwgYsxCzAJBgNVBAYTAlpBMRUwEwYDVQQIEwxXZXN0ZXJuIENhcGUxFDASBgNVBAcTC0R1\ncmJhbnZpbGxlMQ8wDQYDVQQKEwZUaGF3dGUxHTAbBgNVBAsTFFRoYXd0ZSBDZXJ0aWZpY2F0aW9u\nM", 0x3FF)		 = 998 0
	read(0x8, "       </xades:SignatureTimeStamp>\n      </xades:UnsignedSignatureProperties> \n    </xades:UnsignedProperties>\n  </xades:QualifyingProperties>\n</Object>\n  </Signature>\n</signatures>\n\0", 0x3FF)		 = 0 0
	madvise(0x116F000, 0x38000, 0x9)		 = 0 0
	madvise(0x112F000, 0x40000, 0x9)		 = 0 0
	getaudit_addr(0xBFFA46C0, 0x30, 0x9)		 = 0 0
	__mac_syscall(0x94539D24, 0x4, 0xBFFA4070)		 = -1 Err#45
	stat64("/Users/kris/Library/Preferences/com.apple.security.plist\0", 0xBFFA4620, 0xBFFA4070)		 = -1 Err#2
	stat64("/Library/Preferences/com.apple.security-common.plist\0", 0xBFFA4620, 0xBFFA4070)		 = -1 Err#2
	stat64("/\0", 0xBFFA28F0, 0xBFFA4070)		 = 0 0
	getattrlist("/System\0", 0x98ACE168, 0xBFFA41D8)		 = 0 0
	getattrlist("/System/Library\0", 0x98ACE168, 0xBFFA41D8)		 = 0 0
	getattrlist("/System/Library/Keychains\0", 0x98ACE168, 0xBFFA41D8)		 = 0 0
	getattrlist("/System/Library/Keychains/SystemRootCertificates.keychain\0", 0x98ACE168, 0xBFFA41D8)		 = 0 0
	stat64("/var/run/systemkeychaincheck.done\0", 0xBFFA4368, 0xBFFA41D8)		 = 0 0
	geteuid(0x9540D92C, 0xBFFA4368, 0xBFFA41D8)		 = 0 0
	lstat64("/private/var/db/mds/system/mdsObject.db\0", 0xBFFA2DB8, 0xBFFA41D8)		 = 0 0
	lstat64("/private/var/db/mds/system/mdsDirectory.db\0", 0xBFFA2D48, 0xBFFA41D8)		 = 0 0
	geteuid(0x953FEB2D, 0xBFFA2D48, 0xBFFA41D8)		 = 0 0
	open("/private/var/db/mds/system/mds.lock\0", 0x222, 0x1A4)		 = 8 0
	stat64("/private/var/db/mds/system/mdsObject.db\0", 0xBFFA29A8, 0x1A4)		 = 0 0
	stat64("/private/var/db/mds/system/mdsDirectory.db\0", 0xBFFA29A8, 0x1A4)		 = 0 0
	getattrlist("/private\0", 0x98ACE168, 0xBFFA22E8)		 = 0 0
	getattrlist("/private/var\0", 0x98ACE168, 0xBFFA22E8)		 = 0 0
	getattrlist("/private/var/db\0", 0x98ACE168, 0xBFFA22E8)		 = 0 0
	getattrlist("/private/var/db/mds\0", 0x98ACE168, 0xBFFA22E8)		 = 0 0
	getattrlist("/private/var/db/mds/system\0", 0x98ACE168, 0xBFFA22E8)		 = 0 0
	getattrlist("/private/var/db/mds/system/mdsObject.db\0", 0x98ACE168, 0xBFFA22E8)		 = 0 0
	statfs64(0x78787C30, 0xBFFA1F10, 0xBFFA22E8)		 = 0 0
	shm_open(0x9540C461, 0x202, 0x1FF)		 = 9 0
	ftruncate(0x9, 0x4, 0x1FF)		 = -1 Err#22
	mmap(0x0, 0x4, 0x3, 0x1, 0x9, 0x0)		 = 0x11A7000 0
	__mac_syscall(0x94539D24, 0x2, 0xBFFA2618)		 = 0 0
	open("/private/var/db/mds/system/mdsObject.db\0", 0x0, 0x0)		 = 9 0
	fstat64(0x9, 0xBFFA26B0, 0x0)		 = 0 0
	mmap(0x0, 0x121C, 0x1, 0x2, 0x9, 0x0)		 = 0x11A8000 0
	stat64("/System/Library/Security/dotmac_tp.bundle\0", 0xBFFA2CF0, 0x1)		 = 0 0
	stat64("/System/Library/Security/ldapdl.bundle\0", 0xBFFA2CF0, 0x1)		 = 0 0
	stat64("/System/Library/Frameworks/Security.framework\0", 0xBFFA2CF0, 0x1)		 = 0 0
	open_nocancel("/System/Library/Security\0", 0x1100004, 0x0)		 = 9 0
	fstatfs64(0x9, 0xBFFA2140, 0x0)		 = 0 0
	getdirentries64(0x9, 0x788D8C00, 0x1000)		 = 216 0
	getdirentries64(0x9, 0x788D8C00, 0x1000)		 = 0 0
	munmap(0x11A8000, 0x121C)		 = 0 0
	flock(0x8, 0x8, 0x1000)		 = 0 0
	getattrlist("/private\0", 0x98ACE168, 0xBFFA3668)		 = 0 0
	getattrlist("/private/var\0", 0x98ACE168, 0xBFFA3668)		 = 0 0
	getattrlist("/private/var/db\0", 0x98ACE168, 0xBFFA3668)		 = 0 0
	getattrlist("/private/var/db/mds\0", 0x98ACE168, 0xBFFA3668)		 = 0 0
	getattrlist("/private/var/db/mds/system\0", 0x98ACE168, 0xBFFA3668)		 = 0 0
	getattrlist("/private/var/db/mds/system/mdsDirectory.db\0", 0x98ACE168, 0xBFFA3668)		 = 0 0
	statfs64(0x787877E0, 0xBFFA3290, 0xBFFA3668)		 = 0 0
	__mac_syscall(0x94539D24, 0x2, 0xBFFA3998)		 = 0 0
	open("/private/var/db/mds/system/mdsDirectory.db\0", 0x0, 0x0)		 = 8 0
	fstat64(0x8, 0xBFFA3A30, 0x0)		 = 0 0
	mmap(0x0, 0xC638, 0x1, 0x2, 0x8, 0x0)		 = 0x11A8000 0
	geteuid(0x8, 0xC638, 0x1)		 = 0 0
	statfs64(0x78796880, 0xBFFA3970, 0x1)		 = 0 0
	__mac_syscall(0x94539D24, 0x2, 0xBFFA4078)		 = 0 0
	open("/System/Library/Keychains/SystemRootCertificates.keychain\0", 0x0, 0x0)		 = 8 0
	fstat64(0x8, 0xBFFA4110, 0x0)		 = 0 0
	mmap(0x0, 0x73968, 0x1, 0x2, 0x8, 0x0)		 = 0x11B5000 0
	gettimeofday(0xBFFA40F8, 0x0, 0x1)		 = 1435980161 0
	gettimeofday(0xBFFA41D8, 0x0, 0x1)		 = 1435980161 0
	munmap(0x11B5000, 0x73968)		 = 0 0
	open_nocancel(".\0", 0x0, 0xFB55D6F4)		 = 8 0
	fstat64(0x8, 0xBFFA44E8, 0xFB55D6F4)		 = 0 0
	fcntl_nocancel(0x8, 0x32, 0xFFFFFFFFBFFA4070)		 = 0 0
	stat64("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS\0", 0xBFFA4478, 0xFFFFFFFFBFFA4070)	 = 0 0
	stat64("/private/tmp/tmp28027caaaaa\0", 0xBFFA4520, 0xFFFFFFFFBFFA4070)		 = 0 0
	lstat64("/\0", 0xBFFA4520, 0xFFFFFFFFBFFA4070)		 = 0 0
	lstat64("/private\0", 0xBFFA4520, 0xFFFFFFFFBFFA4070)		 = 0 0
	lstat64("/private/tmp\0", 0xBFFA4520, 0xFFFFFFFFBFFA4070)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa\0", 0xBFFA4520, 0xFFFFFFFFBFFA4070)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa\0", 0xBFFA45F0, 0xFFFFFFFFBFFA4070)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/mimetype\0", 0xBFFA45F0, 0xFFFFFFFFBFFA4070)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/mimetype\0", 0x0, 0x1B6)		 = 8 0
	lseek(0x8, 0x0, 0x2)		 = 41 0
	lseek(0x8, 0x0, 0x1)		 = 41 0
	read(0x8, "application/vnd.adobe.air-ucf-package+zip6gYa0g\nR8ye0IqJEyHlFw0xMzA5MTExNDU3MzNaMCICEQDRtuvpMxMlOqa0sW3DvgFMFw0xMzA5MTIxMzQ2\nNTFaMCICEQDJIvhsajkc/sOfkwzNeGZ2Fw0xMzA5MTIxNjEyMzFaMCECEDkfT7BEOKaD6vfTW5WV\nF8oXDTEzMDkxMjE4MDIyNVowIgIRAJVGCU+hzCXnTBvGyQi1JPsXDT", 0x3FF)		 = 41 0
	open_nocancel("/private/tmp/tmp28027caaaaa\0", 0x1100004, 0xBFFA4318)		 = 8 0
	fstatfs64(0x8, 0xBFFA3A60, 0xBFFA4318)		 = 0 0
	getdirentries64(0x8, 0x7B8C7600, 0x1000)		 = 280 0
	lstat64("/private/tmp/tmp28027caaaaa/com\0", 0xBFFA43E0, 0x1000)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com\0", 0xBFFA43F0, 0x1000)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com\0", 0x1100004, 0xBFFA4268)		 = 9 0
	fstatfs64(0x9, 0xBFFA39B0, 0xBFFA4268)		 = 0 0
	getdirentries64(0x9, 0x7B8C8C00, 0x1000)		 = 88 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko\0", 0xBFFA43E0, 0x1000)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko\0", 0xBFFA43F0, 0x1000)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko\0", 0x1100004, 0xBFFA4268)		 = 10 0
	fstatfs64(0xA, 0xBFFA39B0, 0xBFFA4268)		 = 0 0
	getdirentries64(0xA, 0x7B8CAC00, 0x1000)		 = 128 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/controller\0", 0xBFFA43E0, 0x1000)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/controller\0", 0xBFFA43F0, 0x1000)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/controller\0", 0x1100004, 0xBFFA4268)		 = 11 0
	fstatfs64(0xB, 0xBFFA39B0, 0xBFFA4268)		 = 0 0
	getdirentries64(0xB, 0x7B8CBC00, 0x1000)		 = 104 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/controller/ConditionController.as.cpgz\0", 0xBFFA43E0, 0x1000)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/controller/ConditionController.as.cpgz\0", 0xBFFA43F0, 0x1000)		 = 0 0
	open_nocancel(".\0", 0x0, 0x1023400)		 = 12 0
	fstat64(0xC, 0xBFFA4188, 0x1023400)		 = 0 0
	fcntl_nocancel(0xC, 0x32, 0xFFFFFFFFBFFA3D10)		 = 0 0
	stat64("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS\0", 0xBFFA4118, 0xFFFFFFFFBFFA3D10)	 = 0 0
	open_nocancel(".\0", 0x0, 0x30)		 = 12 0
	fstat64(0xC, 0xBFFA42E8, 0x30)		 = 0 0
	fcntl_nocancel(0xC, 0x32, 0xFFFFFFFFBFFA3E70)		 = 0 0
	stat64("/Applications/Adobe Extension Manager CC/Adobe Extension Manager CC.app/Contents/MacOS\0", 0xBFFA4278, 0xFFFFFFFFBFFA3E70)	 = 0 0
	fstat64(0xC, 0xBFFA42E8, 0x1023400)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/controller/ConditionController.as.cpgz\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/controller\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/controller/ConditionController.as.cpgz\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel(".\0", 0x0, 0xBFFA4148)		 = 12 0
	fstat64(0xC, 0xBFFA4188, 0xBFFA4148)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/controller/ConditionController.as.cpgz\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 2044 0
	lseek(0xC, 0x0, 0x1)		 = 2044 0
	lseek(0xC, 0x0, 0x0)		 = 0 0
	read(0xC, "\037\213\b\0", 0x7FC)		 = 2044 0
	getdirentries64(0xB, 0x7B8CBC00, 0x1000)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources\0", 0xBFFA43E0, 0x1000)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources\0", 0xBFFA43F0, 0x1000)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources\0", 0x1100004, 0xBFFA4268)		 = 11 0
	getdirentries64(0xB, 0x7B8CBC00, 0x1000)		 = 992 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/arrow-down.png\0", 0xBFFA43E0, 0x1000)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/arrow-down.png\0", 0xBFFA43F0, 0x1000)		 = 0 0
	open_nocancel(".\0", 0x0, 0x20)		 = 12 0
	fstat64(0xC, 0xBFFA42E8, 0x20)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/arrow-down.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/arrow-down.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel(".\0", 0x0, 0x9026D58A)		 = 12 0
	fstat64(0xC, 0xBFFA4188, 0x9026D58A)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/arrow-down.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 3025 0
	lseek(0xC, 0x0, 0x1)		 = 3025 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xBD1)		 = 3025 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/arrow.png\0", 0xBFFA43E0, 0xBD1)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/arrow.png\0", 0xBFFA43F0, 0xBD1)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/arrow.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/arrow.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/arrow.png\0", 0x0, 0x1B6)		 = 12 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/Copyofradioempty.png\0", 0xBFFA43E0, 0xBD1)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/Copyofradioempty.png\0", 0xBFFA43F0, 0xBD1)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/Copyofradioempty.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/Copyofradioempty.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/Copyofradioempty.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 2971 0
	lseek(0xC, 0x0, 0x1)		 = 2971 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xB9B)		 = 2971 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/ctg-bw.png\0", 0xBFFA43E0, 0xB9B)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/ctg-bw.png\0", 0xBFFA43F0, 0xB9B)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/ctg-bw.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/ctg-bw.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/ctg-bw.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 3486 0
	lseek(0xC, 0x0, 0x1)		 = 3486 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xD9E)		 = 3486 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/ctg-col.png\0", 0xBFFA43E0, 0xD9E)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/ctg-col.png\0", 0xBFFA43F0, 0xD9E)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/ctg-col.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/ctg-col.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/ctg-col.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 3698 0
	lseek(0xC, 0x0, 0x1)		 = 3698 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xE72)		 = 3698 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/empty.png\0", 0xBFFA43E0, 0xE72)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/empty.png\0", 0xBFFA43F0, 0xE72)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/empty.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/empty.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/empty.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 3023 0
	lseek(0xC, 0x0, 0x1)		 = 3023 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xBCF)		 = 3023 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/eye copy.png\0", 0xBFFA43E0, 0xBCF)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/eye copy.png\0", 0xBFFA43F0, 0xBCF)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/eye copy.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/eye copy.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/eye copy.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 3308 0
	lseek(0xC, 0x0, 0x1)		 = 3308 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xCEC)		 = 3308 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/eye.png\0", 0xBFFA43E0, 0xCEC)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/eye.png\0", 0xBFFA43F0, 0xCEC)		 = 0 0
	open_nocancel(".\0", 0x0, 0xBFFA4198)		 = 12 0
	fstat64(0xC, 0xBFFA4188, 0xBFFA4198)		 = 0 0
	open_nocancel(".\0", 0x0, 0x1022F00)		 = 12 0
	fstat64(0xC, 0xBFFA4188, 0x1022F00)		 = 0 0
	fstat64(0xC, 0xBFFA42E8, 0x1022F00)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/eye.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/eye.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/eye.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 3588 0
	lseek(0xC, 0x0, 0x1)		 = 3588 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xE04)		 = 3588 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/eyeFaded.png\0", 0xBFFA43E0, 0xE04)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/eyeFaded.png\0", 0xBFFA43F0, 0xE04)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/eyeFaded.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/eyeFaded.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/eyeFaded.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 3704 0
	lseek(0xC, 0x0, 0x1)		 = 3704 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xE78)		 = 3704 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/logo.png\0", 0xBFFA43E0, 0xE78)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/logo.png\0", 0xBFFA43F0, 0xE78)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/logo.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/logo.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/logo.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 4286 0
	lseek(0xC, 0x0, 0x1)		 = 4286 0
	read(0xC, "\211PNG\r\n\032\n\0", 0x10BE)		 = 4286 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/new_text copy.png\0", 0xBFFA43E0, 0x10BE)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/new_text copy.png\0", 0xBFFA43F0, 0x10BE)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/new_text copy.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/new_text copy.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/new_text copy.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 3032 0
	lseek(0xC, 0x0, 0x1)		 = 3032 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xBD8)		 = 3032 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/new_text.png\0", 0xBFFA43E0, 0xBD8)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/new_text.png\0", 0xBFFA43F0, 0xBD8)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/new_text.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/new_text.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/new_text.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 3030 0
	lseek(0xC, 0x0, 0x1)		 = 3030 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xBD6)		 = 3030 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radio.png\0", 0xBFFA43E0, 0xBD6)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radio.png\0", 0xBFFA43F0, 0xBD6)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radio.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radio.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radio.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 3372 0
	lseek(0xC, 0x0, 0x1)		 = 3372 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xD2C)		 = 3372 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioempty copy.png\0", 0xBFFA43E0, 0xD2C)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioempty copy.png\0", 0xBFFA43F0, 0xD2C)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioempty copy.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioempty copy.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioempty copy.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 3186 0
	lseek(0xC, 0x0, 0x1)		 = 3186 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xC72)		 = 3186 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioempty.png\0", 0xBFFA43E0, 0xC72)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioempty.png\0", 0xBFFA43F0, 0xC72)		 = 0 0
	open_nocancel(".\0", 0x0, 0x1022500)		 = 12 0
	fstat64(0xC, 0xBFFA4188, 0x1022500)		 = 0 0
	fstat64(0xC, 0xBFFA42E8, 0x1022500)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioempty.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioempty.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioempty.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 3146 0
	lseek(0xC, 0x0, 0x1)		 = 3146 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xC4A)		 = 3146 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioeye.png\0", 0xBFFA43E0, 0xC4A)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioeye.png\0", 0xBFFA43F0, 0xC4A)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioeye.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioeye.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioeye.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 3528 0
	lseek(0xC, 0x0, 0x1)		 = 3528 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xDC8)		 = 3528 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioeyeFaded.png\0", 0xBFFA43E0, 0xDC8)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioeyeFaded.png\0", 0xBFFA43F0, 0xDC8)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioeyeFaded.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioeyeFaded.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/radioeyeFaded.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 3519 0
	lseek(0xC, 0x0, 0x1)		 = 3519 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xDBF)		 = 3519 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/resize-down.png\0", 0xBFFA43E0, 0xDBF)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/resize-down.png\0", 0xBFFA43F0, 0xDBF)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/resize-down.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/resize-down.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/resize-down.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 2910 0
	lseek(0xC, 0x0, 0x1)		 = 2910 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xB5E)		 = 2910 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/resize.png\0", 0xBFFA43E0, 0xB5E)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/resize.png\0", 0xBFFA43F0, 0xB5E)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/resize.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/resize.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/resize.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 2934 0
	lseek(0xC, 0x0, 0x1)		 = 2934 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xB76)		 = 2934 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/skin.png\0", 0xBFFA43E0, 0xB76)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/skin.png\0", 0xBFFA43F0, 0xB76)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/skin.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/skin.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/skin.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 2792 0
	lseek(0xC, 0x0, 0x1)		 = 2792 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xAE8)		 = 2792 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/tick.png\0", 0xBFFA43E0, 0xAE8)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/tick.png\0", 0xBFFA43F0, 0xAE8)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/tick.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/tick.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/tick.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 3333 0
	lseek(0xC, 0x0, 0x1)		 = 3333 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xD05)		 = 3333 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/tickFaded.png\0", 0xBFFA43E0, 0xD05)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/tickFaded.png\0", 0xBFFA43F0, 0xD05)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/tickFaded.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/tickFaded.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/tickFaded.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 3337 0
	lseek(0xC, 0x0, 0x1)		 = 3337 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xD09)		 = 3337 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/trash.png\0", 0xBFFA43E0, 0xD09)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/trash.png\0", 0xBFFA43F0, 0xD09)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/trash.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/trash.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/com/rorohiko/resources/trash.png\0", 0x0, 0x1B6)		 = 12 0
	lseek(0xC, 0x0, 0x2)		 = 3017 0
	lseek(0xC, 0x0, 0x1)		 = 3017 0
	read(0xC, "\211PNG\r\n\032\n\0", 0xBC9)		 = 3017 0
	getdirentries64(0xA, 0x7B8CAC00, 0x1000)		 = 0 0
	getdirentries64(0x9, 0x7B8C8C00, 0x1000)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/ConditionalTextGroups.swf\0", 0xBFFA43E0, 0x1000)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/ConditionalTextGroups.swf\0", 0xBFFA43F0, 0x1000)		 = 0 0
	open_nocancel(".\0", 0x0, 0xBFFA4198)		 = 9 0
	fstat64(0x9, 0xBFFA4188, 0xBFFA4198)		 = 0 0
	fcntl_nocancel(0x9, 0x32, 0xFFFFFFFFBFFA3D10)		 = 0 0
	open_nocancel(".\0", 0x0, 0x1022500)		 = 9 0
	fstat64(0x9, 0xBFFA4188, 0x1022500)		 = 0 0
	open_nocancel(".\0", 0x0, 0xBFFA4288)		 = 9 0
	fstat64(0x9, 0xBFFA42E8, 0xBFFA4288)		 = 0 0
	fcntl_nocancel(0x9, 0x32, 0xFFFFFFFFBFFA3E70)		 = 0 0
	fstat64(0x9, 0xBFFA42E8, 0x1022500)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/ConditionalTextGroups.swf\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/ConditionalTextGroups.swf\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel(".\0", 0x0, 0x9026D58A)		 = 9 0
	fstat64(0x9, 0xBFFA4188, 0x9026D58A)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/ConditionalTextGroups.swf\0", 0x0, 0x1B6)		 = 9 0
	lseek(0x9, 0x0, 0x2)		 = 1049925 0
	lseek(0x9, 0x0, 0x1)		 = 1049925 0
	lseek(0x9, 0x0, 0x0)		 = 0 0
	read(0x9, "CWS\n>\365*\0", 0x100545)		 = 1049925 0
	madvise(0x11B5000, 0x101000, 0x9)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/CSXS\0", 0xBFFA43E0, 0x9)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/CSXS\0", 0xBFFA43F0, 0x9)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/CSXS\0", 0x1100004, 0xBFFA4268)		 = 9 0
	getdirentries64(0x9, 0x7A8CEC00, 0x1000)		 = 128 0
	lstat64("/private/tmp/tmp28027caaaaa/CSXS/manifest.xml\0", 0xBFFA43E0, 0x1000)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/CSXS/manifest.xml\0", 0xBFFA43F0, 0x1000)		 = 0 0
	open_nocancel(".\0", 0x0, 0x1022500)		 = 10 0
	fstat64(0xA, 0xBFFA4188, 0x1022500)		 = 0 0
	fcntl_nocancel(0xA, 0x32, 0xFFFFFFFFBFFA3D10)		 = 0 0
	open_nocancel(".\0", 0x0, 0x0)		 = 10 0
	fstat64(0xA, 0xBFFA42E8, 0x0)		 = 0 0
	fcntl_nocancel(0xA, 0x32, 0xFFFFFFFFBFFA3E70)		 = 0 0
	fstat64(0xA, 0xBFFA42E8, 0x1022500)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/CSXS/manifest.xml\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/CSXS\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/CSXS/manifest.xml\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel(".\0", 0x0, 0x9026D58A)		 = 10 0
	fstat64(0xA, 0xBFFA4188, 0x9026D58A)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/CSXS/manifest.xml\0", 0x0, 0x1B6)		 = 10 0
	lseek(0xA, 0x0, 0x2)		 = 2764 0
	lseek(0xA, 0x0, 0x1)		 = 2764 0
	lseek(0xA, 0x0, 0x0)		 = 0 0
	read(0xA, "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\r\n<ExtensionManifest xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" ExtensionBundleId=\"Conditional Text Groups\" ExtensionBundleVersion=\"1.0.6\" Version=\"2.0\">\r\n\t <Author>\r\n        <![CDATA[Rorohik", 0xACC)		 = 2764 0
	lstat64("/private/tmp/tmp28027caaaaa/CSXS/manifest2.xml\0", 0xBFFA43E0, 0xACC)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/CSXS/manifest2.xml\0", 0xBFFA43F0, 0xACC)		 = 0 0
	open_nocancel(".\0", 0x0, 0xBFFA4198)		 = 10 0
	fstat64(0xA, 0xBFFA4188, 0xBFFA4198)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/CSXS/manifest2.xml\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/CSXS/manifest2.xml\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/CSXS/manifest2.xml\0", 0x0, 0x1B6)		 = 10 0
	lseek(0xA, 0x0, 0x2)		 = 1342 0
	lseek(0xA, 0x0, 0x1)		 = 1342 0
	read(0xA, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n\r\n<ExtensionManifest Version=\"2.0\" ExtensionBundleId=\"ConditionalTextGroups\" ExtensionBundleVersion=\"1.0.1\"\r\n xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\">\r\n\t<ExtensionList>\r\n\t\t<Extension Id=\"ConditionalText", 0x53E)		 = 1342 0
	getdirentries64(0x9, 0x7A8CEC00, 0x1000)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/icons\0", 0xBFFA43E0, 0x1000)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/icons\0", 0xBFFA43F0, 0x1000)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/icons\0", 0x1100004, 0xBFFA4268)		 = 9 0
	lstat64("/private/tmp/tmp28027caaaaa/icons/ctg-bw.png\0", 0xBFFA43E0, 0x1000)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/icons/ctg-bw.png\0", 0xBFFA43F0, 0x1000)		 = 0 0
	open_nocancel(".\0", 0x0, 0x20)		 = 10 0
	fstat64(0xA, 0xBFFA42E8, 0x20)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/icons/ctg-bw.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/icons\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/icons/ctg-bw.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/icons/ctg-bw.png\0", 0x0, 0x1B6)		 = 10 0
	lseek(0xA, 0x0, 0x2)		 = 3486 0
	lseek(0xA, 0x0, 0x1)		 = 3486 0
	read(0xA, "\211PNG\r\n\032\n\0", 0xD9E)		 = 3486 0
	lstat64("/private/tmp/tmp28027caaaaa/icons/ctg-col.png\0", 0xBFFA43E0, 0xD9E)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/icons/ctg-col.png\0", 0xBFFA43F0, 0xD9E)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/icons/ctg-col.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/icons/ctg-col.png\0", 0xBFFA4320, 0xFFFFFFFFBFFA3E70)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/icons/ctg-col.png\0", 0x0, 0x1B6)		 = 10 0
	lseek(0xA, 0x0, 0x2)		 = 3698 0
	lseek(0xA, 0x0, 0x1)		 = 3698 0
	read(0xA, "\211PNG\r\n\032\n\0", 0xE72)		 = 3698 0
	lstat64("/private/tmp/tmp28027caaaaa/META-INF\0", 0xBFFA43E0, 0x1000)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/META-INF\0", 0xBFFA43F0, 0x1000)		 = 0 0
	open_nocancel("/private/tmp/tmp28027caaaaa/META-INF\0", 0x1100004, 0xBFFA4268)		 = 9 0
	getdirentries64(0x9, 0x7A8CEC00, 0x1000)		 = 88 0
	lstat64("/private/tmp/tmp28027caaaaa/META-INF/signatures.xml\0", 0xBFFA43E0, 0x1000)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/META-INF/signatures.xml\0", 0xBFFA43F0, 0x1000)		 = 0 0
	lstat64("/private/tmp/tmp28027caaaaa/mimetype\0", 0xBFFA43E0, 0x1000)		 = 0 0
	stat64("/private/tmp/tmp28027caaaaa/mimetype\0", 0xBFFA43F0, 0x1000)		 = 0 0
	getdirentries64(0x8, 0x7B8C7600, 0x1000)		 = 0 0
	madvise(0x12B6000, 0x34000, 0x9)		 = 0 0
	madvise(0x12B6000, 0x0, 0x0)		 = 0 0
	thread_selfid(0xB0000000, 0x81000, 0x1203)		 = 3429829 0
	read_nocancel(0x8, "-zxpreturncode:0\n\0", 0x4000)		 = 17 0
	read_nocancel(0x8, "\0", 0x4000)		 = 0 0
	lstat64("/tmp/zxpsign5Xrw1YXj565RGAIe/tmppem.pem\0", 0xBFFA45F0, 0x4000)		 = 0 0
	unlink("/tmp/zxpsign5Xrw1YXj565RGAIe/tmppem.pem\0", 0xBFFA45F0, 0x4000)		 = 0 0
	geteuid(0x793730EC, 0xBFFA45F0, 0x4000)		 = 0 0
	statfs64(0x79374BF0, 0xBFFA3740, 0x4000)		 = 0 0
	__mac_syscall(0x94539D24, 0x2, 0xBFFA3E48)		 = 0 0
	open("/System/Library/Keychains/SystemRootCertificates.keychain\0", 0x0, 0x0)		 = 9 0
	fstat64(0x9, 0xBFFA3EE0, 0x0)		 = 0 0
	mmap(0x0, 0x73968, 0x1, 0x2, 0x9, 0x0)		 = 0x12EA000 0
	munmap(0x12EA000, 0x73968)		 = 0 0
	pipe(0x112F000, 0x40000, 0x9)		 = 9 0
	fcntl_nocancel(0x9, 0x3, 0x0)		 = 0 0
	posix_spawn(0xBFFA47DC, 0x98ACFB36, 0xBFFA4760)		 = 0 0
	fstat64(0x9, 0xBFFA46D0, 0xBFFA4760)		 = 0 0
	read_nocancel(0x9, "...0 certificates found\nTBS Sig Algorithm  : OID : < 06 09 2A 86 48 86 F7 0D 01 01 05 >\n   alg params      : 05 00 \nIssuer Name        :\n   Country         : ZA\n   State           : Western Cape\n   Locality        : Cape Town\n   Org             : Thawte Co", 0x4000)		 = 16384 0
	read_nocancel(0x9, ", 2015\nRevoked Cert 29     :\n   Serial number   : 02 A3 8A 47 BE 91 06 4E 2E D0 6F 45 9C 0A 43 64 \n   Revocation time : 20:55:28 Feb 26, 2015\nRevoked Cert 30     :\n   Serial number   : 02 D2 AF C1 A4 2E B7 95 6C 6B 2C 73 F6 BB 00 52 \n   Revocation time : 2", 0x4000)		 = 16384 0
	read_nocancel(0x9, " Serial number   : 0A 89 AC 5D A1 9E 93 BB E1 6B 1E 8A 4B 1D 2C 4A \n   Revocation time : 13:31:18 Nov 6, 2014\nRevoked Cert 151     :\n   Serial number   : 0A 95 46 9C A5 FD AD BC F6 9D 07 E7 D5 88 04 31 \n   Revocation time : 19:41:49 Mar 6, 2015\nRevoked Cer", 0x4000)		 = 16384 0
	read_nocancel(0x9, " 2015\nRevoked Cert 271     :\n   Serial number   : 11 8C B7 26 C1 86 B3 50 C4 92 7B 6C 6F 01 A6 6C \n   Revocation time : 23:49:47 Dec 15, 2014\nRevoked Cert 272     :\n   Serial number   : 11 8F D1 82 3F 5B FE 32 38 AC 22 9C 6F 5E 6C 10 \n   Revocation time : ", 0x4000)		 = 16384 0
	read_nocancel(0x9, " 3B \n   Revocation time : 14:21:35 Jun 1, 2015\nRevoked Cert 392     :\n   Serial number   : 19 DB 13 F0 C5 39 13 A0 E3 D4 C0 2C 39 1F B6 39 \n   Revocation time : 18:54:01 Jan 16, 2015\nRevoked Cert 393     :\n   Serial number   : 19 E2 E0 12 EC 06 A2 42 E3 32", 0x4000)		 = 16384 0
	read_nocancel(0x9, "6D 3E E7 04 9B 7C D9 DD 66 \n   Revocation time : 09:05:05 Dec 18, 2014\nRevoked Cert 513     :\n   Serial number   : 74 CC 45 10 9A 0C 0F 54 D7 60 6E 25 5D BE ED \n   Revocation time : 18:42:45 Apr 28, 2014\nRevoked Cert 514     :\n   Serial number   : 79 A8 1F", 0x4000)		 = 16384 0
	read_nocancel(0x9, "l number   : 28 15 A6 28 43 AE D3 0E 20 9A 47 DA 5C C3 C3 59 \n   Revocation time : 05:08:26 Aug 29, 2014\nRevoked Cert 634     :\n   Serial number   : 28 2A 6C 5B 33 43 43 A9 86 16 9E 7C AC A1 6C 23 \n   Revocation time : 08:24:38 Mar 9, 2015\nRevoked Cert 635", 0x4000)		 = 16384 0
	read_nocancel(0x9, " Mar 19, 2015\nRevoked Cert 754     :\n   Serial number   : 30 40 AC F3 28 8E 6A 51 08 97 A4 2E 34 B3 DF 86 \n   Revocation time : 21:53:47 Nov 17, 2014\nRevoked Cert 755     :\n   Serial number   : 30 4A 7D 91 DC F4 89 F9 1D 0C 78 F3 CB 67 89 C3 \n   Revocation", 0x4000)		 = 16384 0
	read_nocancel(0x9, "B6 06 43 \n   Revocation time : 19:14:08 Jan 5, 2015\nRevoked Cert 875     :\n   Serial number   : 36 6B 3C 98 DE D7 88 8B D5 26 C9 0C C1 59 0F AC \n   Revocation time : 18:22:26 Jan 29, 2015\nRevoked Cert 876     :\n   Serial number   : 36 74 93 DF E3 0D ED 06 ", 0x4000)		 = 16384 0
	read_nocancel(0x9, " 3D 00 B9 22 87 66 DF 8D CE 9E CD CE 6C 6A AE 15 \n   Revocation time : 16:07:13 Jun 4, 2015\nRevoked Cert 996     :\n   Serial number   : 3D 07 46 CC 13 5D 8E DD 7C 68 9E CF 29 1D E5 CF \n   Revocation time : 17:40:44 Oct 31, 2014\nRevoked Cert 997     :\n   Se", 0x4000)		 = 16384 0
	read_nocancel(0x9, ":\n   Serial number   : 45 3A 2C 3D E4 A4 B3 C3 39 AE EE 15 13 91 EF 89 \n   Revocation time : 20:09:10 Jun 4, 2015\nRevoked Cert 1116     :\n   Serial number   : 45 42 66 8F C6 D8 B1 99 B8 75 02 53 18 2C 40 28 \n   Revocation time : 12:23:07 Aug 26, 2014\nRevok", 0x4000)		 = 16384 0
	read_nocancel(0x9, "14\nRevoked Cert 1235     :\n   Serial number   : 4C F4 99 99 37 95 BE B4 66 AF FB 5F 9B AD 31 E7 \n   Revocation time : 15:01:00 Mar 20, 2015\nRevoked Cert 1236     :\n   Serial number   : 4C F9 5E 89 7B 48 FD 3C C0 3C B6 C7 89 F9 44 20 \n   Revocation time : 1", 0x4000)		 = 16384 0
	read_nocancel(0x9, " time : 21:30:49 Nov 26, 2014\nRevoked Cert 1355     :\n   Serial number   : 55 C8 64 87 96 69 0B 9D 0D 7F 53 01 4A 76 F9 A5 \n   Revocation time : 16:56:25 Feb 25, 2015\nRevoked Cert 1356     :\n   Serial number   : 55 E2 CC D4 70 59 26 BD 03 5A 00 EA E4 62 3E", 0x4000)		 = 16384 0
	read_nocancel(0x9, "8 \n   Revocation time : 20:41:43 May 26, 2015\nRevoked Cert 1475     :\n   Serial number   : 5C A9 49 B9 A9 50 BC AC 8F 27 1A B6 F8 DB 84 53 \n   Revocation time : 06:14:31 Jan 28, 2015\nRevoked Cert 1476     :\n   Serial number   : 5C B1 1E 14 64 64 5B DB 9C 9", 0x4000)		 = 16384 0
	read_nocancel(0x9, "BD FC 14 2A 15 06 \n   Revocation time : 09:38:47 May 17, 2015\nRevoked Cert 1595     :\n   Serial number   : 63 5F BA D8 FB 77 67 18 29 23 3A 61 78 91 E7 AA \n   Revocation time : 16:39:09 Jan 29, 2015\nRevoked Cert 1596     :\n   Serial number   : 63 6E EB 46 ", 0x4000)		 = 16384 0
	read_nocancel(0x9, " B2 5E B0 EE C0 3C B7 91 FD E2 DF F5 7D 69 \n   Revocation time : 01:08:21 May 10, 2015\nRevoked Cert 1715     :\n   Serial number   : 6A 8A 70 BF F1 52 23 01 EF 52 4D A6 29 B6 2C C0 \n   Revocation time : 10:05:06 Jan 5, 2015\nRevoked Cert 1716     :\n   Serial", 0x4000)		 = 16384 0
	read_nocancel(0x9, " number   : 71 4A CE 29 4C 0E 0C EB 2F 3D 13 39 7F B1 DD E9 \n   Revocation time : 14:23:45 Mar 24, 2015\nRevoked Cert 1835     :\n   Serial number   : 71 60 4B 1A FA 8C AA D0 0D F9 A3 DB 8B 17 68 86 \n   Revocation time : 08:29:12 Nov 17, 2014\nRevoked Cert 18", 0x4000)		 = 16384 0
	read_nocancel(0x9, "954     :\n   Serial number   : 77 EB 96 53 A0 5D 81 AE 7E C8 EB 0E FF 68 81 81 \n   Revocation time : 16:41:08 May 21, 2015\nRevoked Cert 1955     :\n   Serial number   : 77 EC B4 01 41 AE E1 70 08 5D 83 DD 9D 6B 55 38 \n   Revocation time : 20:15:51 Mar 10, 2", 0x4000)		 = 16384 0
	read_nocancel(0x9, "0, 2015\nRevoked Cert 2074     :\n   Serial number   : 7E 8B E6 D8 9A 9B DD 4F 58 4A 01 BC 4A 8C 65 2C \n   Revocation time : 09:39:27 Nov 4, 2014\nRevoked Cert 2075     :\n   Serial number   : 7E 8F 81 86 A0 2B 01 AB 46 25 B7 3B F6 A8 22 89 \n   Revocation time", 0x4000)		 = 16384 0
	read_nocancel(0x9, "ion time : 16:53:45 May 21, 2015\nRevoked Cert 85     :\n   Serial number   : 0E AA 26 35 79 85 93 1D 2D 89 4F 71 3F BD 92 3C \n   Revocation time : 15:28:05 Oct 7, 2014\nRevoked Cert 86     :\n   Serial number   : 0E B7 1F 2B 38 D0 B3 3F 87 5C 24 F4 FD 1B 13 4", 0x4000)		 = 16384 0
	read_nocancel(0x9, " 0A A4 9A \n   Revocation time : 05:24:41 Feb 4, 2015\nRevoked Cert 206     :\n   Serial number   : 1E 63 CF F7 33 37 0A FC 28 E1 AF 0B F7 55 79 AE \n   Revocation time : 18:22:01 Apr 3, 2015\nRevoked Cert 207     :\n   Serial number   : 1E 69 B4 13 67 AF D3 E3 ", 0x4000)		 = 16384 0
	read_nocancel(0x9, " 6E A1 16 97 0F 74 B7 D1 DD 05 \n   Revocation time : 15:47:38 Feb 9, 2015\nRevoked Cert 327     :\n   Serial number   : 2C 5E 5C AE 4E 51 16 0A D4 CE F7 32 66 99 BF B1 \n   Revocation time : 19:12:43 Nov 1, 2014\nRevoked Cert 328     :\n   Serial number   : 2C ", 0x4000)		 = 16384 0
	read_nocancel(0x9, "al number   : 3B F4 CB BF 65 89 B8 C4 14 69 A4 E5 6F 55 73 E3 \n   Revocation time : 09:30:10 Feb 20, 2015\nRevoked Cert 448     :\n   Serial number   : 3C 08 EB 0C 4A 5E 3C AC 1A A6 30 91 0E 2C 28 7F \n   Revocation time : 16:09:06 May 15, 2015\nRevoked Cert 4", 0x4000)		 = 16384 0
	read_nocancel(0x9, "5\nRevoked Cert 568     :\n   Serial number   : 4B FF 31 92 66 38 62 95 E4 80 6A BB 79 C5 D9 01 \n   Revocation time : 15:11:12 Aug 18, 2014\nRevoked Cert 569     :\n   Serial number   : 4C 12 CF C9 AC 4B B5 8B 31 85 92 28 43 30 38 E8 \n   Revocation time : 19:0", 0x4000)		 = 16384 0
	read_nocancel(0x9, " Revocation time : 15:21:10 Oct 29, 2014\nRevoked Cert 689     :\n   Serial number   : 5E 4A 10 4A 62 07 AC F2 43 E1 88 0E CA 1A EC 52 \n   Revocation time : 20:22:36 Feb 5, 2015\nRevoked Cert 690     :\n   Serial number   : 5E 78 B9 A7 2A 26 C6 25 FA C7 7D F3 ", 0x4000)		 = 16384 0
	read_nocancel(0x9, "C 9B D9 71 49 82 AA B1 CD C7 59 52 41 29 \n   Revocation time : 12:53:28 Sep 12, 2014\nRevoked Cert 810     :\n   Serial number   : 6E BB FD E4 CE D3 33 8A AF 6E 75 13 9C CE BE 57 \n   Revocation time : 11:18:52 Nov 28, 2014\nRevoked Cert 811     :\n   Serial nu", 0x4000)		 = 16384 0
	2015-07-04 15:22:43 : INFO  get service manager executable name
	dtrace: 15851 dynamic variable drops with non-empty dirty list
	read_nocancel(0x9, "  :\n   Serial number   : 7E 26 47 EF 80 10 D1 0E 03 96 0B 8C 17 87 0C D3 \n   Revocation time : 06:21:05 Dec 4, 2014\nRevoked Cert 931     :\n   Serial number   : 7E 2F DF F7 96 A8 42 C1 06 02 9B F8 E1 65 27 F0 \n   Revocation time : 15:24:46 Jul 29, 2014\nRevo", 0x4000)		 = 16384 0
	read_nocancel(0x9, "Apr 7, 2014\nRevoked Cert 103     :\n   Serial number   : 05 92 54 52 09 9C B3 CA 94 FC 04 67 1F 04 7D 49 \n   Revocation time : 15:35:15 Jul 23, 2013\nRevoked Cert 104     :\n   Serial number   : 05 96 3B 3C F8 F2 A0 39 EB C0 E1 46 68 73 4B CC \n   Revocation t", 0x4000)		 = 16384 0
	read_nocancel(0x9, "7E 86 26 \n   Revocation time : 01:08:30 Dec 10, 2014\nRevoked Cert 224     :\n   Serial number   : 0B A2 35 4A E7 A4 16 D5 5C 5D BF 43 0C 41 D1 63 \n   Revocation time : 07:56:32 Jul 24, 2013\nRevoked Cert 225     :\n   Serial number   : 0B D5 7F 22 B4 D3 79 D0", 0x4000)		 = 16384 0
	read_nocancel(0x9, " 92 27 B3 75 84 71 D9 61 35 F2 DE EB 67 \n   Revocation time : 23:08:41 Oct 21, 2013\nRevoked Cert 345     :\n   Serial number   : 11 8F 4F D0 D8 EB 51 60 E2 B0 47 30 0C 23 6B 8C \n   Revocation time : 10:39:33 Dec 10, 2013\nRevoked Cert 346     :\n   Serial num", 0x4000)		 = 16384 0
	read_nocancel(0x9, "465     :\n   Serial number   : 16 61 32 16 D5 97 AD FC 5B DA 07 68 82 8D D9 F9 \n   Revocation time : 11:45:12 Feb 9, 2015\nRevoked Cert 466     :\n   Serial number   : 16 6B FE 83 E6 F4 A3 ED F4 35 FA 9E 6F F8 88 78 \n   Revocation time : 18:45:35 Mar 6, 2014", 0x4000)		 = 16384 0
	read_nocancel(0x9, "1:09:02 Dec 11, 2014\nRevoked Cert 586     :\n   Serial number   : 1C D4 7B E1 4F 64 48 9E 65 77 9B FF FA C2 6D 99 \n   Revocation time : 01:10:54 Sep 30, 2014\nRevoked Cert 587     :\n   Serial number   : 1C E4 9A 53 00 1E CC D3 90 FD 4C 16 29 5D 82 EC \n   Rev", 0x4000)		 = 16384 0
	madvise(0x12EA000, 0x80000, 0x9)		 = 0 0
	read_nocancel(0x9, " : 01:08:31 Apr 29, 2015\nRevoked Cert 707     :\n   Serial number   : 21 27 16 A9 BC 7D 11 FD E3 73 CD F4 53 10 9B 8A \n   Revocation time : 16:37:41 Dec 19, 2013\nRevoked Cert 708     :\n   Serial number   : 21 37 47 DD 4C 62 40 22 F5 29 5B 25 58 0F 9C 1E \n  ", 0x4000)		 = 16384 0
	read_nocancel(0x9, "64 EC 8F E2 AA 3C 16 CA 45 \n   Revocation time : 01:07:59 Nov 8, 2014\nRevoked Cert 828     :\n   Serial number   : 26 DA 79 08 C1 64 4E 27 19 AD C2 73 94 AA 38 35 \n   Revocation time : 20:07:53 Feb 14, 2014\nRevoked Cert 829     :\n   Serial number   : 26 DD ", 0x4000)		 = 16384 0
	read_nocancel(0x9, "number   : 2B B9 8C A9 9C 32 E5 63 F4 96 85 78 80 53 E8 87 \n   Revocation time : 01:13:35 Nov 25, 2014\nRevoked Cert 949     :\n   Serial number   : 2B BB 40 42 AA 65 A1 A9 D4 53 C8 1C 7B 5D C1 DD \n   Revocation time : 19:29:42 Oct 16, 2013\nRevoked Cert 950 ", 0x4000)		 = 16384 0
	read_nocancel(0x9, "7 74 8B E1 CD F7 08 93 6D 74 FC 5E \n   Revocation time : 23:43:34 Oct 14, 2014\nRevoked Cert 1069     :\n   Serial number   : 31 5C 15 7A F0 6A CC 27 CA 39 3D B4 2D 86 9A CD \n   Revocation time : 22:19:41 Apr 17, 2014\nRevoked Cert 1070     :\n   Serial number", 0x4000)		 = 16384 0
	read_nocancel(0x9, "rial number   : 37 47 27 D3 62 F6 37 18 16 CC 7D 41 0E 5C 51 72 \n   Revocation time : 00:14:27 Apr 12, 2014\nRevoked Cert 1189     :\n   Serial number   : 37 4A 3F AF 2C 9F 53 B8 26 59 03 83 8B D8 F5 A7 \n   Revocation time : 16:21:17 Nov 18, 2014\nRevoked Cer", 0x4000)		 = 16384 0
	read_nocancel(0x9, "voked Cert 1308     :\n   Serial number   : 3D 21 E7 62 A7 C5 8E 92 69 9B 35 72 73 D7 E7 02 \n   Revocation time : 09:28:51 Jul 4, 2013\nRevoked Cert 1309     :\n   Serial number   : 3D 24 C7 3B FD E0 8D BE 0A 6A 24 E3 C5 80 95 86 \n   Revocation time : 08:03:3", 0x4000)		 = 16384 0
	read_nocancel(0x9, " 17:09:42 Jun 1, 2015\nRevoked Cert 1428     :\n   Serial number   : 43 14 FD 23 39 64 11 55 22 24 58 6C 32 5D 83 04 \n   Revocation time : 10:21:48 Nov 22, 2013\nRevoked Cert 1429     :\n   Serial number   : 43 18 C3 89 4F 69 9E 36 36 A7 A0 DC 04 90 90 76 \n   ", 0x4000)		 = 16384 0
	read_nocancel(0x9, "\n   Revocation time : 11:49:54 Nov 4, 2013\nRevoked Cert 1548     :\n   Serial number   : 48 F6 34 86 9A AE 0E A9 75 C0 0F FD 0C ED 35 AE \n   Revocation time : 18:16:41 Apr 9, 2014\nRevoked Cert 1549     :\n   Serial number   : 48 FF AC 26 E1 B1 3B B4 AE F3 EF", 0x4000)		 = 16384 0
	read_nocancel(0x9, " 24 5F 87 9A 9D C7 A7 FE \n   Revocation time : 18:42:57 Apr 21, 2014\nRevoked Cert 1668     :\n   Serial number   : 4E AA F5 99 A2 41 DE 39 97 EE 83 83 52 2D 60 4C \n   Revocation time : 20:01:23 Apr 8, 2014\nRevoked Cert 1669     :\n   Serial number   : 4E B3 ", 0x4000)		 = 16384 0
	read_nocancel(0x9, "98 F3 50 9C E5 56 6E 93 58 02 3F 37 C7 \n   Revocation time : 19:39:46 Jan 29, 2014\nRevoked Cert 1788     :\n   Serial number   : 54 C8 02 BD EB 82 38 2C F2 DB 7C 03 FB 2C C4 2E \n   Revocation time : 01:07:43 Dec 9, 2014\nRevoked Cert 1789     :\n   Serial num", 0x4000)		 = 16384 0
	read_nocancel(0x9, "l number   : 5B 21 35 88 B9 23 43 5B 85 5B 41 34 A7 47 37 14 \n   Revocation time : 01:11:55 Oct 20, 2014\nRevoked Cert 1908     :\n   Serial number   : 5B 30 9C 50 E7 63 6B F0 48 E7 B4 BC B2 D0 92 72 \n   Revocation time : 10:30:51 Apr 11, 2014\nRevoked Cert 1", 0x4000)		 = 16384 0
	read_nocancel(0x9, "015\nRevoked Cert 2027     :\n   Serial number   : 61 76 40 1C E7 74 E5 21 8A C2 A0 E6 D8 92 9E ED \n   Revocation time : 19:00:38 Jun 10, 2015\nRevoked Cert 2028     :\n   Serial number   : 61 89 95 98 C8 4E C9 08 83 12 C1 01 79 2E 85 70 \n   Revocation time : ", 0x4000)		 = 16384 0
	read_nocancel(0x9, "ation time : 16:09:54 Jul 3, 2013\nRevoked Cert 2147     :\n   Serial number   : 67 5B B5 8E EA 8C F5 B0 96 E7 18 B1 89 E9 37 92 \n   Revocation time : 01:17:42 Sep 14, 2014\nRevoked Cert 2148     :\n   Serial number   : 67 5D A6 0E CC A5 C2 9C 39 8C 90 27 D0 3", 0x4000)		 = 16384 0
	read_nocancel(0x9, " 36 DC \n   Revocation time : 20:36:37 Jul 16, 2013\nRevoked Cert 2267     :\n   Serial number   : 6C 2E 4A F7 E6 32 CF 9B 09 CE A7 05 62 69 0D F9 \n   Revocation time : 23:18:07 Sep 16, 2014\nRevoked Cert 2268     :\n   Serial number   : 6C 2F 63 91 77 75 D9 48", 0x4000)		 = 16384 0
	read_nocancel(0x9, "B 78 57 3D C8 39 44 E8 5A A0 9A \n   Revocation time : 04:27:04 Sep 13, 2013\nRevoked Cert 2387     :\n   Serial number   : 72 23 81 ED 9C 85 93 0C 8D CC FF C6 68 C0 61 6E \n   Revocation time : 01:11:59 Nov 6, 2014\nRevoked Cert 2388     :\n   Serial number   :", 0x4000)		 = 16384 0
	read_nocancel(0x9, " : 77 AC 50 F5 EA BA 5A 84 10 56 4E 7D 77 D9 82 F5 \n   Revocation time : 01:10:48 Oct 25, 2014\nRevoked Cert 2507     :\n   Serial number   : 77 C4 A3 55 99 53 91 06 67 19 C9 F1 DB 39 90 76 \n   Revocation time : 00:42:15 Sep 18, 2013\nRevoked Cert 2508     :\n", 0x4000)		 = 16384 0
	read_nocancel(0x9, "26     :\n   Serial number   : 7D A0 DA 1F 75 76 42 79 26 05 16 A2 F6 F4 29 1C \n   Revocation time : 15:56:16 Sep 12, 2013\nRevoked Cert 2627     :\n   Serial number   : 7D A2 E3 69 4D 42 21 5E 7B 2D A1 A0 FD 18 30 92 \n   Revocation time : 17:13:33 Apr 7, 201", 0x4000)		 = 16384 0
	read_nocancel(0x9, " time : 16:01:45 Dec 24, 2014\nRevoked Cert 81     :\n   Serial number   : 0C 66 37 \n   Revocation time : 21:45:19 Dec 28, 2014\nRevoked Cert 82     :\n   Serial number   : 0C 69 B5 \n   Revocation time : 21:29:50 Dec 29, 2014\nRevoked Cert 83     :\n   Serial nu", 0x4000)		 = 16384 0
	read_nocancel(0x9, "14\nRevoked Cert 55     :\n   Serial number   : 13 51 E8 6F 8A 6F 29 1A 51 CE FC F9 9C 21 23 52 \n   Revocation time : 16:30:59 May 7, 2015\nRevoked Cert 56     :\n   Serial number   : 13 98 5B F2 85 97 B9 5B 3B 3F 60 4F DF 6C 3D D5 \n   Revocation time : 20:06:", 0x4000)		 = 16384 0
	read_nocancel(0x9, "ed Cert 176     :\n   Serial number   : 36 BC 40 32 9A 8A D0 1F 42 25 FC 91 21 A1 7C F8 \n   Revocation time : 06:47:58 Aug 13, 2014\nRevoked Cert 177     :\n   Serial number   : 36 D7 C6 AD 0A 56 81 BA F0 2A 52 5F 1D 37 75 1C \n   Revocation time : 18:21:09 Se", 0x4000)		 = 16384 0
	read_nocancel(0x9, "ation time : 03:42:05 Aug 23, 2014\nRevoked Cert 297     :\n   Serial number   : 5B E4 93 60 C4 49 69 B9 95 80 DC EC 80 0B 08 03 \n   Revocation time : 19:19:07 May 27, 2015\nRevoked Cert 298     :\n   Serial number   : 5C 1A 25 9A 1C 87 72 3D 9C EF 86 61 69 F4", 0x4000)		 = 16384 0
	read_nocancel(0x9, "tion time : 06:56:13 Jul 3, 2014\nRevoked Cert 2     :\n   Serial number   : 0A 6F 64 \n   Revocation time : 16:00:39 Jul 29, 2014\nRevoked Cert 3     :\n   Serial number   : 0A 71 E5 \n   Revocation time : 07:04:56 Jul 8, 2014\nRevoked Cert 4     :\n   Serial num", 0x4000)		 = 16384 0
	read_nocancel(0x9, "\nNext Update        : 03:57:40 Jul 3, 2015\nNum CRL Extensions : 2\nExtension struct   : OID : < 06 03 55 1D 23 >\n   Critical        : FALSE\n   Auth KeyID      : 8B C5 29 4A F3 AF CA A1 ...\nExtension struct   : OID : < 06 03 55 1D 14 >\n   Critical        : F", 0x4000)		 = 16384 0
	read_nocancel(0x9, "r   : 0E 13 8C \n   Revocation time : 10:50:35 May 18, 2015\nRevoked Cert 149     :\n   Serial number   : 0E 19 B0 \n   Revocation time : 08:40:11 May 20, 2015\nRevoked Cert 150     :\n   Serial number   : 0E 30 C6 \n   Revocation time : 12:36:35 May 28, 2015\nRev", 0x4000)		 = 16384 0
	read_nocancel(0x9, "20 A6 B1 27 A9 3F A9 A8 10 E6 47 F8 61 B8 \n   Revocation time : 22:52:25 May 3, 2015\nRevoked Cert 104     :\n   Serial number   : 07 6F B4 24 2E A6 5D 89 64 50 6B A6 24 7E 47 76 \n   Revocation time : 02:05:13 Nov 1, 2014\nRevoked Cert 105     :\n   Serial num", 0x4000)		 = 16384 0
	read_nocancel(0x9, "   :\n   Serial number   : 0E 5D A6 F5 F7 28 41 AD 43 52 A1 F6 27 BE B3 DE \n   Revocation time : 01:07:48 May 25, 2015\nRevoked Cert 225     :\n   Serial number   : 0E 5E D4 39 8C 4A 1E F3 DB F5 00 C9 26 B8 35 4A \n   Revocation time : 14:27:26 Jun 18, 2015\nRe", 0x4000)		 = 16384 0
	read_nocancel(0x9, " 10:09:09 Mar 11, 2015\nRevoked Cert 345     :\n   Serial number   : 15 5D 94 70 58 AE 48 78 54 BE EF 63 7E 51 D8 E8 \n   Revocation time : 19:15:46 Dec 9, 2014\nRevoked Cert 346     :\n   Serial number   : 15 82 A3 56 2E 1F B3 2C 30 40 91 56 AF 6D FE FC \n   Re", 0x4000)		 = 16384 0
	read_nocancel(0x9, "C F3 2C 45 9B 0F \n   Revocation time : 01:21:28 Jun 14, 2015\nRevoked Cert 466     :\n   Serial number   : 1C E7 95 64 28 24 8A 57 88 B1 F6 DF 59 A8 22 CD \n   Revocation time : 17:31:23 Jan 30, 2015\nRevoked Cert 467     :\n   Serial number   : 1C F8 37 51 BE ", 0x4000)		 = 16384 0
	read_nocancel(0x9, " 80 08 12 C8 C1 C9 29 EB 86 50 C9 \n   Revocation time : 01:11:23 Apr 22, 2015\nRevoked Cert 587     :\n   Serial number   : 23 FE 53 DE 34 F1 58 68 7B AC CE E5 8A 60 51 14 \n   Revocation time : 07:34:48 Jun 3, 2015\nRevoked Cert 588     :\n   Serial number   :", 0x4000)		 = 16384 0
	read_nocancel(0x9, " 707     :\n   Serial number   : 2B A8 17 65 80 B4 9F 5E B4 D5 C3 8A 22 8C 34 7A \n   Revocation time : 08:55:22 Feb 23, 2015\nRevoked Cert 708     :\n   Serial number   : 2B B6 0C 51 E7 7B DC 7D F0 F1 66 E2 E2 35 A1 EF \n   Revocation time : 05:50:01 Feb 3, 20", 0x4000)		 = 16384 0
	read_nocancel(0x9, "ime : 21:39:12 Nov 25, 2014\nRevoked Cert 828     :\n   Serial number   : 32 69 4E 6B D6 EF 5B 41 E9 E4 34 D3 FD A6 18 E7 \n   Revocation time : 12:18:10 Jul 7, 2014\nRevoked Cert 829     :\n   Serial number   : 32 6A 0A 8B 4B A3 D2 89 D1 8C 97 D8 03 20 7B 36 \n", 0x4000)		 = 16384 0
	read_nocancel(0x9, " 99 50 8C 7D AF ED 12 \n   Revocation time : 20:23:34 Jan 28, 2015\nRevoked Cert 949     :\n   Serial number   : 39 2D A2 B7 67 18 FB 0C 1A 3C B9 3A A6 2D ED 17 \n   Revocation time : 23:37:57 May 21, 2015\nRevoked Cert 950     :\n   Serial number   : 39 38 1D 8", 0x4000)		 = 16384 0
	read_nocancel(0x9, "Revocation time : 19:06:52 Nov 12, 2014\nRevoked Cert 1069     :\n   Serial number   : 3F C8 E8 08 F1 55 EF 7B 33 79 38 31 11 A5 06 97 \n   Revocation time : 14:38:18 Jun 12, 2014\nRevoked Cert 1070     :\n   Serial number   : 3F D2 B0 52 F7 7B 6B 3E 73 4A AD 7", 0x4000)		 = 16384 0
	read_nocancel(0x9, "C 49 8F B1 07 90 FB D5 31 \n   Revocation time : 13:32:43 Oct 23, 2014\nRevoked Cert 1189     :\n   Serial number   : 46 C3 B7 9F E0 AF AF 30 EB A8 C7 B7 49 7A 34 74 \n   Revocation time : 19:34:41 Apr 7, 2015\nRevoked Cert 1190     :\n   Serial number   : 46 E2", 0x4000)		 = 16384 0
	read_nocancel(0x9, " 4F 50 94 B4 C3 94 54 9A C2 0E 70 A1 CD A3 BA D8 \n   Revocation time : 18:51:53 Mar 20, 2015\nRevoked Cert 1309     :\n   Serial number   : 4F 79 9B 8F 83 97 36 23 70 E4 CF 1C E2 77 E3 95 \n   Revocation time : 16:54:45 Mar 11, 2015\nRevoked Cert 1310     :\n  ", 0x4000)		 = 16384 0
	read_nocancel(0x9, "    :\n   Serial number   : 56 F0 F7 B5 1E 7B 77 3C 72 38 53 58 79 C1 D7 56 \n   Revocation time : 21:48:19 Apr 10, 2015\nRevoked Cert 1429     :\n   Serial number   : 56 F1 AD A4 F3 29 C0 CA 56 D0 38 A8 6A 41 AC 8E \n   Revocation time : 20:32:13 Jan 6, 2015\nR", 0x4000)		 = 16384 0
	read_nocancel(0x9, "Revoked Cert 1548     :\n   Serial number   : 5E 01 4B BF CC 49 90 FE BC E2 A1 34 2C 27 E7 84 \n   Revocation time : 23:01:08 Dec 18, 2014\nRevoked Cert 1549     :\n   Serial number   : 5E 14 9F EE 93 75 D8 14 7B E9 7D B8 28 24 B3 CF \n   Revocation time : 21:3", 0x4000)		 = 16384 0
	read_nocancel(0x9, " 13:02:26 May 8, 2014\nRevoked Cert 1668     :\n   Serial number   : 64 0B 14 66 BB D2 40 D5 82 BD 80 30 E7 98 E3 DF \n   Revocation time : 08:20:09 Mar 26, 2015\nRevoked Cert 1669     :\n   Serial number   : 64 16 CE F4 33 49 85 29 1D DB 71 EB 45 B9 A0 C4 \n   ", 0x4000)		 = 16384 0
	read_nocancel(0x9, "3 \n   Revocation time : 08:43:10 Mar 25, 2015\nRevoked Cert 1788     :\n   Serial number   : 6A F1 09 A6 5E B8 64 FF C5 D6 3E 45 CC D5 1B 3D \n   Revocation time : 15:00:12 Jan 14, 2015\nRevoked Cert 1789     :\n   Serial number   : 6A F3 44 53 49 38 09 B7 49 6", 0x4000)		 = 16384 0
	read_nocancel(0x9, " B8 33 1B A6 80 32 8E \n   Revocation time : 23:45:52 Dec 16, 2014\nRevoked Cert 1908     :\n   Serial number   : 71 73 CE 29 3B 90 7A 1C 3F BC D9 A2 4E D1 02 05 \n   Revocation time : 17:06:02 May 27, 2015\nRevoked Cert 1909     :\n   Serial number   : 71 8F DD", 0x4000)		 = 16384 0
	read_nocancel(0x9, "6 53 A0 5D 81 AE 7E C8 EB 0E FF 68 81 81 \n   Revocation time : 16:41:08 May 21, 2015\nRevoked Cert 2028     :\n   Serial number   : 77 EC B4 01 41 AE E1 70 08 5D 83 DD 9D 6B 55 38 \n   Revocation time : 20:15:51 Mar 10, 2015\nRevoked Cert 2029     :\n   Serial ", 0x4000)		 = 16384 0
	read_nocancel(0x9, "ial number   : 7E 88 43 65 E9 67 BF A4 08 F7 73 70 3A 4F F9 42 \n   Revocation time : 14:47:24 Jan 30, 2015\nRevoked Cert 2148     :\n   Serial number   : 7E 8B E6 D8 9A 9B DD 4F 58 4A 01 BC 4A 8C 65 2C \n   Revocation time : 09:39:27 Nov 4, 2014\nRevoked Cert ", 0x4000)		 = 16384 0
	read_nocancel(0x9, "5\nRevoked Cert 111     :\n   Serial number   : 0C DA 6C \n   Revocation time : 20:57:18 Feb 4, 2015\nRevoked Cert 112     :\n   Serial number   : 0C E4 EC \n   Revocation time : 13:08:01 Feb 8, 2015\nRevoked Cert 113     :\n   Serial number   : 0C E6 3A \n   Revoc", 0x4000)		 = 16384 0
	read_nocancel(0x9, "6:45:38 Feb 4, 2015\nRevoked Cert 108     :\n   Serial number   : 0C D2 65 \n   Revocation time : 22:14:20 Feb 2, 2015\nRevoked Cert 109     :\n   Serial number   : 0C D5 2A \n   Revocation time : 21:26:16 Feb 5, 2015\nRevoked Cert 110     :\n   Serial number   : ", 0x4000)		 = 16384 0
	read_nocancel(0x9, "4 61 E3 CD \n   Revocation time : 09:35:17 Oct 2, 2014\nRevoked Cert 39     :\n   Serial number   : 0F 92 D8 EF 1F 08 C8 2D 92 A0 AF A1 A0 5A 85 2C \n   Revocation time : 03:20:50 Aug 29, 2014\nRevoked Cert 40     :\n   Serial number   : 0F 9D AA A2 84 E8 33 20 ", 0x4000)		 = 16384 0
	read_nocancel(0x9, "ion time : 14:29:20 Sep 26, 2014\nRevoked Cert 160     :\n   Serial number   : 31 F8 8E E1 0F 06 64 14 EB 3C D6 B2 A7 91 F9 47 \n   Revocation time : 19:38:09 Nov 26, 2014\nRevoked Cert 161     :\n   Serial number   : 32 2A 68 69 EE E9 9B 5A DD 06 36 AA 67 32 4", 0x4000)		 = 16384 0
	read_nocancel(0x9, "85 D6 F7 F6 DC 48 26 6D 4C \n   Revocation time : 01:12:15 Apr 12, 2015\nRevoked Cert 281     :\n   Serial number   : 56 91 E0 81 2E F7 9D D8 CC CB 98 86 90 A4 FD 0D \n   Revocation time : 16:35:35 Nov 19, 2014\nRevoked Cert 282     :\n   Serial number   : 56 CD", 0x4000)		 = 16384 0
	read_nocancel(0x9, "  :\n   Serial number   : 7C 21 32 AE 59 73 9F 83 00 09 AB BF B3 04 C0 FE \n   Revocation time : 10:24:42 Apr 6, 2015\nRevoked Cert 402     :\n   Serial number   : 7C 24 0B D8 D7 90 4E 33 C2 51 BB 70 33 BC 2A DD \n   Revocation time : 06:44:49 Dec 10, 2014\nRevo", 0x4000)		 = 16384 0
	read_nocancel(0x9, "   : 0E 30 C6 \n   Revocation time : 12:36:35 May 28, 2015\nRevoked Cert 150     :\n   Serial number   : 0E 35 EF \n   Revocation time : 15:16:20 Jun 10, 2015\nRevoked Cert 151     :\n   Serial number   : 0E 3D B0 \n   Revocation time : 09:45:36 Jul 1, 2015\nRevok", 0x4000)		 = 1966 0
	read_nocancel(0x9, "-zxpreturncode:0\n09 B4 D8 \n   Revocation time : 15:37:51 Mar 9, 2015\nRevoked Cert 1914     :\n   Serial number   : 71 BC 0D BC 8B 77 3D B6 FD 32 6D 68 8B 47 DE 0E \n   Revocation time : 19:03:35 Dec 30, 2014\nRevoked Cert 1915     :\n   Serial number   : 71 C5", 0x4000)		 = 17 0
	read_nocancel(0x9, "\0", 0x4000)		 = 0 0
	madvise(0x136A000, 0x200000, 0x9)		 = 0 0
	madvise(0x16AB000, 0x141000, 0x9)		 = 0 0
	madvise(0x1973000, 0x46000, 0x9)		 = 0 0
	madvise(0x192D000, 0x46000, 0x9)		 = 0 0
	madvise(0x19B9000, 0x46000, 0x9)		 = 0 0
	madvise(0x19FF000, 0x46000, 0x9)		 = 0 0
	wait4(0x6D81, 0xBFFA627C, 0x0)		 = 28033 0
	2015-07-04 15:22:45.362 CEPServiceManager[28034:3429853] *** CFMessagePort: bootstrap_register(): failed 1100 (0x44c) 'Permission denied', port = 0x1103, name = 'com.adobe.csi.CSServiceManager.4'
	See /usr/include/servers/bootstrap_defs.h for the error codes.
	__semwait_signal(0xB03, 0x0, 0x1)		 = -1 Err#60
	socket(0x1, 0x1, 0x0)		 = 10 0
	connect(0xA, 0xBFFA6230, 0x6A)		 = -1 Err#2
	close(0xA)		 = 0 0
	^C
	__semwait_signal(0xB03, 0x0, 0x1)		 = -1 Err#4


From here on it gets into a loop - probably because of the dtruss. But by this time, the extension has been installed.
