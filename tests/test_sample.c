
//############################################################################//
//===========================  SAMPLE TEST FILE  =============================//
// For more info, check out readme                                            //
// Also, check for testing fundamentals                                       //
// Hail to the QAs!                                                           //
//############################################################################//

// fill with your header files
#include "./Unity-2.6.1/src/unity.h"

// A sample file to be this test target
// #include "../sample.c"

void	setUp()
{
	// Preconditions for your test
	// It will run at the beggining of the suite
	return ;
}

void	tearDown()
{
	// Post operations for your test
	// It will run after the suite ends running
	return ;
}

void	two_strings_should_be_equal(void)
{
TEST_ASSERT_EQUAL_STRING("TEST", "TEST");
}

void	two_strings_should_be_equal_again(void)
{
	char msg[] = "Well, it seems like a failed test!";
	TEST_ASSERT_EQUAL_STRING_MESSAGE("TEST", "NOT",msg);
}

int	main(void)
{
UNITY_BEGIN();
RUN_TEST(two_strings_should_be_equal);
RUN_TEST(two_strings_should_be_equal_again);
return UNITY_END();
}
