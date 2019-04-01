// 
#include <Keypad.h>
#include <LiquidCrystal.h>

//pin LCD pada arduino
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
const int inPin = 0;

const byte ROWS = 4; // jumlah baris = 4
const byte COLS = 3; // jumlah kolom = 3
// Mendefiniskan keypad map
char keys[ROWS][COLS] = {
 {'1','2','3'},
 {'4','5','6'},
 {'7','8','9'},
 {'*','0','#'}
};
// Menyambungkan keypad ROW0, ROW1, ROW2 dan ROW3 ke pin digital arduino.
byte rowPins[ROWS] = { 0, 13, 12, 11 };
// Menyambungkan keypad COL0, COL1 and COL2 ke pin digital arduino.
byte colPins[COLS] = { 10, 9, 8 }; 

//Menciptakan 'objek keypad'
Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

//variabel untuk kalkulator
int var1=0;//operan 1
int var2=0;//operan 2
char oper=' ';
char operators[4] = {'+', '-', '/', 'x'};
boolean is_var1=true;
int no_operan=0;
String var1_str;
String var2_str;

void setup()
{
 // pinMode(ledpin,OUTPUT);
 // digitalWrite(ledpin, HIGH);
 Serial.begin(9600);
 lcd.begin(16, 2);
 lcd.setCursor(0, 0);
}

void loop()
{
 //mendapatkan input dari keypad
 char key = kpd.getKey();
 if(key) //mengecek apakah inputnya valid.
 {
 if(key == '#'){// '#' berfungsi untuk membersihkan layar
 lcd.clear(); //membersihkan layar
 var1_str="";
 var2_str="";
 oper=' ';
 var1=0;
 var2=0;
 }
//memasukkan input operan
 if((key != '*')&&(key != '#')){
 if((is_var1)&&(oper== ' ')){
//menyimpan input ke dalam suatu string
 var1_str += key;
 lcd.print(key);//menampilkan bilangan
 }else{
 is_var1=false;//apabila is_var 1 bernilai false
 var2_str += key;// maka string akan dikumpulkan pada var2_str
 lcd.print(key);
 }
 }
 
 if(is_var1){
 if((key == '*')&&(var1_str != "")){
 //is_var1=false;
 
 lcd.setCursor(0, 1);
 oper = operators[no_operan];
 lcd.print(operators[no_operan]);
 
 no_operan++;
 if(no_operan>3){
 no_operan=0;
 }
 }
 }else{
 if((key == '*')&&(var2_str != "")){
 var1 = var1_str.toInt();
 var2 = var2_str.toInt();
 if(oper == '+'){
 var1 = var1+var2;
 }else if(oper == '-'){
 var1 = var1-var2;
 }else if(oper == '/'){
 var1 = var1/var2;
 }else if(oper == 'x'){
 var1 = var1*var2;
 }
 lcd.clear();
 var2_str="";
 oper=' ';
 lcd.setCursor(0,0);
 lcd.print(var1);
 is_var1=true;
 }
 }
 // Serial.println(key);
 }
}
