#include <string>
#include <vector>

using namespace std;

class TouchScreen {
	int widthScreen;
	int heightScreen;
public:
	virtual TouchScreen* create() = 0;
	virtual TouchScreen* create(int width, int height) = 0;
	virtual string operator() (vector<int>& data) = 0;
	virtual ~TouchScreen() {};
};
