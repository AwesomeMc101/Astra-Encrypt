#include "encode_pass.hpp"
#include "crypt_table.h"

#include "crypt_math.hpp"
#include "crypt_algo.hpp"

struct Encrypted_Data {
	//std::string data;
	std::vector<float> data; //full of chars
};

namespace Encrypt {
	
	void encrypt_char(std::vector<float>&, char, int);
	Encrypted_Data encrypt(std::string, Passdata);
}