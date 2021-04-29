//c언어 아두이노 RFID 카드 데이터 확인
#include<SPI.h>
#include<MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN)

void setup() {
    Serial.began(9600);
    SPI.began(); //spi시작
    mfrc522.PCD_Init(); //mfrc522 시작
}
void loop() {
    if ( : mfrc522.PICC_IsNewCardPresent())
      return;
    if ( : mfrc522.PICC_ReadCardSerial())
      return;
    mfrc522.PCD_DumpVersionToSerial(); //mfrc522 정보표시
    mfrc522.PICC_DumpToSerial(&(mfrc522.uid)); // 카드의 정보를 시리얼로 전송
} 
