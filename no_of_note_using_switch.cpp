#include<iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"Enter the amount"<<endl;
    cin>>amount;
    //for 100rs note
    int note=amount/100;
    switch (note)
    {
    case 0: cout<<"0 note of 100"<<endl;
        break;
    
    default:
        cout<<"NUMBER OF 100rs NOTE REQIURED ARE: "<<note<<endl;
        break;
    }
    amount=amount-(note*100);
    //for 50rs note
    note=amount/50;
    switch (note)
    {
    case 0: cout<<"0 note of 50"<<endl;
        break;
    
    default:
        cout<<"NUMBER OF 50rs NOTE REQIURED ARE: "<<note<<endl;
        break;
    }
    amount=amount-(note*50);
    //for 20 rs note
    note=amount/20;
    switch (note)
    {
    case 0: cout<<"0 note of 20"<<endl;
        break;
    
    default:
        cout<<"NUMBER OF 20rs NOTE REQIURED ARE: "<<note<<endl;
        break;
    }
    amount=amount-(note*20);
    //for 10rs note;
    note=amount/10;
    switch (note)
    {
    case 0: cout<<"0 note of 10"<<endl;
        break;
    
    default:
        cout<<"NUMBER OF 10rs NOTE REQIURED ARE: "<<note<<endl;
        break;
    }
    return 0;
}