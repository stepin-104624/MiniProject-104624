#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <abcanalysis.h>
#define PROJECT_NAME "abcanalysis"

/* Prototypes for all the test functions */
void test_do_abcanalysis(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

/* Add your test functions in this format for testing*/
  CU_add_test(suite, "abcanalysis", test_do_abcanalysis);



/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}
/* Write all the test functions */
void test_do_abcanalysis {
  CU_ASSERT_EQUAL("The item is under A\n",abcanalysis(7000));
   CU_ASSERT_EQUAL("The item is under vital\n",abcanalysis(700));
   CU_ASSERT_EQUAL("high success rate\n",abcanalysis(7));

  /* Dummy fail*/
}
