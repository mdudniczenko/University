#include <iostream>
#include "CNumber.h"

int main() {
	CNumber c_num_0, c_num_1, result;

	c_num_0 = 7361;
	c_num_1 = 45;

	result = (c_num_0 / c_num_1);

	std::cout << "result: " << result.to_string() << "\n";

	return 0;
}