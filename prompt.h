#ifndef _PROMPT_H
#include <iostream>
#include <limits>
#include <string>
#include <typeinfo>
#endif

#ifndef _PROMPT_DEFAULT_ERROR
#define _PROMPT_DEFAULT_ERROR "Invalid input.\n"
#endif

#ifndef _PROMPT_RELOP_IRRELEVANT
#define _PROMPT_RELOP_IRRELEVANT 0
#endif

#ifndef _PROMPT_RELOP_EQUAL_TO
#define _PROMPT_RELOP_EQUAL_TO 1
#endif

#ifndef _PROMPT_RELOP_NOT_EQUAL_TO
#define _PROMPT_RELOP_NOT_EQUAL_TO 2
#endif

#ifndef _PROMPT_RELOP_LESS_THAN
#define _PROMPT_RELOP_LESS_THAN 3
#endif

#ifndef _PROMPT_RELOP_LESS_THAN_OR_EQUAL_TO
#define _PROMPT_RELOP_LESS_THAN_OR_EQUAL_TO 4
#endif

#ifndef _PROMPT_RELOP_GREATER_THAN
#define _PROMPT_RELOP_GREATER_THAN 5
#endif

#ifndef _PROMPT_RELOP_GREATER_THAN_OR_EQUAL_TO
#define _PROMPT_RELOP_GREATER_THAN_OR_EQUAL_TO 6
#endif

#ifndef _PROMPT_CPP
#define _PROMPT_CPP
#include <string>
extern char read_char(std::string prompt, int relOp = _PROMPT_RELOP_IRRELEVANT,
  char test = ' ', std::string error = _PROMPT_DEFAULT_ERROR);
extern double read_double(std::string prompt,
  int relOp = _PROMPT_RELOP_IRRELEVANT, double test = 0,
  std::string error = _PROMPT_DEFAULT_ERROR);
extern int read_int(std::string prompt, int relOp = _PROMPT_RELOP_IRRELEVANT,
  int test = 0, std::string error = _PROMPT_DEFAULT_ERROR);
extern std::string read_string(std::string prompt,
  int relOp = _PROMPT_RELOP_IRRELEVANT, std::string test = " ",
  std::string error = _PROMPT_DEFAULT_ERROR);
#endif
