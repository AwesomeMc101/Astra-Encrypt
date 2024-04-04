//maybe iterate thru each digit of passkey

#include "main_encrypt.hpp"

namespace Encrypt {

	void encrypt_char(std::vector<float>& encrypt_data, char c, int pass_size)
	{
		int type = (c - '0');
		if (c == '.') { type = 10; }
		if (type > 9) {
			return;
		}

		switch (type)
		{
		case CRYPT_ADD:
			crypt_add(encrypt_data, pass_size);
			break;
		case CRYPT_SUB:
			crypt_sub(encrypt_data, pass_size);
			break;
		case CRYPT_MUL:
			crypt_mul(encrypt_data, pass_size);
			break;
		case CRYPT_DIV:
			crypt_div(encrypt_data, pass_size);
			break;
		case CRYPT_EULER:
			crypt_meuler(encrypt_data);
			break;
		case CRYPT_PI:
			crypt_mpi(encrypt_data);
			break;
		case CRYPT_TAU:
			crypt_mtau(encrypt_data);
			break;
		case CRYPT_OMEGA:
			crypt_momega(encrypt_data);
			break;
		case CRYPT_REVERSE:
			crypt_reverse(encrypt_data);
			break;
		}
	

	}
	Encrypted_Data encrypt(std::string to_encrypt, Passdata pass_data)
	{
		Encrypted_Data enc_data;
		int pass_size = pass_data.pass_value.size();
		for (char enc_char : to_encrypt)
		{
			std::cout << "Char: " << enc_char << "\n";
			enc_data.data.push_back(enc_char);
		}
		for (char enc_char : pass_data.pass_value)
		{
			encrypt_char(enc_data.data, enc_char, pass_size);
		}
		return enc_data;
	}
}
