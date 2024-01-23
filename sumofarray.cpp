#include<iostream>
using namespace std;
int getSum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int num[100];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<getSum(num,size)<<endl;
    return 0;
}