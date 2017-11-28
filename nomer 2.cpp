#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	for(int i = 1; i <= 10; i++) {
		for(int j = 1; j<= i; j++) {
			setw(3);
			cout<<setw(3)<<i*j<<" ";
		}
	}
}
