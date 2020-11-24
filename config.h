#ifndef LORA_TTNMAPPER_TBEAM_CONFIG_INCLUDED
#define LORA_TTNMAPPER_TBEAM_CONFIG_INCLUDED


// UPDATE WITH YOUR TTN KEYS AND ADDR.
static PROGMEM u1_t NWKSKEY[16] = { 0x91, 0xB1, 0xA7, 0xD5, 0x54, 0x54, 0xE8, 0x79, 0xF8, 0x7C, 0x17, 0x3B, 0x30, 0x71, 0x15, 0x81 }; // LoRaWAN NwkSKey, network session key 
static u1_t PROGMEM APPSKEY[16] = { 0xA7, 0x4F, 0x4C, 0xED, 0xE8, 0x14, 0xC4, 0x4C, 0x16, 0xC7, 0x89, 0xED, 0x4C, 0x6D, 0xF6, 0xAA }; // LoRaWAN AppSKey, application session key 
static const u4_t DEVADDR = 0x26013D47 ; // LoRaWAN end-device address (DevAddr)


#endif //LORA_TTNMAPPER_TBEAM_CONFIG_INCLUDED
