#include "pch.h"
#include "CppUnitTest.h"
#include "../lab53/lab5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab53
{
	TEST_CLASS(UnitTestlab53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a;
			a = f(3);
			Assert::AreEqual(a, 0);
		}
	};
}
