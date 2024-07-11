#include <stdio.h>

#define SIZE 100

int main(void) {
  int n, x, y;
  int num1 = 0;
  int grid[SIZE][SIZE] = {0};

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &x, &y);
    for (int j = x; j < x + 10; j++) {
      for (int k = y; k < y + 10; k++) {
        grid[j][k] = 1;
      }
    }
  }
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      if (grid[i][j] == 1) 
        num1++;
    }
  }
  printf("%d\n", num1);
  return 0;
}