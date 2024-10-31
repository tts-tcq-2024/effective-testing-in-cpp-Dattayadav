#include "alerter.h"

namespace alerter
{

    int Alerter::networkAlertStub(float celcius)
    {
        std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
        // Return 200 for ok
        // Return 500 for not-ok
        // stub always succeeds and returns 200
        return 200;
    }
}
