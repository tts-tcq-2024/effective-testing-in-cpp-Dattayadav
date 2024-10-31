#include <iostream>
#include <assert.h>

namespace alerter
{
    class Alerter
    {

    public:
        void alertInCelcius(float farenheit);
        float farenheitToCelcius(float farenheit);
        int networkAlertStub(float celcius);
        int alertFailureCount = 0;
    };
}
