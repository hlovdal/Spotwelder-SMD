class Eeprom: public EEPROMClassEx
{
public:
  void init();
  void read();
  void write();
  bool initialized();

  // EEPROM addresses
  unsigned int storedInitValue_addr;
  unsigned int preweld_ms_addr;
  unsigned int pause_ms_addr;
  unsigned int weld_ms_addr;
};
