#include "stdafx.h"
#include "MathLibrary.h"  
#include<iostream>
using namespace std;
namespace MathLibrary
{
	void multiply(int m1[3][3], int m2[3][3])
	{
		int mult[3][3];
		for (int i = 0; i < 3; i++)
		{

			for (int j = 0; j < 3; j++)
			{
				mult[i][j] = 0;
			}
		}
		for (int i = 0; i < 3; i++)
		{

			for (int j = 0; j < 3; j++)
			{

				for (int k = 0; k < 3; k++)
				{
					mult[i][j] += m1[i][k] * m2[k][j];
				}

			}

		}
	
		cout << "Product of matrices: " << endl;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << mult[i][j] << "    ";
			}
			cout << endl;
		}
	}

}