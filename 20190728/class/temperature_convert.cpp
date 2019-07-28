#include <iomanip>
#include <iostream>
using namespace std;
int main(){
	double temper;
	cin>>temper;
	double returnVal = 5*(temper-32)/9;
	cout<<fixed<<setprecision(5)<<returnVal<<endl;
	return 0;
}
