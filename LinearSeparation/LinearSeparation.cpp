// LinearSeparation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "math.h"
using namespace std;
double dot(double A[], double B[], int length);
int main()
{
	double test[4][3] = {
		{1,1,1},
		{0,1,0},
		{1,0,0},
		{0,0,0}
	};
	double input[3]; //0 = bias
	double weight[3] = { 1,1,1 }; //0 = bias weight
	double sum;
	double bias = 1;
	double sigFunc;
	//double cost;
	double rate = 0.1;
	int output;
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 4; i++) {
			input[0] = bias;
			input[1] = test[i][0];
			input[2] = test[i][1];
			sum = (weight[1] * input[1]) + (weight[0] * input[0]) - (weight[2] * input[2]);
			sigFunc = 1 / (1 + exp(-sum));
			if (sigFunc > 0.5) {
				output = 1;
			}
			else {
				output = 0;
			}
			cout << "Output: " << output << endl;
			
		}
	}
	cout << "(" << weight[1] << ")x1 - (" << weight[2] << ")x2 + " << weight[0] << endl;
	cin.ignore();
	return 0;
}
double dot(double A[], double B[], int length) {
	double product = 0;
	for (int i = 0; i < length; i++) {
		product += (B[i] * A[i]);
	}
	return product;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
