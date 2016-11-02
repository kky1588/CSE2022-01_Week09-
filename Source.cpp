#include <iostream>
#include "Vector4D.h"
#include "Matrix5x4.h"


int main()
{
	Vector4D v1(1, 2, 3, 4); 
	Vector4D v2(5, 6, 7, 8);
	Vector4D v3(9, 10, 11, 12);
	Vector4D v4(13, 14, 15, 16);
	Vector4D v5(17, 18, 19, 20);
	Vector4D vx(5, 10, 15, 20);
	Matrix5x4 mat(v1,v2,v3,v4,v5);
	mat.showMat();
	std::cout << std::endl << "X"<< std::endl << std::endl;
	std::cout << std::endl << vx << std::endl;
	std::cout << std::endl << "=" << std::endl << std::endl;
	Vector5D y = mat*vx;
	std::cout << std::endl << y << std::endl;

	return 0;
}
