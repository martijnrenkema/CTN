//CTN-test
//V0.1

//****maak een constate (vaste) integer aan waar de waarde van de GPIO pinen in opgeslagen staat******
const int buttonPin = 12;    
const int buttonPin2 = 27;
const int ledPin =  13;   
const int relay1 = 14;   
//****************************************************************************************************

//****Maak een variable integer aan waar de knopstatus inopgeslagen kan worden************************
int buttonState = 0;      
int buttonState2 = 0; 
//****************************************************************************************************

//****Eenmalige uitvoering(ofterwijl setup)***********************************************************
void setup() {
  Serial.begin(115200);   //start de seriele monitor
  Serial.println("CTN-test software V0.1"); //Print "CTN-test software V0.1" in de seriele monitor
  Serial.println("Zet GPIO 13 als OUTPUT"); //Print "Zet GPIO 13 als OUTPUT" in de seriele monitor
  pinMode(ledPin, OUTPUT); //zet de pinmode van GPIO 13 als OUTPUT
  Serial.println("Zet GPIO 12 als INPUT"); //Print "Zet GPIO 12 als INPUI" in de seriele monitor
  pinMode(buttonPin, INPUT); // zet de pinmode van GPIO 12 als INPUT
  Serial.println("Zet GPIO 14 als OUTPUT"); //Print "Zet GPIO 14 als OUTPUT" in de seriele monitor
  pinMode(relay1, OUTPUT); // zet de pinmode van GPIO 14 als OUTPUT
}
//****************************************************************************************************

//****Oneindige loop van commando's*******************************************************************
void loop(){
  buttonState = digitalRead(buttonPin); //lees de huidige status uit en sla dit op in de integer buttonState
  
  if (buttonState == HIGH) {
    Serial.println("LED aan"); //Print "LED aan" in de seriele monitor
    digitalWrite(ledPin, HIGH); //zet pin 13 op HIGH
    
  } else {
    Serial.println("LED uit"); //Print "LED uit" in de seriele monitor
    digitalWrite(ledPin, LOW); //zet pin 13 op LOW
  }
    buttonState2 = digitalRead(buttonPin2); //lees de huidige status uit en sla dit op in de integer buttonState2

  if (buttonState2 == HIGH) {
    Serial.println("Relais aan"); //Print "Relais aan" in de seriele monitor
    digitalWrite(relay1, HIGH); //zet pin 14 op HIGH
    
  } else {
    Serial.println("Relais uit"); //Print "Relais uit" in de seriele monitor
    digitalWrite(relay1, LOW); //zet pin 14 op LOW
  }
}
//****************************************************************************************************
