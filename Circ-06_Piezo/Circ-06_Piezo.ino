int speakerPin = 9;
int length = 12;
char notes[] = "efdecgfdedc ";
int beats[] = { 1, 2, 1, 2, 2, 1, 1, 1, 1, 2, 3, 4};
int tempo = 300;

void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }//end of for loop
}//end of playTone

void playNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b' };
  int tones[] = {1915, 1700, 1519, 1432, 1275, 1136, 1014};
  for (int i = 0; i < 7; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }//end of if
  }//end of for
}//end of playNote

void setup() {
  // put your setup code here, to run once:
  pinMode(speakerPin, OUTPUT);
}//end of setup

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < length; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * tempo);
    } else {
      playNote(notes[i], beats[i] * tempo);
    }//end of if
    delay (tempo / 2);
  }//end of for loop
}//end of void loop
