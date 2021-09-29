#include <stdio.h>
int main(){
    int num1, num2, answer;
    int operator;
    printf("Enter the first number:\n");
    scanf("%d", &num1);
    printf("Enter the second number:\n");
    scanf("%d", &num2);

    printf("List of operations:\n");

    printf("1. Addition\n, 2.Multiplication\n, 3. Modulus\n, 4 . Division\n ,5 . subtraction");
    printf("Chosen operator:\n", operator);
    scanf("%d", &operator);

    switch (operator)
    {

    case 1:
        answer =num1+num2;
        printf("addition = %d \n", answer);
        goto next;
        break;
    next:
    case 2:
       answer =num1*num2;
        printf("multiplication = %d \n", answer);
        goto next1;
        break;
   next1:
    case 3:
        answer =num1%num2;
        printf("modulus = %d \n", answer);
        goto next2;
        break;
   next2:
    case 4:
        answer =num1/num2;
        printf("division is= %d\n", answer);
        break;
        goto next3;
    next3:
    // case 5;
    //     answer=num1-num2;
    //     printf("The difference is =%d\n", answer);
    //     break;

    default:
        break;
    }
    return 0;
}
