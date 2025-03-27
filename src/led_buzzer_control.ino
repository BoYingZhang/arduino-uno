// 定義引腳
const int ledPin = 13;       // 內建 LED 引腳
const int buzzerPin = 8;     // 有源蜂鳴器引腳

void setup() {
  // 設定引腳模式
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // LED 閃爍
  digitalWrite(ledPin, HIGH); // LED 打開
  tone(buzzerPin, 440, 500);  // 蜂鳴器播放 A4 音符 (440 Hz) 持續 500 毫秒
  delay(500);                 // 等待 500 毫秒
  digitalWrite(ledPin, LOW);  // LED 關閉
  delay(500);                 // 等待 500 毫秒

  // LED 快速閃爍
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 523, 200); // 蜂鳴器播放 C5 音符 (523 Hz) 持續 200 毫秒
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  }

  // 停頓 1 秒
  delay(1000);
}