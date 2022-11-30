#include<stdio.h>
int main(){
    int cprice,sprice;
    
    printf("enter cost price :");
    scanf("%d",&cprice);
    
    printf("enter Selling Price :");
    scanf("%d",&sprice);
    
    if(cprice>sprice){
        int loss=cprice-sprice;
        float lp=(loss*100)/cprice;
        printf("the lost percentage is : %f",lp);
    }
    else{
        int profit=sprice-cprice;
        float pp=(profit*100)/cprice;
        printf("the profit percentaeg is : %f",pp);
    }
    return 0;
}
