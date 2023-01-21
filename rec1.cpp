#include<iostream>
#include<vector>
using namespace std;
void printarray(int arr[],int size,int index)
{
     if(index==size)
     return;
     cout<<arr[index]<<" ";
     printarray(arr,size,index+1);
}
void reversearray1(int arr[],int size,int index)
{
     if(index==size)
     return;
     
      reversearray1(arr,size,index+1);
      cout<<arr[index]<<" ";
}
void reversearray2(int arr[],int size,int index)
{
     if(index<0)
     return;
     
      
      cout<<arr[index]<<" ";
      reversearray2(arr,size,index-1);
}
void printarray1(int arr[],int size)
{
     if(size==0)
     return;
     cout<<arr[0]<<" ";
     printarray1(arr+1,size-1);
}
int maxarray(int arr[],int size,int index)
{
    if(index==size)
    return -1;
    int ans=arr[index];
    int recans=maxarray(arr,size,index+1);
    return max(ans,recans);
}
void maxarray1(int arr[],int size,int index,int &maxi)
{
    if(index==size)
    return;
    maxi=max(arr[index],maxi);
    
    maxarray1(arr,size,index+1,maxi);
    
    
}
int firstocc(int arr[],int size,int index,int tar)
{
    if(index==size)
    return -1;
    if(arr[index]==tar)
    {
        return index;
    }
    else{
       return  firstocc(arr,size,index+1,tar);
    }
}
int lastocc(int arr[],int size,int index,int tar)
{
    if(index<0)
    
        return -1;
    if(arr[index]==tar)
    {
        return index;
    }
    else{
        return lastocc(arr,size,index-1,tar);
    }
}
void totalocc(int arr[],int size,int index,int tar,vector<int> &ans)
{
    if(index==size)
    return ;
    if(arr[index]==tar)
    {
       ans.push_back(index);
    }
    
      totalocc(arr,size,index+1,tar,ans);
    
}


int main()
{
    int arr[]={1,3,4,2,5,2,2,1};
    int size=8;
   // printarray(arr,5,0);
  // reversearray1(arr,5,0);
 // reversearray2(arr,size,size-1);
   // printarray1(arr,size);
 // cout<<maxarray(arr,size,0);
    // int maxi=-1;
    //maxarray1(arr,size,0,maxi);
   //cout<<maxi;
  //cout<<firstocc(arr,size,0,2);
  //cout<<lastocc(arr,size,size-1,2);
  vector<int> ans;
  totalocc(arr,size,0,2,ans);
  for(int i=0;i<ans.size();i++)
  {
    cout<<ans[i]<<" ";
  }




}