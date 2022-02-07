/*
  Physical Pixel for the nRF5280

  An example of using the Adafruit Feather Sense board to receive data from the computer. In
  this case, the Arduino boards turns on an LED when it receives the character
  'H', and turns off the LED when it receives the character 'L'.

  The data can be sent from the Arduino Serial Monitor, or another program like Max/MSP.
  Max code included below the sketch

  
  This example code is in the public domain and is based on the original here:
  http://www.arduino.cc/en/Tutorial/PhysicalPixel
*/
#include <bluefruit.h>
const int ledPin = 4; // the Blue LED on the Nordic Semicontroller (the other side of the Feather Sense board) may be called D4
int incomingByte;      // a variable to read incoming serial data into

void setup() {
  // initialize serial communication:
  Serial.begin(9600);//make sure Max is receiving on this same Baud Rate (speed)
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // see if there's incoming serial data:
  if (Serial.available() > 0) {
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();
    // if it's a capital H (ASCII 72), turn on the LED:
    if (incomingByte == 'H') {
      digitalWrite(ledPin, HIGH);
    }
    // if it's an L (ASCII 76) turn off the LED:
    if (incomingByte == 'L') {
      digitalWrite(ledPin, LOW);
    }
  }
}


/* Max/MSP version 5 patch to run with this example:
<pre><code>
----------begin_max5_patcher----------
1745.3ocyZ80aaaCD+YmOED9wgLCQIYG68xPP6JR.x.JVJ1KMEFzRz1rQlTf
jNMtE869NRJYKYKoXI6zrWhq3Qx6te2e3Qd8GWzq+LwyTUezef9LpWuebQud
1gLCzK66d8WQdNJgnrSqejX0JJW2+RGMM8Ysa7kBghh1HVKQqUyVIhoqPJpj
QRPoBoFMWfzKonOPIvORz8TthluKyEbMmrhZ2oqMqImRJQGsjwWLURizN4Lz
e7.uKQAdX2O1u78F3g9R1h3qWw3ITsUhwYCxhs6tX1W+c+96lnXsNeldEjFE
66VoA6OvyL5Ou3Byet7HQIhVKWyZTIBsRefmU5m3TB+VnDgUqD4yzHA14B1.
C9mOa2T0aRoNAoeezW5fBVmavGWtQwh.a9GYOSS.itrrE+A9C7OsjoPVLAbP
3wJDgit992c6snaPv7290cHPXsNME8izfezZIGI3VRyVyRzHFGc2e8djX9g9
XlIlBzeONXvC7a0nHfAjDkvxb3eooRNQClGf8DXj6PQKIRRDLtBVbDEQehJ2
.SOR.jA9uh7H0xHCOmkv3ONvnWQRfuzXPGXKXbRRxFib464M5A9rMn2SdhEi
td.5uoIIL0CbHFgMmAK.GhtNUZl4D6LuORn0nOvzeeAURRhsh0mDqP2tPPKr
NC5ZDiqiIyA2M8dJ9LAQFir63+rAT5aDfVmllPAN4iyMcf3CJ1Zt09gwcIhb
hw40DobI5J7U1OFF1BWY7qd7XctquKgE8nwjZshkLzcJ2zDKT3OzlZBOB25T
SAie0wBsXwhDZCJwUgETB+s+830gI61bIfbPfzTJmLKgVTSpNs0AomXFGytj
ghS+FHLGXwScl5NYcy.lwiL+DNr4T19U.LW0bN68MtMiIEkSpLCIxfBXuXIF
uYESvKvB3bgzzBC2qvRL32WE1MZ7kaGhwcC4ucHI8I19aKruR.sz.TsV5.ym
GkeBkYafxAjb3DQyZbCBVxLQxZyLFAUJIxsXioMm7N7enE+mX+6nP6ImgiKD
cAtDKRDQORiK3nA3WJky3oRJjvWCY5ch9Vxwz4j0I5okPeuAURedl.VIws9Q
+KUFS3jsZvBIKVvMhQISgY3bF9YHdyE0UTcryfSRqXwf+DfK0PTApITDFQZr
TYwc4FPH9WjTlz10kPmqyHCGYx2CG0hz5IBm4srg0NCNQSrpo81RQMcM2QcJ
3TnmpHOUFu0vwpYQ1k29mIb1J33WMyYDfCSyI5x8rTEIEIIkzWGkmpfRL3jG
Q+FKVuzxnhtCvzYo4tQ82ZkiYKnJc4wzjEpxinzabfdggVOKKHdpltJMAzhx
S.BOXJsZo3aprIl6pUD.1UGewf5hoIKMdSoKKmx72fvAOuhjZxaulbmf8vUX
fKrcz9mpTaBzCJVvue4UbXhzCSlty98BGxzK+flrTTcDMsZwwgHWsMteun+C
.DuZ.D7wAHUU4eAx4kHUzyyxIdL0px9mQ7oTMH0AP3bPwKuLpxESUawHGfPd
k4TsEkzVD7r62zPTHHxRw4HRDisvJdhEPGMoyQhAm+.wYD9hyKh5Xww4oE5h
HOlXwZ7zZH2jWah0v+hyEg2Wy6Ztn9mRfzohP6Jbxbo1ZNNzp8F5UCcJwZYT
tXk4kiJCDPE.ZFeagjedWRFyDOJKWaEBygdGkTXjV7qkPfOVnv+0DJ7NRo3U
UHZg4nZYHav7aA02Toa7TWU8SMOdGa1ZsyGt305ZU0mMdoj5ttCbCpYjj8py
rpJZuXmFcldMlHAGtap8I9X6H2pqnic2QLvcGcrWX6eAlQuYuFk8AIuCwlCL
Cci4W7IABt2epSfvv2LPfoPLs4QaERjX97+raHvUSbOut0MXxv1C.gu5.PMO
PEQKXcRm8yz4rmmZTyOOUPE5bv444oRXpN9lcqnJEYA8.L4lJAjxYzpBRB7m
THPHvevvldJypdwN+V.Id0CImW33tNBG4dHcGNvukvQMALJZBngvwr3SJrwk
pXjeqCa7qIWYPKCar284xc+ddaL21NcXadVdyqfzrldKA4YqrcP9cJ2aVOM8
bWyLLvAuso+rgu8MAIysvG65+QX9eOdkH3+wcAIqgpDzjQaeOgNE1D5xkLNr
08uFWiQ1uCMC4fnEqTT9VfNzZ+B8yvrCJvOrXA90cMmvcU2efY4XYjoYYuHm
LMN5z4zUGAmLIyJLoUr3TAfvYn33.yQFAPkTlSNFOd6WmpnE7KCt8OF3NnIP
HHvo2iwEQAyWmprgagrcRbxZkwuDm7aDErmuiBF59OiSFlX95bHauHJfOGnP
PKBHNH4xdMR0vj8Zf5dMO8vFmVeSS2ugo1mIntFkdwOu3+rV6g9D
-----------end_max5_patcher-----------
</code></pre>

*/
