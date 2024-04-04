#include <iostream>

#include "encode_pass.hpp"
#include "main_encrypt.hpp"
#include "output_data.hpp"
#include "read_data.hpp"
#include "main_decrypt.hpp"

int main(){

  std::string password = "MyPassword1234";
	Passdata password_data = Encode_Password::get_pass(password);
	Encrypted_Data e_CD = Encrypt::encrypt("Hello World", password_data);
	Output_Data::writefile("data.txt", e_CD.data);

	std::vector<float> data_set = Read_Data::readfile("data.txt");
	for (float x : data_set)
	{
		std::cout << "Val: " << x << "\n";
	}
	Decrypted_Data D_C = Decrypt::decrypt(data_set, password_data);
	std::cout << D_C.data;
  return 0;

}
