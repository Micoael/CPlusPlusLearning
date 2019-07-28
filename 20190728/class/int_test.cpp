#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double m,n;
	cin>>m>>n;
	double result =
		m*m+n*n-((m*m+m*n)/2)-(n*n)/2;
	cout<<result<<endl;
	return 0;

}
