#include<bits/stdc++.h>
using namespace std;
int find(int a[],int n,int a1,int b)
{
  if(n<=4)return a[n];
  return min(find(a,n-1,a1,b)+a1,find(a,n-3,a1,b)+b);
}
int main()
{
int n;
cin>>n;
int a1,b;
cin>>a1>>b;
int a[n+1];
a[1]=0;
a[2]=1;
a[3]=1;
a[4]=2;
cout<<find(a,n,a1,b);
return 0;
}
