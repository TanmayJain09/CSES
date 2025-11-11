#include <stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    while(1){
        printf("%lld",n);
        if(n==1) break;
        printf(" ");
        if(n%2==0) n/=2;
        else n=n*3+1;
    }
    return 0;
}