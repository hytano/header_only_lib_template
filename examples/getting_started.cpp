#include <my_lib/my_lib.h>

#include <iostream>
#include <fmt/format.h>

using namespace my_libs_namespace;
using namespace std;

int main(int argc, char *argv[])
{
	my_class m(5);

	cout << fmt::format("Value: {}", m.value()) << endl;

	m.add(5);

	cout << fmt::format("Value: {}", m.value()) << endl;

	return 0;
}