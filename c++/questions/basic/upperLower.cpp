//wap to check character is upper ,lower or numeric
#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"Enter the value of a"<<endl;
    cin>>n;

    if (n>='A' && n <='Z')
    {
        cout<<n<<"is an uppercase"<<endl;

    }
    else if (n>='a' && n <='z')
    {
        cout<<n<<"is an lowerrcase"<<endl;

    }
    else if (n>='0' && n <='9')
    {
        cout<<n<<"is an numeric"<<endl;

    }
    else{
        cout<<n<<"\tis not an alphabet or numeric either"<<endl;
    }

    
    return 0;
}
