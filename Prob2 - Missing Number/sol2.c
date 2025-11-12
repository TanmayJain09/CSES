#include<stdio.h>
int main(){
    int n,x,res=0;
    scanf("%d",&n);
    for(int i = 1 ; i<=n ; i++) res^=i;
    for(int i = 0 ; i<n-1 ; i++){
        scanf("%d",&x);
        res^=x;
    }
    printf("%d",res);
    return 0;
}