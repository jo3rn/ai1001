# Test Setup

if a `GITHUB_ACTION` environment variable is set, CMake configures a build suited for GitHub Action, otherwise for local development.

## local development

- Windows x64
- [CLion](https://www.jetbrains.com/clion/) version 2021.03
- [GoogleTest](https://github.com/google/googletest) version 1.11.0
  - download and extract into `/test/lib`
- [MinGW](https://www.mingw-w64.org/downloads/)
  - C: gcc version 8.1.0
  - C++: g++ version 8.1.0

## GitHub Action

- [GoogleTest](https://github.com/google/googletest) automatically downloaded with CMake
- further details see workflow file in `/.github/workflows`