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
    if(a<b+c || b<a+c || c<a+b){
        printf("triangle is valid ");
    }
    else{
        printf("triangle is not valid");
    }
    return 0;
}
