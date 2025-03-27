#include <Servo.h>

// 建立伺服馬達物件
Servo myServo;

// 定義連接伺服馬達的腳位
const int servoPin = 9;  // 使用數位腳位9

void setup() {
  // 初始化串列通訊，設定鮑率為9600
  Serial.begin(9600);
  
  // 將伺服馬達物件附加到指定的腳位
  myServo.attach(servoPin);
  
  // 初始化伺服馬達位置為0度
  myServo.write(0);
  
  Serial.println("伺服馬達控制程式已啟動");
}

void loop() {
  // 從0度轉到180度
  for (int angle = 0; angle <= 180; angle += 1) {
    myServo.write(angle);
    Serial.print("目前角度: ");
    Serial.println(angle);
    delay(15);  // 等待15毫秒讓伺服馬達移動到指定位置
  }
  
  delay(1000);  // 等待1秒
  
  // 從180度轉回0度
  for (int angle = 180; angle >= 0; angle -= 1) {
    myServo.write(angle);
    Serial.print("目前角度: ");
    Serial.println(angle);
    delay(15);
  }
  
  delay(1000);  // 等待1秒後重新開始
}