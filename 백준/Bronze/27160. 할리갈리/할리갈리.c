#include<stdio.h>
#include<string.h>
int main() {
  int n, x, s=0, b=0, l=0, p=0;
  char S[100];
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%s %d", S, &x);  
    if (strcmp(S, "BANANA") == 0) {
      b += x;
    } 
    else if (strcmp(S, "STRAWBERRY") == 0) {
      s += x;
    } 
    else if (strcmp(S, "LIME") == 0) {
      l += x;
    } 
    else {
      p += x;
    }
  }
  
  if(s == 5 || b == 5 || l == 5 || p == 5)
    printf("YES");
  
  else
    printf("NO");


  return 0;
}
