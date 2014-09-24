#ifndef _PROMPT_CPP
#define _PROMPT_CPP

#include "prompt.h"

/**
  * Internal functions for processing requests
  */

template<class _PROMPT_T_AUTO>
static bool _prompt_proficient(int relOp, _PROMPT_T_AUTO ret,
    _PROMPT_T_AUTO test) {
  // Check each relational operator and its respective test
  return (relOp == _PROMPT_RELOP_IRRELEVANT
    || (relOp == _PROMPT_RELOP_EQUAL_TO && ret == test)
    || (relOp == _PROMPT_RELOP_NOT_EQUAL_TO && ret != test)
    || (relOp == _PROMPT_RELOP_LESS_THAN && ret < test)
    || (relOp == _PROMPT_RELOP_LESS_THAN_OR_EQUAL_TO && ret <= test)
    || (relOp == _PROMPT_RELOP_GREATER_THAN && ret > test)
    || (relOp == _PROMPT_RELOP_GREATER_THAN_OR_EQUAL_TO && ret >= test));
}

template<class _PROMPT_T_AUTO>
static _PROMPT_T_AUTO _prompt_read_item(std::string prompt, int relOp,
    _PROMPT_T_AUTO test, std::string error) {
  // Setup variables
  _PROMPT_T_AUTO ret;
  bool proficient = false; // Initialize to false
  do {
    // Prompt and read
    std::cout << prompt;

    if (typeid(ret) == typeid(std::string)) {
      // For std::string, use std::getline()
      std::getline(std::cin, (std::basic_string<char>&)ret);
    }
    else {
      // For normal types, use stream extraction
      std::cin >> ret;
      // Ignore '\n'
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Check proficiency of input
    proficient = (!std::cin.fail() && _prompt_proficient(relOp, ret, test));

    if (std::cin.fail()) {
      // Clean the input stream in case of invalid data
      std::cin.clear();
    }

    if (!proficient) {
      // Show error message
      std::cout << error;
    }
  } while (!proficient); // Loop while not proficient
  return ret;
}

/**
 * Friendly interface functions for other linked objects
 */

// Read a single character and validate
char read_char(std::string prompt, int relOp, char test, std::string error) {
  return _prompt_read_item(prompt, relOp, test, error);
}

// Read a double and validate
double read_double(std::string prompt, int relOp, double test,
    std::string error) {
  return _prompt_read_item(prompt, relOp, test, error);
}

// Read an integer and validate
int read_int(std::string prompt, int relOp, int test, std::string error) {
  return _prompt_read_item(prompt, relOp, test, error);
}

// Read a string and validate
std::string read_string(std::string prompt, int relOp, std::string test,
    std::string error) {
  return _prompt_read_item(prompt, relOp, test, error);
}
#endif
