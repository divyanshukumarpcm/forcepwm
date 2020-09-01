//Include arduino.h
//Please use value 0 to 10...0 is off and 10 is FULL on.
//Pin is any digital pin present on board- 0 to 13.
//Initialise that pin as Output in void setup() function.
//Both function do same things. But depend on the use. See warnings within each function

/**------------------------------------------------------------------------------------
Usage:

1. forcePwm(pin_number,analog_value_ranging_from_0_to_10);


2. softForcePwm(pin_number,analog_value_ranging_from_0_to_10)


-------------------------------------------------------------------------------------**/


forcePwm(int pin,int value){
	
 //Does not support other functions i.e. u cannot use the board for other function if u call this function.
 
while(1){
  digitalWrite(pin,1);
  delay(value);
  digitalWrite(pin,0);
  delay(10-value);
  }

}


softForcePwm(int pin,int value){
	
//Do not use this fucntion if your code takes more than 20 ms (including this function)
 

  digitalWrite(pin,1);
  delay(value);
  digitalWrite(pin,0);
  delay(10-value);
  

}
