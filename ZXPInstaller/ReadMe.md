# Getting started

The externals are not pushed into Git in compilable form.

You need to decompress them in the 'ZXPInstaller' directory, named

  zlib
  expat
  sqlite
  boost

Boost needs to be installed and built.

## Mac

You also need to have the Mac OS X 10.7 SDK available.

### 10.7 SDK

The project file is built for Xcode 6.0, which by default does not provide Mac OS X 10.7.

You need to use an older version of Xcode and extract the OS X 10.7 SDK from it, then move it
into the Xcode.app file.

I have Xcode 4.5.2 installed inside /Applications/Xcode 4.5.2, and I make a symbolic link from

  /Applications/Xcode 4.5.2/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.7.sdk

to

  /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.7.sdk

That gives Xcode 6.x access to the 10.7 SDK

Alternatively you can switch the SDK dependency in the project to a higher OS X version, but
I wanted to have the widest possible reach of OS X versions, so I opted for 10.7.

### bootstrap

Once the bootstrap has been expanded into

.../ZXPInstaller/boost

First, there is a boost bug that might need fixing - the bug is still present in 1.58.0.

If left unfixed, you'll get an unresolved _fchmodat when building.

More info: see http://ms-cheminfo.com/?q=node/90

-- quote --
With Boost 1.57 on Mac 10.9 with clang++ 6.0.1 installed, I have faced an error "_fchmodat" symbol not found.

I was just quick fix by changing source code;

boost_1_57_0/libs/filesystem/src/operations.cpp, change code around 1420 as following;

#   if defined(AT_FDCWD) && defined(AT_SYMLINK_NOFOLLOW) \
      && !(defined(__SUNPRO_CC) || defined(__sun) || defined(sun)) \
      && !(defined(linux) || defined(__linux) || defined(__linux__)) \
      && !(defined(__APPLE__))
-- quote --

Make the above fix, and then

you need to start a command line session into the boost folder, then execute:

  ./bootstrap.sh
  ./b2 link=static threading=multi toolset=darwin architecture=x86 target-os=darwin address-model=32_64 stage

to generate Universal libs

--

# Gotchas

For Photoshop CC 2015 the application path cannot be found in the pcb.db database. Instead,
the latest path to the Photoshop app resides in a preferences file

~/Library/Preferences/Adobe Photoshop CC 2015 Paths

Photoshop CC 2014 also provides a similar file, but the pcb.db database seems to be working too