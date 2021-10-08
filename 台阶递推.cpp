#include <iostream>
using namespace std; 
int calStepMethodsbyStepping(int stairCount) {
    if (stairCount < 1) {
        return 0;
    }

    if (stairCount == 1) {
        return 1;
    }

    if (stairCount == 2) {
        return 2;
    }

    int stepMethods = 0;
    int preStepMethods = 2;
    int prePreStepMethods = 1;
    int stairStepped = 3;
    for (; stairStepped < stairCount + 1; ++stairStepped ) {
        stepMethods = prePreStepMethods + preStepMethods;
        prePreStepMethods = preStepMethods;
        preStepMethods = stepMethods;
    }

    return stepMethods;
}

int main()
{
    cout << "calStepMethodsbyStepping" << endl;
    cout << "10 stairs: " << calStepMethodsbyStepping(10) << endl;
}
