#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool Check(int iValue,int Arr[],int iSize)
{
    int iCnt=0;
    bool bFlag=false;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iValue)
        {
            bFlag=true;
        }
    }
    return bFlag;
}
int main()
{
    int iNo=0,iLenght=0,iCnt=0;
    int *p=NULL;
    bool bRet=false;

    printf("Enter a Size of Array\n");
    scanf("%d",&iLenght);

    printf("Enter the Number \n");
    scanf("%d",&iNo);

    p=(int*)malloc(iLenght*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("Enter %d Elements\n",iLenght);

    for(iCnt=0;iCnt<iLenght;iCnt++)
    {
        printf("Enter Element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet=Check(iNo,p,iLenght);

    if(bRet==true)
    {
        printf("Number is Present\n");
    }
    else
    {
        printf("Number is not present\n");
    }
    free(p);

    return 0;
}