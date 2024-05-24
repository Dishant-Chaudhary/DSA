/* wap to print A
                BB
                CCC
                n=3
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    char ch='A';
    
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            ch='A'+i-1;
           
           cout<<ch<<" ";
           ch++;
           j++;
        }
        cout<<endl;
        i++;
       
        
    }
    

    return 0;
    
} // namespace 
