#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1rep/lab6.1rep.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61rep
{
	TEST_CLASS(UnitTest61rep)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 4;
			int r[n] = { 20, 1, -5, 6 };
			t = Sum(r, n);
			Assert::AreEqual(t, 7);

		};
	};
}