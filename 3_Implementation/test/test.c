#include "unity.h"
#include <Mainagri.h>


void setUp()
{

}

void tearDown()
{

}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);


  return UNITY_END();
}
void test_add(void) {
  TEST_ASSERT_EQUAL(3, add(2, 1));

 /*Dummy fail*/
 //TEST_ASSERT_EQUAL(9, add(4, 5));

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));

  /* Dummy fail*/
 // TEST_ASSERT_EQUAL(10, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));

  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(1, divide(2, 2));//
}
