#define R 9
#define Y 10
#define G 11
#define B 12
void setup() {
  // put your setup code here, to run once:
  pinMode(Y, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(R, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int c = 0;c < 5;c = c+1){
    digitalWrite(R, HIGH);  // turn the LED on (HIGH is the voltage level)
    digitalWrite(Y, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
    delay(500);                      // wait for a second
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);    
    digitalWrite(Y, HIGH);   // turn the LED off by making the voltage LOW
    digitalWrite(B, LOW);
    delay(500);
    digitalWrite(Y, LOW);
    digitalWrite(R, LOW);
    digitalWrite(B, LOW);
    digitalWrite(G, HIGH);   // turn the LED off by making the voltage LOW
    delay(500);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);   // turn the LED off by making the voltage LOW
    digitalWrite(R, LOW);
    digitalWrite(Y, LOW);
    delay(500);
    
  }
  

}