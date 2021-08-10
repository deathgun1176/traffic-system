int time_slot;

void setup() {
  pinMode(13,OUTPUT);// signal-1_red_led
  pinMode(12,OUTPUT);// signal-1_yellow_led
  pinMode(11,OUTPUT);// signal-1_green_led
  pinMode(10,OUTPUT);// signal-2_red_led
  pinMode(9,OUTPUT);// signal-2_yellow_led
  pinMode(8,OUTPUT);// signal-2_green_led
  pinMode(7,OUTPUT);// signal-3_red_led
  pinMode(6,OUTPUT);// signal-3_yellow_led
  pinMode(5,OUTPUT);// signal-3_green_led
  pinMode(4,OUTPUT);// signal-4_red_led
  pinMode(3,OUTPUT);// signal-4_yellow_led
  pinMode(2,OUTPUT);// signal-4_green_led
  Serial.begin(9600);
  Serial.print("Enter the time slot : "); 
  while (Serial.available()==0){} ;
  time_slot=Serial.parseInt();
  Serial.print("current time slot is : "); 
  Serial.println(time_slot); 
}

void loop() {
 if(time_slot==1){
  digitalWrite(12,HIGH);
  delay(100);
  digitalWrite(12,LOW);
  delay(100);
  digitalWrite(9,HIGH);
  delay(100);
  digitalWrite(9,LOW);
  delay(100);
  digitalWrite(6,HIGH);
  delay(100);
  digitalWrite(6,LOW);
  delay(100);
  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(3,LOW);
  delay(100);
  }
  if(time_slot==2){
//Signal 1 GREEN ON, Signal 2 RED ON, Signal 3 RED ON, Signal 4 RED ON. (For 3 sec.)
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(4,HIGH);
  delay(3000);
 // Signal 1 GREEN OFF, YELLOW ON, Rest Signals remain RED ON, as before. (For 1 sec).
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  digitalWrite(10,LOW);
 // Signal 2 GREEN ON, Signal 1 RED ON, Signal 3 RED ON, Signal 4 RED ON. (For 3 sec.)
  digitalWrite(13,HIGH);
  digitalWrite(8,HIGH);
  delay(3000);
 //Signal 2 GREEN OFF, YELLOW ON, Rest Signals remain RED ON, as before. (For 1 sec)
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
  digitalWrite(7,LOW);
 // Signal 3 GREEN ON, Signal 1 RED ON, Signal 2 RED ON, Signal 4 RED ON. (For 3 sec.)
 digitalWrite(10,HIGH);
 digitalWrite(5,HIGH);
 delay(3000);
 //Signal 3 GREEN OFF, YELLOW ON, Rest Signals remain RED ON, as before. (For 1 sec)
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(6,LOW);
  digitalWrite(4,LOW);
 // Signal 4 GREEN ON, Signal 1 RED ON, Signal 2 RED ON, Signal 3 RED ON. (For 3 sec.)
  digitalWrite(2,HIGH);
  digitalWrite(7,HIGH);
  delay(3000);
 //Signal 4 GREEN OFF, YELLOW ON, Rest Signals remain RED ON, as before. (For 1 sec)
   digitalWrite(2,LOW);
   digitalWrite(3,HIGH);
   delay(1000);
}    
if(time_slot==3){
//Signal 2 and Signal 4 (Main Road) must have GREENS ON, Signals 1 and 3 REDS ON.(For 3 sec)
  digitalWrite(13,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(2,HIGH);
  delay(3000);
//Signal 2 and Signal 4 GREENS OFF, YELLOWS ON. Signals 1 and 3 REDS ON (For 1 sec)  
  digitalWrite(8,LOW);
  digitalWrite(2,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
  digitalWrite(3,LOW);
//Signal 1 and Signal 3 (Side Road) must have GREENS ON, Signals 2 and 4 REDS ON.(For 3 sec)
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  delay(3000);
//Signal 1 and Signal 3 GREENS OFF, YELLOWS ON. Signals 2 and 4 REDS ON (For 1 sec) 
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay(1000);
}
 if(time_slot==4){
   //Signal 1 GREEN ON, Signal 2 RED ON, Signal 3 RED ON, Signal 4 RED ON. (For 3 sec.)
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(4,HIGH);
  delay(3000);
 // Signal 1 GREEN OFF, YELLOW ON, Rest Signals remain RED ON, as before. (For 1 sec).
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  digitalWrite(10,LOW);
 // Signal 2 GREEN ON, Signal 1 RED ON, Signal 3 RED ON, Signal 4 RED ON. (For 3 sec.)
  digitalWrite(13,HIGH);
  digitalWrite(8,HIGH);
  delay(3000);
 //Signal 2 GREEN OFF, YELLOW ON, Rest Signals remain RED ON, as before. (For 1 sec)
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
  digitalWrite(7,LOW);
 // Signal 3 GREEN ON, Signal 1 RED ON, Signal 2 RED ON, Signal 4 RED ON. (For 3 sec.)
 digitalWrite(10,HIGH);
 digitalWrite(5,HIGH);
 delay(3000);
 //Signal 3 GREEN OFF, YELLOW ON, Rest Signals remain RED ON, as before. (For 1 sec)
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(6,LOW);
  digitalWrite(4,LOW);
 // Signal 4 GREEN ON, Signal 1 RED ON, Signal 2 RED ON, Signal 3 RED ON. (For 3 sec.)
  digitalWrite(2,HIGH);
  digitalWrite(7,HIGH);
  delay(3000);
 //Signal 4 GREEN OFF, YELLOW ON, Rest Signals remain RED ON, as before. (For 1 sec)
   digitalWrite(2,LOW);
   digitalWrite(3,HIGH);
   delay(1000);
 }

}
