#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,sum;
cin>>n>>sum;
vector<int> a(n);
for(int i=0;i<n;i++)
    cin>>a[i];
sort(a.begin(),a.end());
int i=0,j=n-1;
while(i<j)
{
 if(a[j]>sum){j--;continue;}
 if(a[i]+a[j]==sum){cout<<a[i]<<" "<<a[j]<<endl;return 0;}
 if(a[i]+a[j]>sum){j--;continue;}
 if(a[i]+a[j]<sum){i++;continue;}
 
}
cout<<"-1";
return 0;
}
