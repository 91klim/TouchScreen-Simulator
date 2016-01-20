#include "stdafx.h"
#include <string>
#include <vector>

using namespace std;

class TouchScreen {
	int widthScreen;
	int heightScreen;
public:
	virtual string operator() (vector<int>& data) = 0;
	virtual ~TouchScreen() {};
};

TouchScreen* create(int width, int height);