int comp=7;  //to compare with a full output
int pin=8;   //our non-pwn pin which we are using as pwm
int analogcomp=9;   //to compare with similar output but obtained via inbuilt pwm output through a pwm pin (analogwrite)

int n=2; //CHANGE THIS VALUE FOR BRIGHTNESS. enter value 0 to 10...10 is full bright

float x=n/10.0;

void setup(){
  pinMode(pin,OUTPUT);
  pinMode(comp,OUTPUT);
  pinMode(analogcomp, OUTPUT);
  digitalWrite(comp,1);
  analogWrite(analogcomp,int(255.0*x));
  }
  
void loop(){
  digitalWrite(pin,1);
  delay(n);
  digitalWrite(pin,0);
  delay(10-n);
  }
