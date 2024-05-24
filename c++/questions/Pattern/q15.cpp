/* wap to print A
                BC
                DEF
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
           
           cout<<ch<<" ";
           ch++;
           j++;
        }
        cout<<endl;
        i++;
       
        
    }
    

    return 0;
    
} // namespace 
