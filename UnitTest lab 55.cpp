#include "pch.h"
#include "CppUnitTest.h"
#include "../lab55/lab5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab55
{
	TEST_CLASS(UnitTestlab55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int w;
			w = Fib(0);
			Assert::AreEqual(w, 1);
		}
	};
}
