// MathClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MathLibrary.h"
#include<iostream>

using namespace std;
int main()
{
	double a, b;
	int mat1[3][3] , mat2[3][3];
	cout << "Enter first matrix of 3x3 " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			cin >> a;
			mat1[i][j] = a;
		}
	}
	
	cout << "Enter second matrix of 3x3 " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			cin >> b;
			mat2[i][j] = b;
		}
	}
	
	MathLibrary::Add(mat1, mat2);
	MathLibrary::sub(mat1, mat2);
	MathLibrary::multiply(mat1, mat2);

}

