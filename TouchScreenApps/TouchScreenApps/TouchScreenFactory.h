#include "TouchScreen.h"

class TouchScreenFactory
{
	
public:
	TouchScreen* create();
	TouchScreen* create(int width, int height);
	string operator() (vector<int>& data);
	TouchScreenFactory();
	~TouchScreenFactory();
};
