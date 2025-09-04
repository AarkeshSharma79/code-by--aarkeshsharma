#include<iostream>
using namespace std;
int main()
{
int i,a[100],n,pos,m;
cout<<"enter the size of array";
cin>>n;
cout<<"enter the array element";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"enter the position of element from where you want to delete the element";
cin>>pos;
cout<<"enter the element you want delete in array";
cin>>m;
for(i=pos;i<n;i++)
{
 a[i]=a[i+1];
}
n--; 
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
}