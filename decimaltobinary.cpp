#include<iostream>
#include<math.h>
using namespace std;
int main() {
    //we take a decimal as input
    int n;
    cin >> n;
    float ans  = 0;
    int i = 0;
    while(n != 0 ) {

        int bit  = n & 1;
        cout<<bit<<endl;
        /*ans= ans*10+bit;*/ // this can also be used 
        ans=(bit*pow(10,i))+ans;//this is the formula
        n = n >> 1;
        i++;
    }
    cout<<" Answer is " << ans << endl;
    return 0;
}