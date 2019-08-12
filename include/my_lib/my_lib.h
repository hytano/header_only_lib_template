#ifndef __MY_LIB_H__
#define __MY_LIB_H__

namespace my_libs_namespace
{
class my_class
{
public:
	my_class(int init_val) : _my_val(init_val)
	{
	}

	int value() { return _my_val; }

	void add(int b) { _my_val += b; }

protected:
	int _my_val{0};
};
}; // namespace my_libs_namespace

#endif /*__MY_LIB_H__*/
