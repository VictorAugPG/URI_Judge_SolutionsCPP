#include <iomanip>
#include <iostream>
using namespace std;

int main(){
	
	float s=0,n=1,d=1;
	while(n<=39){
		s+=n/d;
		n+=2;d*=2;}
	cout<<fixed<<setprecision(2)<<s<<endl;;
}
