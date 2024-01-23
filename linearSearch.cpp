//LINEAR SEARCH
#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return true;
        }
    }
    return false;
}
int main()
{
    int key;
    int size=12;
    int num[12]={30,89,64,72,85,98,44,6,98,72,64,84};
    cout<<"Enter the number to be searched: ";
    cin>>key;
    if(linearSearch(num,size,key)){
        cout<<"yes ,the element is present"<<endl;
    }
    else{
        cout<<"no ,the element is not present"<<endl;
    }
    return 0;
}