#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y)
{
 if(x==0) return y;
  return gcd(y%x,x); 
}
int lcm(int x,int y)
{
  return((x*y)/gcd(x,y));
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
   cin>>a[i];
int k,flag=0,pre,pre1;
pre=pre1=1;
cin>>k;
int i;
for(i=0;i<n;i++)
 {  pre=pre1;
    pre1=lcm(a[i],pre);
     if(pre1>k)
    { flag=1;cout<<"LCM = "<<pre<<endl;break;}
 }
if(flag)
  {cout<<"length = "<<i<<endl;
  cout<<"Indexes : ";
 for(int z=0;z<i;z++)
    cout<<z<<" ";
  } 
 else 
   cout<<"-1";      
return 0;
}

