/**
Licencia MIT

Copyright (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023

Se concede aquí, sin cargo, a cualquier persona que obtenga una copia de este
software y los archivos de documentación asociados (el "Software"), para
utilizar el Software sin restricciones, incluyendo, sin limitación, los
derechos para usar, copiar, modificar, fusionar, publicar, distribuir,
sublicenciar y/o vender copias del Software, y para permitir a las personas a
quienes se les proporcione el Software que lo hagan, sujeto a las siguientes
condiciones:

El aviso de copyright anterior y este aviso de permiso se incluirán en todas
las copias o partes sustanciales del Software.

EL SOFTWARE SE PROPORCIONA "TAL CUAL", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O
IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN,
IDONEIDAD PARA UN PROPÓSITO PARTICULAR Y NO INFRACCIÓN. EN NINGÚN CASO LOS
AUTORES O TITULARES DEL COPYRIGHT SERÁN RESPONSABLES POR NINGUNA RECLAMACIÓN,
DAÑO O OTRA RESPONSABILIDAD, YA SEA EN UNA ACCIÓN CONTRACTUAL, AGRAVIO O DE
OTRO MODO, QUE SURJA DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O EL USO U
OTROS ACUERDOS EN EL SOFTWARE.
*/

#include <iostream> //Necesario para la entrada y salida de datos a traves de la terminal.
 //#include <vector> Innecesario para la copilacion.
//#include <algorithm> Innecesario para la copilacion.
//#include <stdexcept> Innecesario para la copilacion porque no se genera un error en el try.

#include <functional> //Necesario para std::function.

//Implementación completa de una clase pila mediante templates.
template < typename T >
  class Stack {
    private:
      //Se crea una lista tipo T llamado data_.
      std::vector < T > data_;

    public:
      //Agrega un el parametro value al final de la lista.
      void push(T value) {
        data_.push_back(value);
      }

    //Elmina el ultimo eleemnto de la lista y devuelve su referencia.
    T pop() {
      //Si la lista esta vacia lanza una excepción.
      if (data_.empty()) {
        throw std::out_of_range("Stack is empty");
      }

      //Asigna a value la referencia del ultimo elemento de la lista.
      T value = data_.back();
      //Elimina el ultimo elemento de la lista.
      data_.pop_back();
      //Devuelve value.
      return value;
    }

    //Elimina todos los elementos de la lista.
    void clear() {
      data_.clear();
    }

    //Devuelve true si la lista está vacía, false en caso contrario.
    bool empty() const {
      return data_.empty();
    }

    //Devuelve el tamaño de la lista.
    std::size_t size() const {
      return data_.size();
    }

    //Aplica la funcion func a todos los elementos de la lista.
    void foreach(const std:: function < void(T & ) > & func) {
      //Toma de rango toda la lista y le aplica una funcion a cada elemento.
      std::for_each(data_.begin(), data_.end(), func);
    }
  };

int main() {
  Stack < int > s; //Define una pila tipo int llamada s.
  s.push(2021); //Agrega un el parametro 2021 al final de la lista.
  s.push(2054); //Agrega un el parametro 2054 al final de la lista.
  s.push(6524); //Agrega un el parametro 6524 al final de la lista.

  //Imprime el tamaño de la lista.
  std::cout << "Stack size: " << s.size() << std::endl;

  //Imprime los valores en de menor indice a mayor
  s.foreach([](int & value) {
    std::cout << "Value: " << value << std::endl;
  });

  //Manejo de execepciones.
  try { //Bloque de codigo que puede generar un error.
    while (!s.empty()) { //Mientras la pila s no este vacia.
      int value = s.pop(); //Elimina el ultimo elemento y devuelve su referencia.
      std::cout << "Popped value: " << value << std::endl; //Imprime el elemento que fue eliminado
    }
    std::cout << "Stack size: " << s.size() << std::endl; //Imprime el tamaño de la lista
  } catch (const std::exception & e) { //Si ocurre un error.
    std::cerr << "Exception: " << e.what() << std::endl; //Imprime la exepcion. exception::what()  devuelve la cadena de caracteres que describen la exepcion
  }

  //Se imprime dos saltos de linea
  std::cout << std::endl;
  std::cout << std::endl;

  //se agrega una nueva instancia 
  Stack < float > f; //Define una pila tipo float llamada f.
  f.push(20.21); //Agrega un el parametro 20.21 al final de la lista.
  f.push(20.54); //Agrega un el parametro 20.54 al final de la lista.
  f.push(65.24); //Agrega un el parametro 65.24 al final de la lista.

  //Imprime el tamaño de la lista.
  std::cout << "Nueva pila con datos tipo float:" << std::endl;
  std::cout << "Stack size: " << f.size() << std::endl;

  //Imprime los valores en de menor indice a mayor
  f.foreach([](float & value) {
    std::cout << "Value: " << value << std::endl;
  });

  std::cout << std::endl;
  std::cout << std::endl;

  /*try { //Bloque de codigo que genera un error.
    f.clear(); //Se vacia la lista.
    f.pop(); //Se intenta sacar un valor de una lista vacia.
  } catch (const std::exception & e) { //Si ocurre un error.
    std::cerr << "Exception: " << e.what() << std::endl; //Imprime la exepcion. exception::what()  devuelve la cadena de caracteres que describen la exepcion
  }*/

  return 0;
}