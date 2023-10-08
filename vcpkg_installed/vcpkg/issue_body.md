Package: catch2:arm64-osx -> 3.4.0

**Host Environment**

- Host: arm64-osx
- Compiler: AppleClang 15.0.0.15000040
-    vcpkg-tool version: 2023-09-15-ac02a9f660977426b8ec6392919fbb1d51b10998
    vcpkg-scripts version: 7e4d2ff73 2023-10-06 (6 hours ago)

**To Reproduce**

`vcpkg install `
**Failure logs**

```
-- Using cached catchorg-Catch2-v3.4.0.tar.gz.
-- Cleaning sources at /Users/benchikbayor/Desktop/onboarding-lab-2/_deps/vcpkg-src/buildtrees/catch2/src/v3.4.0-a183b6a984.clean. Use --editable to skip cleaning for the packages you specify.
-- Extracting source /Users/benchikbayor/Desktop/onboarding-lab-2/_deps/vcpkg-src/downloads/catchorg-Catch2-v3.4.0.tar.gz
-- Applying patch fix-install-path.patch
-- Using source at /Users/benchikbayor/Desktop/onboarding-lab-2/_deps/vcpkg-src/buildtrees/catch2/src/v3.4.0-a183b6a984.clean
-- Found external ninja('1.11.1.git.kitware.jobserver-1').
-- Configuring arm64-osx
-- Building arm64-osx-dbg
-- Building arm64-osx-rel
-- Fixing pkgconfig file: /Users/benchikbayor/Desktop/onboarding-lab-2/_deps/vcpkg-src/packages/catch2_arm64-osx/lib/pkgconfig/catch2-with-main.pc
-- Fixing pkgconfig file: /Users/benchikbayor/Desktop/onboarding-lab-2/_deps/vcpkg-src/packages/catch2_arm64-osx/lib/pkgconfig/catch2.pc
CMake Error at scripts/cmake/vcpkg_find_acquire_program.cmake:163 (message):
  Could not find pkg-config.  Please install it via your package manager:

      brew install pkg-config
Call Stack (most recent call first):
  scripts/cmake/vcpkg_fixup_pkgconfig.cmake:203 (vcpkg_find_acquire_program)
  /Users/benchikbayor/.cache/vcpkg/registries/git-trees/5796c1c0513a7b49f135e8acdd1976f53e9944ea/portfile.cmake:25 (vcpkg_fixup_pkgconfig)
  scripts/ports.cmake:168 (include)



```
**Additional context**

<details><summary>vcpkg.json</summary>

```
{
  "name": "week-two-lab",
  "version": "1.0.0",
  "description": "Template for week two lab",
  "homepage": "https://github.com/NYU-Processor-Design/nyu-cmake",
  "maintainers": [
    "Vito Gamberini <vito@gamberini.email>"
  ],
  "license": "CC0-1.0",
  "dependencies": [
    "nyu-cmake",
    "catch2"
  ],
  "vcpkg-configuration": {
    "default-registry": {
      "kind": "git",
      "baseline": "5a38b5ec0eee3d1a1a6faab5e944617fee2697cf",
      "repository": "https://github.com/microsoft/vcpkg.git"
    },
    "registries": [
      {
        "kind": "git",
        "baseline": "78f50d1f7f6f21a9fb28b9a7a3cab021e600830c",
        "repository": "https://github.com/NYU-Processor-Design/nyu-registry.git",
        "packages": [
          "nyu-cmake"
        ]
      }
    ]
  }
}

```
</details>
