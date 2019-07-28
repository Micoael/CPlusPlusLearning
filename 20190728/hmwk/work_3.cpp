#include <iostream>
using namespace std;
int main(){
	//123 456 789
	int inp;
	cin >> inp;
	//assumption that this number is abc.
	int a = inp/100;
	int b = inp%100/10;
	int c = inp%10;
	int returnVal = c*100+b*10+a;
	cout<<returnVal;
	return 0;	
}
