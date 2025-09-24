//sort array of 0s and 1s
#include<iostream>
using namespace std;
#include<vector>

/*void sort01(vector<int>& v)
{
    int n=v.size();
    int no0=0;
    int no1=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            no0++;
        }
        else
        no1++;
    }
    for(int i=0;i<n;i++)
    {
        if(i<no0)
        v[i]=0;
        else
        v[i]=1;
    }

}
int main()
{
    vector<int>v;
    int n;
    cout<<"size of vector:"<<" ";
    cin>>n;
    cout<<"enter the element of array";
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        v.push_back(m);/
    }
    sort01(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
}*/
//  METHOD 2;
void sort01(vector<int>& v)
{
    int i=0;
    int j=v.size()-1;
    while(j>i)
    {
        if(v[i]==1)
        j--;
        if(v[i]==0)
        i++;
        if(i>j)
        break;
        if(v[i]==1&&v[j]==0)
        {
            int temp=v[i];// hum isme else if ka use kar sakte hai agar hum iska use nahi karte some condition me fail ho jayega such as 1 1 0 1 0 1 1 0;
            v[i]=v[j];// isko shuru me rakh do is loop me ;
            v[j]=temp;
            j--;
            i++;

        }

    }
}

int main()
{
    vector<int>v;
    int n;
    cout<<"size of vector:"<<" ";
    cin>>n;
    cout<<"enter the element of array";
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        v.push_back(m);
    }
    sort01(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
}
