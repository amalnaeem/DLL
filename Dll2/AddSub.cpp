#include "stdafx.h"
#include "MathLibrary.h"  
#include<iostream>
using namespace std;
namespace MathLibrary
{
	void Add(int m1[3][3], int m2[3][3])
	{
		int sum[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				sum[i][j] = m1[i][j] + m2[i][j];
			}
		}
		cout << "Sum of matrices: " << endl;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << sum[i][j] << "    ";
			}
			cout << endl;
		}


	}
	void sub(int m1[3][3], int m2[3][3])
	{
		int diff[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				diff[i][j] = m1[i][j] - m2[i][j];
			}
		}
		cout << "Difference of matrices: " << endl;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << diff[i][j] << "    ";
			}
			cout << endl;
		}
		

	}
	

}