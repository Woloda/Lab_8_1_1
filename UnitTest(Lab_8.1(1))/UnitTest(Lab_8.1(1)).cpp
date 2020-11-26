#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1(1)/Lab_8.1(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab811
{
	TEST_CLASS(UnitTestLab811)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			using namespace std;
			char lit_r[20] = "SQsfQSSWfs";
			char para[] = "SQ";
			char para1[] = "QS";

			bool l = false;
			l = perevirka(lit_r, para, para1);
			Assert::AreEqual(l, true);
		}
	};
}
