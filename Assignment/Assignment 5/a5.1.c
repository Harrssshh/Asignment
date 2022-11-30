#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter your salary");
    scanf("%f",&a);
    b=0.50*a;
    printf("amans dearness allowance is %f\n",b);
    c=0.20*a;
    printf("amans house rent is : %f\n",c);
    d=a+b+c;
    printf("amans total gross salary is %f\n",d);
    return 0;
}
