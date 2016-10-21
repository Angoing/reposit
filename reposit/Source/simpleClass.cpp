#include "../Headers/simpleClass.h"

// constructors
simple_class::simple_class() : num(5) { }
simple_class::simple_class(int i) : num(i) { }
simple_class::~simple_class() { }

// public methods
int simple_class::get_value() const {
	return num;
}
void simple_class::set_value(int new_num) {
	num = new_num;
}
