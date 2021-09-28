#include<stdio.h>
int main()
{
    int sum,sub, multiplication,modulus;
    int num1, num2;
    double div;

    printf("Enter the numbers separated by commas");
    scanf("%d,%d", &num1,&num2);

    sum= num1-num2;
    sub=num1-num2;
    multiplication=num1 * num2;
    modulus= num1 % num2;
    div=num1 / num2;

    printf("The sum of the numbers is: %d\n", sum);
    printf("The difference between the numbers is: %d\n", sub);
    printf("The multiplication of the numbers is: %d\n", multiplication);
    printf("The division of the numbers is: %f\n", div);
    printf("The modulus is: %d\n", modulus );

    return 0;

}
