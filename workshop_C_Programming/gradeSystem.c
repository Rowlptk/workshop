#include<stdio.h>
void main()
{
    int m;
    printf("Enter Your Mark : ");
    scanf("%d",&m);
    if(m>=80 && m<=100)
    {
        printf("Grade A!");
    }
    else if(m>=60 && m<80)
    {
        printf("Grade B!");
    }
    else if(m>=40 && m<60)
    {
        printf("Grade C!");
    }
    else if(m>=0 && m<40)
    {
        printf("Fail!");
    }
    else
    {
        printf("Invalid Marks!");
    }
}
