#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_3/Lab_05_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6
{
	TEST_CLASS(UnitTest6)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double g = 5;
			double expectation = round(p(g));
			double actual = 3;
			Assert::AreEqual(expectation, actual);
		}
	};
}