#include<bits/stdc++.h>
using namespace std;
void soe(bool arr[],int n)
{
for(int p=2;p*p<=n;p++)
if(!arr[p])
 { 
  for(int i=p*p;i<=n;i+=p)
     {
      arr[i]=1;
     } 
 }
}
int main()
{
int n;
cin>>n;
while(n--)
{
 long num;
 cin>>num;
 int p=(int)num/2;
 bool arr[p+1]={ 0 };
 soe(arr,p);
 for(int i=2;i<p;i++)
 {
    if(num%i==0&&arr[i]==0)
       cout<<i;return 0;
 }
}
return 0;
}
