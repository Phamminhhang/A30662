#include<iostream>
#include<string>
using namespace std;
string ChuyenNhiPhan(int n);
void ChuyenNhiPhanV2(int n);
int giaithua(int n);
int Fibo(int n);
int main()
{
    int n;
    cout<<"Nhap so: ";
    cin>>n;
    //cout<<ChuyenNhiPhan(n)<<endl;//
    //cout<<giaithua(n)<<endl;//
    cout<<Fibo(n)<<endl;
}
string ChuyenNhiPhan(int n)
{
    string nhiphan=" ";
    while (n>0)
    {
        int bit = n%2;
        if(bit==1)
            nhiphan='1' + nhiphan;
        else
            nhiphan='0' + nhiphan;
        n=n/2;
    }
    return nhiphan;
}
void ChuyenNhiPhanV2(int n)
{
    if(n<=0)
        return;
    ChuyenNhiPhanV2(n/2);
    cout<<n%2;
}
int giaithua(int n)
{
    if (n==1)
        return 1;
    return n*giaithua(n-1);
}
int Fibo(int n)
{
    if (n==1|| n==2)
        return 1;
    return Fibo(n-1) + Fibo(n-2);
}
