#include<stdio.h>
#include<math.h>
int main(){
  int a, cnt = 0;
  scanf("%d", &a);
  int number = a;
  while(number > 0){
    number = number / 2;
    cnt++;
  }
  int k = a - pow(2, cnt-1);
  if (k == 0)
    printf("%d", a);
  else
    printf("%d", k*2);
  return 0;
}