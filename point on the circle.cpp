#include <iostream>
#include <math.h>
using namespace std;
main()
{
int a,b,x,y,r;
cout<<"enter the value of x and y : ";
cin>>x>>y;
a=pow(x,2)+pow(y,2);
b=sqrt(a);
cout<<"enter the radius if circle : ";
cin>>r;
if (b>r)
cout<<"the point is outside the circle";
else if (b<r)
cout<<"the point is inside the circle ";
else if (b==r)
cout<<"the point is on the circle";
return 0;
}