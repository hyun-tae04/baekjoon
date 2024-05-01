#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str1, const char* str2) {
    int len = strlen(str1); 
    char* answer = (char*)malloc(len * 2 + 1); 
    int index = 0;
    
    for (int i = 0; i < len; i++) {
        answer[index++] = str1[i]; 
        answer[index++] = str2[i];
    }
    
    answer[index] = '\0'; 
    return answer;
}

int main() {
    char str1[11], str2[11];
    
    scanf("%s %s", str1, str2); 
    printf("결과: %s\n", solution(str1, str2));
    return 0;
}