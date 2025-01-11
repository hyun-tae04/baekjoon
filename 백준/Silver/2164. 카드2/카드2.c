#include<stdio.h>
#include<math.h>
int main(){
  int a;
  scanf("%d", &a);
  int cnt = log2(a);
  printf("%d", (a == (1 << cnt)) ? a : (a - (1 << cnt)) * 2);
  return 0;
}
