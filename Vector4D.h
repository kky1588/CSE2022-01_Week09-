#pragma once
class Vector4D
{
public:
	int w_,x_, y_, z_;
	Vector4D()
		:w_(0), x_(0), y_(0), z_(0)
	{}

	Vector4D(const int& w_input,const int& x_input, const int& y_input, const int& z_input)
		:w_(w_input), x_(x_input), y_(y_input), z_(z_input)
	{}

	//dot product
	int operator*(const Vector4D& input)
	{
		int ans;
		ans = this->w_*input.w_;
		ans += this->x_*input.x_;
		ans += this->y_*input.y_;
		ans += this->z_*input.z_;

		return ans;
	}
	//Vector3D dot_product(const Vector3D&);

	Vector4D operator+(const Vector4D& input)
	{
		Vector4D vec;
		vec.w_ = this->w_ + input.w_;
		vec.x_ = this->x_ + input.x_;
		vec.y_ = this->y_ + input.y_;
		vec.z_ = this->z_ + input.z_;
		return vec;
	}
};

class Vector5D
{
public:
	int v_,w_, x_, y_, z_;
	Vector5D()
		:v_(0),w_(0), x_(0), y_(0), z_(0)
	{}

	Vector5D(const int& v_input,const int& w_input, const int& x_input, const int& y_input, const int& z_input)
		:v_(v_input),w_(w_input), x_(x_input), y_(y_input), z_(z_input)
	{}

	//dot product
	int operator*(const Vector5D& input)
	{
		int ans;
		ans = this->v_*input.v_;
		ans += this->w_*input.w_;
		ans += this->x_*input.x_;
		ans += this->y_*input.y_;
		ans += this->z_*input.z_;

		return ans;
	}
	//Vector3D dot_product(const Vector3D&);

	Vector5D operator+(const Vector5D& input)
	{
		Vector5D vec;
		vec.v_ = this->v_ + input.v_;
		vec.w_ = this->w_ + input.w_;
		vec.x_ = this->x_ + input.x_;
		vec.y_ = this->y_ + input.y_;
		vec.z_ = this->z_ + input.z_;
		return vec;
	}
};

std::ostream& operator<<(std::ostream& os, const Vector4D& vec)
{
	os << vec.w_ << " " << vec.x_ << " " << vec.y_ << " " << vec.z_ << std::endl;
	return os;
}

std::ostream& operator<<(std::ostream& os, const Vector5D& vec)
{
	os <<vec.v_<<" "<< vec.w_ <<" "<< vec.x_ << " " << vec.y_ << " " << vec.z_ << std::endl;
	return os;
}
