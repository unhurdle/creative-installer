The externals are not pushed into Git in compilable form.
You need to decompress them in the 'ZXPInstaller' directory, named

zlib
expat
sqlite
boost

Boost needs to be installed and built.

On Mac:

./bootstrap.sh
./b2 link=static threading=multi toolset=darwin architecture=x86 target-os=darwin address-model=32_64 stage

seems to generate Universal libs

There is a boost 1.58 bug to fix.

You get an unresolved _fchmodat.

See http://ms-cheminfo.com/?q=node/90

--
With Boost 1.57 on Mac 10.9 with clang++ 6.0.1 installed, I have faced an error "_fchmodat" symbol not found.

I was just quick fix by changing source code;

boost_1_57_0/libs/filesystem/src/operations.cpp, change code around 1420 as following;

#   if defined(AT_FDCWD) && defined(AT_SYMLINK_NOFOLLOW) \
      && !(defined(__SUNPRO_CC) || defined(__sun) || defined(sun)) \
      && !(defined(linux) || defined(__linux) || defined(__linux__)) \
      && !(defined(__APPLE__))

--

For Photoshop CC 2015 the application path cannot be found in the pcb.db database. Instead,
the latest path to the Photoshop app resides in a preferences file

~/Library/Preferences/Adobe Photoshop CC 2015 Paths

