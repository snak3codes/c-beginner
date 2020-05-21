# C Standard Library

## <stdef.h>
Contains some standard definitions

* __NULL__ = A null pointer constant
* __offsetof__ (structure, member) = The offset in bytes of the member *member* from the start of the structure *structure*; the type of the result is __size_t__
* __ptrdiff_t__ = The type of integer produced by subtracting two pointers
* __size_t__ = The type of integer produced by the __sizeof__ operator
* __wchar_t__ = The type of the integer required to hold a wide character

---
## <limits.h>
Contains various implementation-defined limits for character and integer data types.

---

## <stdbool.h>
File contains definitions for working with Boolean variables (type _Bool)
* __true__ defined as 1
* __false__ defined as 0
* __bool__ defined as _Bool