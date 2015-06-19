# Preamble

Kris:

My current idea is that I'd try to collect information, any information that is relevant to the making of installers. As far as I can tell, everyone has more or less different needs, and wants slightly different things from an installer. 

However, the basic ingredients are always pretty much the same; it's just that some people prefer off-the-shelf stuff, some people prefer something 'good enough', some people would use Xojo or Node.js or whathaveyou.

It does not matter what technology the installer is implemented with, a number of basic things need to be covered, no matter what the technology used.

Our 'TextExporter' plug-in has installers for Mac and Windows, and I find that maintaining it is a major pain in the behind. I only release updates rarely, and the build folders are littered with little readme files to help remind me of all kinds of hairy details that I need to remember to successfully rebuild the installer. I always lose a day just getting back 'into' the right thinking when I need to build an update. There must be a better way. 

My current vague thinking is that I would like to write a cross-platform replacement for extension manager in Xojo, something that's easy to 'feed'. I want to install plug-ins, .spln files, extensions,... just like Extension Manager. Initially, I'd aim for something that's compatible, and can digest .zxp files. 

I'd love some bells, or rather - removing some bells. E.g. I want my replacement to be able to install without the 'signing' and 'timestamping' etc... and leave it up to the user whether they want or don't want super-security. If everything else is insecure, having a super-secure ZXP installer kind of defeats the purpose. I think of it as a massive, triple-locked steel door mounted in the doorway of a straw hut on some steppe somewhere. 

Such a tool would not be the end-all for everyone - it's just what I currently think I want/need. But in the process, I need to discover lots of information that would be useful for anyone going through a similar process, so I am 'thinking out loud' and putting whatever I find or think here. Don't take any of what you read here as 'gospel' - it's more like the incoherent thoughts of a scatterbrain. And I might scrap things a few times and start over.

# Aspects

First, let's think of anything that might be relevant to making an installer.

Initially this can be listed here, but eventually these subjects might become
large and would need be moved to a subfolder/subdocument. 

Below a raw list of 'stuff I can think of' - most will probably not make it into my Xojo installer, but I want to make the conscious decision of considering or ignoring each aspect, rather than realize that something is important when it is too late.

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

        Inno Setup

            http://www.jrsoftware.org/isinfo.php

        Advanced Installer

            http://www.advancedinstaller.com/

* Versions
    
    We need to keep versions in mind. I can envision wanting to install stuff into just a single version of, say, InDesign, or, when applicable/possible/... into all versions, select versions

* Non-standard folder locations

    I have no idea how often people have stuff installed into non-standard locations. Depending on the situation, it might be OK to simply ignore that (if 99.9% of your customers have stuff in a standard location, and it's a low-cost tool. You simply tell the 'non-standard' ones: "Don't Do That"). Or it might be very important (if one of your large customers has 10,000 workstations with stuff installed in a weird location). 

* Locale/Internationalization

    Depending on your market, localization can be unimportant or very important. In my case, the German market is non-negligible and generally speaking they seem to appreciate German-language versions. Not sure how many other markets I am missing out on by not having localized software.

* Logging/feedback

    Not really an installer feature, but can be linked: the installer infrastructure might also provide logging services (so crash logs can be delivered to the developer).

* Activation/Licensing

    It might be desirable to have this part handled by the installer (or not). 

* Unique user ID

    Things like tracking the user's Adobe ID, Google ID, Apple ID, oauth, custom registration ID,... whathaveyou might be useful to link the licensing to the user. 

* Dependencies

    Sometimes there are dependencies on other software (e.g. you might need, say, Ghostscript installed). This might be important. 

* Source Code Control
    
    Maybe it's useful to tie the installer into a 'front end' for a Git repo. Whatever is installed is whatever is available on some 'stable' branch in the repo. Hmm... That might be cool. Updating the installer could be as easy as merging the latest version into the 'installer' branch.

* Build tools

    Tools like Maven: maybe those can be wrapped into an installer, to automatically pull in dependencies. Not sure if this can be wrapped up so the user stays shielded from the underlying complexity. 

* DropBox or similar

    Maybe we can use DropBox or similar as a delivery mechanism for payload?

* Upgrading

    The installer can also be useful for upgrading

* Rollback

    If things fail, it should try to roll back. You cannot fix a broken hard disk, but you can always try to put stuff back the way it was.

* Checking for updates

    The installer can be helpful in checking for updates? 

