#include "decrypt_math.hpp"

void decrypt_add(std::vector<float>& vec, int pass_size)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] -= pass_size; //not a mistake, - since reverse
	}
}
void decrypt_sub(std::vector<float>& vec, int pass_size)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] += pass_size; 
	}
}
void decrypt_mul(std::vector<float>& vec, int pass_size)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] /= pass_size;
	}
}
void decrypt_div(std::vector<float>& vec, int pass_size)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] *= pass_size;
	}
}

void decrypt_sqrt(std::vector<float>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] = powf(vec[i], 2.0);
	}
}
void decrypt_cbrt(std::vector<float>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] = powf(vec[i], 3.0);
	}
}

void decrypt_meuler(std::vector<float>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] /= EULERS_NUM;
	}
}
void decrypt_mpi(std::vector<float>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] /= PI_NUM;
	}
}
void decrypt_mtau(std::vector<float>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] /= TAU_NUM;
	}
}
void decrypt_momega(std::vector<float>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] /= OMEGA_NUM;
	}
}