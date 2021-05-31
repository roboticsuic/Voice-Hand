/*Code created by Saioa Ortiz, Cédric Córdoba, Eduardo Saman y Antonio Julià
*It works only for controlling the servo motors
*/

//servo library
#include <Servo.h>

//Servo function that defines all the motors for each finger
Servo menique;
Servo anular;
Servo corazon;
Servo indice;
Servo pulgar;

//Define the on/off switch on pin 8
int interruptor=8;
//Define th a variable for the switch, where we assign the initial value for it, in this case 0(off)
int a=0;
void setup() {
  // put your setup code here, to run once:
/*We define the pins for each motor
 * Each one has a different one as they are controlled individually
 */
menique.attach(13);
anular.attach(12);
corazon.attach(11);
indice.attach(10);
pulgar.attach(9);
//Define the swtich as a inpu_pullup
pinMode(interruptor,INPUT_PULLUP);
}
 
void loop() {
// put your main code here, to run repeatedly:
//Read the input of the switch and asign the a value to it.
a=digitalRead(interruptor);
//We condition it, if the a variable, the one for the switch state is, LOW, so its ON, 
//as its a pullup input, call the test() function and if its not in LOW, then call for the nada() function.
if (a==LOW){
  test();
 
}
else{
  nada();
}
}
//We define the TEST function
void test(){
//We make all the strings tense by telling the servos to position at the 180 position(all fingers are open)
menique.write(180);
anular.write(180);
corazon.write(180);
indice.write(180);
pulgar.write(180);
//We add a delay for the function test to begin
delay(1000);
//We call for all the fingers to close
menique.write(0);
anular.write(0);
corazon.write(0);
indice.write(0);
pulgar.write(0);
//Make another delay
delay(1000);
//Have the fingers open 
menique.write(180);
anular.write(180);
corazon.write(180);
indice.write(180);
pulgar.write(180);
//Another delay
delay(1000);
//Now we call for the hand to close and open a finger individually with delays of 1 seconds for each
//Close and open the pinky finger
menique.write(0);
delay(1000);
menique.write(180);
delay(1000);
//Close and open the annular finger
anular.write(0);
delay(1000);
anular.write(180);
delay(1000);
//Close and open middle finger
corazon.write(0);
delay(1000);
corazon.write(180);
delay(1000);
//Close and open the index finger
indice.write(0);
delay(1000);
indice.write(180);
delay(1000);
////Close and open the thumb
pulgar.write(0);
delay(1000);
pulgar.write(180);
 
}
//Create the nada function for it to go back to the standard position where its standing still and doing nothing
void nada(){
//We call to keep all fingers open
menique.write(180);
anular.write(180);
corazon.write(180);
indice.write(180);
pulgar.write(180);
}
