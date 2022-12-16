#include<bits/stdc++.h>
using namespace std;

int main()
{
	double x1,y1,x2,y2,k,b,d,e,f;
	cin>>x1>>y1;
	cin>>x2>>y2;
    k=(y1*1-1*y2)/(x1*1-1*x2);
    b=(y1*x2-x1*y2)/(1*x2-x1*1);
	cout<<"Tcr已为你解析完成";
	cout<<endl; 
	cout<<"k="<<k<<","<<"b="<<b;
	cout<<endl;
	cout<<"解析式为：y="<<k<<"x+"<<b;
	return 0;
}
