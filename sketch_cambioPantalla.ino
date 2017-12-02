#include <Keyboard.h>

char Tab = KEY_TAB;
char control = KEY_LEFT_ALT;
int button=A0;
int bandera = 1;
int resread;
void setup() {
  // put your setup code here, to run once:
pinMode(button, INPUT);
Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
resread = analogRead(button);
map(resread, 0, 1023, 0, 255);
if(resread > 700){
Keyboard.press(control);  
delay(50);
Keyboard.press(Tab);
delay(50);
Keyboard.release(Tab);
Keyboard.release(control);
}
}
