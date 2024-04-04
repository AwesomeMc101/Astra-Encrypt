#include "output_data.hpp"

namespace Output_Data {
	std::string setup_output_data(std::vector<float> vec)
	{
		std::string final_data = "";
		for (float value : vec)
		{
			final_data.append(std::to_string(value));
			final_data.append(C_TOKEN);
		}
		return final_data;
	}
	void writefile(std::string filename, std::vector<float> data) 
	{
		std::ofstream file(filename);
		file << setup_output_data(data);
	}
}
