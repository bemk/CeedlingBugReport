#include "BugReport.h"
#include "ToBeMocked.h"

void UnitUnderTest()
{
        struct PaddedData data = { .alpha = 0x55AA, .beta = 0xBB};
        
        SomeFunction(data);
}
