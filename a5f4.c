#include <stdio.h>
#include "simpio.h"

int Sum_Cube(int num);
bool IsArmstrong(int num);
int Cube(int n);
int main(){

int num;
for(num=1;num<1000;num++)
{
if (IsArmstrong(num))
{printf("O arithmos %d einai Armstrong \n",num);}
    else
    {printf("O arithmos %d den einai Armstrong \n", num);}
}
system("PAUSE");
return 0;
}
int Sum_Cube(int num)
{
    int dig1,dig2,dig3;

    dig1=num%10;
    dig2=(num%100)/10;
    dig3=(num/100);


    return Cube(dig1)+Cube(dig2)+Cube(dig3);

}
bool IsArmstrong(int num)
{
    if (Sum_Cube(num)==num)
        {return TRUE;}

    {return FALSE;}
}
int Cube (int n)
{ int i;
int prod=1;
for(i=0;i<3;i++)
    prod*=n;
return prod;

}
