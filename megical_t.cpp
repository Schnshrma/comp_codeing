#include<bits/stdc++.h>
using namespace std;
int main()
{
 int i,n;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 int l,sl;
 l=sl=0;
 for(i=0;i<n;i++)
 {
   if(a[i]>l)
      {
        sl=l;
        l=a[i];
      }
 }
 cout<<sl;
}
