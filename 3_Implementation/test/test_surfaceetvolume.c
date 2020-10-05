#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <SurfaceEtVolume.h>
#define PROJECT_NAME    "Surface_Et_Volume"

/* Prototypes for all the test functions */
void test_sphere(void);
void test_cone(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "sphere", test_sphere);
  CU_add_test(suite, "cone", test_cone);

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
void test_sphere(void) {
  CU_ASSERT(113.040001 == sphere(3));
  
  /* Dummy fail*/
  CU_ASSERT(15 == sphere(2));
}

void test_cone(void) {
  CU_ASSERT(25.120001 == cone(2,2));
  
  /* Dummy fail*/
  CU_ASSERT(30 == cone(1, 9));
}
