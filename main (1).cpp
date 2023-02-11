#include <iostream>
#include<limits.h>
using namespace std;
// linear search
bool linearsearch(int arr[],int size,int k)
{
  for(int i=0;i<size;i++)
  {
    if(arr[i]==k)
    {
       return true;
    }
  }
  return false;
}
 // count 0s ans 1s
void  count0andcount1(int arr[],int size)
{
  int count0=0;
  int count1=0;
  for(int i=0;i<size;i++)
  {
    if(arr[i]==0)
    {
      count0++;
    }
    else if(arr[i]==1)
    {
      count1++;
    }
  }
  cout<<count0<<endl;
  cout<<count1<<endl;
}
// maximum in an array
void maximum(int arr[],int size)
{
  int maxi=INT_MIN;
  for(int i=0;i<size;i++)
  {
    if(arr[i]>maxi)
    {
      maxi=arr[i];
    }
  }
  cout<<maxi;
}
// minimum in an array
void minimum(int arr[],int size)
{
  int mini=INT_MAX;
  for(int i=0;i<size;i++)
  {
    if(arr[i]<mini)
    {
      mini=arr[i];
    }
  }
  cout<<mini;
}
// two pointer approch
void print(int arr[],int size)
{
  int start=0;
  int end=size-1;
  while(start<=end)
  {
    if(start==end)
    {
      cout<<arr[start];
    }
    else{
    cout<<arr[start]<<" ";
    cout<<arr[end]<<" ";
    
    
    
    }
    start++;
    end--;
    
  }
}
// reverse array
void reverse(int arr[],int size)
{
  int s=0;
  int e=size-1;
  while(s<=e)
  {
    swap(arr[s],arr[e]);
    s++;
    e--;
  }
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main() {
      int arr[]={3,7,9,1,8,4,5};
      int size=7;
      
      // if(linearsearch(arr,size,5))
      // {
      //   cout<<"found";
      // }
      // else{
      //   cout<<"notfound";
      // }
      // count 0s ans 1s
      //  count0andcount1(arr,6);
      // maximum of an array
      // maximum(arr,6);
      // minimum(arr,6);
      //print(arr,7);
      reverse(arr,7);

 
  return 0;
}