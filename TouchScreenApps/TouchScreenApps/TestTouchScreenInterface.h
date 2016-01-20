#include "stdafx.h"
#include "gtest/gtest.h"
#include "TouchScreen.h"

TEST(TestInterface, CreateEmptyInterface)
{
	TouchScreen* ptr = create(10, 10);
	EXPECT_EQ(ptr != nullptr, false);
}
