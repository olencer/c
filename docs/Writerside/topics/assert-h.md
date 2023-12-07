# assert.h

## Detail

| Assertions    |                |                       |
|:--------------|:---------------|:----------------------|
| assert        | function macro |                       |
| static_assert | keyword macro  | (C11)(removed in C23) |

## Usage

### assert

Aborts the program if the user-specified condition is not true. May be 
disabled for release builds.

```C
assert(expersion)
```

#### code {id="assert-code"}

```C
    assert(("Not define NDEBUG macro.", 0));
    printf("Define NDEBUG macro.\n");
```

#### run {id="assert-run"}

```Shell
cmake -D CMAKE_BUILD_TYPE="Debug" -B ./debug
# CMAKE_BUILD_TYPE="Debug"
# CMAKE_C_FLAGS_Debug="-g"

cmake -D CMAKE_BUILD_TYPE="Release" -B ./release
# CMAKE_BUILD_TYPE="Release"
# CMAKE_C_FLAGS_RELEASE="-O3 -DNDEBUG"

cmake --build ./debug && ./debug/assert
# assert: /mnt/f/c/code/assert/assert/main.c:6: main: Assertion `("Not define NDEBUG macro.", 0)' failed.

cmake --build ./release && ./release/assert
# Define NDEBUG macro.
```

### static_assert

Issues a compile-time diagnostic if the value of a constant expression is false.

```C
static_assert(expresion)
static_assert(expresion, message)
```

#### code {id="static-assert-code"}

main.c
```C
// static_assert(sizeof(void *) == 8);
    static_assert(sizeof(void *) == 8, "64-bit platform is not supported.");
    printf("64-bit architecture platform is supported.\n");
```

CMakeLists.txt

> add_compile_options(-m32)
{style="warning"}

```CMake
if (32_DEBUG AND "${CMAKE_C_COMPILER_ID}" MATCHES "GNU")
    add_compile_options(-m32)
endif ()
```
#### run {id="static-assert-run"}

```shell
cmake -D 32_DEBUG="on" -B ./build-x86
cmake -D 32_DEBUG="off" -B ./build-x64

cmake --build ./build-x86
# /mnt/f/c/code/assert/static_arrest/main.c:6:5: error: static assertion failed
# /mnt/f/c/code/assert/static_arrest/main.c:7:5: error: static assertion failed: "64-bit architecture platform is not supported."

cmake --build ./build-x64 && ./build-x64/static-assert
# 64-bit architecture platform is supported.
```

<seealso>
    <!--Provide links to related how-to guides, overviews, and tutorials.-->
</seealso>