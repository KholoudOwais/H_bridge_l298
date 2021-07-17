// C++ code
//Motor1
#define Ena 10
#define IN1 9
#define IN2 8
//Motor2
#define Enb 11
#define IN3 12
#define IN4 13

int Speed1=120;
int Direc1=1;
int Direc2=0;
int Speed2=120;
int Direc3=1;
int Direc4=0;

void setup()
{
  // setup code, to run once:
  //Motor1
  pinMode(Ena, OUTPUT);  
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  //Motor2
  pinMode(Enb, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

}

void loop()
{
  // main code, to run repeatedly:
  //Motor1
  digitalWrite(IN1, Direc1);
  digitalWrite(IN2, Direc2);
  analogWrite(Ena,Speed1);
  //Motor2
  digitalWrite(IN3, Direc3);
  digitalWrite(IN4, Direc4);
  analogWrite(Enb,Speed2);
}