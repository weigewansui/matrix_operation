#include <iostream>
#include <stdlib.h>
#include "matrix.h"

using namespace std;

short int matrix::resize(int d_rows, int d_cols) {

	element = new float* [d_rows];
	
	rows = d_rows;
	cols = d_cols;
	
	for(int i = 0; i < d_rows; i ++) {
		element[i] = new float[d_cols];
	}

	return 1;

}

short int matrix::setMatrix(int i, int j, float val) {

	this->element[i][j] = val;
	return 1;
}

float matrix::getMatrix(int i, int j) {
	return this->element[i][j];
}

matrix matrix::operator + (const matrix &obj) {

	if (obj.rows != this->rows || obj.cols != this->cols) {

		cout<<"wrong matrix dimensions!\n";
		abort();
	}

	matrix Matrix;

	if (Matrix.resize(rows, cols)){

		for (int i = 0; i < rows; i ++) {

			for (int j = 0; j < cols; j ++) {

				Matrix.element[i][j] = obj.element[i][j] + this->element[i][j];

			}

		}

	}

	return Matrix;

}

matrix matrix::operator = (const matrix &obj) {

	resize(obj.rows, obj.cols);

	for (int i = 0; i < rows; i ++) {

			for (int j = 0; j < cols; j ++) {

				this->element[i][j] = obj.element[i][j];

			}

		}

}