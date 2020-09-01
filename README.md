TO BE USED WITH ARDUINO...IN PRODUCING ANALOG OUTPUT SIGNAL.
THIS LIBRARY OR ARDUINO CODE CAN BE USED TO CREATE ANALOG SIGNALS WITH ANY DIGITAL PIN OF ARDUINO EVEN WITH NON-PWM ONES.

Include in your arduino file/project using-#include "forcepwm.h"
start calling functions.

NOTE: The file must be present in same folder with your arduino files in which it is included.

//Pin is any digital pin present on board- 0 to 13.
//Initialise that pin as Output in void setup() function.
//Both function do same things. But depend on the use. See warnings within each function

/**------------------------------------------------------------------------------------
Usage:

1. forcePwm(pin_number,analog_value_ranging_from_0_to_10);
 //Does not support other functions i.e. u cannot use the board for other function if u call this function.

2. softForcePwm(pin_number,analog_value_ranging_from_0_to_10)
//Do not use this fucntion if your code takes more than 20 ms (including this function)

-------------------------------------------------------------------------------------**/
