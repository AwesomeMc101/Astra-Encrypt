#include <ostream>
#include <fstream>
#include <vector>
#include <string>

#include "classes.hpp"

namespace Output_Data {
	std::string setup_output_data(std::vector<float>);
	void writefile(std::string, std::vector<float>); //name, data
}