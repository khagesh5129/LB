#include<stdio.h>

int Display(int value )
{


    int i = 0;

    for (i = 1; i <= value ; i++)
    {

        printf("%d\n",i);
    }
}


int main()

{

int no = 0;

    printf("Enter the number\n");
    scanf("%d",&no);
Display(no);



}