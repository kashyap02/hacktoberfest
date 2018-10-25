#include<iostream>
using namespace std;
long long int digitsum(long long int p)
{
long long int i,n,sum,temp;
while(p>9)
{
  i++;
  n=p;
  sum=0;
while(n>0)
{
  temp=n%10;
  sum=sum+temp;
  n=n/10;
}
p=sum;
}
return sum;
}
int main()
{
long long int n,sum,temp,m,i,t,sum1,j,count1,count2,p,q,min1,min2,key;
cin>>t;
while(t--)
{
cin>>p>>q;
key=p;
count1=0;
if(p<10)
{
sum=p;
}
else
{
 sum=digitsum(p);
}
if(q<10)
{
sum1=q;
}
else
{
 sum1=digitsum(q);
}
//cout<<"This is Digitsum of Number "<<sum<<endl;
//cout<<"This is Digitsum of Add Factor "<<sum1<<endl;
while(sum<10 && sum1!=0)
{
  count1++;
  sum=sum+sum1;
}
min1=sum;
//cout<<"The value of min1 "<<min1<<endl;
//cout<<"The value of count1 "<<count1<<endl;
count2=count1;
while(count1--)
{
  p=p+q;
}
//cout<<"The value to be digitsum "<<p<<endl;
long long int answer1,flag1;
answer1=0;
flag1=0;
while(key>9)
{
  flag1++;
  n=key;
  answer1=0;
while(n>0)
{
  temp=n%10;
  answer1=answer1+temp;
  n=n/10;
}
key=answer1;
}
//cout<<"The key is "<<key<<"and in step is "<<flag1<<endl;
long long int answer2,flag2;
answer2=0;
flag2=0;
while(p>9)
{
  flag2++;
  n=p;
  answer2=0;
while(n>0)
{
  temp=n%10;
  answer2=answer2+temp;
  n=n/10;
}
p=answer2;
}
//cout<<"The final is "<<p<<"and in step is "<<flag2<<endl;
if(key<=p)
{
cout<<key<<" "<<flag1<<endl;
}
else
{
cout<<p<<" "<<flag2+count2<<endl;
}
}
  return 0;
}
