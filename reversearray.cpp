#include<iostream>
using namespace std;
int main()
{
int i,n,rev;
cout<<"enter the size of array"<<endl;
cin>>n;
int a[n];
cout<<"enter the element of the array here :";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"reverse array is: ";
for(i=n-1;i>=0;i--)
{
cout<<a[i]<<" ";
}

    return 0;
}