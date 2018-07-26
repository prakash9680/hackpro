/*
 * Ultrasonic Simple
 * Prints the distance read by an ultrasonic sensor in
 * centimeters. They are supported to four pins ultrasound
 * sensors (liek HC-SC04) and three pins (like PING)))
 * and Seeed Studio sesores).
 *
 * The circuit:
 * * Module HR-SC04 (four pins) or PING))) (and other with
 *   three pins), attached to digital pins as follows:
 * ---------------------    ---------------------
 * | HC-SC04 | Arduino |    | 3 pins  | Arduino |
 * ---------------------    ---------------------
 * |   Vcc   |   5V    |    |   Vcc   |   5V    |
 * |   Trig  |   12    | OR |   SIG   |   13    |
 * |   Echo  |   13    |    |   Gnd   |   GND   |
 * |   Gnd   |   GND   |    ---------------------
 * ---------------------
 * Note: You need not obligatorily use the pins defined above
 * 
 * By default, the distance returned by the distanceRead()
 * method is in centimeters, to get the distance in inches,
 * pass INC as a parameter.
 * Example: ultrasonic.distanceRead(INC)
 *
 * created 3 Apr 2014
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * modified 23 Jan 2017
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * modified 03 Mar 2017
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 *
 * This example code is released into the MIT License.
 */

#include <Ultrasonic.h>

/*
 * Pass as a parameter the trigger and echo pin, respectively,
 * or only the signal pin (for sensors 3 pins), like:
 * Ultrasonic ultrasonic(13);
 */


/*
* Ultrasonic Sensor HC-SR04 and Arduino Tutorial
*
* Crated by Dejan Nedelkovski,
* www.HowToMechatronics.com
*
*/
// defines pins numbers



void setup() {
pinMode(7, OUTPUT); // Sets the trigPin as an Output
pinMode(6, OUTPUT); 
pinMode(12, INPUT); // Sets the trigPin as an Output
pinMode(13, INPUT);// Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
}
void loop() {


int s1 =digitalRead(12);


int s2 =digitalRead(13);
if((s1==LOW)&&(s2==LOW)){
digitalWrite(7, HIGH);
digitalWrite(6, LOW);
Serial.println("Dustbin Is Full");
}
if((s1==HIGH)&&(s2==LOW)){
digitalWrite(7, HIGH);
digitalWrite(6, LOW);
Serial.println("Dustbin Is Full");
}
if((s1==LOW)&&(s2==HIGH)){
digitalWrite(7, HIGH);
digitalWrite(6, HIGH);
Serial.println("Dustbin Is Full");
}
if((s1==HIGH)&&(s2==HIGH)){
digitalWrite(7, LOW);
digitalWrite(6, HIGH);
Serial.println("Dustbin Is Empty");
}
}
