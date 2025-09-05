#include<iostream>
using namespace std;
int main()
{
int i,n,element,position=0;
cout<<"enter the size of array"<<endl;
cin>>n;
int a[n];
cout<<"enter the element of the array here :";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"enter the element you want to search in array"<<endl;
cin>>element;
for(i=0;i<n;i++)
{
if(a[i]==element)
{
    cout<<element<<" ";
    position++;
}
}
cout<<"position :"<<position;


    return 0;
}