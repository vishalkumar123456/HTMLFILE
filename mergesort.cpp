#include<iostream>
using namespace std;
void merge(int arr[],int s,int mid,int e)
{
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    int i=0;
    for(int index=s;index<=mid;index++)
    {
        first[i]=arr[index];
        i++;
    }
    int j=0;
    for(int index=mid+1;index<=e;index++)
    {
        second[j]=arr[index];
        j++;
    }
    int originalindex=s;
    int index1=0;
    int index2=0;
    while(index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2])
        {
            arr[originalindex++]=first[index1++];

        }
        else{
            
        
            arr[originalindex++]=second[index2++];
        }
    }
    while(index1<len1)
    {
         arr[originalindex++]=first[index1++];
    }
     while(index2<len2)
    {
         arr[originalindex++]=second[index2++];
    }

}
void mergesort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int mid=s+(e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,mid,e);
}
void solve(string str,int index,string ans)
{
     if(index==str.length())
     {
        cout<<ans<<endl;
        return;
     }
     //include
     solve(str,index+1,ans+str[index]);
     //exclude
     solve(str,index+1,ans);
}

int main()
{
   // int arr[]={15,20,2,4,19,1};
   // int size=6;
    //mergesort(arr,0,size-1);
   // for(int i=0;i<size;i++)
   // {
      //  cout<<arr[i]<<" ";
   // }
    //cout<<endl;
    string str="abc";
    
    string ans="";
    solve(str,0,ans);

}