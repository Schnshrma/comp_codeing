#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
char c;
int a=1,flag=0;
int len=s.length();
if(len%2==0)
for(int i=0;i<len;i++)
{    if(count(s.begin(),s.end(),s[i])%2==0)
       { 
       flag+=1;
       continue;
       }
       else
       {cout<<"NO";return 0;}
         
            
}
else
   for(int i=0;i<len;i++)
     {
     if(count(s.begin(),s.end(),s[i])%2==0)
       {flag++;continue;}
       else
       {       
       if(a==1)
          {a--;c=s[i];continue;}
        else if(c==s[i])
               flag++;
               else 
               a--;
        
        }
       if(a<0)
         {cout<<"NO";return 0;} 
     } 
if(flag==len-2||flag==len-1)
 {cout<<"YES";return 0;}                 
return 0;
}
