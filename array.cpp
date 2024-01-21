//ARRAY
#include<iostream>
using namespace std;
int main(){
    //initialization
    int first[5]={2,4,5,6,7}; // an array of index 4 is made 
    //indexing
    cout<<first[0]<<endl;
    //accessing the whole array
    int size=8;
    int second[size]={1,2,3,4,5,6,7,8};
    for(int i=0;i<size;i++){
        cout<<"second ["<<i<<"] is"<<second[i]<<endl;
    }
    //initializing an array with same number eg{2,2,2,2,2,2,2,2,2} or {0,0,0,0,0,0,0}
    //{0,0,0,0,0,0,0,0,0,0,0} 
    cout<<"array initialized with 0"<<endl;
    int n=10;
    int zero[n]={0}; 
    for(int i=0;i<n;i++){
        cout<<zero[i]<<" ";
    }
    //array initialized with any other number
    cout<<endl<<"array initalized with any other number suppose 3"<<endl;
    int m=6;
    int num[m]={3};
    for(int i=0;i<m;i++){
        cout<<num[i]<<" ";
    }
    //array initialized without any number
    cout<<endl<<"array without any number"<<endl;
    int a=15;
    int nonum[a]={};
    for(int i=0;i<a;i++){
        cout<<nonum[i]<<" ";
    }
    return 0;
}