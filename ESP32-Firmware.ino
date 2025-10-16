#include <WiFi.h>

const char* ssid = "TremainIphoneX"
const char* password = "tremainM"

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("\nConnected!");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}


void loop() {
  // put your main code here, to run repeatedly:

}
