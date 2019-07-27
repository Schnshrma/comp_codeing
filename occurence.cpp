#include<bits/stdc++.h>
using namespace std;
map<int,int> cou;
int main()
{
int n,flag=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
for(int j=0;j<n;j++)
   cou[a[j]]++;
for(auto i=cou.begin();i!=cou.end();i++)
    if(i->second > n/2)
      { cout<<i->first; flag=1;}
if(!flag)
  cout<<"-1";              
}
