#include<stdio.h>
int main(){
    int a,b;
    printf("first no.:");
    scanf("%d",&a);
    printf("second no.:");
    scanf("%d",&b);
    int q=a/b;
    int r=a-(b*q);
    printf("the remainnder is: %d",r);
    return 0;
}