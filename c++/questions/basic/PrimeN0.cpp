// prime or not
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
 bool a= 1;
 for (int i = 2; i <n; i++)
 {
    if (n%i==0)
    {
        a=0;
        break;
    }
    
 }
 if (a==0)
 {
    cout<<n <<" is not a prime no."<<endl;

 }
 else
 cout<<n <<" is a prime no."<<endl;
 
 
    return 0;
}