#include "stdafx.h"
#include "TouchScreen.h"

class TouchScreenFactory : public TouchScreen
{	
public:
	string operator() (vector<int>& data);
	TouchScreenFactory();
	~TouchScreenFactory();
};
