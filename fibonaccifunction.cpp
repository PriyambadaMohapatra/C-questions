#include<iostream>
using namespace std;
void fibonacci(int num){
    int num1=0;
    int num2=1;
    int sum =0;
    cout<<num1<<" "<<num2<<" ";
    for(int i=1;i<=num;i++){
        sum = num1+num2;
        cout<<sum<<" ";
        num1=num2;
        num2=sum;
    }
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fibonacci(n);
    return 0;
}