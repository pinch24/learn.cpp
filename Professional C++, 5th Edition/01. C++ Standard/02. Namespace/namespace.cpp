#include <iostream>

namespace mycode {
	void foo() {
		std::cout <<"foo() called in the mycode namespace" << std::endl;
	}
}

using namespace mycode;

int main() {
	foo();
}