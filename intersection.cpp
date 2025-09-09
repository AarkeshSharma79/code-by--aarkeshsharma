#include<iostream>
using namespace std;
int main()
{
int i,j,k,n,m,p;
cout<<"enter the size of array A:";
cin>>n;
int a[n];
cout<<"enter the element sorted array A";
for(i=0;i<n;i++)
{
    cin>>a[i];

}
cout<<"enter the size of array B:";
cin>>m;
int b[m];
cout<<"enter the element sorted array B";
for(j=0;j<m;j++)
{
    cin>>b[j];
}
cout<<"interection"<<endl;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)

{
    if(a[i]==b[j])
    {
    cout<<a[i]<<" ";
    break;
    }
}
}
}
