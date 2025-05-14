# Code Style

## Conventions

- **Naming:** Use `snake_case` for all identifiers.
- **Macro Naming:** Use `ALL_CAPS` for macros, with underscores for separation.
- **Struct Types:** Use `_t` suffix for typedefs, and `_s` suffix for struct tags.
- **Enum Types:** Use `_e` suffix for typedefs, and `_s` suffix for struct tags.
- **Include Guards:** Use `#ifndef FILENAME_H` format with all uppercase.
- **Indentation:** Use tabs for indentation.

## Principles

- **Zero is Initialization**  
  Zeroed structs should be valid "null" or base states.

- **Avoid the Standard Library**  
  Minimal use of `stdlib.h`, `string.h`, or dynamic memory. Provide internal replacements or minimal abstractions where needed.

- **No Dynamic Allocation**  
  Prefer static or stack-allocated buffers and structures.

- **Contiguous Memory**  
  Favor data structures that use flat, contiguous memory for better cache locality.
