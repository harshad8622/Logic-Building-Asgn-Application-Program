#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char ch)
{
    bool bFlag=false;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        bFlag=true;
    }
    else
    {
        bFlag= false;
    }
    return bFlag;
}
int main()
{
    char cValue='\0';
    bool bRet=false;

    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet=ChkVowel(cValue);

    if(bRet==true)
    {
        printf("It is Vowel");
    }
    else{
        printf("It is not vowel\n");
    }

    return 0;
}
