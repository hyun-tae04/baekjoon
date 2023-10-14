#include<stdio.h>
int main(){
    char grade, pm;
    float last;
    scanf("%c%c", &grade, &pm);
    if(grade == 'F')
        printf("0.0");

    switch (grade){
    case 'A':
        switch (pm)
        {
            case '+':
                last = 4.3;
                break;
            case '0':
                last = 4.0;
                break;
            case '-':
                last = 3.7;
                break;
        }printf("%.1f", last);
        break;
    case 'B':
        switch (pm)
        {
            case '+':
                last = 3.3;
                break;
            case '0':
                last = 3.0;
                break;
            case '-':
                last = 2.7;
                break;
        }printf("%.1f", last);
        break;
    case 'C':
        switch (pm)
        {
            case '+':
                last = 2.3;
                break;
            case '0':
                last = 2.0;
                break;
            case '-':
                last = 1.7;
                break;
        }printf("%.1f", last);
        break;
    case 'D':
        switch (pm)
        {
            case '+':
                last = 1.3;
                break;
            case '0':
                last = 1.0;
                break;
            case '-':
                last = 0.7;
                break;
        }printf("%.1f", last);
        break;
    }
    return  0;
}