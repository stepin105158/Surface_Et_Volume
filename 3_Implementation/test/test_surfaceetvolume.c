#include "unity.h"
//#include "SurfaceEtVolume.h"

	void setUp()
	{	}
	void tearDown()
	{	}

	void test_sphere(void)
	{
  		TEST_ASSERT_EQUAL(1, sphere(1));
  		TEST_ASSERT_EQUAL(0, sphere(0));
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_sphere);

  		return UNITY_END();
	}
