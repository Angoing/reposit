#ifndef SIMPLE_CLASS
#define SIMPLE_CLASS

class simple_class {
public:
	// constructors
	simple_class();
	simple_class(int);
	~simple_class();

	//public methods
	int get_value() const;
	void set_value(int);

private:
	int num;
};

#endif
