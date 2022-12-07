#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    while(iNo>iCnt)
    {
        printf("*");
        iNo--;

    }
    printf("\n");
}
int main()
{
    int iValue=0;
    printf("enter the number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;

}