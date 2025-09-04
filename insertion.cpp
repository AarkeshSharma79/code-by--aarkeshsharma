#include<iostream>
using namespace std;
int main()
{
int i,a[100],n,pos,m;
cout<<"enter the size of array less than 100";
cin>>n;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"enter the position of element where you want insert element";
cin>>pos;
cout<<"enter the number you want insert in array";
cin>>m;
for(i=n;i>=pos;i--)
{
 a[i]=a[i-1];
}
a[pos]=m;
n++;

for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
return 0;

}
