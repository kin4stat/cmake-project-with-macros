// cmake-project-with-macros.cpp : Defines the entry point for the application.
//

#include "cmake-project-with-macros.h"

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	my::my_func(); 
	return 0;
}

MY_NAMESPACE_BEGIN
void my_func()
{
}
MY_NAMESPACE_END
