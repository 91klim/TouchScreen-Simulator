#include "stdafx.h"
#include "TouchScreenFactory.h"

string TouchScreenFactory::operator() (vector<int>& data)
{
	return "";
}

TouchScreenFactory::TouchScreenFactory()
{

}

TouchScreenFactory::~TouchScreenFactory()
{

}

TouchScreen* create(int width, int height)
{
	return nullptr;
}