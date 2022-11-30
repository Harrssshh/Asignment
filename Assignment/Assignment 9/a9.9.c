#include<stdio.h>
int main()
{
    int a;
    printf("enter your number :");
    scanf("%d",&a);
    int mod=a%10;
    printf("digit at once place is %d\n",mod);
    int div=a/10;
    int mod2=div%10;
    printf("digit at tens place us %d\n",mod2); 
    if("mod==mod2"){
        printf("digits at once and tense place is equal\n ");
    }
    return 0;
}
