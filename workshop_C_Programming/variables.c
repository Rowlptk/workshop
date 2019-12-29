#include<stdio.h>
/*
2   +    3   =   5
num1+ num2   =   sum
*/
// +ve 0 -ve
// % ==> format specifier
void main()
{
    int num1, num2, sum;
    //num1 = 3456;
    //num2 = 7982;
    printf("Enter First Number : ");
    scanf("%d",&num1);
    printf("Enter Second Number : ");
    scanf("%d",&num2);

    sum = num1 + num2;

    printf("The Sum is %d\n",(num1+num2));
    printf("%d + %d = %d",num1,num2,sum);
}







