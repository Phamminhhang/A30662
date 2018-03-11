#include<iostream>
using namespace std;
int giaithua(int n);
int main()
{
    int n;
    cout<<"Nhap so: ";
    cin>>n;
    cout<<giaithua(n)<<endl;
}
int giaithua(int n)
{
    if (n==1)
        return 1;
    return n*giaithua(n-1);
}
