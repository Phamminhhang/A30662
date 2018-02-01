#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"moi ban nhap so: "<<endl;
    cin>>n;
    bool flag=true;
        if (n<=2)
            flag=false;
        i=2;
        while(i<n)
        {
		     if(n%i==0)
		     {
		         flag=false;
		         break;
		     }
		     i++;
		   }
		   if(flag==true)
		         cout<<"la so nguyen to"<<endl;
		     else
		         cout<<"k la so nguyen to"<<endl;
    return 0;    
            
}