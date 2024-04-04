#include "read_data.hpp"

namespace Read_Data {
	bool isdouble(std::string test)
	{
		int type_count = 0;
		for (char c : test)
		{
			if (!isdigit(c))
			{
				if (c != '-' && c != '.')
				{
					//std::cout << "\ncooked @ " << c << "\n";
					return false;
				}
				else
				{
					type_count++;
				}
			}
		}
		//std::cout << "TypeCount: " << type_count << "\n";
		return !(type_count > 2); //more than 2 is false
	}
	std::vector<float> parse_input_data(std::string str)
	{
		std::string buffer = "";
		std::vector<float> data;
		for (char c : str)
		{
			std::cout << c;
			if (c == C_TOKEN[0])
			{
				
				if (isdouble(buffer)) {
					data.push_back(std::stof(buffer));
				}
				else {}
				buffer.clear();
			}
			else
			{
				buffer.push_back(c);
			}
		}
		return data;


	}
	std::vector<float> readfile(std::string file) { //name, data
		std::ifstream fx(file);
		std::string all_data = "";
		std::string line;
		while (std::getline(fx, line))
		{
			all_data += line;
		}

		return parse_input_data(all_data);
	}
}