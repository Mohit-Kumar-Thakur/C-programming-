#include<stdio.h>
int main(){
    int n;
    printf("Number ");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a,b;
            if (i<=n) a=i;
            else a=2*n-i;
            if (j<=n) b=j;
            else b=2*n-j;
            if (a<b) printf("%d ",a);
            else printf("%d ",b);
        }
        printf("\n");
    }
    return 0;
}