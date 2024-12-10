#include<stdio.h>

void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hellow");
    }
    else
    {
        printf("Demo");
    }

}

int main()
{
    int iValue=0;

    printf("Enter a Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}