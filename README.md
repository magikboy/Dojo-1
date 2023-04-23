# Dojo-Numero-Uno
Sistema de Procesamiento de Datos

![Tinkercad](https://github.com/magikboy/Dojo-N-mero-Uno/blob/9fda5f55283271cb44782226c9c7c50792b41752/ArduinoTinkercad.jpg)


## Integrantes 
- GARCIA DOTTORI, Martin
- BOSCO MASCARO, Massimo Ariel
- GARGIULO MUNDO, Camila
- HRUSZCZAK, Nicolas Gabriel
- HERMOSILLA, Sebastián Emanuel


## Proyecto: semáforos para no videntes.

![Tinkercad](https://github.com/magikboy/Dojo-N-mero-Uno/blob/770692daa9c53d4364af32aaf11cfe3b324d6a62/imagen_2023-04-22_193837835.png)

## Descripción
El gobierno de la cuidad quiere actualizar los semáforos que tienen instalados.Por lo cual estos mismos tienen que tener señalización para personas no videntes
nuestra solucion al problema es implementar una serie de bocinas que al momento sonaran en el momento que el semaforo se pare en la luz roja haciendo que este emita un sonido continuo adviertiendo a la persona no vidente a detenerse y no cruzar. en el caso de que el semaforo este en la luz amarilla emitir un sonido discontinuo avisando sobre el cambio de luz hacia el verde.


## Función principal
~~~ C++ (lenguaje en el que esta escrito)
  for (int i = 0 ; i < 30; i++)
  {
  	SonarBuzzer(LED_ROJO, 500, 500);
  }
  digitalWrite(LED_ROJO, LOW);
  
  for (int i = 0 ; i < 2 ; i++)
  {
  	SonarBuzzer(LED_AMARILLO, 1000, 2000);
  }
  digitalWrite(LED_AMARILLO, LOW);
  
  for (int i = 0 ; i < 45 ; i++)
  {
  	digitalWrite(LED_VERDE, HIGH);
    delay(1000);
  }
    digitalWrite(LED_VERDE, LOW);
  
  for (int i = 0 ; i < 2 ; i++)
  {
  	SonarBuzzer(LED_AMARILLO, 1000, 2000);
  }
  digitalWrite(LED_AMARILLO, LOW);
~~~


## Codigo Completo
~~~ C++ (lenguaje en el que esta escrito)
void SonarBuzzer(int led, int frecuencia, int entretiempo); 

#define LED_ROJO 13
#define LED_AMARILLO 10
#define LED_VERDE 6
#define SPEAKER_PIN 4

void SonarBuzzer(int led, int frecuencia, int entretiempo)
{
  digitalWrite(led, HIGH); // Prende led indicado
  tone(SPEAKER_PIN, frecuencia); // Prende el buzzer a una determinada frecuencia
  delay(500); // Suena el buzzer durante 0.5s
  noTone(SPEAKER_PIN); // Apaga el buzzer
  delay(entretiempo); // Aguarda X tiempo indicado por párametro
}

void setup()
{
  pinMode(LED_ROJO, OUTPUT);
  pinMode(LED_AMARILLO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(SPEAKER_PIN, OUTPUT);
}

void loop()
{
  for (int i = 0 ; i < 30; i++) // 30seg para el LED rojo
  {
  	SonarBuzzer(LED_ROJO, 500, 500); // Suena durante 0.5s y espera 0.5s.
  }
  digitalWrite(LED_ROJO, LOW);
  
  for (int i = 0 ; i < 2 ; i++) // 2seg para el LED amarillo
  {
  	SonarBuzzer(LED_AMARILLO, 1000, 2000); // Suena con otra frecuencia y tiene un delay de 2seg
  }
  digitalWrite(LED_AMARILLO, LOW);
  
  for (int i = 0 ; i < 45 ; i++) // 45seg para el LED verde
  {
  	digitalWrite(LED_VERDE, HIGH);
    delay(1000);
  }
    digitalWrite(LED_VERDE, LOW);
  
  for (int i = 0 ; i < 2 ; i++) // 2seg para el LED amarillo
  {
  	SonarBuzzer(LED_AMARILLO, 1000, 2000); // Suena 1 sóla vez
  }
  digitalWrite(LED_AMARILLO, LOW);
}
~~~





## <img src="https://github.com/magikboy/Dojo-N-mero-Uno/blob/b42c7741a2fb2eaa8a1c813f8f6a0d83be4d35d4/1%20(1).png" alt="Tinkercad" height="32px"> Link al proyecto
- [Proyecto](https://www.tinkercad.com/things/0eFa38BwfAQ-super-migelo-jofo/editel?sharecode=rXB4PgoPveKdescEf7ZKr18V5jzex0wzRh-1nmglAt4)

### Trabajo Practico:
[Consignas](https://github.com/magikboy/Dojo-N-mero-Uno/blob/18c1342eff3a6e0bedfadace646459866021de35/Dojo%20Numero%20Uno.pdf)

### Fuentes
- Chat-Gpt
- Youtube
- [Vladimir Guajardo Gonzalez](https://www.youtube.com/@SethPonder5/videos)
