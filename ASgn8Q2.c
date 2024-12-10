#include<stdio.h>
double RectArea(float fHeigth,float fWidth)
{
    double dArea=0;
    dArea=fWidth*fHeigth;
    return dArea;

}
int main()
{
    float fValue1=0,fValue2=0;
    double dRet=0;

    printf("Enter height of Rectangle:\n");
    scanf("%f",&fValue1);

    printf("Enter width of Rectangle:\n");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);

    printf("Area of Rectangle is:%lf",dRet);

    return 0;
}