#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

class Matrix {
public:
	int matrix[3][3];

	Matrix(int x[3][3]) {
		for (int j = 0; j < 3; j++) {
			for (int t = 0; t < 3; t++) {
				matrix[j][t] = x[j][t];
			}
		}
	}

	void printInfo() {
		for (int j = 0; j < 3; j++) {
			for (int t = 0; t < 3; t++) {
				printf("%d ", matrix[j][t]);
			}
			printf("\n");
		}
	}
};

Matrix operator+(Matrix& m1, Matrix& m2) {
	int matrix[3][3];

	for (int j = 0; j < 3; j++) {
		for (int t = 0; t < 3; t++) {
			matrix[j][t] = m1.matrix[j][t] + m2.matrix[j][t];
		}
	}

	return Matrix(matrix);
}

int main() {
	int array1[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int array2[3][3] = { {10,11,12}, { 13,14,15 }, { 16,17,18 } };

	Matrix m1 = Matrix(array1);
	Matrix m2 = Matrix(array2);

	Matrix result = m1 + m2;

	result.printInfo();

	return 0;
}

