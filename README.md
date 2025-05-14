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
  Minimal use of `math.h`, `stdio.h`, `stdlib.h`, `string.h`, `time.h`. Provide internal replacements or minimal abstractions where needed.

- **Minimal Dynamic Allocation**  
  Prefer stack-allocated buffers and structures.

- **Contiguous Memory**  
  Favor data structures that use flat, contiguous memory for better cache locality.
