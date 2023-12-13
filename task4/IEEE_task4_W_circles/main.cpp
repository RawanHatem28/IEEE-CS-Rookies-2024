#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   double X1,Y1,X2,Y2,X3,Y3,X4,Y4;
   cin>>X1>>Y1>>X2>>Y2>>X3>>Y3>>X4>>Y4;
   double mid_X_C1=(X1+X2)/2;
   double mid_Y_C1=(Y1+Y2)/2;
   double mid_X_C2=(X3+X4)/2;
   double mid_Y_C2=(Y3+Y4)/2;
   double R1=sqrt(pow((X1-X2),2)+ pow((Y1-Y2),2))/2;
   double R2=sqrt(pow((X3-X4),2)+ pow((Y3-Y4),2))/2;
   double distance =sqrt(pow((mid_X_C1 - mid_X_C2),2) +(pow((mid_Y_C1-mid_Y_C2),2)));
   if( distance >(R1+R2) )
   {
    cout<<"NO";
   }
   else
    cout<<"YES";
    return 0;
}
