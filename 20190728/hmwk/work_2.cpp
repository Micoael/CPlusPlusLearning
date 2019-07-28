#include <iomanip>
#include <iostream>
using namespace std;
int main(){
	double a;
	cin>>a;
	int result = (int) a;
	if(result<0){
		result=result-1;
	}
	cout << result ; 
	return 0;	
}

