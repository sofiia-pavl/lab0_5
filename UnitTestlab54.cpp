#include "pch.h"
#include "CppUnitTest.h"
#include "../lab54/lab5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab54
{
	TEST_CLASS(UnitTestlab54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int q;
			q = S0(4,7);
			Assert::AreEqual(q, 0);
		}
	};
}
