/* 사용 전 필독 
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
*/
/* IRremote 4.3.1 라이브러리는 다음과 같은 프로토콜을 지원합니다:
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
/* 확인 후 다음 코드를 프로토콜에 맞게 넣어주세요:

#define DECODE_자신의 리모컨의 프로토콜
*/

/* 적외선 수신 후 HEX값 표출 */

#define DECODE_SAMSUNG // Samsung36 프로토콜 디코딩

#include <IRremote.h> // IR 리모컨 라이브러리.
IRrecv irrecv(7); // IR리모컨을 사용하기 위해 7번핀 사용 선언
decode_results results; // IR리모컨으로부터 받은 신홋값
void setup()
{
    Serial.begin(115200); //시리얼 모니터 사용
    irrecv.enableIRIn(); // 리모컨 수신 사용
}
void loop() {
    if (irrecv.decode(&results)==true) // 리모컨으로부터 받은 신호가 있으면
    {
        Serial.println(results.value,HEX); //받은 신호를 시리얼 모니터에 입력
        delay(500);
        irrecv.resume(); // 다음 신호 수신
    }
    
}