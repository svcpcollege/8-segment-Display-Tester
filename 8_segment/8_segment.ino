const int segA = 4;   // top
const int segB = 5;   // top right
const int segC = 6;   // bottom right
const int segD = 7;   // bottom
const int segE = 8;   // bottom left
const int segF = 9;   // top left
const int segG = 10;  // middle
const int segDP = 11; // decimal point


void setup()
{
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  pinMode(segDP, OUTPUT);
}

// ANIMATION
void animation()
{
  digitalWrite(segDP, HIGH);
  delay(150);
  digitalWrite(segDP, LOW);
  delay(150);
  digitalWrite(segDP, HIGH);
  delay(150);
  digitalWrite(segDP, LOW);
  delay(150);

  digitalWrite(segD, HIGH);
  delay(150);
  digitalWrite(segD, LOW);
  delay(150);
  digitalWrite(segE, HIGH);
  delay(150);
  digitalWrite(segE, LOW);
  delay(150);
  digitalWrite(segF, HIGH);
  delay(150);
  digitalWrite(segF, LOW);
  delay(150);
  digitalWrite(segA, HIGH);
  delay(150);
  digitalWrite(segA, LOW);
  delay(150);
  digitalWrite(segB, HIGH);
  delay(150);
  digitalWrite(segB, LOW);
  delay(150);
  digitalWrite(segC, HIGH);
  delay(150);
  digitalWrite(segC, LOW);
  delay(150);
}

// BLANK
void blank()
{
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segDP, LOW);
}

// NUMBERS
void Num0()
{
  // 0
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, LOW);
  digitalWrite(segDP, LOW);
}
void Num1()
{
  // 1
  digitalWrite(segA, LOW);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segDP, LOW);
}
void Num2()
{
  // 2
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, LOW);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);
  digitalWrite(segDP, LOW);
}
void Num3()
{
  // 3
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);
  digitalWrite(segDP, LOW);
}
void Num4()
{
  // 4
  digitalWrite(segA, LOW);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segDP, LOW);
}
void Num5()
{
  // 5
  digitalWrite(segA, HIGH);
  digitalWrite(segB, LOW);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segDP, LOW);
}
void Num6()
{
  // 6
  digitalWrite(segA, HIGH);
  digitalWrite(segB, LOW);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segDP, LOW);
}
void Num7()
{
  // 7
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segDP, LOW);
}
void Num8()
{
  // 8
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segDP, LOW);
}
void Num9()
{
  // 9
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segDP, LOW);
}


void loop()
{
  digitalWrite(LED_BUILTIN, LOW);

  animation();

  delay(1000);
  Num0();
  delay(1000);
  Num1();
  delay(1000);
  Num2();
  delay(1000);
  Num3();
  delay(1000);
  Num4();
  delay(1000);
  Num5();
  delay(1000);
  Num6();
  delay(1000);
  Num7();
  delay(1000);
  Num8();
  delay(1000);
  Num9();
  delay(1000);
  
  blank();
}
