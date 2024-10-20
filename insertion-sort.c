#include <stdio.h>

#define MAX_SIZE 1000

int main() {
  int array[MAX_SIZE];
  int size, value, hole;

  printf("array size: ");
  scanf("%d", &size);

  if (size < 1) {
    printf("invalid size\n");
    return 0;
  }

  printf("complete the array: ");

  for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  // insertion sort //

  for (int i = 1; i < size; i++) {
    value = array[i];
    hole = i;

    while (hole > 0 && array[hole - 1] > value) {
      array[hole] = array[hole - 1];
      hole--;
    }

    array[hole] = value;
  }

  printf("sorted array: ");

  for (int i = 0; i < size; i++)
    printf("%d ", array[i]);

  printf("\n");
  return 0;
}