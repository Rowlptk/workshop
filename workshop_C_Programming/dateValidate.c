/*y ==> 1000 to 9999
m ==> 1-12
d ==> 1-30
*/
void main()
{
    int y,m,d;
    printf("Enter a Date [yyyy-mm-dd] : ");
    scanf("%d-%d-%d",&y,&m,&d);
    if(y>=1000 && y<=9999)
    {
        if(m>=1 && m<=12)
        {
            if(d>=1 && d<=30)
            {
                printf("Date is valid!");
            }
            else
            {
                printf("Day is invalid!")
            }
        }
        else
        {
            printf("Year is valid but month is invalid!");
        }
    }
    else
    {
        printf("Invalid Year!");
    }

}
