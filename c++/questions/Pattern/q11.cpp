/* wap to print ABC
                ABC
                ABC
                n=3
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            char bh = 'A'+j-1;
            cout<<bh;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    

    return 0;
    
} // namespace 
