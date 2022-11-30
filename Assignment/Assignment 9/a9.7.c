#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter side of triangle :");
    scanf("%d",&a);
    printf("enter side of triangle :");
    scanf("%d",&b);
    printf("enter side of triangle :");
    scanf("%d",&c);
    if(a==b && b==c && c==a){
        printf("triangle is an equilateral triangle ");
    }
    else if(a==b && b!=c || b==c && b!=a || a==c && a!=b){
        printf(" triangle is an isoceles triangle ");
    }
    else if( a!=b && b!=c){
        printf(" triangle is an scalene triangle ");
    }
    return 0;
}
