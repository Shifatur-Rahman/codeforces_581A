#include<iostream>
#include<algorithm>
using namespace std;
int main(){

int a,b,r1,r2,r3;
cin>>a>>b;
r1= min(a,b);
r2 = max(a,b);
r3 = (r2-r1)/2;
cout<<r1<<" "<<r3 <<endl;
//cout<<r3<<endl;


}
