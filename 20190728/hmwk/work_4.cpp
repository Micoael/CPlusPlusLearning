#include <iostream>
using namespace std;
int main() {
	int first;
	int second;
	int final;
	cin>>first>>second>>final;
	int delta = second-first;
	for(int i=1; i<final; i++) {
		first = first+delta;
	}
	// is an equlation of
	// delta*(i-1)+final
	cout<< first <<endl;
	return 0;
}
