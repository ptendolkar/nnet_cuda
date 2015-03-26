#include <stdlib.h>
#include <iostream>
#include <math.h>
#include "neuron.h"
//#include "matrix.h"

double dtanh (double x) {
	return (1 - pow(tanh(x), 2));
}
double sqloss(double x) {
	return pow(x, 2);
}
double dsqloss(double x) {
	return 2*x;
}

int main(int argc, char* argv[])
{
/*	std::vector<double> x(8);
	x[0] = x[1] = x[2] = x[3] = 1;
	x[4] = x[5] = x[6] = x[7] = 2;
*/
/*	Matrix A(4,4,0);
	A(0,0) = A(1,1) = A(2,2) = A(3,3) = 1;
	
	Matrix B(4,4,0);
	B.identity();
	
	int n = 16;
	double a = 1.0;
	int i = 1;

       	daxpy_(&n, &a, &*A.begin(), &i, &*B.begin(), &i);
	
	B.print();
*/
/*	Data test;
	test.X = x;
	test.n_feat = 4;

	Layer L0(0,4,4);
	L0.w_swp(A);

	L0.push(1, test);
*/
	Matrix a(3,1);
	a(0,0) = 1;
	a(1,0) = 3;
	a(2,0) = 5; 

	Matrix b(3,1);
	b(0,0) = 1;
	b(1,0) = 10;
	b(2,0) = 100;
    	
	Matrix c(3,1);
	
	dsbmv(a, b, c);
    	printf("Result: [%f %f %f]\n", c[0], c[1], c[2]);


    return 0;
}
