#include "unity.h"
#include "SplitStrings.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_SplitStrings(char **f)
{
  TEST_ASSERT_EQUAL('"my","name","is","edcast","future","skills"', SplitStrings("my_name_is_edcast_future_skills"));
  TEST_ASSERT_EQUAL('"hello","world"', SplitStrings("hello_world"));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_SplitStrings);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
