#include "config.h"
#include "payment_system.h"
#include "valve_control.h"

void setup() {
  Serial.begin(115200);
  initPaymentSystem();  // Инициализация платёжных систем
  initValves();         // Настройка управления клапанами
  initSensors();        // Подключение датчиков
}

void loop() {
  processCoins();       // Обработка монетоприёмника
  checkWaterPressure(); // Контроль давления воды
  
  // Основная логика автомойки
  if (paymentReceived() && systemReady()) {
    startWashingCycle();
  }
  
  emergencyStopCheck(); // Проверка аварийных остановок
}