    #include <RF24.h>           // Radio Communication
    #include <nRF24L01.h>       // Radio Communication

// Radio Communication:
// ----------------------------------------------
RF24 radio(5, 6);                   // nRF24L01 (CE, CSN)
const byte address[6] = "00001";    // Address

// Max size of this struct is 32 bytes - NRF24L01 buffer limit
struct Data_Package {
  // Joystics
  byte j1PotX;
  byte j1PotY;
  byte j1Button;
  byte j2PotX;
  byte j2PotY;
  byte j2Button;
  byte j3PotX;
  byte j3PotY;
  byte j3Button;
  byte j4PotX;
  byte j4PotY;
  byte j5Button;
  // Potenciometer
  byte pot1;
  byte pot2;
  // Toggle Switch
  byte tSwitch1;
  byte tSwitch2;
  byte tSwitch3;
  byte tSwitch4;
  // Button Switch
  byte button1;
  byte button2;
  byte button3;
  byte button4;
};
Data_Package data; //Create a variable with the above structure


