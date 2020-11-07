#include "pch.h"
#include "CppUnitTest.h"
#include "../lab52/lab5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab52
{
	TEST_CLASS(UnitTestlab52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			c = A(3, 5,0);
			Assert::AreEqual(c, 0);
		}
	};
}
