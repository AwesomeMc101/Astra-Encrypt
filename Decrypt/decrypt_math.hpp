#pragma once
#include <vector>
#include <math.h>
#include "classes.hpp"

void decrypt_add(std::vector<float>&, int); //vector, size
void decrypt_sub(std::vector<float>&, int);
void decrypt_mul(std::vector<float>&, int);
void decrypt_div(std::vector<float>&, int);

void decrypt_sqrt(std::vector<float>&);
void decrypt_cbrt(std::vector<float>&);

void decrypt_meuler(std::vector<float>&);
void decrypt_mpi(std::vector<float>&);
void decrypt_mtau(std::vector<float>&);
void decrypt_momega(std::vector<float>&);