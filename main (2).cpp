#include <iostream>
#include<vector>
using namespace std;
// binary search
int binarysearch(vector<int> arr,int t,int s,int e)
{
  int mid=s+(e-s)/2;
  while(s<=e)
  {
    if(arr[mid]==t)
    {
      return mid;
    }
    if(t>arr[mid])
    {
      s=mid+1;

    }
    else{
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return -1;
}
// first occ
int firrocc(vector<int> arr,int target)
{
  int s=0;
  int e=arr.size()-1;
  int mid=s+(e-s)/2;
  int ans=-1;
  while(s<=e)
  {
    if(arr[mid]==target)
    {
      ans=mid;
      e=mid-1;
    }
     else if(target<arr[mid])
    {
      e=mid-1;
    }
    else if(target>arr[mid])
    {
      s=mid+1;
    }
    mid=s+(e-s)/2;
  }
  return ans;

}
// last occ
int lastocc(vector<int> arr,int target)
{
  int s=0;
  int e=arr.size()-1;
  int mid=s+(e-s)/2;
  int ans=-1;
  while(s<=e)
  {
    if(arr[mid]==target)
    {
      ans=mid;
      s=mid+1;
    }
    else if(target>arr[mid])
    {
      s=mid+1;
    }
    else if(target<arr[mid])
    {

    
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
   return ans;
}
// peak element in an mountain array
int peak(vector<int> arr)
{
  int s=0;
  int e=arr.size()-1;
  int mid=s+(e-s)/2;
  while(s<e)
  {
    if(arr[mid]<arr[mid+1])
    {
      s=mid+1;
    }
    else{
      e=mid;
    }
    mid=s+(e-s)/2;
  }
  return s;
}
// pivot element in an array
int pivot(vector<int> arr)
{
  int s=0;
  int e=arr.size()-1;
  int mid=s+(e-s)/2;
  while(s<=e)
  {
    if(arr[mid]>arr[mid+1] && mid+1<arr.size())
    {
       return mid;
    }
    if(arr[mid]<arr[mid-1]&& mid-1>=0)
    {
      return mid-1;
    }
    if(arr[s]<arr[mid])
    {
      s=mid+1;
    }
    else{
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return -1;

}
// rotated sorted array
int rotatedsorted(vector<int> arr)
{
  int s=0;
  int e=arr.size()-1;
  int mid=s+(e-s)/2;
  while(s<=e)
  {
    if(arr[mid]>arr[mid+1] && mid+1<arr.size())
    {
       return mid;
    }
    if(arr[mid]<arr[mid-1]&& mid-1>=0)
    {
      return mid-1;
    }
    if(arr[s]<arr[mid])
    {
      s=mid+1;
    }
    else{
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return -1;
  
}
// Square root of a number using binary search
int sqrt(int n)
{
  int t=n;
  int s=0;
  int e=n;
  int mid=s+(e-s)/2;
  int ans=-1;
  while(s<=e)
  {
    
    if(mid*mid==t)
    {
      return mid;
    }
    if(mid*mid>t)
    {
      e=mid-1;
    }
    else{
      ans=mid;
      s=mid+1;
    }
    mid=s+(e-s)/2;

  }
  return ans;
}
// Binary search in 2D array
int binarysearch2D(int arr[][4],int target,int n,int m)
{
  int s=0;
  int e=n*m-1;
  int mid=s+(e-s)/2;
  while(s<=e)
  {
    int rowindex=mid/m;
    int colindex=mid%m;
    int element=arr[rowindex][colindex];
    if(element==target)
    {
      return true;
    }
    if(target>element)
    {
      s=mid+1;
    }
    else{
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return false;

    

    
  
}
// Binary search nearly sorted array
int searc(vector<int> arr,int target)
{
  int s=0;
  int e=arr.size()-1;
  int mid=s+(e-s)/2;
  while(s<=e)
  {
    if(arr[mid]==target)
    {
      return mid;
    }
    if(arr[mid-1]==target && mid-1>=0)
    {
      return mid-1;
    }
    if(arr[mid+1]==target && mid+1<arr.size())
    {
      return mid+1;
    }
    if(target>arr[mid])
    {
      s=mid+2;
    }
    else{
      e=mid-2;
    }
    mid=s+(e-s)/2;
  }
  return -1;
}
int divid(int di,int div)
{
  int s=0;
  int e=abs(di);
  int mid=s+(e-s)/2;
  int ans=-1;
  while(s<=e)
  {
    if(abs(mid*div)==abs(di))
    {
      ans=mid;
      break;
    }
    if(abs(mid*div)>abs(di))
    {
      e=mid-1;
    }
    else{
      ans=mid;
      s=mid+1;
    }
    mid=s+(e-s)/2;
  }
  if((di<0 && div<0) || (di>0 && div>0))
  {
    return ans;
  }
  else {
    return -ans;
  }
}

int main() {

  
  // vector<int> arr{4,5,6,7,0,1,2,3};
  // int target=2;
  // int n;
  // cin>>n;
  // int an=sqrt(n);
  
  // double finalans=an;
  // cout<<finalans<<endl;
  // int precision;
  // cin>>precision;
  
  // double step=0.1;
  // for(int i=1;i<=precision;i++)
  // {
  //   for(double j=finalans;j*j<n;j=j+step)
  //   {
  //     finalans=j;
  //   }
  //   step=step/10;
  // }
  // cout<<finalans;
  
  
  // int an=firrocc(arr,target);
  // cout<<an;
  // int an=lastocc(arr,target);
  // cout<<an;
  // int ans=peak(arr);
  // cout<<ans;
  // int pivot=rotatedsorted(arr);
  // if(target>=arr[0] && target<=arr[pivot])
  // {
  //   int ans=binarysearch(arr,target,0,pivot);
  //   cout<<ans;
  // }
  // if(target>=arr[pivot+1] && target<=arr[arr.size()-1])
  // {
  //   int ans=binarysearch(arr,target,pivot+1,arr.size()-1);
  //   cout<<ans;
  // }
//   int arr[5][4]={{-1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
//   int row=5;
//   int col=4;
//   bool ans=binarysearch2D(arr,-1,row,col);
//   if(ans)
//   {
//     cout<<"found";

//   }
// else{
//   cout<<"not found";
// }
  //  vector<int> arr{10,3,40,20,50,80,70};
  //  int target=20;
  //  int ans=searc(arr,target);
  //  cout<<ans;
  int divided=21;
  int divisor=-7;
  int ans=divid(divided,divisor);
  cout<<ans;

  return 0;
}