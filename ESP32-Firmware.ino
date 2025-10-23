#include <WiFi.h>
#include "DHTesp.h"

const char* ssid = "TremainIphoneX";
const char* password = "tremainM";

#define DHT22_PIN 15

DHTesp dht;

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  dht.setup(DHT22_PIN, DHTesp::DHT22);

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
  float temperature = dht.getTemperature();
  float humidity = dht.getHumidity();

  Serial.print("Temperature: ");  
  Serial.println(temperature);  

  Serial.print("Humidity: ");  
  Serial.println(humidity);

  delay(1000);

}
