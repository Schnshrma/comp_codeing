#include<bits/stdc++.h>
using namespace std;
int swap(int* a,int* b)
{
int temp=*a;
*a=*b;
*b=temp;
}
int partition(int a[],int num[],int l,int h)
{
int piv=a[h];
int i=l-1;
for(int j=l;j<h;j++)
{
 if(a[j]<=piv)
 { i++;
   swap(&a[i],&a[j]);
   swap(&num[i],&num[j]);
  } 
 
}
 swap(&a[i+1],&a[h]);
  swap(&num[i+1],&num[h]);
 return (i+1); 

}
void quicksort(int a[],int num[],int l,int h)
{if(l>=h)return;
int m=partition(a,num,l,h);
 quicksort(a,num,l,m-1);
 quicksort(a,num,m+1,h);
}
int get_max_stocks(int days,int stocks[],int bal)
{
int count=0;
 //sort array first
 int num[days];//number of stocks you can buy.
 for(int i=0;i<days;i++)
    num[i]=i+1;
 quicksort(stocks,num,0,days-1);
 //apply geedy algo and select the cheepest stock first
 for(int i=0;i<days;i++)
 {
  if(stocks[i]<=bal)
    while(num[i])
    {
     bal=bal-stocks[i];
     count++;
     num[i]--;
     if(stocks[i]<=bal) continue;
     else break;
    }
 }
 return count;
}

int main()
{
int days;
cin>>days;
int stocks[days];
int balance;
for(int i=0;i<days;i++)
    cin>>stocks[i];
cin>>balance;
cout<<get_max_stocks(days,stocks,balance);    
return 0;
}
