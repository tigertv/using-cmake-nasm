#include <iostream>

extern "C" int ret_number();

int main(int argc, char **argv) {
	int c = 0;
	c = ret_number();
	std::cout << "c=" << c << std::endl;
	return 0;
}
