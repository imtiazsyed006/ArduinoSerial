uint16_t data = 800; ///Sensor
uint8_t dataSend[4]; /// Don't disturb it
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  uint8_t data1 = (data >> 8);
  uint8_t data2 = data; 
  dataSend[0] = 83; // leave it as it is.
  dataSend[1] = data1;// leave it as it is.
  dataSend[2] = data2;// leave it as it is.
  dataSend[3] = 10;// leave it as it is.
  Serial.write(dataSend,4);// leave it as it is.
  


}
