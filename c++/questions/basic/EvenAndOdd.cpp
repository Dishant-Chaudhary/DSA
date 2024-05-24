//wap to find out no. is even or not
#include<iostream>
using namespace std;

int main(){

    int n,i=2;

    cout<<"Enter any number"<<endl;
    
    cin>>n;
    while (i<n){
        
        if(n%i==0){
        
        cout<<"not prime"<<i<<endl;
      }
     
    else
    {
        cout<<"prime"<<i<<endl;
    }
    i++;
    }
    return 0;
}