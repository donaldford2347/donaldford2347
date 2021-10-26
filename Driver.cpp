#include <iostream>
#include "reading.h"

using namespace std;

int main(void) {

	reading R1;

	reading R2(6,.88,84.0);

	R1.printreading();
	cout << endl;
	R2.printreading();
	system("pause");
	return 0;

}