#include "pch.h"
#include "CppUnitTest.h"
#include "../Program/CSetInt.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(TestCSetInt)
	{
	public:
		
		TEST_METHOD(merge)
		{
			SetInt set[2] = {
						SetInt(5,	1, 2, 3, 4, 5),
						SetInt(3,	1, 2, 6)
			};
			SetInt	*merge = SetInt::merge(set[0], set[1]);
			const int out_merge[] = { 1, 2, 3, 4, 5, 6 };

			Assert::AreEqual(memcmp(out_merge, merge->GetSet(), merge->GetSize() * sizeof(int)), 0);
		}
	};
}
