//sum of all n numbers
#include<iostream>
using namespace std;

int main(){
    int n,i=1,sum=0;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    while (i<=n)
    {
       sum += i;
       i++;
       
    }
    cout<<"Sum of n no. is "<<sum<<endl;
    


    return 0;
}