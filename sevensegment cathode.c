int pin[] = {40,41,42,43,44,45,46,47}; //mengatur pin
//fungsi matikan semua seven segment
void matikan(){
  for(int i = 0; i <= 7; i++){
  digitalWrite(pin[i], LOW);
  }
}
  int NIM[] = {2, 2, 10, 1, 1, 10, 4, 5, 5, 2}; //NIM
//number array
int number[11][8] = {
  {1, 1, 1, 1, 1, 1, 0, 0},//0
  {0, 1, 1, 0, 0, 0, 0, 0},//1
  {1, 1, 0, 1, 1, 0, 1, 0},//2
  {1, 1, 1, 1, 0, 0, 1, 0},//3
  {0, 1, 1, 0, 0, 1, 1, 0},//4
  {1, 0, 1, 1, 0, 1, 1, 0},//5
  {1, 0, 1, 1, 1, 1, 1, 0},//6
  {1, 1, 1, 0, 0, 0, 0, 0},//7
  {1, 1, 1, 1, 1, 1, 1, 0},//8
  {1, 1, 1, 1, 0, 1, 1, 0},//9
  {0, 0, 0, 0, 0, 0, 0, 1},//.
};

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i <= 7; i++){
    pinMode(pin[i],OUTPUT);
  }
  matikan();
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i= 0; i < sizeof(NIM)/sizeof(int); i++){
    int a = NIM[i]; // 
    for(int b = 0; b < 8; b++){
    digitalWrite(pin[b], number[a][b]);//display numbers
    }
    delay(1000);
    matikan();
    delay(1000);
  }
}