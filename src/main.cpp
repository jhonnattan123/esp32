/*	Enciende el LED y lo apaga despues de un segundo
	Testeado en un expressif Esp32 dev kit v1.0
*/

#include <Arduino.h>
int LED_parpadeo = 5; 

void setup() {		
	/*	Inicializacion de los pines
	*/							 
	pinMode(LED_parpadeo, OUTPUT); 
}

void loop() {
	/*	Ciclo infinito
	*/		
	digitalWrite(LED_parpadeo, HIGH); 
	delay(1000);						
	digitalWrite(LED_parpadeo, LOW);	
	delay(1000);						
}
