#include<stdio.h>

void DisplayFactor(int iNo )
{

  int i = 0;
 for( i = 2; i <= iNo ; i++)
 {

if ((iNo%i==0) && (i % 2 == 0))
{
printf("%d\n",i);
}

 } 
}


int main()
{

    int iValue = 0;

    printf("Enter number\n ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;

}