#include "main_decrypt.hpp"

namespace Decrypt
{

	void decrypt_char(std::vector<float>& encrypt_data, char enc_char, int pass_size)
	{
		int type = (enc_char - '0');
		if (enc_char == '.') { type = 10; }
		if (type > 9) {
			return;
		}

		switch (type)
		{
		case CRYPT_ADD:
			decrypt_add(encrypt_data, pass_size);
			break;
		case CRYPT_SUB:
			decrypt_sub(encrypt_data, pass_size);
			break;
		case CRYPT_MUL:
			decrypt_mul(encrypt_data, pass_size);
			break;
		case CRYPT_DIV:
			decrypt_div(encrypt_data, pass_size);
			break;
		case CRYPT_EULER:
			decrypt_meuler(encrypt_data);
			break;
		case CRYPT_PI:
			decrypt_mpi(encrypt_data);
			break;
		case CRYPT_TAU:
			decrypt_mtau(encrypt_data);
			break;
		case CRYPT_OMEGA:
			decrypt_momega(encrypt_data);
			break;
		case CRYPT_REVERSE:
			decrypt_reverse(encrypt_data);
			break;
		}

	}

	Decrypted_Data decrypt(std::vector<float> og_data, Passdata password_data)
	{
		int pass_size = password_data.pass_value.size();
		std::vector<float> data_buffer = og_data;
		std::reverse(password_data.pass_value.begin(), password_data.pass_value.end()); //get the instructions in reverse order

		for (char enc_char : password_data.pass_value)
		{
			decrypt_char(data_buffer, enc_char, pass_size);
		}

		Decrypted_Data d_C;
		std::vector<int> ASCII;
		for (float x : data_buffer)
		{
			std::cout << x << "\n";
			ASCII.push_back((int)round(x));
		}

		for (int enc_char : ASCII)
		{
			std::cout << "Char: " << enc_char << "\n";
			d_C.data.push_back(enc_char);
		}
		return d_C;
	}
}
