#include "classes.hpp"
#include "crypt_table.h"

#include "decrypt_algo.hpp"
#include "decrypt_math.hpp"

#include <iostream>

struct Decrypted_Data {
	std::string data;
};

namespace Decrypt
{
	void decrypt_char(std::vector<float>&, char, int);
	Decrypted_Data decrypt(std::vector<float>, Passdata);
}