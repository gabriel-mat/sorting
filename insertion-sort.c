#include <stdio.h>

#define MAX_SIZE 100

int main(){
  int array[MAX_SIZE];
  int size, value, hole;
  
  printf("array size > ");
  scanf("%d", &size);

  printf("array: ");
  for(int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  for(int i = 0; i < size; i++){
    value = array[i];
    hole = i;

    while(hole > 0 && array[hole - 1] > value){
      array[hole] = array[hole - 1];
      hole--;
    }

    array[hole] = value; 
  }

  printf("sorted array: ");

  for(int i = 0; i < size; i++)
    printf("%d ", array[i]);
  printf("\n");

  return 0;
}
