#ifndef HEADER_Exceptions_HPP
#define HEADER_Exceptions_HPP

/*se utiliza la clase exception de la
librería estándar para crear una excepción personalizada mediante herencia*/
class MyException : public std::exception {
public: 
  //Devuelve un puntero constante a una cadena de caracteres que describren el error.
  const char* what() const throw(); //
};

#endif /* HEADER_Exceptions_HPP */