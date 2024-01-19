#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n, int r){
    int ans= fact(n)/(fact(r)*fact(n-r));
    return ans;
}
int main(){
    int n ,r;
    cout<<"ENTER THE VALUE OF n and r:"<<endl;
    cin>>n>>r;
    int ans= combination(n,r);
    cout<<"combination is "<<ans<<endl;
    return 0;
}