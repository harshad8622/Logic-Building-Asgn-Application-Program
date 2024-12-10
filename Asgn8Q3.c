#include<stdio.h>
int KMToMeter(int iNo)
{
    int iMeter=0;
    iMeter=iNo*1000;
    return iMeter;

}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Kilometer:\n");
    scanf("%d",&iValue);

    iRet=KMToMeter(iValue);

    printf("KM in Meter is:%d Meter\n",iRet);

    return 0;
}