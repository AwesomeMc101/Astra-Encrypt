#pragma once
#include <map>
#include <math.h>

#define MAGIC_KEY 54774
#define conv_pass(c) c / sizeof(c) * MAGIC_KEY / (cbrt(MAGIC_KEY * c))

extern std::map<char, double> pass_table;