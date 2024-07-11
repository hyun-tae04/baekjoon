#include <stdio.h>
#include <string.h>

int main(void) {
  char letter[100][100]; 
  int len, max=-99;
  for(int i = 0; i < 5; i++) {
    scanf("%s", letter[i]);
    len = strlen(letter[i]);
    if(len > max){
      max = len;
    }
  }

  for(int i = 0; i < max; i++) {
    for(int j = 0; j < 5; j++) {
      if(letter[j][i]=='\0')
        continue;
      printf("%c", letter[j][i]);
    }
  }
  return 0;
}
