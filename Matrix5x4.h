#pragma once

#include "Vector4D.h"

class Matrix5x4
{
public:
	Vector4D row0, row1, row2, row3, row4;

	Matrix5x4(const Vector4D& _r0, const Vector4D& _r1, const Vector4D& _r2, const Vector4D& _r3, const Vector4D& _r4)
		:row0(_r0), row1(_r1), row2(_r2), row3(_r3), row4(_r4)
	{}

	Vector5D operator*(const Vector4D& rhs)
	{
		Vector5D ans;

		ans.v_ = row0*rhs;
		ans.w_ = row1*rhs;
		ans.x_ = row2*rhs;
		ans.y_ = row3*rhs;
		ans.z_ = row4*rhs;

		return ans;
	}

	void showMat()
	{
		Matrix5x4 mat(row0,row1,row2,row3,row4);
		Vector4D row0 = mat.row0;
		Vector4D row1 = mat.row1;
		Vector4D row2 = mat.row2;
		Vector4D row3 = mat.row3;
		Vector4D row4 = mat.row4;
		std::cout << row0 << std::endl;
		std::cout << row1 << std::endl;
		std::cout << row2 << std::endl;
		std::cout << row3 << std::endl;
		std::cout << row4 << std::endl;
	}
};

