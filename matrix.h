#ifndef __MATRIX
#define __MATRIX

class matrix {

public:

	float** element;
	int rows, cols;

	short int resize(int, int);
	short int setMatrix(int, int, float);
	float getMatrix(int, int);

	matrix operator = (const matrix &);
	matrix operator + (const matrix &);

};

#endif