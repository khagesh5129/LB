#include<stdio.h>
void Display(int iNo)
{
    if(iNo<10)
    {
        printf("hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;

}