#include "Perceptron.h";
#include <iostream>
#include <time.h>
#include <stdlib.h>

Perceptron::Perceptron(double learnrate, double threshold) {
	srand(time(NULL));

	this->learnrate = learnrate;
	this->threshold = threshold;

	weight1 = double(rand() % 21 / 10 - 1);
	weight2 = double(rand() % 21 / 10 - 1);

	error = 0;

	input[0][0] = 0;
	input[0][1] = 0;
	input[0][2] = 0;
	input[1][0] = 0;
	input[1][1] = 1;
	input[1][2] = 0;
	input[2][0] = 1;
	input[2][1] = 0;
	input[2][2] = 0;
	input[3][0] = 1;
	input[3][1] = 1;
	input[3][2] = 1;

	output = 0;
	y = 0;
}

void Perceptron::calculateOutput(int i) {
	
	double y = (input[i][0] * weight1 + input[i][1] * weight2) - threshold;
	if (y > 0) output = 1;
	else output = 0;

	error = input[i][2] - output;
	sumError += abs(error);
	

	if (error) {
		
		weight1 += learnrate*input[i][0] * error;
		weight2 += learnrate*input[i][1] * error;
	}

}

