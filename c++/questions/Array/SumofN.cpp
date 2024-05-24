//wap to print sum of all elements in an arrray.
#include<iostream>
using namespace std;

void bhai(int arr[],int size){
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int main(){
    int size=5;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    bhai(arr,size);
    int sum=0;
    for ( int i = 0; i < 5; i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
    
    return 0;
}