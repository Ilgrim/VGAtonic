#include "tinydefs.h"

/*
 * Two font definitions here - one is only for when we write to the EEPROM (hopefully one time per VGATonic).
 * The second is for when EEPROM is written, it only carries the LSB.  This is what is in normal PROGMEM for
 * Terminal emulator mode.
 * 
 */


#ifdef EEPROM_UPDATE
const uint8_t font4x6 [95][2] PROGMEM = {
  //const uint8_t font4x6 [43][2] PROGMEM = {
  // {  0x00  ,  0x00  },   /*SPACE*/ // We save 2 bytes by commenting this out...
  {  0x49  ,  0x08  },   /*'!'*/
  {  0xb4  ,  0x00  },   /*'"'*/
  {  0xbe  ,  0xf6  },   /*'#'*/
  {  0x7b  ,  0x7a  },   /*'$'*/
  {  0xa5  ,  0x94  },   /*'%'*/
  {  0x55  ,  0xb8  },   /*'&'*/
  {  0x48  ,  0x00  },   /*'''*/
  {  0x29  ,  0x44  },   /*'('*/
  {  0x44  ,  0x2a  },   /*')'*/
  {  0x15  ,  0xa0  },   /*'*'*/
  {  0x0b  ,  0x42  },   /*'+'*/
  {  0x00  ,  0x50  },   /*','*/
  {  0x03  ,  0x02  },   /*'-'*/
  {  0x00  ,  0x08  },   /*'.'*/
  {  0x25  ,  0x90  },   /*'/'*/
  {  0x76  ,  0xba  },   /*'0'*/
  {  0x59  ,  0x5c  },   /*'1'*/
  {  0xc5  ,  0x9e  },   /*'2'*/
  {  0xc5  ,  0x38  },   /*'3'*/
  {  0x92  ,  0xe6  },   /*'4'*/
  {  0xf3  ,  0x3a  },   /*'5'*/
  {  0x73  ,  0xba  },   /*'6'*/
  {  0xe5  ,  0x90  },   /*'7'*/
  {  0x77  ,  0xba  },   /*'8'*/
  {  0x77  ,  0x3a  },   /*'9'*/
  {  0x08  ,  0x40  },   /*':'*/
  {  0x08  ,  0x50  },   /*';'*/
  {  0x2a  ,  0x44  },   /*'<'*/
  {  0x1c  ,  0xe0  },   /*'='*/
  {  0x88  ,  0x52  },   /*'>'*/
  {  0xe5  ,  0x08  },   /*'?'*/
  {  0x56  ,  0x8e  },   /*'@'*/
  {  0x77  ,  0xb6  },   /*'A'*/
  {  0x77  ,  0xb8  },   /*'B'*/
  {  0x72  ,  0x8c  },   /*'C'*/
  {  0xd6  ,  0xba  },   /*'D'*/
  {  0x73  ,  0x9e  },   /*'E'*/
  {  0x73  ,  0x92  },   /*'F'*/
  {  0x72  ,  0xae  },   /*'G'*/
  {  0xb7  ,  0xb6  },   /*'H'*/
  {  0xe9  ,  0x5c  },   /*'I'*/
  {  0x64  ,  0xaa  },   /*'J'*/
  {  0xb7  ,  0xb4  },   /*'K'*/
  {  0x92  ,  0x9c  },   /*'L'*/
  {  0xbe  ,  0xb6  },   /*'M'*/
  {  0xd6  ,  0xb6  },   /*'N'*/
  {  0x56  ,  0xaa  },   /*'O'*/
  {  0xd7  ,  0x92  },   /*'P'*/
  {  0x76  ,  0xee  },   /*'Q'*/
  {  0x77  ,  0xb4  },   /*'R'*/
  {  0x71  ,  0x38  },   /*'S'*/
  {  0xe9  ,  0x48  },   /*'T'*/
  {  0xb6  ,  0xae  },   /*'U'*/
  {  0xb6  ,  0xaa  },   /*'V'*/
  {  0xb6  ,  0xf6  },   /*'W'*/
  {  0xb5  ,  0xb4  },   /*'X'*/
  {  0xb5  ,  0x48  },   /*'Y'*/
  {  0xe5  ,  0x9c  },   /*'Z'*/
  {  0x69  ,  0x4c  },   /*'['*/
  {  0x91  ,  0x24  },   /*'\'*/
  {  0x64  ,  0x2e  },   /*']'*/
  {  0x54  ,  0x00  },   /*'^'*/
  {  0x00  ,  0x1c  },   /*'_'*/
  {  0x44  ,  0x00  },   /*'`'*/
  {  0x0e  ,  0xae  },   /*'a'*/
  {  0x9a  ,  0xba  },   /*'b'*/
  {  0x0e  ,  0x8c  },   /*'c'*/
  {  0x2e  ,  0xae  },   /*'d'*/
  {  0x0e  ,  0xce  },   /*'e'*/
  {  0x56  ,  0xd0  },   /*'f'*/
  {  0x55  ,  0x3B  },   /*'g'*/
  {  0x93  ,  0xb4  },   /*'h'*/
  {  0x41  ,  0x44  },   /*'i'*/
  {  0x41  ,  0x51  },   /*'j'*/
  {  0x97  ,  0xb4  },   /*'k'*/
  {  0x49  ,  0x44  },   /*'l'*/
  {  0x17  ,  0xb6  },   /*'m'*/
  {  0x1a  ,  0xb6  },   /*'n'*/
  {  0x0a  ,  0xaa  },   /*'o'*/
  {  0xd6  ,  0xd3  },   /*'p'*/
  {  0x76  ,  0x67  },   /*'q'*/
  {  0x17  ,  0x90  },   /*'r'*/
  {  0x0f  ,  0x38  },   /*'s'*/
  {  0x9a  ,  0x8c  },   /*'t'*/
  {  0x16  ,  0xae  },   /*'u'*/
  {  0x16  ,  0xba  },   /*'v'*/
  {  0x16  ,  0xf6  },   /*'w'*/
  {  0x15  ,  0xb4  },   /*'x'*/
  {  0xb5  ,  0x2b  },   /*'y'*/
  {  0x1c  ,  0x5e  },   /*'z'*/
  {  0x6b  ,  0x4c  },   /*'{'*/
  {  0x49  ,  0x48  },   /*'|'*/
  {  0xc9  ,  0x5a  },   /*'}'*/
  {  0x54  ,  0x00  },   /*'~'*/
  {  0x56  ,  0xe2  }    /*''*/
};

#else // Not an EEPROM Update, use the lower half only.

const uint8_t font4x6 [95] PROGMEM = {
  0x08,   /*'!'*/
  0x00,   /*'"'*/
  0xf6,   /*'#'*/
  0x7a,   /*'$'*/
  0x94,   /*'%'*/
  0xb8,   /*'&'*/
  0x00,   /*'''*/
  0x44,   /*'('*/
  0x2a,   /*')'*/
  0xa0,   /*'*'*/
  0x42,   /*'+'*/
  0x50,   /*','*/
  0x02,   /*'-'*/
  0x08,   /*'.'*/
  0x90,   /*'/'*/
  0xba,   /*'0'*/
  0x5c,   /*'1'*/
  0x9e,   /*'2'*/
  0x38,   /*'3'*/
  0xe6,   /*'4'*/
  0x3a,   /*'5'*/
  0xba,   /*'6'*/
  0x90,   /*'7'*/
  0xba,   /*'8'*/
  0x3a,   /*'9'*/
  0x40,   /*':'*/
  0x50,   /*';'*/
  0x44,   /*'<'*/
  0xe0,   /*'='*/
  0x52,   /*'>'*/
  0x08,   /*'?'*/
  0x8e,   /*'@'*/
  0xb6,   /*'A'*/
  0xb8,   /*'B'*/
  0x8c,   /*'C'*/
  0xba,   /*'D'*/
  0x9e,   /*'E'*/
  0x92,   /*'F'*/
  0xae,   /*'G'*/
  0xb6,   /*'H'*/
  0x5c,   /*'I'*/
  0xaa,   /*'J'*/
  0xb4,   /*'K'*/
  0x9c,   /*'L'*/
  0xb6,   /*'M'*/
  0xb6,   /*'N'*/
  0xaa,   /*'O'*/
  0x92,   /*'P'*/
  0xee,   /*'Q'*/
  0xb4,   /*'R'*/
  0x38,   /*'S'*/
  0x48,   /*'T'*/
  0xae,   /*'U'*/
  0xaa,   /*'V'*/
  0xf6,   /*'W'*/
  0xb4,   /*'X'*/
  0x48,   /*'Y'*/
  0x9c,   /*'Z'*/
  0x4c,   /*'['*/
  0x24,   /*'\'*/
  0x2e,   /*']'*/
  0x00,   /*'^'*/
  0x1c,   /*'_'*/
  0x00,   /*'`'*/
  0xae,   /*'a'*/
  0xba,   /*'b'*/
  0x8c,   /*'c'*/
  0xae,   /*'d'*/
  0xce,   /*'e'*/
  0xd0,   /*'f'*/
  0x3B,   /*'g'*/
  0xb4,   /*'h'*/
  0x44,   /*'i'*/
  0x51,   /*'j'*/
  0xb4,   /*'k'*/
  0x44,   /*'l'*/
  0xb6,   /*'m'*/
  0xb6,   /*'n'*/
  0xaa,   /*'o'*/
  0xd3,   /*'p'*/
  0x67,   /*'q'*/
  0x90,   /*'r'*/
  0x38,   /*'s'*/
  0x8c,   /*'t'*/
  0xae,   /*'u'*/
  0xba,   /*'v'*/
  0xf6,   /*'w'*/
  0xb4,   /*'x'*/
  0x2b,   /*'y'*/
  0x5e,   /*'z'*/
  0x4c,   /*'{'*/
  0x48,   /*'|'*/
  0x5a,   /*'}'*/
  0x00,   /*'~'*/
  0xe2   /*''*/
};
#endif