int a = 6;
int b = 4;
int c = 3;
int d = 9;
int e = 10;
int f = 11;
int g = 12;
int h = 7;
int i = 8;
int j = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(h, OUTPUT);
  pinMode(i, OUTPUT);
  pinMode(j, OUTPUT);

}
void mati() {
  delay(100);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(h, LOW);
  digitalWrite(i, LOW);
  digitalWrite(h, LOW);
  digitalWrite(j, LOW);
}

void loop1() {
  digitalWrite(a, HIGH);
  mati();
  digitalWrite(b, HIGH);
  mati();
  digitalWrite(c, HIGH);
  mati();
  digitalWrite(d, HIGH);
  mati();
  digitalWrite(e, HIGH);
  mati();
  digitalWrite(f, HIGH);
  mati();
  digitalWrite(g, HIGH);
  mati();
  digitalWrite(h, HIGH);
  mati();
}

void loop2() {
  digitalWrite(a, HIGH);
  mati();
  digitalWrite(b, HIGH);
  mati();
  digitalWrite(c, HIGH);
  mati();
  digitalWrite(j, HIGH);
  mati();
  digitalWrite(i, HIGH);
  mati();
  digitalWrite(g, HIGH);
  mati();
  digitalWrite(f, HIGH);
  mati();
  digitalWrite(e, HIGH);
  mati();
  digitalWrite(d, HIGH);
  mati();
  digitalWrite(j, HIGH);
  mati();
  digitalWrite(i, HIGH);
  mati();
  digitalWrite(h, HIGH);
  mati();
}

void loop3() {
  digitalWrite(a, HIGH);
  digitalWrite(i, HIGH);
  mati();
  digitalWrite(b, HIGH);
  digitalWrite(j, HIGH);
  mati();
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  mati();
  digitalWrite(j, HIGH);
  digitalWrite(e, HIGH);
  mati();
  digitalWrite(i, HIGH);
  digitalWrite(f, HIGH);
  mati();
  digitalWrite(g, HIGH);
  digitalWrite(h, HIGH);
  mati();
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<3;i++) {
    loop1();
  }
  for(int i=0;i<3;i++) {
    loop2();
  }
  for(int i=0;i<3;i++) {
    loop3();
  }
  loop1();
  loop2();
  loop3();
}
