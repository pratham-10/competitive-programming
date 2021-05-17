#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	if(num % 5 == 0 && num % 11 == 0){
	 cout << "BOTH";
	}
	else if(num % 5 == 0 || num % 11 == 0){
	  cout << "ONE";
	}
	else{
	  cout << "NONE";
	}
	return 0;
}
