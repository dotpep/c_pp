#include <iostream>

int main()
{
	int matrix1[2][2] = {
		{1, 2},
		{3, 4}
	};

	int matrix2[2][2] = {
		{1, 2},
		{3, 4}
	};

	int matrix3[2][2];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			matrix3[i][j] = matrix1[i][j] + matrix2[j][i];
		}


	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << matrix3[i][j] << " " << std::endl;
		}
	}

}
