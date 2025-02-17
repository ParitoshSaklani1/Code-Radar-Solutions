#include<stdio.h>
int main(){
    char a;
    scanf("%c", &a);
    case(a){
        case "A":
        printf("Excellent");
        break;
        case "B":
        printf("Good");
        break;
        case "C":
        printf("Average");
        break;
        case "D":
        printf("Below Average");
        break;
        case "F":
        printf("Fail");
        break;
        default:
        printf("Invalid grade");
        break;
    }return 0;
}