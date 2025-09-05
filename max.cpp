#include<iostream>
using namespace std;
int main()
{
int i,n,max,min;
cout<<"enter the size of array";
cin>>n;
int a[n];
cout<<"enter the element of the array here :";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
    max=a[i];
}
}
cout<<"max number in array is:"<<max<<endl;
    return 0;
}