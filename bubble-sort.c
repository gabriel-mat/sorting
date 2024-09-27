#include <stdio.h>

#define MAX_SIZE 100

int main(){
  int array[MAX_SIZE];
  int size, swap;

  printf("array size > ");
  scanf("%d", &size);

  printf("insert the array > ");

  for(int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  for(int i = 0; i < size; i++){
    for(int j = 0; j < size - i - 1; j++){
      if(array[j] > array [j+1]){
        swap = array[j];
        array[j] = array[j+1];
        array[j+1] = swap;
      }
    }
  }
  
  printf("sorted array > ");
  for(int i = 0; i < size; i++)
    printf("%d ", array[i]);
  printf("\n");
return 0;
}
