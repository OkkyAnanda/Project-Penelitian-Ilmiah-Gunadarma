int laser = 8;
in buzzer = 8;

void setup () {

Serial.begin(9600);
pinMode(A0, INPUT);
pinMode(laser, OUTPUT);
pinMode(buzzer, OUTPUT);
digitalWrite(laser, HIGH);
digitalWrite(buzzer, HIGH);

}

void loop () {

sensor ();
}

void sensor () {
	int sensorldr = analogRead (A0);
	delay(100);
	if(sensorldr<700) {
		digitalWrite(buzzer, HIGH);
	} 
	else if(sensorldr>700)	{
		digitalWrite(buzzer, LOW);
	}
}
