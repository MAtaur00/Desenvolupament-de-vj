#ifndef VEC3_H
#define VEC3_H

class Vec3 {

private:

public:
	int vec[3];

	Vec3()
	{


	}

	Vec3(int x, int y, int z)
	{
		this->vec[0] = x;
		this->vec[1] = y;
		this->vec[2] = z;
	}

	~Vec3()
	{

	}

	Vec3 operator+ (const Vec3& p) const
	{
		Vec3 res(vec[0] + p.vec[0], vec[1] + p.vec[1], vec[2] + p.vec[2]);
		return res;
	}

	Vec3 operator- (const Vec3& p) const
	{
		Vec3 res(vec[0] - p.vec[0], vec[1] - p.vec[1], vec[2] - p.vec[2]);
		return res;
	}

	Vec3 operator* (const Vec3& p) const
	{
		Vec3 res(vec[0] * p.vec[0], vec[1] * p.vec[1], vec[2] * p.vec[2]);
		return res;
	}
};

#endif
