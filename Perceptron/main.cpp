#include "Perceptron.h";
#include <iostream>
#include <time.h>
#include <stdlib.h>

double sumError ;
using namespace std;

int main()
{
	srand(time(NULL));

	Perceptron p(0.1, 0.2);

	int step = 1;

	
	cout << "Step\tX1\tX2\tW1\tW2" << endl;

	do {
		cout << endl << step;
	    sumError = 0;

		for (int i = 0; i < 4; i++) {
			cout << "\t" << p.input[i][0] << "\t" << p.input[i][1] << "\t";
			p.calculateOutput(i);
			cout << p.weight1 << "\t" << p.weight2 << endl;
		}
		step++;
	} while (sumError != 0);

	system("PAUSE");
}