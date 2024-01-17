#include <iostream>
#include <string>

class Hello {
    public:
	void say();
};

void Hello::say() { 
	std::cout << "hello cpp\n"; 
};

int main() {
	Hello h = Hello();
	h.say();
	return 0;
}
