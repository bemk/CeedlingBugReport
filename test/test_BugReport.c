#include "unity.h"
#include "BugReport.h"

#include "mock_ToBeMocked.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_UnitUnderTestUsesCorrectArgument(void)
{
        struct PaddedData fakeData = { .alpha = 0x55AA, .beta = 0xBB };
        
        // Simulate residual data on the stack
        char* messUpStackPointer = (void*)&fakeData;
        messUpStackPointer[3] = 0x66;

        // Make sure we only changed the undefined data
        TEST_ASSERT_EQUAL(0x55AA, fakeData.alpha);
        TEST_ASSERT_EQUAL(0xBB, fakeData.beta);
        
        SomeFunction_Expect(fakeData);
        
        UnitUnderTest();
}