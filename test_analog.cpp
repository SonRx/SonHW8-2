#include "AnalogIn.h"

int main(){

    AnalogIn ADC(0);    // init object
    
    float ADC_val = ADC.readADCsample();

    // (float (val)/4096) 3*3
    float voltage =  (1.80/4096) * ADC_val;

    cout << "in_voltage#" << "_raw" << "\n";
    cout << "ADC value is: " << ADC_val << " and voltage is: " << voltage << "\n";
}
