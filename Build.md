Building for Android, Linux and Windows:
----------------------------------------

Target | Toolchain
------------ | -------------
Linux | gcc >= 6
Linux | clang >= 3.8
Windows 10 | Visual Studio 2015
Windows 10 | Visual Studio 2017
Android | NDK >= r13b + clang + Gradle >= 2.2

General requirements:
---------------------
  
- [LunarG Vulkan SDK](http://vulkan.lunarg.com)
- [Cmake](https://cmake.org)

![Android](https://developer.android.com/images/brand/Android_Robot_100.png) Android
---

- [Android NDK r13b](https://developer.android.com/ndk/index.html)
- [Android Studio 2.2](https://developer.android.com/studio/index.html)

- [arm64-v8a](https://developer.android.com/ndk/guides/abis.html#arm64-v8a) is the only supported ABI

![Linux](https://upload.wikimedia.org/wikipedia/commons/thumb/3/35/Tux.svg/100px-Tux.svg.png) Linux
---
   - <img src="http://design.ubuntu.com/wp-content/uploads/logo-ubuntu_cof-orange-hex.svg" width="48"> **Ubuntu**
    + [**16.04**]
        + [**Getting g++-6**]
            - `sudo add-apt-repository ppa:ubuntu-toolchain-r/test`
            - `sudo apt update`
            - `sudo apt install gcc-6`
            - `export CC=gcc-6 export CXX=g++-6`
        + [**Getting libX11.so**]
            - `sudo apt-get install libxrandr-dev`
        + [**Getting LunarG SDK**]
            - Download lastest LunarG Vulkan SDK : [vulkan-sdk](https://vulkan.lunarg.com/sdk/home#linux)
            - `chmod ugo+x vulkansdk-linux-x86_64-<version>.run`
            - `export VULKAN_SDK=$PATH_TO_SDK/<version>/x86_64`
        + [**Getting Cmake**]
            - `sudo apt-get install cmake`
        + [**Building**]
            - `mkdir build && cd build && cmake ../` 
            - `make -j 4`
            - `sudo make isntall`
        

![Windows](https://upload.wikimedia.org/wikipedia/commons/thumb/e/ee/Windows_logo_–_2012_%28dark_blue%29.svg/88px-Windows_logo_–_2012_%28dark_blue%29.svg.png) Windows
---
- [Visual Studio 2015](https://www.visualstudio.com/downloads/)

![Apple](https://upload.wikimedia.org/wikipedia/commons/thumb/f/fa/Apple_logo_black.svg/100px-Apple_logo_black.svg.png) MacOS/iOS
---
- Sorry, this platform is not yet supported.
