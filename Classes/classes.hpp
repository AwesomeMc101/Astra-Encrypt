#pragma once
#include <vector>
#include <string>
#include <string.h>

const double EULERS_NUM = 2.7182;
const double PI_NUM = 3.14159;
const double TAU_NUM = (2 * PI_NUM);
const double OMEGA_NUM = 0.56714;

const std::string C_TOKEN = "$";

typedef std::string PASSWORD_VALUE;


struct Passdata {
	std::string original_key;
	PASSWORD_VALUE pass_value; //will hold a lot.
};
