#include <iostream>
#include <iomanip>
using namespace std;

main () {
	for (int i = 1; i <=10; i++) {
		for (int j = 1; j <= 10; j++){
			setw(4);
			cout<<setw(4)<<i*j;
		}
	}
}
