#include <stdio.h>

#define MAX_SIZE 100

typedef int iterator;

int main(){
  iterator i, j;
  int array[MAX_SIZE];
  int min_pos, size, swap;

  printf("array size > ");
  scanf("%d", &size); 

  printf("insert the array > ");

  for(int i = 0; i < size; i++){
    scanf("%d", &array[i]);
  }

  for(i = 0; i < size - 1; i++){
    min_pos = i;

    for(j = i + 1; j < size; j++){
      if(array[j] < array[min_pos])
        min_pos = j;
    }  

    swap = array[i];
    array[i] = array[min_pos];
    array[min_pos] = swap;
  }


  printf("sorted array > ");
  for(i = 0; i < size; i++)
    printf("%d ", array[i]);
  printf("\n");

  return 0;
}
