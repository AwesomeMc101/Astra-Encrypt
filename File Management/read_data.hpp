#include <ostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>

#include "classes.hpp"

namespace Read_Data {
	bool isdouble(std::string);
	std::vector<float> parse_input_data(std::string);
	std::vector<float> readfile(std::string); //name, data
}