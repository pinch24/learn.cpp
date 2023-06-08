import <iostream>;

int main()
{
	std::cout << std::format("There are {} ways I love you", 219) << std::endl;
	return 0;
}

/* Point
C++ 20
*/

/* Build
$ clang++ -std=c++2a -fmodules-ts helloworld2.cpp 
*/