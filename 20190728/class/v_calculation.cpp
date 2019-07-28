// 3/4 pi r 3
#include <iomanip>
#include <iostream>
using namespace std;
int main(){
	double PI = 3.14;
	double r;
	cin>>r;
	double returnVal = ((4/3)*PI*r*r*r);
	cout<<fixed<<setprecision(2)<<returnVal<<endl;
	return 0;
}
