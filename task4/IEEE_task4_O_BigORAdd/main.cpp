#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
string n; cin>>n;
string n2="9999";
int i=n.size()-1, j=3,c=0;
string sum1="";
while(i>=0  || j>=0 ||  c)
{
    int d1,d2;
    if(i>=0)  d1=n[i]-'0';
    else  d1=0;
    if(j>=0)  d2=n2[j]-'0';
    else  d2=0;
    int s=d1+d2+c;
    c=s/10;
    s%=10;
    sum1=to_string(s)+sum1;
    i--;
    j--;
}
cout<<sum1<<endl;
string s1="",s2="0",s3="00",s4="000";
c=0;
for(int i=n.size()-1;i>=0;i--)
{
   int d=(n[i]-'0')* 9+c;
   c=d/10;
   int ans=d%10;
   s1=to_string(ans)+s1;
}
if(c>0) s1=to_string(c)+s1;
c=0;
for(int i=n.size()-1;i>=0;i--)
{
   int d=(n[i]-'0')*9+c;
   c=d/10;
   int ans=d%10;
   s2=to_string(ans)+s2;
}
if(c>0) s2=to_string(c)+s2;

c=0;
for(int i=n.size()-1;i>=0;i--)
{
   int d=(n[i]-'0')*9+c;
   c=d/10;
   int ans=d%10;
   s3=to_string(ans)+s3;
}
if(c>0) s3=to_string(c)+s3;

c=0;
for(int i=n.size()-1;i>=0;i--)
{
   int d=(n[i]-'0')*9+c;
   c=d/10;
   int ans=d%10;
   s4=to_string(ans)+s4;
}
if(c>0) s4=to_string(c)+s4;

int a=s1.size()-1,b=s2.size()-1,d=s3.size()-1,e=s4.size()-1;
c=0;
string mul="";
while(a>=0  || b>=0 || d>=0 || e>=0 ||  c)
{
 int d1,d2,d3,d4;
    if(a>=0)  d1=s1[a]-'0';
    else  d1=0;
    if(b>=0)  d2=s2[b]-'0';
    else  d2=0;
        if(d>=0)  d3=s3[d]-'0';
    else  d3=0;
    if(e>=0)  d4=s4[e]-'0';
    else  d4=0;
    int s=d1+d2+d3+d4+c;
    c=s/10;
    s%=10;
    mul=to_string(s)+mul;
    a--;
    b--;
    d--;
    e--;
}
cout<<mul<<endl;
}
