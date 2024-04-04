#pragma once
#include <math.h>
#include <iostream>

#include "classes.hpp"
#include "pass_table.hpp"

namespace Encode_Password {

	bool is_even(double num);
	PASSWORD_VALUE get_password_value(std::string);
	Passdata get_pass(std::string);

}