# Code Style

## Conventions

- **Naming:** Use `snake_case` for all identifiers.
- **Macro Naming:** Use `ALL_CAPS` for macros, with underscores for separation.
- **Struct Types:** Use `_t` suffix for structs typedefs, and `_s` suffix for struct tags.
- **Enum Types:** Use `_t` suffix for enums typedefs, and `_e` suffix for enum tags.
- **Include Guards:** Use `#ifndef FILENAME_H` format with all uppercase.
- **Indentation:** Use tabs for indentation.

## Principles

- **Zero is Initialization**  
  Zeroed structs should be valid base states.

- **Avoid the Standard Library**  
  Minimal use of `math.h`, `stdio.h`, `stdlib.h`, `string.h`, `time.h`.  
  Provide internal replacements or minimal abstractions where needed.

- **Minimal Dynamic Allocation**  
  Prefer stack-allocated buffers and structures.

- **Contiguous Memory**  
  Favor data structures that use flat, contiguous memory for better cache locality.

- **Single Responsibility Functions**  
  Each function should do one thing well. Avoid overloading with logic or branching behavior.

- **Minimize Global State**  
  Avoid global variables. Pass state explicitly.

- **Prefer `const` Correctness**  
  Use `const` for parameters and data wherever modification is not needed.

- **Minimal Header Footprint**  
  Avoid including unnecessary headers in public interfaces.

- **C89/C99 Compatible Where Possible**  
  Write code that's portable across compilers and environments. Avoid compiler-specific extensions.

- **Minimize Exposed Types**  
  Only expose types in the header that are necessary for external use.  
  Keep internal data structures and implementation details private to the source file.
