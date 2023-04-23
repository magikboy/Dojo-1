void SonarBuzzer(int luz, int frecuencia, int entretiempo); 
void PrenderYApagarLuz(int luz, int entretiempo);
void PrenderSemaforo(int luz, int tiempo, int frecuencia, int entretiempo);

#define LUZ_ROJA 13
#define LUZ_AMARILLA 10
#define LUZ_VERDE 6
#define SPEAKER_PIN 4

void setup()
{
  pinMode(LUZ_ROJA, OUTPUT);
  pinMode(LUZ_AMARILLA, OUTPUT);
  pinMode(LUZ_VERDE, OUTPUT);
  pinMode(SPEAKER_PIN, OUTPUT);
}

void SonarBuzzer(int luz, int frecuencia, int entretiempo)
{
  digitalWrite(luz, HIGH);        // Prende el led indicado
  tone(SPEAKER_PIN, frecuencia); // Prende el buzzer a una determinada frecuencia
  delay(500);           // Suena el buzzer durante 0.5s
  noTone(SPEAKER_PIN); // Apaga el buzzer
  delay(entretiempo); // Aguarda X tiempo indicado por párametro
}

void PrenderYApagarLuz(int luz, int entretiempo, int delayFinal) {
  //Enciende y apaga el LED en el pin especificado durante un tiempo determinado.
  digitalWrite(luz, HIGH); 
  delay(entretiempo);           
  digitalWrite(luz, LOW); 
  delay(delayFinal);
}

void PrenderSemaforo(int luz, int tiempo, int frecuencia, int entretiempo)
//Enciende el buzzer junto al led correspondiente durante un tiempo determinado
{
  for (int i = 0 ; i < tiempo; i++) 
  {
    SonarBuzzer(luz, frecuencia, entretiempo);
    digitalWrite(luz, LOW);
  } 
}

void loop()
{
  PrenderSemaforo(LUZ_ROJA, 5, 500, 500);
  // 30seg para el LED rojo. Suena durante 0.5s y espera 0.5s.

  PrenderSemaforo(LUZ_AMARILLA, 2, 1000, 2000);
  // 2seg para el LED amarillo. Suena con otra frecuencia y tiene un delay de 2seg

  PrenderYApagarLuz(LUZ_VERDE, 5, 1000);
  //45seg para la luz verde pero sin prender el buzzer 

  PrenderSemaforo(LUZ_AMARILLA, 2, 1000, 2000);
}