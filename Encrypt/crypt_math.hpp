#pragma once
#include <vector>

#include "classes.hpp"

void crypt_add(std::vector<float>&, int); //vector, size
void crypt_sub(std::vector<float>&, int); 
void crypt_mul(std::vector<float>&, int); 
void crypt_div(std::vector<float>&, int);

void crypt_sqrt(std::vector<float>&);
void crypt_cbrt(std::vector<float>&);

void crypt_meuler(std::vector<float>&);
void crypt_mpi(std::vector<float>&);
void crypt_mtau(std::vector<float>&);
void crypt_momega(std::vector<float>&);