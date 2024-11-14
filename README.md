# Crow CPP Demo

This repo builds a web API in C++.


#### OS Deps

I'd like to use CMake to do these, but not convinced it's possible yet...

```
pip install conan
brew install cmake make
```


#### Build

```
conan install . --output-folder=build --build=missing
cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
cmake .

./my_crow_app
```


#### Refs

- [conan docs](https://docs.conan.io/2/tutorial/consuming_packages/build_simple_cmake_project.html)
