#include<bits/stdc++.h>
using namespace std;

long int powe(int x,int y)
{
long int temp;
 if(y==0)return 1;
 temp=(powe(x,y/2)%1000000007);
 if(y%2==0)
 return ((temp*temp)%1000000007);
 else return ((x*temp*temp)%1000000007);
}
int main()
{
int n;
cout<<"Input number of toys";
cin>>n;
cout<<powe(2,n);
return 0;
}
