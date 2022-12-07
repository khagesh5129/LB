#include<stdio.h>
void Display(int iNo, int ifrequency)
{
    int iCnt = 0;
    for (iCnt = 1;iCnt<=ifrequency;iCnt++);
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue=0;
    int iCount=0;

    printf("enter the first number \n");
    scanf("%d",&iValue);

    printf("enter the second number \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;

}