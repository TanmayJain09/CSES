#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n , x ;
    cin>>n;

    int xor_all = 0 , xor_input = 0;
    for(int i=1  ; i<=n ; i++) xor_all^=i;
    for(int i=0 ; i<n-1 ; i++) cin>>x , xor_input^=x;
    cout<<(xor_all^xor_input);
    return 0;
}