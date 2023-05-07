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

#include <iostream>

#include <cmath>

#include "headerExceptions.hpp"

//Para generar excepciones;
float raiz(int a) {
  if (a == -1) {
    throw std::logic_error("No se puede calcular la raiz cuadrada de -1");
  }
  return sqrt(a);

}

int valor(int i) {
  int arr[3] = {
    1,
    2,
    3
  };
  if (i > 2) {
    throw std::range_error("El indice esta fuera del rango");
  }
  return arr[i];
}

int division(int a, int b) {
  if (b == 0) {
    throw std::invalid_argument("El divisor no puede ser cero");
  }
  return a / b;
}

int main() {

  try { //Codigo que puede generar una excepcion.
    throw MyException(); //Lanza la excepcion.
  } catch (std::exception & e) { //maneja la excepcion.
    std::cout << "Error: " << e.what() << std::endl;
  }

  //Excepcion 1: logic_error.
  try { //Codigo que puede generar una excepcion.
    int a = -1;
    float r = raiz(a);

  } catch (std::exception & e) { //maneja la excepcion.
    std::cout << "Error: " << e.what() << std::endl;
  }

  //Excepcion 2: range_error
  try { //Codigo que puede generar una excepcion.
    int i = 3;
    int v = valor(i);
  } catch (std::exception & e) { //maneja la excepcion.
    std::cout << "Error: " << e.what() << std::endl;
  }

  //Excepcion 3: logic_error.
  try { //Codigo que puede generar una excepcion.
    int a = 1;
    int b = 0;
    int c = division(a, b);
  } catch (std::exception & e) { //maneja la excepcion.
    std::cout << "Error: " << e.what() << std::endl;
  }

  return 0;
}