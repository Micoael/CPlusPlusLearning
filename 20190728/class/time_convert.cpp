#include <iostream>
using namespace std;
int main(){
	int total;
	cin>>total;
	int hr = total/3600;
	int min = total % 3600 / 60;
	int sec = total %60;
	cout<< hr<<"hr "<<min <<"min "<<sec<<"sec ";
	return 0;
}
