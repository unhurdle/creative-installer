# Preamble

Kris:

My current idea is that I'd try to collect information, any information
that is relevant to the making of installers. As far as I can tell,
everyone has more or less different needs, and wants slightly different
things from an installer. 

However, the basic ingredients are always pretty much the same; it's just
that some people prefer off-the-shelf stuff, some people prefer something
'good enough', some people would use Xojo or Node.js or whathaveyou.

It does not matter what technology the installer is implemented with, a 
number of basic things need to be covered, no matter what the technology used.

# Aspects

First, let's think of anything that might be relevant to making an installer.

Initially this can be listed here, but eventually these subjects will become
large and will be moved to a subfolder/subdocument.

* Platform:

  Macintosh, Windows. Maybe Linux for some specialized servers?

* System Locations: 

    We can look at system locations from two main angles, and the art of installing software is partly about mapping one onto the other.

    * Symbolic location

        This is the high-level 'idea' - i.e. things like 'the registry' or 'a certain subkey in the registry' or 'the preferences folder' or 'the app support folder', 'the plug-ins folder'. There are lots of these, and often they only get meaning with sufficient context. 

        E.g. 'the plug-ins folder' means nothing until we know what app it is for, what version, whether it's been moved or not,...

        There are various lists of them. For example, look up 'SpecialFolder' in the Xojo docs, or 
        Environment::SpecialFolder Enumeration in the MSDN .NET docs. Many development environments seem to have some kind of special folder enumeration.

    * Physical location

        This is where the idea becomes real. It can become a path, or some API entry points and
        some keys to feed into the API.

* Uninstalling

    When we think about installers, we also need to think about uninstalling (or not).

* Tools

    * Mac

        Iceberg

            http://s.sudre.free.fr/Software/Iceberg.html

        Packages

            http://s.sudre.free.fr/Software/Packages/about.html

        Apple command line tools

            https://developer.apple.com/library/mac/documentation/Darwin/Reference/ManPages/man1/pkgbuild.1.html
            https://developer.apple.com/library/mac/documentation/Darwin/Reference/ManPages/man1/productbuild.1.html#//apple_ref/doc/man/1/productbuild
            

    * Windows

        Advanced Installer

            http://www.advancedinstaller.com/
