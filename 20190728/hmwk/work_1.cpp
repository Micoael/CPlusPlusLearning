#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	// V
	const double PI=3.14159;
	double h,r;
	cin>>h>>r;
	double v = PI*r*r*h;
	double result =20000/v;
	if(result>(int)result){
		cout<<(int)result+1<<endl;
	}else{
		cout<<result<<endl;
	}
	
	return 0;
}
