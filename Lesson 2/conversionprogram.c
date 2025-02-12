// Necesitamos crear un programa de conversion de temperatura de C° a F°

#include <stdio.h> //Importamos lib standar input & output 

int main() {  //Funcion Principal


  int fahr[] = {32, 50, 86, 140, 112};
  int celsius;
  int x;

    for (x = 0; x < 5; x++){
    celsius = (fahr[x]- 32) * 5 / 9;
  
      printf("%d\n", celsius);

    }
//  for (i = 0; i < 3; i++)
//  {

//printf("%d\n",fahr[i]);

//  }
}
