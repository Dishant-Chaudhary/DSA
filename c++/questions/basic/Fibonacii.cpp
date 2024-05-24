//fibonacii series
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
int a=0 , b=1;
 for (int i = 0; i <=n; i++)
 {
    int sum = a+b;
    cout<<sum <<" ";
    a=b;
    b=sum;
 }
 
    return 0;
}