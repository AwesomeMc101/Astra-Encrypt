#pragma once
#include "encode_pass.hpp"
namespace Encode_Password {

	bool is_even(double num) //ik this is an incredibly inefficient way to write this but IDC.
	{
		int to_check = ceil(num);
		int even = (to_check % 2);

		if (even == 0) { return true; }
		return false;
		
	}

	PASSWORD_VALUE get_password_value(std::string pass)
	{
		PASSWORD_VALUE f_value = "";
		for (char c : pass)
		{
			double value = pass_table[c];
			f_value.append(std::to_string(value));
		}
		return (f_value);
	}

	Passdata get_pass(std::string pass)
	{
		Passdata pass_data;
		pass_data.original_key = pass;
		pass_data.pass_value = get_password_value(pass);
		return pass_data;
	}

}
