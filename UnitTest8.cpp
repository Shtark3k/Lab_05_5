#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_5/Lab_05_5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest8
{
	TEST_CLASS(UnitTest8)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int depth = 0;
			int n = 5;

			double limit = (recursiveSequence(n, 1, depth));
			double epsilon = 0.00001;
			Assert::AreEqual(limit, epsilon, 2.00314);
		}
	};
}
