#include "pch.h"
#include "CppUnitTest.h"
#include "../lb8.2/lb8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		
		TEST_METHOD(TestMethod1)
		{
			string testStr1 = "Hello World";
			Assert::AreEqual(size_t(5), FindFirstSpacePosition(testStr1));

			
			string testStr2 = "HelloWorld";
			Assert::AreEqual(string::npos, FindFirstSpacePosition(testStr2));
		}

		TEST_METHOD(TestConvertToUpperBeforeSpace)
		{
			
			string testStr1 = "hello world";
			size_t spacePos1 = FindFirstSpacePosition(testStr1);
			Assert::AreEqual(string("HELLO world"), ConvertToUpperBeforeSpace(testStr1, spacePos1));

			
			string testStr2 = "helloworld";
			size_t spacePos2 = testStr2.size(); 
			Assert::AreEqual(string("HELLOWORLD"), ConvertToUpperBeforeSpace(testStr2, spacePos2));
		}
	};
}
