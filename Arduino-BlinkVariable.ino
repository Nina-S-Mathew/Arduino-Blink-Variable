/* C++ code 
 *  LED that turns on one second and off one second. 
 *  Every time the time off increases by one second.
 *  Created on Feb 2022
 *  by Nina Mathew
*/
int blinkTime = 1000;
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blinkTime); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  blinkTime = blinkTime + 1000;
}
