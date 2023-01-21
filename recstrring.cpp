#include<iostream>
using namespace std;
//REVERSE STRING
void rev(string str,int index,string &ans)
{
    if(index==str.length())
    return;
    rev(str,index+1,ans);
    ans.push_back(str[index]);
}
void rev1(string &str,int i,int j)
{
    if(i>=j)
    return;
    swap(str[i],str[j]);
    rev1(str,i+1,j-1);
}
int main()
{
   string str="vishal";
   // string ans="";
   // rev(str,0,ans);
   // cout<<ans;
   rev1(str,0,str.length()-1);
   cout<<str;


}