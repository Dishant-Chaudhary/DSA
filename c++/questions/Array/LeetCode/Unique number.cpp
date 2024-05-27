#include <iostream>
#include<vector>
using namespace std;

bool unique(vector<int>&arr){
    int ans=0;
    for (int i = 0; i <arr.size(); i++)
    {
        ans= ans^arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans^i;
    }
    if (ans=ans)
    {
        return false;
    }
    else
    return true;

}
int main (){
     vector<int> arr={1,3,4,2,2};
    cout<<"The duplicate element is:"<< unique(arr)<<endl;


    return 0;
}