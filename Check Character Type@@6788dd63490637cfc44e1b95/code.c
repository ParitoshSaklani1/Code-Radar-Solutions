#include<stdio.h>
int main(){
    char a;
    scanf("%c", &a);
    if ((ch >="a"&& ch<="z")||(ch>="A"&&ch<="Z")){
        if (a=="a"||a=="e"||a=="i"||a=="o"||a=="u"||
        a=="A"||a=="E"||a=="I"||a=="O"||a=="U"){
            printf("Vowel");
        }else {
            printf("Consonant");
        }
    } else if (ch>="0"&& ch<="9"){
        printf("Digit");
    } else {
        printf("Special Character");
    }return 0;
}