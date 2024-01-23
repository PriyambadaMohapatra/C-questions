#include<iostream>
using namespace std;
void inputArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
}
void alternateSwap(int arr[],int size){
    for(int i=0;i+1<size;i++){
        if(i%2==0){
            swap(arr[i],arr[i+1]);
           /* int swap= arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=swap;*/
        }
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int num[100];
    cout<<"Enter the values of array: ";
    inputArray(num,size);
    alternateSwap(num,size);
    printArray(num,size);
    return 0;
}
