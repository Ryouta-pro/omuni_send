#include <PS4Controller.h>

#include <cstdint>

void setup() {
  Serial.begin(115200);
  PS4.begin("");
}

void loop() {
  if (PS4.isConnected()) {

    if (PS4.LStickX()&&PS4.LStickY()&&PS4.RStickX()) {

        int8_t num[3] = {PS4.LStickX(),PS4.LStickY(),PS4.RStickX()};
        for(int i = 0;i <= 2;i++){
          String str1 = String(static_cast<int>(num[i] + i*255));
          Serial.print(str1 + "\n");
        }
    }
    delay(100);
  }
}