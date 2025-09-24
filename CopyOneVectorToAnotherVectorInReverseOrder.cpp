//QUESTION->Write a program to copy the contents of one array into another in reverse order?
#include<iostream>
using namespace std;
#include<vector>
int main()
{
   int n;
   cout<<"enter the size of array: "<<endl; 
   cin>>n;
   vector<int>v1;
   cout<<"enter the array element: ";
   for(int i=0;i<n;i++)
   {
    int q;
    cin>>q;
    v1.push_back(q);
   }
   for(int i=0;i<v1.size();i++)
   {
      cout<<v1[i]<<" ";
   }
   cout<<endl;
   // with extra array;
   //vector<int>v2(v1.size());
   //for(int i=0;i<v2.size();i++)// loop always run size-1 till;

   //{
   // v2[i]=v1[v1.size()-1-i];
   // cout<<v2[i]<<" ";
   //}
   //QUESTION -> write the a program to reverse the array without using any extra array;
   int i=0;
   int j=v1.size()-1;
   for(int i=0;i<v1.size();i++)//OR for(i=0,j=v1.size()-1;i<=j;i++,j--)
   {
      if(i<=j)           //OR while(i<=j){
      {                   // int temp=v1[i];
                           //v1[i]=v1[j];
                          // v1[j]=temp;
                           //i++;j--;}  
         int temp=v1[i];
         v1[i]=v1[j];
         v1[j]=temp;
         j--;
      }
//OR reverse(v1.begin(),v1.end())
      cout<<v1[i]<<" ";
   }

}   