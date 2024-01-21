//we have to calculate the number of set bit(1 bit) i.e if a is 3 and b is 2 then toatal set bits are 3
#include<iostream>
#include<math.h>
using namespace std;
int bitConverter(int n){
    //n = 3
    int i=0;
    int ans=0;
    while(n!=0){ //jb tk n i.e 3 zero nhi h tb tkk chalaoo
        int bit=n&1;// to get the bit : 3 =1 1 
        //1. 1 & 1=1 2. 1 & 1= 1
        ans=ans+(bit*pow(10,i)); // 1. 0+(1*10^0)=1 2. 1+(1 * 10^1)=1+10=11;
        n=n>>1; // right shift 1 left 
        i++; // i becomes 1;
    }
    return ans; // ans = 11
}
int bitCount(int n){ // n=3
    int bit=bitConverter(n); // bit = 11
    int count=0;
    while(bit!=0){
        int digit=bit%10; // 11%10 = 1 , 1%10= 1
        if(digit==1){
            count=count+digit; //count=0+1=1 // cout=1+1=2
        }
        bit/=10;//bit = 1;//bit=0
    }
    return count;// count=2;
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans= bitCount(a)+ bitCount(b);
    cout<<"Number of set bits are : "<<ans<<endl;
}