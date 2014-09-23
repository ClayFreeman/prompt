prompt
======

`prompt` is a lightweight project that allows you to accept input in C++ worry
free.  `prompt` accomplishes this by providing the end user with an interface to
check input data against a test sample using a specified relational operator.

## Usage

To use `prompt`, simply link it to your project and include the `prompt.h`
header.  All of the interface methods should become available to you.

#### Relational Operators

Each of the relational operators in C++ have been mapped to a macro.  See the
table below for mappings.  Alternatively, you can use the
`_PROMPT_RELOP_IRRELEVANT` macro to not test the data at all.

| Operator |                   Macro                  |
|:--------:|:----------------------------------------:|
|   `==`   | `_PROMPT_RELOP_EQUAL_TO`                 |
|   `!=`   | `_PROMPT_RELOP_NOT_EQUAL_TO`             |
|    `<`   | `_PROMPT_RELOP_LESS_THAN`                |
|   `<=`   | `_PROMPT_RELOP_LESS_THAN_OR_EQUAL_TO`    |
|    `>`   | `_PROMPT_RELOP_GREATER_THAN`             |
|   `>=`   | `_PROMPT_RELOP_GREATER_THAN_OR_EQUAL_TO` |

#### Functions
* `char read_char(std::string prompt, int relOp = _PROMPT_RELOP_IRRELEVANT, char
  test = ' ', std::string error = _PROMPT_DEFAULT_ERROR)` - Reads a `char` from
  the end user and returns the value.
* `double read_char(std::string prompt, int relOp = _PROMPT_RELOP_IRRELEVANT,
  double test = ' ', std::string error = _PROMPT_DEFAULT_ERROR)` - Reads a
  `double` from the end user and returns the value.
* `int read_char(std::string prompt, int relOp = _PROMPT_RELOP_IRRELEVANT, int
  test = ' ', std::string error = _PROMPT_DEFAULT_ERROR)` - Reads an `int` from
  the end user and returns the value.
* `std::string read_char(std::string prompt, int relOp =
  _PROMPT_RELOP_IRRELEVANT, std::string test = ' ', std::string error =
  _PROMPT_DEFAULT_ERROR)` - Reads a `std::string` from the end user and returns
  the value.
