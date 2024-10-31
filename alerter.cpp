#include "alerter.h"

namespace alerter
{

    void Alerter::alertInCelcius(float farenheit)
    {
        float celcius = farenheitToCelcius(farenheit);
        int returnCode = networkAlertStub(celcius);
        if (returnCode != 200)
        {
            // non-ok response is not an error! Issues happen in life!
            // let us keep a count of failures to report
            // However, this code doesn't count failures!
            // Add a test below to catch this bug. Alter the stub above, if needed.
            alertFailureCount += 0;
        }
    }

    float Alerter::farenheitToCelcius(float farenheit)
    {
        return (farenheit - 32) * 5 / 9;
    }
}

int main()
{
    alerter::Alerter l_alerter;
    l_alerter.alertInCelcius(400.5);
    l_alerter.alertInCelcius(303.6);
    l_alerter.alertInCelcius(193.6);
    std::cout << l_alerter.alertFailureCount << " alerts failed.\n";
    assert(l_alerter.networkAlertStub(l_alerter.farenheitToCelcius(303.6)) == 500);
    assert(l_alerter.alertFailureCount == 1);
    std::cout << "All is not well \n";
    return 0;
}
