<h1 align="center">
  <img
    src="https://raw.githubusercontent.com/catppuccin/catppuccin/main/assets/misc/transparent.png"
    height="30"
    width="0px"
  />
  💎 Open DIS v6 (IEEE 1287.1a-1998)
  <img
    src="https://raw.githubusercontent.com/catppuccin/catppuccin/main/assets/misc/transparent.png"
    height="30"
    width="0px"
  />
</h1>

<p align="center">
  <a href="https://github.com/crhowell3/opendis6/stargazers">
    <img
      alt="Stargazers"
      src="https://img.shields.io/github/stars/crhowell3/opendis6?style=for-the-badge&logo=starship&color=b16286&logoColor=d9e0ee&labelColor=282a36"
    />
  </a>
  <a href="https://conan.io/center/recipes/opendis6">
    <img
      alt="Conan Version"
      src="https://img.shields.io/conan/v/opendis6?style=for-the-badge&logo=rust&color=458588&logoColor=d9e0ee&labelColor=282a36"
    />
  </a>
  <a href="https://github.com/crhowell3/opendis6/issues">
    <img
      alt="Issues"
      src="https://img.shields.io/github/issues/crhowell3/opendis6?style=for-the-badge&logo=gitbook&color=d79921&logoColor=d9e0ee&labelColor=282a36"
    />
  </a>
  <a href="https://github.com/crhowell3/opendis6/contributors">
    <img
      alt="Contributors"
      src="https://img.shields.io/github/contributors/crhowell3/opendis6?style=for-the-badge&logo=opensourceinitiative&color=689d6a&logoColor=d9e0ee&labelColor=282a36"
    />
  </a>
  <br/>
  <a href="#">
    <img
      alt="Maintained"
      src="https://img.shields.io/maintenance/yes/2024?style=for-the-badge&color=98971a&labelColor=282a36"
    />
  </a>
</p>

&nbsp;

## 💭 About
C++ implementation of the IEEE 1278.1a-1998 Distributed Interactive Simulation (DIS) application protocol. This library was implemented according to the IEEE Std 1278.1a-1998 publication.

## 📕 Documentation

## 🔰 Getting Started
This library can be manually built and installed with CMake and make tools, or it can be imported
from the Conan Center.
### Building from Source
To build from source, CMake 3.22+ is required. On Linux, run the following commands to build and install:
```bash
mkdir build
cd build
cmake ..
make
```
To build Linux package files, run
```bash
make package
```
To install the library into your `CMAKE_INSTALL_PREFIX`, run
```
make install
```

### Importing with Conan
Conan 2.x is required to import this library.

<p align="center">
  Copyright &copy; 2024-present
  <a href="https://github.com/crhowell3" target="_blank">Cameron Howell</a>
</p>
<p align="center">
  <a href="https://github.com/crhowell3/opendis6/blob/main/LICENSE"
    ><img
      src="https://img.shields.io/static/v1.svg?style=for-the-badge&label=License&message=BSD-2-Clause&logoColor=d9e0ee&colorA=282a36&colorB=b16286"
  /></a>
</p>
