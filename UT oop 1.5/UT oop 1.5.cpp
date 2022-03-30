#include "pch.h"
#include "CppUnitTest.h"
#include "..//oop1.5/Triad.cpp"
#include "..//oop1.5/Triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UToop15
{
	TEST_CLASS(UToop15)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle t;
			t.Init(6, 8, 10);
			Assert::AreEqual(24., t.GetArea());;
		}
	};
}
