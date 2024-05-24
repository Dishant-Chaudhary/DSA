//sum of all even n numbers
#include<iostream>
using namespace std;
int main()
{
int n , sum=0, i=2;
 cout<<"Enter the number"<<endl;
 cin>>n;

 while(i<=n ){
   if (i%2==0)
   {
      sum +=i;
   }
 
   i++;

 }
 
 cout<<"the sum of even no. is "<<sum ;
 


return 0;    
} // namespace std;

