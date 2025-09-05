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
i=0;
j=0;
 k=0;
 p=m+n;
int c[p]={};
while(i<n&&j<m)
{
    if(a[i]<b[j])
    {
        c[k++]=a[i++];
    }
    else 
    {
        c[k++]=b[j++];
    }
}
while(i<n)
{
    c[k++]=a[i++];
}
while(j<m)
{
    c[k++]=b[j++];

}
cout<<"the merge sorted array is :";
for(k=0;k<p;k++)
{
    cout<<c[k]<<" ";
}

    return 0;
}
