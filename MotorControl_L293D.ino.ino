// Community of Robots//

//Dc motor example code//

int motorpin1 = 3;                  //define digital output pin no.

int motorpin2 = 4;                  //define digital output pin no.



void setup () {

  pinMode(motorpin1,OUTPUT);        //set pin 3 as output

  pinMode(motorpin2,OUTPUT);            // set pin 4 as output same as before

  
  
}
//blank
//
//
//
//
//

//

void loop () {
  
  RotateMotor();
}

void RotateMotor()
{
  delay(2000) ;
  
  digitalWrite(motorpin1,LOW);
  digitalWrite(motorpin2,HIGH);

  delay(3500) ;
  
  digitalWrite(motorpin1,LOW);
  digitalWrite(motorpin2,LOW);

  delay(2000) ;
  
  digitalWrite(motorpin1,HIGH);
  digitalWrite(motorpin2,LOW);

  delay(3500) ;

  digitalWrite(motorpin1,LOW);
  digitalWrite(motorpin2,LOW);

  delay(4000) ;
}

