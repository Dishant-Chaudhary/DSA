//linear search
#include<iostream>
using namespace std;
bool linear(int arr[], int size, int key){
for (int i = 0; i < size; i++)
{
 if (arr[i] == key)
 {
    return true;
 }
   
}
return false;
}

int main(){
    int arr[10]={11,2,3,1,32,37,40,36,28,46};
    cout<<"Enter the element to search for"<<endl;
    int key;
    cin>>key;
    bool found= linear(arr,10,key);

    if(found)
    {
        cout<<"key is found"<<endl;
    }
    else{
     cout<<"key is not found"<<endl;
    }


    return 0;
}