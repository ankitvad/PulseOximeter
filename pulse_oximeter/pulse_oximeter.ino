int sense = A0;
float  x,y;

void setup() {                
  // initialize the digital pin as an output.
  Serial.begin(9600); 
}

// the loop routine runs over and over again forever:
void loop() {
     float t =0;
 x=0;
 for (int i=0; i < 5; i++)
 { 
   t+=analogRead(sense); 
 }
 x=t/5; 
 
y=map(x,0,1023,14,18);
  Serial.print("your haemoglobin level is-");
  Serial.print('\t');
  Serial.println(y,3);
  // Serial.print(analogRead(sense));
  Serial.print('\n');
delay(2000);
}