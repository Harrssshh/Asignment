#include<stdio.h>
int main()
{
    int n;
    printf("enter the number you want to find the sum of pair : ");
    scanf("%d",&n);

    while(n>0){
        int a,b;
        printf("enter first number :");
        scanf("%d",&a);
        printf("enter secound number :");
        scanf("%d",&b);
        int c=a+b;
        printf("the sum of both the number is : %d\n",c);
    }
    return 0;
}
