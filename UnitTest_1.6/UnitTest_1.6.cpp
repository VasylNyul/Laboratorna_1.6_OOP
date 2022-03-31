#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_1.6/Vector3D.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest16
{
	TEST_CLASS(UnitTest16)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector3D::Triad t;

			t.set_x(5);
			Assert::AreEqual(5, t.get_x());
		}
	};
}
