#include<stdio.h>
void mul(int x,int y);
int main(){
 int a,b;
 printf("Enter the number :");
 scanf("%d",&a);
 printf("Enter the second number :");
 scanf("%d",&b);
 mul(a,b);
}

void mul(int x,int y){
    int t= x+y;
    int v=x-y;
    printf("SUM is :%d\n",t);
    printf("subtraction is :%d\n",v);
}

// Ans:- Enter the number :40
// Enter the second number :30
// SUM is :70
// subtration is :10
//--------------------------------------------------------------------

