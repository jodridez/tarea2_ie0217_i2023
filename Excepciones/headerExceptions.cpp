#include <exception>
#include "headerExceptions.hpp"



const char* MyException::what() const throw() {
    return "My custom exception";
  }