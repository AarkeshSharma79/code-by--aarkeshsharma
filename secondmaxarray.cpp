#include<iostream>
using namespace std;
int main()
{
int i,a[100],n;
cout<<"enter the size of array"<<endl;
cin>>n;
cout<<"enter the element of array"<<endl;
for(i=0;i<n;i++)
{
    cin>>a[i];
} 
int max=INT_MIN;
int smax=INT_MIN;
for(i=0;i<n;i++)
{
    if(a[i]>max)
    max=a[i];
}
cout<<"max number in array is:"<<max<<endl;
for(i=0;i<n;i++)
{
    if(a[i]>smax&&a[i]!=max)
    smax=a[i];
}
cout<<"second max number in array is:"<<smax<<endl;


    return 0;
}