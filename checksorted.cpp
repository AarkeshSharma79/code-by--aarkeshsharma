#include<iostream>
using namespace std;
int main()
{
int i,n;
cout<<"enter the size of array"<<endl;
cin>>n;
int a[n];
cout<<"enter the element of the array here :";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
int flag=0;
bool ascending=false;
bool descending=false;
for(i=0;i<n-1;i++)
{
if(a[i]<a[i+1])
{
   ascending = true;
}
if(a[i]>a[i+1])
{
    descending=true;
}
}
if(ascending)
cout<<"array is the sorted in form of ascending\n";
else if (descending)
cout<<"array is sorted in form of descending\n";
else
cout<<"array is not sorted";

    return 0;
}