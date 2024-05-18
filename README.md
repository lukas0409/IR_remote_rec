# IR_remote_rec
아두이노 적외선 수신 후 HEX값 표출


사용 전 필독 
본인 리모컨의 프로토콜 타입을 확인하세요.

Serial.println(results.decode_type); 이 코드를 사용해 프로토콜 타입을 확인하세요.

0: UNKNOWN
1: NEC
2: SONY
3: RC5
4: RC6
5: PANASONIC_OLD
6: JVC
7: NECX
8: SAMSUNG36
9: GICABLE
10: DIRECTV
11: RCMM
 
IRremote 4.3.1 라이브러리는 다음과 같은 프로토콜을 지원합니다:
NEC / Onkyo / Apple
Denon / Sharp
Panasonic / Kaseikyo
JVC
LG
RC5
RC6
Samsung
Sony
Universal Pulse Distance
Universal Pulse WidthHash
Pronto
BoseWave
Bang & Olufsen
Lego
FAST
Whynter
MagiQuest*/


확인 후 다음 코드를 프로토콜에 맞게 넣어주세요:
#define DECODE_자신의 리모컨의 프로토콜
