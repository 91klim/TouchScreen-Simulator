// TouchScreenApps.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TestTouchScreenInterface.h"

using namespace std;

int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
    return 0;
}

