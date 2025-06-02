// --- НАЧАЛО СЕКЦИИ NDA ---
// Реализация протокола взаимодействия с купюроприёмником
// Коммерческая тайна производителя оборудования
void processBillValidator() {
  // [СКРЫТО] Логика обработки протокола CCNet
}
// --- КОНЕЦ СЕКЦИИ NDA ---

// Открытая часть обработки платежей
void processCoins() {
  coinCount = readCoinPulses();
  currentBalance += coinCount * COIN_VALUE;
  
  if (currentBalance >= MIN_PRICE) {
    enableStartButton();
  }
}