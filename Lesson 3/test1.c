#include <stdio.h>
#include <string.h>


typedef struct Persona{
  char nombre[50];
  char apellidos[50];
  int edad;
  int sexo;

} Persona;

int main(){
  Persona persona1; 

  printf("Ingrese el/los nombres de la persona:\n");
  scanf("%50[^\n]", persona1.nombre);
  getchar();  // Limpia el buffer del salto de línea

  printf("Su nombre es: %s\n", persona1.nombre);

  printf("Ingrese los apellidos de la persona:\n");
  scanf("%50[^\n]", persona1.apellidos);
  getchar();

  printf("Sus apellidos son: %s\n", persona1.apellidos);

};
