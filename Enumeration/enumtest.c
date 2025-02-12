#include <stdio.h>

int main(){


enum DiasSemana {
  Lunes,
  Martes,
  Miercoles,
  Jueves,
  Viernes,
  Sabado,
  Domingo,

  };




// Defining a "Weekdays" enum variable 
enum DiasSemana EnumName = Sabado;       // 4

// Check the value of "EnumName"
switch (EnumName){
    case Lunes:
      printf("Today Is Monday !\n");
      break;
    case Martes:
      printf("Today Is Tuesday !\n");
      break;
    case Miercoles:
      printf("Today Is Wednesday !\n");
      break;
    case Jueves:
      printf("Today Is Thursday !\n");
      break;
    case Viernes: printf("Today Is Friday !\n"); 
      break;
    case Sabado:
      printf("Today Is Saturday !\n");
      break;
    case Domingo:
      printf("Today Is Sunday !\n");
      break;
    default:
      break;
}



}
