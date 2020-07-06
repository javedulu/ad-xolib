
# xodr (OpenDrive Parser in C++)
C++ library for Parsing OpenDrive format files (1.5 format)

## Introduction <a name="introduction"></a>

This repository provides a library for reading OpenDrive XML Data, the parsing conforms to OpenDrive format <b>1.5</b>

http://www.opendrive.org/docs/OpenDRIVEFormatSpecRev1.5M.pdf

## License <a name="license"></a>

This software library is provided under the MIT open-source license: https://opensource.org/licenses/MIT.

## Inspiration <a name="inspiration"></a>

This library is inspired by https://github.com/carla-simulator/map

## Getting started <a name="started"></a>
The project is compiled with c++14 enabled compiler, choose your stack accordingly .

It has only one dependency pugixml, use your favourite package manager to install the same.
```bash
mac  : brew install pugixml
ubuntu : sudo apt install pugixml
windows : sorry can't help you. here ..
```
#### Build from Source <a name="build"></a>

```bash
git clone https://github.com/javedulu/xodr.git
mkdir build
cd build
cmake . -B build
cmake . --target build
```

## Alternatives <a name="alternatives"></a>
[https://github.com/JensKlimke/odrparser](https://github.com/JensKlimke/odrparser)-1.5 

[DLT-https://github.com/DLR-TS/xodr](https://github.com/DLR-TS/xodr) - 1.4

## Contributing <a name="contributing"></a>
Contibutions are very welcome!

## CAUTION <a name="caution"></a>

The <b>xodr.h</b> & <b> xodr.cxx </b> are autogenerated, in case you require any modifications, please send a pull request with the details. They will be updated regularly.

Don't edit them directly .

## Coming Soon <a name="future"></a>
 - Save to xodr from c++   
 - Bump the format to 1.6 of OpenDrive 
 - OpenScenario c++ parsing based on OpenScenari0-1.0
 - Test cases for OpenScenario & OpenDrive 
 - Python binding