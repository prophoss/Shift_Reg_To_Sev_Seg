int Data= 12;    //SER
int Clock = 9;   // SRCLK
int Latch = 11;  // RCLK
int Clear = 7;  //  SRCLR
int Enable =4;  // OE

byte LEDs= 0x00;

void setup() {
 pinMode(Data,OUTPUT);
 pinMode(Clock,OUTPUT);
 pinMode(Latch,OUTPUT); 
 pinMode(Clear, OUTPUT);     
 pinMode(Enable, OUTPUT);

 Serial.begin(9600);

}
/// set lactch pin low and that lets the chip know
/// that data is on the way, then after data has 
/// been sent set latch pin high
void loop() {
   digitalWrite(Enable,HIGH);
   digitalWrite(Enable, LOW);
  digitalWrite(Clear, LOW);
  digitalWrite(Clear, HIGH);
  digitalWrite(Latch, LOW);
  shiftOut(Data,Clock, LSBFIRST, LEDs);
  digitalWrite(Latch, HIGH);
 

}
