﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../lab51/lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int t;
			t = h(9, 4);
			Assert::AreEqual(t, 65);
		}
	};
}
