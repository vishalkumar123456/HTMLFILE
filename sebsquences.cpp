#include<iostream>
using namespace std;
int solve(string s,string t ,int i,int j)
{
    if(i==s.length()||j==t.length())
       return 0;
    
 
    if(s[i]==t[j])
    {
        return 1+solve(s,t,i+1,j+1);
        
    }
    return solve(s,t,i,j+1);

    
}
int longestincsub(int arr[],int size,int curr,int prev)
{
    if(curr==size)
    {
        return 0;
    }
    int pick=0;
    if(prev==-1||arr[curr]>arr[prev])
    {
       pick= 1+longestincsub(arr,size,curr+1,curr);  
    }
    
     int notpick= longestincsub(arr,size,curr+1,prev);
     return max(pick,notpick);
    
}
int longestcomsub(string str1,string str2,int i,int j)
{
    if(i==str1.length())
    {
        return 0;
    }
    if(j==str2.length())
    {
        return 0;
    }
    int ans=0;
    if(str1[i]==str2[j])
    {
        ans=1+longestcomsub(str1,str2,i+1,j+1);
    }
    else{
        ans=max(longestcomsub(str1,str2,i,j+1),longestcomsub(str1,str2,i+1,j));
    }
    return ans;
}
int main()
{
   /*string s="abc";
    string t="ahbgdc";
    int ans= solve(s,t,0,0);
    cout<<ans;
    if(ans==s.length())
    {
        cout<<"true";
        return 1;
    }
    else{
        cout<<"false";
        return 0;
    }*/
   /*int arr[]={0,1,0,3,2,3};
    int size=6;
    int curr=0;
    int prev=-1;
   int ans= longestincsub(arr,size,0,-1);
   cout<<ans;*/
   string str1="abcde";
   string str2="ace";
   int i=0;
   int j=0;
   int ans=longestcomsub(str1,str2,i,j);
   cout<<ans;
   


   
   

}