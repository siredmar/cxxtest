#include <cxxtest/TestSuite.h>
#include "../Complex.hpp"

class ComplexTestSuite : public CxxTest::TestSuite
{
public:
	void TestAddFunction()
	{
		Complex a(1, 2);
		Complex b(3, 4);
		Complex c;
		c = Add(a, b);
		TS_ASSERT_EQUALS(c.GetRe(), 4);
		TS_ASSERT_EQUALS(c.GetIm(), 6);
	}

	void TestAddOperator()
	{
		Complex a(1, 2);
		Complex b(3, 4);
		Complex c;
		c = a + b;
		TS_ASSERT_EQUALS(c.GetRe(), 4);
		TS_ASSERT_EQUALS(c.GetIm(), 6);
	}

	void TestSubFunction()
	{
		Complex a(1, 2);
		Complex b(3, 4);
		Complex c;
		c = Sub(a, b);
		TS_ASSERT_EQUALS(c.GetRe(), -2);
		TS_ASSERT_EQUALS(c.GetIm(), -2);
	}

	void TestSubOperator()
	{
		Complex a(1, 2);
		Complex b(3, 4);
		Complex c;
		c = a - b;
		TS_ASSERT_EQUALS(c.GetRe(), -2);
		TS_ASSERT_EQUALS(c.GetIm(), -2);
	}
};
