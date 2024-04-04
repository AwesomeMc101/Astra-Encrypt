#include "crypt_math.hpp"

void crypt_add(std::vector<float>& vec, int str_size) //vector, size
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] += str_size;
	}
}

void crypt_sub(std::vector<float>& vec, int str_size) //vector, size
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] -= str_size;
	}
}
void crypt_mul(std::vector<float>& vec, int str_size) //vector, size
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] *= str_size;
	}
}
void crypt_div(std::vector<float>& vec, int str_size) //vector, size
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] /= str_size;
	}
}

void crypt_sqrt(std::vector<float>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] = sqrtf(vec[i]);
	}
}
void crypt_cbrt(std::vector<float>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] = cbrtf(vec[i]);
	}
}

void crypt_meuler(std::vector<float>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] *= EULERS_NUM;
	}
}
void crypt_mpi(std::vector<float>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] *= PI_NUM;
	}
}
void crypt_mtau(std::vector<float>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] *= TAU_NUM;
	}
}
void crypt_momega(std::vector<float>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] *= OMEGA_NUM;
	}
}