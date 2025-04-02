# Chapter 2

## Adding additional cpp files to main

When dealing with other files besides main, you'd create another cpp file. Inside that file you create whatever vairables or functions that are needed for your project. Then afterward you need to initialize in `main` the same function with its parameters. Without that doing so the program would throw a `error` for `identifier not found`.

## Naming Collisions & Namespaces

When using C++ you can't have two or more identical identifiers. This is because the compiler or linker can't tell the difference between them. This conflict will produce a error.

### Example of Naming Collision

a.cpp:

```cpp
#include <iostream>

void myFcn(int x) {
    std::cout << x;
}
```

main.cpp:

```cpp
void myFcn(int x) {
    std::cout << 2 * x;
}

int main() {
    return 0;
}
```

When compiler starts, it will compile both files individually without conflicts. But once the linker kicks in all the shared identifiers will start to create confilct and make the linker abort with an error.

### Avoid Using Directive

```cpp
#include <iostream>

using namespace std;
```

It's best practice to not ever use `using namespace`. This is due to potential naming conflicts that could easily happen in larger projects.

## Preprocessor

When compiling a project, the compiler goes through each `cpp` file for `preprocessing`. This phase changes some parts of the code. The preprocessing part doesn't change any parts of the files but does so in memeory or using temp files.

Most of what the preprocessor does is just take out the comments & makes sure that the code ends with a newline. Once the preprocessor finishes the end result is called `translation unit`

### Include

When using `#include` within a file, the preprocessor replaces the `#include` with the conents of that file. That content is preprocessed then the rest of the file is then preprocessed.

### Macro defines

`#define` is used to create a macro. There are two types of marcos: `object-like` & `function-like`.

`function-like` macros act like functions. The use of it is considered unsafe.

`object-like` macros can be defined in two ways:

```cpp
#define IDENTIFIER
#define IDENTIFIER substitution_text
```

**BEST PRACTICE**
Macro names should be written in all uppercase letters, with words separated by underscores

## Header files

Header files are used to propagate a bunch of realted forward declarations into code. This allows for code declarations to be down in one place.
