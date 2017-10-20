#pragma once
extern double sumError;

class Perceptron {
	double learnrate;
	double threshold;

	double error;
	int output;
	double y;

public:
	int input[4][3];
	double weight1;
	double weight2;
	Perceptron(double learnrate, double threshold);
	void calculateOutput(int i);

};