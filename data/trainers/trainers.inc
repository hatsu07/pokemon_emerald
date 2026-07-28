@ trainer_entry argument order:
@   partyFlags, trainerClass, encounterMusicGender, trainerPic,
@   nameWord0, nameWord1, nameWord2,
@   item1, item2, item3, item4, partySize, party

  .align 2
  .globl gTrainers
gTrainers: @ 0x082E383C

@ TRAINER_NONE
  trainer_entry 0x00, 0x00, 0x00, 0x00, 0x000000FF, 0x00000000, 0x00000000, 0, 0, 0, 0, 0, 0

@ Trainer 1: マサヒコ
  @ src/data/trainers.h:33 trainers_line_33 (+4 aliases)
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0x5A6B5B6F, 0x000000FF, 0x00000000, 0, 0, 7, 0, 1, 0x082DEEBC

@ Trainer 2: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DEEC4

@ Trainer 3: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DEECC

@ Trainer 4: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DEEDC

@ Trainer 5: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DEEE4

@ Trainer 6: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DEEEC

@ Trainer 7: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DEEF4

@ Trainer 8: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DEEFC

@ Trainer 9: フクミ
  @ src/data/trainers.h:333 trainers_line_333 (+4 aliases)
  trainer_entry 0x00, 0x04, 0x81, 0x02, 0xFF70586C, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082DEF04

@ Trainer 10: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DEF34

@ Trainer 11: セツオ
  @ src/data/trainers.h:465 trainers_line_465
  trainer_entry 0x00, 0x05, 0x05, 0x03, 0xFF55625E, 0x00150000, 0x00000000, 0, 0, 7, 0, 2, 0x082DEF3C

@ Trainer 12: ヨウスケ
  @ src/data/trainers.h:515 trainers_line_515
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0x595D5376, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DEF4C

@ Trainer 13: スグル
  @ src/data/trainers.h:563 trainers_line_563
  trainer_entry 0x00, 0x07, 0x03, 0x05, 0xFF79895D, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DEF5C

@ Trainer 14: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x86, 0x06, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DEF6C

@ Trainer 15: イッペイ
  @ src/data/trainers.h:647 trainers_line_647
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x529EA052, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DEF74

@ Trainer 16: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DEF7C

@ Trainer 17: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DEF84

@ Trainer 18: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DEF94

@ Trainer 19: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082DEFA4

@ Trainer 20: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DEFBC

@ Trainer 21: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DEFC4

@ Trainer 22: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DEFD4

@ Trainer 23: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DEFDC

@ Trainer 24: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DEFE4

@ Trainer 25: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DEFEC

@ Trainer 26: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x86, 0x06, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DEFFC

@ Trainer 27: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x86, 0x06, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DF004

@ Trainer 28: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x86, 0x06, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DF00C

@ Trainer 29: トシシゲ
  @ src/data/trainers.h:1223 trainers_line_1223
  trainer_entry 0x00, 0x0A, 0x04, 0x09, 0x8A5C5C64, 0x000000FF, 0x00000000, 0, 0, 7, 0, 2, 0x082DF014

@ Trainer 30: ウシオ
  @ src/data/trainers.h:1271 trainers_line_1271
  trainer_entry 0x00, 0x0B, 0x06, 0x0A, 0xFF555C53, 0x00160000, 0x00000000, 0, 0, 7, 0, 2, 0x082DF024

@ Trainer 31: リョウジ
  @ src/data/trainers.h:1321 trainers_line_1321
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0x8D538678, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DF034

@ Trainer 32: イズミ
  @ src/data/trainers.h:1357 trainers_line_1357 (+1 aliases)
  trainer_entry 0x00, 0x0B, 0x86, 0x0C, 0xFF708E52, 0x00000000, 0x00000000, 0, 0, 7, 0, 2, 0x082DF03C

@ Trainer 33: イズミ
  @ src/data/trainers.h:1357 trainers_line_1357 (+1 aliases)
  trainer_entry 0x00, 0x0B, 0x86, 0x0C, 0xFF708E52, 0x00000000, 0x00000000, 0, 0, 7, 0, 2, 0x082DF04C

@ Trainer 34: アオギリ
  @ src/data/trainers.h:1453 trainers_line_1453 (+2 aliases)
  trainer_entry 0x00, 0x0D, 0x06, 0x0D, 0x78885551, 0x001600FF, 0x00000016, 0, 0, 7, 0, 3, 0x082DF05C

@ Trainer 35: エミ
  trainer_entry 0x00, 0x0E, 0x83, 0x0E, 0x00FF7054, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF074

@ Trainer 36: ミドリ
  @ src/data/trainers.h:1551 trainers_line_1551
  trainer_entry 0x00, 0x0F, 0x81, 0x0F, 0xFF789570, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF07C

@ Trainer 37: ヤヨイ
  @ src/data/trainers.h:1599 trainers_line_1599 (+4 aliases)
  trainer_entry 0x00, 0x0F, 0x81, 0x0F, 0xFF527674, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DF08C

@ Trainer 38: コウジロウ
  trainer_entry 0x01, 0x05, 0x05, 0x03, 0x7B8D535A, 0x0013FF53, 0x00000000, 0, 0, 7, 0, 2, 0x082DF0A4

@ Trainer 39: チヅル
  @ src/data/trainers.h:1718 trainers_line_1718
  trainer_entry 0x00, 0x0F, 0x81, 0x0F, 0xFF799361, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF0C4

@ Trainer 40: ヤヨイ
  @ src/data/trainers.h:1599 trainers_line_1599 (+4 aliases)
  trainer_entry 0x00, 0x0F, 0x81, 0x0F, 0xFF527674, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF0D4

@ Trainer 41: ヤヨイ
  @ src/data/trainers.h:1599 trainers_line_1599 (+4 aliases)
  trainer_entry 0x00, 0x0F, 0x81, 0x0F, 0xFF527674, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DF0E4

@ Trainer 42: ヤヨイ
  @ src/data/trainers.h:1599 trainers_line_1599 (+4 aliases)
  trainer_entry 0x00, 0x0F, 0x81, 0x0F, 0xFF527674, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DF0FC

@ Trainer 43: ヤヨイ
  @ src/data/trainers.h:1599 trainers_line_1599 (+4 aliases)
  trainer_entry 0x00, 0x0F, 0x81, 0x0F, 0xFF527674, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DF114

@ Trainer 44: ノブオ
  @ src/data/trainers.h:1994 trainers_line_1994 (+4 aliases)
  trainer_entry 0x01, 0x10, 0x0B, 0x10, 0xFF559869, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF12C

@ Trainer 45: ケイイチ
  @ src/data/trainers.h:2037 trainers_line_2037
  trainer_entry 0x01, 0x10, 0x0B, 0x10, 0x61525259, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082DF13C

@ Trainer 46: アキヒト
  @ src/data/trainers.h:2118 trainers_line_2118
  trainer_entry 0x01, 0x10, 0x0B, 0x10, 0x646B5751, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DF16C

@ Trainer 47: ノブオ
  @ src/data/trainers.h:1994 trainers_line_1994 (+4 aliases)
  trainer_entry 0x01, 0x10, 0x0B, 0x10, 0xFF559869, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF18C

@ Trainer 48: ノブオ
  @ src/data/trainers.h:1994 trainers_line_1994 (+4 aliases)
  trainer_entry 0x01, 0x10, 0x0B, 0x10, 0xFF559869, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF19C

@ Trainer 49: ノブオ
  @ src/data/trainers.h:1994 trainers_line_1994 (+4 aliases)
  trainer_entry 0x01, 0x10, 0x0B, 0x10, 0xFF559869, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF1AC

@ Trainer 50: ノブオ
  @ src/data/trainers.h:1994 trainers_line_1994 (+4 aliases)
  trainer_entry 0x01, 0x10, 0x0B, 0x10, 0xFF559869, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF1BC

@ Trainer 51: マリとダイ
  @ src/data/trainers.h:2352 trainers_line_2352 (+5 aliases)
  trainer_entry 0x00, 0x11, 0x0C, 0x11, 0x9114786F, 0x0000FF52, 0x00000000, 0, 1, 1, 0, 2, 0x082DF1CC

@ Trainer 52: マリとダイ
  @ src/data/trainers.h:2352 trainers_line_2352 (+5 aliases)
  trainer_entry 0x00, 0x11, 0x0C, 0x11, 0x9114786F, 0x0000FF52, 0x00000000, 0, 1, 1, 0, 2, 0x082DF1DC

@ Trainer 53: マリとダイ
  @ src/data/trainers.h:2352 trainers_line_2352 (+5 aliases)
  trainer_entry 0x00, 0x11, 0x0C, 0x11, 0x9114786F, 0x0000FF52, 0x00000000, 0, 1, 1, 0, 2, 0x082DF1EC

@ Trainer 54: マリとダイ
  @ src/data/trainers.h:2352 trainers_line_2352 (+5 aliases)
  trainer_entry 0x00, 0x11, 0x0C, 0x11, 0x9114786F, 0x0000FF52, 0x00000000, 0, 1, 1, 0, 2, 0x082DF1FC

@ Trainer 55: マリとダイ
  @ src/data/trainers.h:2352 trainers_line_2352 (+5 aliases)
  trainer_entry 0x00, 0x11, 0x0C, 0x11, 0x9114786F, 0x0000FF52, 0x00000000, 0, 1, 1, 0, 2, 0x082DF20C

@ Trainer 56: マリとダイ
  @ src/data/trainers.h:2352 trainers_line_2352 (+5 aliases)
  trainer_entry 0x01, 0x11, 0x0C, 0x11, 0x9114786F, 0x0000FF52, 0x00000000, 0, 1, 1, 0, 2, 0x082DF21C

@ Trainer 57: アユミ
  @ src/data/trainers.h:2654 trainers_line_2654 (+4 aliases)
  trainer_entry 0x00, 0x12, 0x82, 0x12, 0xFF707551, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF23C

@ Trainer 58: ヒロミ
  @ src/data/trainers.h:2702 trainers_line_2702 (+1 aliases)
  trainer_entry 0x00, 0x12, 0x82, 0x12, 0xFF707B6B, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF24C

@ Trainer 59: ノゾミ
  @ src/data/trainers.h:2738 trainers_line_2738
  trainer_entry 0x00, 0x12, 0x82, 0x12, 0xFF709069, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF254

@ Trainer 60: アユミ
  @ src/data/trainers.h:2654 trainers_line_2654 (+4 aliases)
  trainer_entry 0x00, 0x12, 0x82, 0x12, 0xFF707551, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF25C

@ Trainer 61: アユミ
  @ src/data/trainers.h:2654 trainers_line_2654 (+4 aliases)
  trainer_entry 0x00, 0x12, 0x82, 0x12, 0xFF707551, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF26C

@ Trainer 62: アユミ
  @ src/data/trainers.h:2654 trainers_line_2654 (+4 aliases)
  trainer_entry 0x00, 0x12, 0x82, 0x12, 0xFF707551, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF27C

@ Trainer 63: アユミ
  @ src/data/trainers.h:2654 trainers_line_2654 (+4 aliases)
  trainer_entry 0x00, 0x12, 0x82, 0x12, 0xFF707551, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF28C

@ Trainer 64: ユウタ
  @ src/data/trainers.h:2966 trainers_line_2966 (+4 aliases)
  trainer_entry 0x01, 0x13, 0x02, 0x13, 0xFF605375, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF29C

@ Trainer 65: ヤスノブ
  @ src/data/trainers.h:3009 trainers_line_3009
  trainer_entry 0x00, 0x13, 0x02, 0x13, 0x98695D74, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DF2AC

@ Trainer 66: マナブ
  @ src/data/trainers.h:3057 trainers_line_3057
  trainer_entry 0x00, 0x13, 0x02, 0x13, 0xFF98656F, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF2BC

@ Trainer 67: ユウタ
  @ src/data/trainers.h:2966 trainers_line_2966 (+4 aliases)
  trainer_entry 0x01, 0x13, 0x02, 0x13, 0xFF605375, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF2C4

@ Trainer 68: ユウタ
  @ src/data/trainers.h:2966 trainers_line_2966 (+4 aliases)
  trainer_entry 0x01, 0x13, 0x02, 0x13, 0xFF605375, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF2D4

@ Trainer 69: ユウタ
  @ src/data/trainers.h:2966 trainers_line_2966 (+4 aliases)
  trainer_entry 0x01, 0x13, 0x02, 0x13, 0xFF605375, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF2E4

@ Trainer 70: ユウタ
  @ src/data/trainers.h:2966 trainers_line_2966 (+4 aliases)
  trainer_entry 0x01, 0x13, 0x02, 0x13, 0xFF605375, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF2F4

@ Trainer 71: トシキ
  @ src/data/trainers.h:3265 trainers_line_3265
  trainer_entry 0x03, 0x05, 0x05, 0x03, 0xFF575C64, 0x00150000, 0x00000000, 0, 0, 7, 0, 1, 0x082DF304

@ Trainer 72: ヒデキ
  @ src/data/trainers.h:3309 trainers_line_3309
  trainer_entry 0x03, 0x05, 0x05, 0x03, 0xFF57946B, 0x00150000, 0x00000000, 0, 0, 7, 0, 1, 0x082DF314

@ Trainer 73: カズマ
  @ src/data/trainers.h:3353 trainers_line_3353
  trainer_entry 0x03, 0x05, 0x05, 0x03, 0xFF6F8E56, 0x00150000, 0x00000000, 0, 0, 7, 0, 1, 0x082DF324

@ Trainer 74: ナオキ
  @ src/data/trainers.h:3399 trainers_line_3399
  trainer_entry 0x03, 0x05, 0x05, 0x03, 0xFF575565, 0x00150000, 0x00000000, 0, 0, 7, 0, 1, 0x082DF334

@ Trainer 75: ヨシオ
  @ src/data/trainers.h:3442 trainers_line_3442
  trainer_entry 0x01, 0x05, 0x05, 0x03, 0xFF555C76, 0x00150000, 0x00000000, 0, 0, 7, 0, 5, 0x082DF344

@ Trainer 76: ユウト
  @ src/data/trainers.h:3563 trainers_line_3563
  trainer_entry 0x00, 0x05, 0x05, 0x03, 0xFF645375, 0x00130000, 0x00000000, 0, 0, 7, 0, 3, 0x082DF394

@ Trainer 77: マコト
  @ src/data/trainers.h:3625 trainers_line_3625 (+1 aliases)
  trainer_entry 0x00, 0x05, 0x05, 0x03, 0xFF645A6F, 0x00130000, 0x00000000, 0, 0, 7, 0, 2, 0x082DF3AC

@ Trainer 78: ユウスケ
  @ src/data/trainers.h:3675 trainers_line_3675 (+4 aliases)
  trainer_entry 0x00, 0x05, 0x05, 0x03, 0x595D5375, 0x001600FF, 0x00000000, 0, 0, 7, 0, 3, 0x082DF3BC

@ Trainer 79: コウキ
  @ src/data/trainers.h:3737 trainers_line_3737
  trainer_entry 0x00, 0x05, 0x05, 0x03, 0xFF57535A, 0x00130000, 0x00000000, 0, 0, 7, 0, 2, 0x082DF3D4

@ Trainer 80: ショウ
  @ src/data/trainers.h:3787 trainers_line_3787 (+5 aliases)
  trainer_entry 0x00, 0x05, 0x05, 0x03, 0xFF53865C, 0x00130000, 0x00000000, 0, 0, 7, 0, 2, 0x082DF3E4

@ Trainer 81: タクヤ
  @ src/data/trainers.h:3837 trainers_line_3837
  trainer_entry 0x00, 0x05, 0x05, 0x03, 0xFF745860, 0x00130000, 0x00000000, 0, 0, 7, 0, 3, 0x082DF3F4

@ Trainer 82: リョウヘイ
  @ src/data/trainers.h:3899 trainers_line_3899
  trainer_entry 0x00, 0x05, 0x05, 0x03, 0x6D538678, 0x0013FF52, 0x00000000, 0, 0, 7, 0, 4, 0x082DF40C

@ Trainer 83: カケル
  @ src/data/trainers.h:3973 trainers_line_3973
  trainer_entry 0x00, 0x05, 0x05, 0x03, 0xFF795956, 0x00130000, 0x00000000, 0, 0, 7, 0, 3, 0x082DF42C

@ Trainer 84: ユウスケ
  @ src/data/trainers.h:3675 trainers_line_3675 (+4 aliases)
  trainer_entry 0x00, 0x05, 0x05, 0x03, 0x595D5375, 0x001500FF, 0x00000000, 0, 0, 7, 0, 3, 0x082DF444

@ Trainer 85: ユウスケ
  @ src/data/trainers.h:3675 trainers_line_3675 (+4 aliases)
  trainer_entry 0x00, 0x05, 0x05, 0x03, 0x595D5375, 0x001500FF, 0x00000000, 0, 0, 7, 0, 3, 0x082DF45C

@ Trainer 86: ユウスケ
  @ src/data/trainers.h:3675 trainers_line_3675 (+4 aliases)
  trainer_entry 0x00, 0x05, 0x05, 0x03, 0x595D5375, 0x001300FF, 0x00000000, 0, 0, 7, 0, 3, 0x082DF474

@ Trainer 87: ユウスケ
  @ src/data/trainers.h:3675 trainers_line_3675 (+4 aliases)
  trainer_entry 0x00, 0x05, 0x05, 0x03, 0x595D5375, 0x001300FF, 0x00000000, 0, 0, 7, 0, 3, 0x082DF48C

@ Trainer 88: レイジ
  @ src/data/trainers.h:4283 trainers_line_4283
  trainer_entry 0x00, 0x05, 0x05, 0x03, 0xFF8D527A, 0x00130000, 0x00000000, 0, 0, 7, 0, 2, 0x082DF4A4

@ Trainer 89: アヤカ
  @ src/data/trainers.h:4333 trainers_line_4333
  trainer_entry 0x03, 0x05, 0x85, 0x14, 0xFF567451, 0x00150000, 0x00000000, 0, 0, 7, 0, 1, 0x082DF4B4

@ Trainer 90: ミハル
  @ src/data/trainers.h:4376 trainers_line_4376
  trainer_entry 0x03, 0x05, 0x85, 0x14, 0xFF796A70, 0x00150000, 0x00000000, 0, 0, 7, 0, 1, 0x082DF4C4

@ Trainer 91: サオリ
  @ src/data/trainers.h:4420 trainers_line_4420
  trainer_entry 0x03, 0x05, 0x85, 0x14, 0xFF78555B, 0x00150000, 0x00000000, 0, 0, 11, 0, 1, 0x082DF4D4

@ Trainer 92: セツナ
  @ src/data/trainers.h:4463 trainers_line_4463
  trainer_entry 0x01, 0x05, 0x85, 0x14, 0xFF65625E, 0x00130000, 0x00000000, 0, 0, 11, 0, 3, 0x082DF4E4

@ Trainer 93: アイナ
  @ src/data/trainers.h:4546 trainers_line_4546
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF655251, 0x00130000, 0x00000000, 0, 0, 11, 0, 2, 0x082DF514

@ Trainer 94: マリア
  @ src/data/trainers.h:4596 trainers_line_4596 (+4 aliases)
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF51786F, 0x00160000, 0x00000000, 0, 0, 7, 0, 3, 0x082DF524

@ Trainer 95: ヤエコ
  @ src/data/trainers.h:4658 trainers_line_4658
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF5A5474, 0x00130000, 0x00000000, 0, 0, 7, 0, 1, 0x082DF53C

@ Trainer 96: アイリ
  @ src/data/trainers.h:4696 trainers_line_4696
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF785251, 0x00130000, 0x00000000, 0, 0, 7, 0, 1, 0x082DF544

@ Trainer 97: エリコ
  @ src/data/trainers.h:4734 trainers_line_4734
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF5A7854, 0x00130000, 0x00000000, 0, 0, 7, 0, 1, 0x082DF54C

@ Trainer 98: カズミ
  @ src/data/trainers.h:4772 trainers_line_4772
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF708E56, 0x00130000, 0x00000000, 0, 0, 7, 0, 3, 0x082DF554

@ Trainer 99: コトミ
  @ src/data/trainers.h:4834 trainers_line_4834
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF70645A, 0x00130000, 0x00000000, 0, 0, 7, 0, 2, 0x082DF56C

@ Trainer 100: ヒヅキ
  @ src/data/trainers.h:4884 trainers_line_4884
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF57936B, 0x00130000, 0x00000000, 0, 0, 7, 0, 3, 0x082DF57C

@ Trainer 101: マリア
  @ src/data/trainers.h:4596 trainers_line_4596 (+4 aliases)
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF51786F, 0x00150000, 0x00000000, 0, 0, 7, 0, 3, 0x082DF594

@ Trainer 102: マリア
  @ src/data/trainers.h:4596 trainers_line_4596 (+4 aliases)
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF51786F, 0x00150000, 0x00000000, 0, 0, 7, 0, 3, 0x082DF5AC

@ Trainer 103: マリア
  @ src/data/trainers.h:4596 trainers_line_4596 (+4 aliases)
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF51786F, 0x00130000, 0x00000000, 0, 0, 7, 0, 3, 0x082DF5C4

@ Trainer 104: マリア
  @ src/data/trainers.h:4596 trainers_line_4596 (+4 aliases)
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF51786F, 0x00130000, 0x00000000, 0, 0, 7, 0, 3, 0x082DF5DC

@ Trainer 105: コトネ
  @ src/data/trainers.h:5194 trainers_line_5194
  trainer_entry 0x00, 0x0E, 0x83, 0x0E, 0xFF68645A, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF5F4

@ Trainer 106: サチコ
  @ src/data/trainers.h:5242 trainers_line_5242
  trainer_entry 0x00, 0x0E, 0x83, 0x0E, 0xFF5A615B, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF604

@ Trainer 107: ミコト
  @ src/data/trainers.h:5290 trainers_line_5290
  trainer_entry 0x00, 0x0E, 0x83, 0x0E, 0xFF645A70, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF614

@ Trainer 108: ホノカ
  @ src/data/trainers.h:5338 trainers_line_5338 (+4 aliases)
  trainer_entry 0x00, 0x0E, 0x83, 0x0E, 0xFF56696E, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF624

@ Trainer 109: ホタル
  @ src/data/trainers.h:5374 trainers_line_5374
  trainer_entry 0x00, 0x0E, 0x83, 0x0E, 0xFF79606E, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF62C

@ Trainer 110: ホノカ
  @ src/data/trainers.h:5338 trainers_line_5338 (+4 aliases)
  trainer_entry 0x00, 0x0E, 0x83, 0x0E, 0xFF56696E, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF634

@ Trainer 111: ホノカ
  @ src/data/trainers.h:5338 trainers_line_5338 (+4 aliases)
  trainer_entry 0x00, 0x0E, 0x83, 0x0E, 0xFF56696E, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF644

@ Trainer 112: ホノカ
  @ src/data/trainers.h:5338 trainers_line_5338 (+4 aliases)
  trainer_entry 0x00, 0x0E, 0x83, 0x0E, 0xFF56696E, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF654

@ Trainer 113: ホノカ
  @ src/data/trainers.h:5338 trainers_line_5338 (+4 aliases)
  trainer_entry 0x00, 0x0E, 0x83, 0x0E, 0xFF56696E, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DF664

@ Trainer 114: レイカ
  @ src/data/trainers.h:5614 trainers_line_5614 (+5 aliases)
  trainer_entry 0x02, 0x14, 0x81, 0x15, 0xFF56527A, 0x00130000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF67C

@ Trainer 115: エイカ
  @ src/data/trainers.h:5654 trainers_line_5654
  trainer_entry 0x03, 0x14, 0x81, 0x15, 0xFF565254, 0x00130000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF684

@ Trainer 116: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082DF6A4

@ Trainer 117: レイカ
  @ src/data/trainers.h:5614 trainers_line_5614 (+5 aliases)
  trainer_entry 0x03, 0x14, 0x81, 0x15, 0xFF56527A, 0x00130000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF6BC

@ Trainer 118: シオリ
  @ src/data/trainers.h:5827 trainers_line_5827
  trainer_entry 0x02, 0x14, 0x81, 0x15, 0xFF78555C, 0x00130000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF6CC

@ Trainer 119: カナコ
  @ src/data/trainers.h:5867 trainers_line_5867
  trainer_entry 0x02, 0x14, 0x81, 0x15, 0xFF5A6556, 0x00130000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF6D4

@ Trainer 120: レイカ
  @ src/data/trainers.h:5614 trainers_line_5614 (+5 aliases)
  trainer_entry 0x02, 0x14, 0x81, 0x15, 0xFF56527A, 0x00130000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF6DC

@ Trainer 121: レイカ
  @ src/data/trainers.h:5614 trainers_line_5614 (+5 aliases)
  trainer_entry 0x02, 0x14, 0x81, 0x15, 0xFF56527A, 0x00130000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF6E4

@ Trainer 122: レイカ
  @ src/data/trainers.h:5614 trainers_line_5614 (+5 aliases)
  trainer_entry 0x02, 0x14, 0x81, 0x15, 0xFF56527A, 0x00130000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF6EC

@ Trainer 123: レイカ
  @ src/data/trainers.h:5614 trainers_line_5614 (+5 aliases)
  trainer_entry 0x03, 0x14, 0x81, 0x15, 0xFF56527A, 0x00130000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF6F4

@ Trainer 124: メグミ
  @ src/data/trainers.h:6074 trainers_line_6074
  trainer_entry 0x00, 0x15, 0x81, 0x16, 0xFF708972, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF704

@ Trainer 125: クニミ
  @ src/data/trainers.h:6110 trainers_line_6110
  trainer_entry 0x00, 0x15, 0x81, 0x16, 0xFF706658, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF70C

@ Trainer 126: アサミ
  @ src/data/trainers.h:6146 trainers_line_6146
  trainer_entry 0x00, 0x15, 0x81, 0x16, 0xFF705B51, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF714

@ Trainer 127: ヨリコ
  @ src/data/trainers.h:6182 trainers_line_6182 (+4 aliases)
  trainer_entry 0x01, 0x15, 0x81, 0x16, 0xFF5A7876, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF71C

@ Trainer 128: マユコ
  @ src/data/trainers.h:6244 trainers_line_6244
  trainer_entry 0x00, 0x15, 0x81, 0x16, 0xFF5A756F, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF73C

@ Trainer 129: セイコ
  @ src/data/trainers.h:6280 trainers_line_6280
  trainer_entry 0x00, 0x15, 0x81, 0x16, 0xFF5A525E, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF744

@ Trainer 130: ナオコ
  @ src/data/trainers.h:6316 trainers_line_6316
  trainer_entry 0x01, 0x15, 0x81, 0x16, 0xFF5A5565, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DF74C

@ Trainer 131: ハルコ
  @ src/data/trainers.h:6396 trainers_line_6396
  trainer_entry 0x00, 0x15, 0x81, 0x16, 0xFF5A796A, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF77C

@ Trainer 132: ヨリコ
  @ src/data/trainers.h:6182 trainers_line_6182 (+4 aliases)
  trainer_entry 0x01, 0x15, 0x81, 0x16, 0xFF5A7876, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF78C

@ Trainer 133: ヨリコ
  @ src/data/trainers.h:6182 trainers_line_6182 (+4 aliases)
  trainer_entry 0x01, 0x15, 0x81, 0x16, 0xFF5A7876, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF7AC

@ Trainer 134: ヨリコ
  @ src/data/trainers.h:6182 trainers_line_6182 (+4 aliases)
  trainer_entry 0x01, 0x15, 0x81, 0x16, 0xFF5A7876, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF7CC

@ Trainer 135: ヨリコ
  @ src/data/trainers.h:6182 trainers_line_6182 (+4 aliases)
  trainer_entry 0x01, 0x15, 0x81, 0x16, 0xFF5A7876, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF7EC

@ Trainer 136: ミツグ
  @ src/data/trainers.h:6692 trainers_line_6692 (+4 aliases)
  trainer_entry 0x02, 0x16, 0x0D, 0x17, 0xFF896270, 0x00130000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF80C

@ Trainer 137: ナエ
  trainer_entry 0x00, 0x0A, 0x84, 0x18, 0x00FF5465, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF814

@ Trainer 138: ショウイチ
  @ src/data/trainers.h:6780 trainers_line_6780
  trainer_entry 0x02, 0x16, 0x0D, 0x17, 0x5253865C, 0x0013FF61, 0x00000000, 0, 0, 1, 0, 1, 0x082DF824

@ Trainer 139: ミツグ
  @ src/data/trainers.h:6692 trainers_line_6692 (+4 aliases)
  trainer_entry 0x02, 0x16, 0x0D, 0x17, 0xFF896270, 0x00130000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF82C

@ Trainer 140: ミツグ
  @ src/data/trainers.h:6692 trainers_line_6692 (+4 aliases)
  trainer_entry 0x02, 0x16, 0x0D, 0x17, 0xFF896270, 0x00130000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF834

@ Trainer 141: ミツグ
  @ src/data/trainers.h:6692 trainers_line_6692 (+4 aliases)
  trainer_entry 0x02, 0x16, 0x0D, 0x17, 0xFF896270, 0x00130000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF83C

@ Trainer 142: ミツグ
  @ src/data/trainers.h:6692 trainers_line_6692 (+4 aliases)
  trainer_entry 0x03, 0x16, 0x0D, 0x17, 0xFF896270, 0x00130000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF844

@ Trainer 143: トシオ
  @ src/data/trainers.h:6987 trainers_line_6987 (+4 aliases)
  trainer_entry 0x00, 0x17, 0x03, 0x19, 0xFF555C64, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF854

@ Trainer 144: ショウ
  @ src/data/trainers.h:3787 trainers_line_3787 (+5 aliases)
  trainer_entry 0x00, 0x15, 0x81, 0x16, 0xFF53865C, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF85C

@ Trainer 145: モトフミ
  @ src/data/trainers.h:7071 trainers_line_7071
  trainer_entry 0x00, 0x17, 0x03, 0x19, 0x706C6473, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DF86C

@ Trainer 146: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x87, 0x1A, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DF874

@ Trainer 147: トシオ
  @ src/data/trainers.h:6987 trainers_line_6987 (+4 aliases)
  trainer_entry 0x00, 0x17, 0x03, 0x19, 0xFF555C64, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF87C

@ Trainer 148: トシオ
  @ src/data/trainers.h:6987 trainers_line_6987 (+4 aliases)
  trainer_entry 0x00, 0x17, 0x03, 0x19, 0xFF555C64, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF884

@ Trainer 149: トシオ
  @ src/data/trainers.h:6987 trainers_line_6987 (+4 aliases)
  trainer_entry 0x00, 0x17, 0x03, 0x19, 0xFF555C64, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF894

@ Trainer 150: トシオ
  @ src/data/trainers.h:6987 trainers_line_6987 (+4 aliases)
  trainer_entry 0x00, 0x17, 0x03, 0x19, 0xFF555C64, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF8A4

@ Trainer 151: ヨウヘイ
  @ src/data/trainers.h:7323 trainers_line_7323
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x526D5376, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DF8B4

@ Trainer 152: ヒロミ
  @ src/data/trainers.h:2702 trainers_line_2702 (+1 aliases)
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0xFF707B6B, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF8BC

@ Trainer 153: タツオ
  @ src/data/trainers.h:7395 trainers_line_7395
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0xFF556260, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF8C4

@ Trainer 154: テルユキ
  @ src/data/trainers.h:7443 trainers_line_7443
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x57757963, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082DF8D4

@ Trainer 155: エイイチ
  @ src/data/trainers.h:7503 trainers_line_7503 (+4 aliases)
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x61525254, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DF8EC

@ Trainer 156: モリオ
  @ src/data/trainers.h:7539 trainers_line_7539
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0xFF557873, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF8F4

@ Trainer 157: クニヒコ
  @ src/data/trainers.h:7575 trainers_line_7575
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x5A6B6658, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DF8FC

@ Trainer 158: ケンイチ
  @ src/data/trainers.h:7611 trainers_line_7611
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x61527E59, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DF904

@ Trainer 159: トシヒロ
  @ src/data/trainers.h:7659 trainers_line_7659
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x7B6B5C64, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DF914

@ Trainer 160: マサトシ
  @ src/data/trainers.h:7707 trainers_line_7707
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x5C645B6F, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DF924

@ Trainer 161: シノブ
  @ src/data/trainers.h:7743 trainers_line_7743 (+1 aliases)
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0xFF98695C, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF92C

@ Trainer 162: ケイシ
  @ src/data/trainers.h:7779 trainers_line_7779
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0xFF5C5259, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF934

@ Trainer 163: ガクジ
  @ src/data/trainers.h:7815 trainers_line_7815
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0xFF8D5887, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF93C

@ Trainer 164: レツジ
  @ src/data/trainers.h:7851 trainers_line_7851
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0xFF8D627A, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DF944

@ Trainer 165: マサヒロ
  @ src/data/trainers.h:7911 trainers_line_7911
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x7B6B5B6F, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DF95C

@ Trainer 166: ハルキ
  @ src/data/trainers.h:7947 trainers_line_7947
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0xFF57796A, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF964

@ Trainer 167: ダイスケ
  @ src/data/trainers.h:7983 trainers_line_7983
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x595D5291, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DF96C

@ Trainer 168: シンジ
  @ src/data/trainers.h:8031 trainers_line_8031
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0xFF8D7E5C, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DF97C

@ Trainer 169: ゴウ
  @ src/data/trainers.h:8079 trainers_line_8079
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x00FF538B, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF98C

@ Trainer 170: シゲオ
  @ src/data/trainers.h:8115 trainers_line_8115
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0xFF558A5C, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF994

@ Trainer 171: ツトム
  @ src/data/trainers.h:8151 trainers_line_8151
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0xFF716462, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DF99C

@ Trainer 172: ヒデノリ
  @ src/data/trainers.h:8187 trainers_line_8187
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x7869946B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DF9A4

@ Trainer 173: トクオ
  @ src/data/trainers.h:8223 trainers_line_8223
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0xFF555864, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DF9AC

@ Trainer 174: カツユキ
  @ src/data/trainers.h:8283 trainers_line_8283
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x57756256, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DF9C4

@ Trainer 175: エイイチ
  @ src/data/trainers.h:7503 trainers_line_7503 (+4 aliases)
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x61525254, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DF9D4

@ Trainer 176: エイイチ
  @ src/data/trainers.h:7503 trainers_line_7503 (+4 aliases)
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x61525254, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DF9DC

@ Trainer 177: エイイチ
  @ src/data/trainers.h:7503 trainers_line_7503 (+4 aliases)
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x61525254, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DF9E4

@ Trainer 178: エイイチ
  @ src/data/trainers.h:7503 trainers_line_7503 (+4 aliases)
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x61525254, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DF9F4

@ Trainer 179: タイケイ
  @ src/data/trainers.h:8499 trainers_line_8499
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0x52595260, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DFA04

@ Trainer 180: イワオ
  @ src/data/trainers.h:8535 trainers_line_8535
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0xFF557C52, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DFA0C

@ Trainer 181: タクマ
  @ src/data/trainers.h:8583 trainers_line_8583
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0xFF6F5860, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DFA1C

@ Trainer 182: タケノリ
  @ src/data/trainers.h:8619 trainers_line_8619
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0x78695960, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DFA24

@ Trainer 183: ゴロウ
  @ src/data/trainers.h:8667 trainers_line_8667 (+4 aliases)
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0xFF537B8B, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DFA34

@ Trainer 184: ゴロウ
  @ src/data/trainers.h:8667 trainers_line_8667 (+4 aliases)
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0xFF537B8B, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DFA3C

@ Trainer 185: ゴロウ
  @ src/data/trainers.h:8667 trainers_line_8667 (+4 aliases)
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0xFF537B8B, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DFA44

@ Trainer 186: ゴロウ
  @ src/data/trainers.h:8667 trainers_line_8667 (+4 aliases)
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0xFF537B8B, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DFA54

@ Trainer 187: ゴロウ
  @ src/data/trainers.h:8667 trainers_line_8667 (+4 aliases)
  trainer_entry 0x02, 0x0C, 0x04, 0x0B, 0xFF537B8B, 0x00000000, 0x00000000, 0, 0, 1, 0, 4, 0x082DFA6C

@ Trainer 188: カズシ
  @ src/data/trainers.h:8921 trainers_line_8921
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0xFF5C8E56, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DFA8C

@ Trainer 189: タダシ
  @ src/data/trainers.h:8969 trainers_line_8969
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0xFF5C9160, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DFA9C

@ Trainer 190: テツヒサ
  @ src/data/trainers.h:9005 trainers_line_9005
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0x5B6B6263, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DFAA4

@ Trainer 191: ジョージ
  @ src/data/trainers.h:9041 trainers_line_9041
  trainer_entry 0x01, 0x18, 0x04, 0x1B, 0x8DAE868D, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DFAAC

@ Trainer 192: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x86, 0x06, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DFACC

@ Trainer 193: したっぱ
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DFADC

@ Trainer 194: マイク
  @ src/data/trainers.h:9186 trainers_line_9186
  trainer_entry 0x00, 0x18, 0x04, 0x1B, 0xFF58526F, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DFAE4

@ Trainer 195: ジョー
  @ src/data/trainers.h:9234 trainers_line_9234 (+4 aliases)
  trainer_entry 0x00, 0x18, 0x04, 0x1B, 0xFFAE868D, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DFAF4

@ Trainer 196: テリー
  @ src/data/trainers.h:9282 trainers_line_9282 (+4 aliases)
  trainer_entry 0x00, 0x18, 0x04, 0x1B, 0xFFAE7863, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DFB04

@ Trainer 197: テリー
  @ src/data/trainers.h:9282 trainers_line_9282 (+4 aliases)
  trainer_entry 0x00, 0x18, 0x04, 0x1B, 0xFFAE7863, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DFB14

@ Trainer 198: テリー
  @ src/data/trainers.h:9282 trainers_line_9282 (+4 aliases)
  trainer_entry 0x00, 0x18, 0x04, 0x1B, 0xFFAE7863, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DFB2C

@ Trainer 199: テリー
  @ src/data/trainers.h:9282 trainers_line_9282 (+4 aliases)
  trainer_entry 0x00, 0x18, 0x04, 0x1B, 0xFFAE7863, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DFB44

@ Trainer 200: テリー
  @ src/data/trainers.h:9282 trainers_line_9282 (+4 aliases)
  trainer_entry 0x00, 0x18, 0x04, 0x1B, 0xFFAE7863, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DFB5C

@ Trainer 201: アキラ
  @ src/data/trainers.h:9570 trainers_line_9570
  trainer_entry 0x00, 0x19, 0x0B, 0x1C, 0xFF775751, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DFB74

@ Trainer 202: コウタ
  @ src/data/trainers.h:9606 trainers_line_9606
  trainer_entry 0x00, 0x19, 0x0B, 0x1C, 0xFF60535A, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DFB7C

@ Trainer 203: タモツ
  @ src/data/trainers.h:9654 trainers_line_9654
  trainer_entry 0x00, 0x19, 0x0B, 0x1C, 0xFF627360, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DFB8C

@ Trainer 204: ジュンジ
  @ src/data/trainers.h:9690 trainers_line_9690
  trainer_entry 0x00, 0x19, 0x0B, 0x1C, 0x8D7E858D, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DFB94

@ Trainer 205: タカハル
  @ src/data/trainers.h:9726 trainers_line_9726
  trainer_entry 0x00, 0x19, 0x0B, 0x1C, 0x796A5660, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DFB9C

@ Trainer 206: ノブヒコ
  @ src/data/trainers.h:9762 trainers_line_9762 (+4 aliases)
  trainer_entry 0x00, 0x19, 0x0B, 0x1C, 0x5A6B9869, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DFBA4

@ Trainer 207: ノブヒコ
  @ src/data/trainers.h:9762 trainers_line_9762 (+4 aliases)
  trainer_entry 0x00, 0x19, 0x0B, 0x1C, 0x5A6B9869, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DFBB4

@ Trainer 208: ノブヒコ
  @ src/data/trainers.h:9762 trainers_line_9762 (+4 aliases)
  trainer_entry 0x00, 0x19, 0x0B, 0x1C, 0x5A6B9869, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DFBC4

@ Trainer 209: ノブヒコ
  @ src/data/trainers.h:9762 trainers_line_9762 (+4 aliases)
  trainer_entry 0x00, 0x19, 0x0B, 0x1C, 0x5A6B9869, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DFBD4

@ Trainer 210: ノブヒコ
  @ src/data/trainers.h:9762 trainers_line_9762 (+4 aliases)
  trainer_entry 0x00, 0x19, 0x0B, 0x1C, 0x5A6B9869, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DFBE4

@ Trainer 211: ノリヒロ
  @ src/data/trainers.h:10002 trainers_line_10002
  trainer_entry 0x01, 0x1A, 0x00, 0x1D, 0x7B6B7869, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DFBF4

@ Trainer 212: カズユキ
  @ src/data/trainers.h:10045 trainers_line_10045
  trainer_entry 0x01, 0x1A, 0x00, 0x1D, 0x57758E56, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082DFC04

@ Trainer 213: キヨフミ
  @ src/data/trainers.h:10126 trainers_line_10126
  trainer_entry 0x00, 0x1A, 0x00, 0x1D, 0x706C7657, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DFC34

@ Trainer 214: トモヒロ
  @ src/data/trainers.h:10162 trainers_line_10162
  trainer_entry 0x00, 0x1A, 0x00, 0x1D, 0x7B6B7364, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DFC3C

@ Trainer 215: マサミチ
  @ src/data/trainers.h:10210 trainers_line_10210
  trainer_entry 0x00, 0x1A, 0x00, 0x1D, 0x61705B6F, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DFC4C

@ Trainer 216: ヨシハル
  @ src/data/trainers.h:10246 trainers_line_10246 (+4 aliases)
  trainer_entry 0x00, 0x1A, 0x00, 0x1D, 0x796A5C76, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DFC54

@ Trainer 217: ナツコ
  @ src/data/trainers.h:10294 trainers_line_10294
  trainer_entry 0x00, 0x1B, 0x82, 0x1E, 0xFF5A6265, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DFC64

@ Trainer 218: ヨシヤ
  @ src/data/trainers.h:10330 trainers_line_10330
  trainer_entry 0x00, 0x1A, 0x00, 0x1D, 0xFF745C76, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DFC6C

@ Trainer 219: ヨシハル
  @ src/data/trainers.h:10246 trainers_line_10246 (+4 aliases)
  trainer_entry 0x00, 0x1A, 0x00, 0x1D, 0x796A5C76, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DFC74

@ Trainer 220: ヨシハル
  @ src/data/trainers.h:10246 trainers_line_10246 (+4 aliases)
  trainer_entry 0x00, 0x1A, 0x00, 0x1D, 0x796A5C76, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DFC84

@ Trainer 221: ヨシハル
  @ src/data/trainers.h:10246 trainers_line_10246 (+4 aliases)
  trainer_entry 0x00, 0x1A, 0x00, 0x1D, 0x796A5C76, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082DFC94

@ Trainer 222: ヨシハル
  @ src/data/trainers.h:10246 trainers_line_10246 (+4 aliases)
  trainer_entry 0x00, 0x1A, 0x00, 0x1D, 0x796A5C76, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082DFCAC

@ Trainer 223: ヨウイチ
  @ src/data/trainers.h:10582 trainers_line_10582
  trainer_entry 0x00, 0x1C, 0x03, 0x1F, 0x61525376, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DFCC4

@ Trainer 224: イクミ
  @ src/data/trainers.h:10618 trainers_line_10618
  trainer_entry 0x00, 0x1C, 0x03, 0x1F, 0xFF705852, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DFCCC

@ Trainer 225: ソウスケ
  @ src/data/trainers.h:10678 trainers_line_10678
  trainer_entry 0x00, 0x1C, 0x03, 0x1F, 0x595D535F, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082DFCE4

@ Trainer 226: ミキオ
  @ src/data/trainers.h:10738 trainers_line_10738 (+4 aliases)
  trainer_entry 0x00, 0x1C, 0x03, 0x1F, 0xFF555770, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DFCFC

@ Trainer 227: ヨシアキ
  @ src/data/trainers.h:10798 trainers_line_10798
  trainer_entry 0x00, 0x1C, 0x03, 0x1F, 0x57515C76, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DFD14

@ Trainer 228: ミキオ
  @ src/data/trainers.h:10738 trainers_line_10738 (+4 aliases)
  trainer_entry 0x00, 0x1C, 0x03, 0x1F, 0xFF555770, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DFD24

@ Trainer 229: ミキオ
  @ src/data/trainers.h:10738 trainers_line_10738 (+4 aliases)
  trainer_entry 0x00, 0x1C, 0x03, 0x1F, 0xFF555770, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DFD3C

@ Trainer 230: ミキオ
  @ src/data/trainers.h:10738 trainers_line_10738 (+4 aliases)
  trainer_entry 0x00, 0x1C, 0x03, 0x1F, 0xFF555770, 0x00000000, 0x00000000, 0, 0, 1, 0, 4, 0x082DFD54

@ Trainer 231: ミキオ
  @ src/data/trainers.h:10738 trainers_line_10738 (+4 aliases)
  trainer_entry 0x02, 0x1C, 0x03, 0x1F, 0xFF555770, 0x00000000, 0x00000000, 0, 0, 1, 0, 5, 0x082DFD74

@ Trainer 232: アキト
  @ src/data/trainers.h:11124 trainers_line_11124
  trainer_entry 0x01, 0x1D, 0x04, 0x21, 0xFF645751, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DFD9C

@ Trainer 233: ヒロム
  @ src/data/trainers.h:11164 trainers_line_11164
  trainer_entry 0x00, 0x1D, 0x04, 0x21, 0xFF717B6B, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DFDAC

@ Trainer 234: ユウヤ
  @ src/data/trainers.h:11200 trainers_line_11200
  trainer_entry 0x00, 0x1D, 0x04, 0x21, 0xFF745375, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DFDB4

@ Trainer 235: サトキ
  @ src/data/trainers.h:11236 trainers_line_11236
  trainer_entry 0x00, 0x1D, 0x04, 0x21, 0xFF57645B, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DFDBC

@ Trainer 236: テツヤ
  @ src/data/trainers.h:11272 trainers_line_11272
  trainer_entry 0x00, 0x1D, 0x04, 0x21, 0xFF746263, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DFDC4

@ Trainer 237: シュウイチ
  @ src/data/trainers.h:11332 trainers_line_11332
  trainer_entry 0x00, 0x1D, 0x04, 0x21, 0x5253855C, 0x0000FF61, 0x00000000, 0, 0, 1, 0, 2, 0x082DFDDC

@ Trainer 238: カオル
  @ src/data/trainers.h:11380 trainers_line_11380 (+4 aliases)
  trainer_entry 0x00, 0x1D, 0x04, 0x21, 0xFF795556, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DFDEC

@ Trainer 239: カオル
  @ src/data/trainers.h:11380 trainers_line_11380 (+4 aliases)
  trainer_entry 0x00, 0x1D, 0x04, 0x21, 0xFF795556, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DFDF4

@ Trainer 240: カオル
  @ src/data/trainers.h:11380 trainers_line_11380 (+4 aliases)
  trainer_entry 0x00, 0x1D, 0x04, 0x21, 0xFF795556, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DFE04

@ Trainer 241: カオル
  @ src/data/trainers.h:11380 trainers_line_11380 (+4 aliases)
  trainer_entry 0x00, 0x1D, 0x04, 0x21, 0xFF795556, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DFE14

@ Trainer 242: カオル
  @ src/data/trainers.h:11380 trainers_line_11380 (+4 aliases)
  trainer_entry 0x00, 0x1D, 0x04, 0x21, 0xFF795556, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DFE24

@ Trainer 243: マリコ
  @ src/data/trainers.h:11608 trainers_line_11608
  trainer_entry 0x01, 0x1D, 0x84, 0x22, 0xFF5A786F, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DFE34

@ Trainer 244: アスカ
  @ src/data/trainers.h:11648 trainers_line_11648
  trainer_entry 0x00, 0x1D, 0x84, 0x22, 0xFF565D51, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DFE44

@ Trainer 245: ミライ
  @ src/data/trainers.h:11684 trainers_line_11684
  trainer_entry 0x00, 0x1D, 0x84, 0x22, 0xFF527770, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DFE4C

@ Trainer 246: ヒカリ
  @ src/data/trainers.h:11720 trainers_line_11720
  trainer_entry 0x00, 0x1D, 0x84, 0x22, 0xFF78566B, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082DFE54

@ Trainer 247: オリエ
  @ src/data/trainers.h:11756 trainers_line_11756
  trainer_entry 0x00, 0x1D, 0x84, 0x22, 0xFF547855, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082DFE5C

@ Trainer 248: ナナコ
  @ src/data/trainers.h:11816 trainers_line_11816
  trainer_entry 0x00, 0x1D, 0x84, 0x22, 0xFF5A6565, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DFE74

@ Trainer 249: シホミ
  @ src/data/trainers.h:11864 trainers_line_11864 (+4 aliases)
  trainer_entry 0x00, 0x1D, 0x84, 0x22, 0xFF706E5C, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DFE84

@ Trainer 250: シホミ
  @ src/data/trainers.h:11864 trainers_line_11864 (+4 aliases)
  trainer_entry 0x00, 0x1D, 0x84, 0x22, 0xFF706E5C, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DFE94

@ Trainer 251: シホミ
  @ src/data/trainers.h:11864 trainers_line_11864 (+4 aliases)
  trainer_entry 0x00, 0x1D, 0x84, 0x22, 0xFF706E5C, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DFEA4

@ Trainer 252: シホミ
  @ src/data/trainers.h:11864 trainers_line_11864 (+4 aliases)
  trainer_entry 0x00, 0x1D, 0x84, 0x22, 0xFF706E5C, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DFEB4

@ Trainer 253: シホミ
  @ src/data/trainers.h:11864 trainers_line_11864 (+4 aliases)
  trainer_entry 0x00, 0x1D, 0x84, 0x22, 0xFF706E5C, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082DFEC4

@ Trainer 254: ロバート
  @ src/data/trainers.h:12104 trainers_line_12104 (+4 aliases)
  trainer_entry 0x00, 0x1E, 0x0D, 0x23, 0x64AE967B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DFED4

@ Trainer 255: オルソン
  @ src/data/trainers.h:12140 trainers_line_12140
  trainer_entry 0x00, 0x1E, 0x0D, 0x23, 0x7E5F7955, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DFEDC

@ Trainer 256: スコット
  @ src/data/trainers.h:12188 trainers_line_12188
  trainer_entry 0x00, 0x1E, 0x0D, 0x23, 0x64A05A5D, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DFEEC

@ Trainer 257: ロバート
  @ src/data/trainers.h:12104 trainers_line_12104 (+4 aliases)
  trainer_entry 0x00, 0x1E, 0x0D, 0x23, 0x64AE967B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082DFEF4

@ Trainer 258: ロバート
  @ src/data/trainers.h:12104 trainers_line_12104 (+4 aliases)
  trainer_entry 0x01, 0x1E, 0x0D, 0x23, 0x64AE967B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DFEFC

@ Trainer 259: ロバート
  @ src/data/trainers.h:12104 trainers_line_12104 (+4 aliases)
  trainer_entry 0x01, 0x1E, 0x0D, 0x23, 0x64AE967B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082DFF1C

@ Trainer 260: ロバート
  @ src/data/trainers.h:12104 trainers_line_12104 (+4 aliases)
  trainer_entry 0x01, 0x1E, 0x0D, 0x23, 0x64AE967B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082DFF3C

@ Trainer 261: カゲツ
  @ src/data/trainers.h:12464 trainers_line_12464
  trainer_entry 0x03, 0x1F, 0x0A, 0x24, 0xFF628A56, 0x00130000, 0x00000013, 0, 0, 15, 0, 5, 0x082DFF6C

@ Trainer 262: フヨウ
  @ src/data/trainers.h:12589 trainers_line_12589 (+1 aliases)
  trainer_entry 0x03, 0x1F, 0x8A, 0x25, 0xFF53766C, 0x00130000, 0x00000013, 0, 0, 7, 0, 5, 0x082DFFBC

@ Trainer 263: プリム
  @ src/data/trainers.h:12714 trainers_line_12714 (+1 aliases)
  trainer_entry 0x03, 0x1F, 0x8A, 0x26, 0xFF71789D, 0x00130000, 0x00000013, 0, 0, 7, 0, 5, 0x082E000C

@ Trainer 264: ゲンジ
  @ src/data/trainers.h:12839 trainers_line_12839
  trainer_entry 0x03, 0x1F, 0x0A, 0x27, 0xFF8D7E8A, 0x00130000, 0x00000013, 0, 0, 7, 0, 5, 0x082E005C

@ Trainer 265: ツツジ
  @ src/data/trainers.h:12964 trainers_line_12964 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x81, 0x28, 0xFF8D6262, 0x000D0000, 0x0000000D, 0, 0, 7, 0, 3, 0x082E00AC

@ Trainer 266: トウキ
  @ src/data/trainers.h:13049 trainers_line_13049 (+6 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x29, 0xFF575364, 0x00160000, 0x00000016, 0, 0, 7, 0, 3, 0x082E00DC

@ Trainer 267: テッセン
  @ src/data/trainers.h:13134 trainers_line_13134 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x2A, 0x7E5EA063, 0x001600FF, 0x00000016, 0, 0, 7, 0, 4, 0x082E010C

@ Trainer 268: アスナ
  @ src/data/trainers.h:13238 trainers_line_13238 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x81, 0x2B, 0xFF655D51, 0x00150000, 0x00000015, 0, 0, 7, 0, 4, 0x082E014C

@ Trainer 269: センリ
  @ src/data/trainers.h:13342 trainers_line_13342 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x2C, 0xFF787E5E, 0x00150000, 0x00000015, 0, 0, 7, 0, 4, 0x082E018C

@ Trainer 270: ナギ
  trainer_entry 0x03, 0x20, 0x81, 0x2D, 0x00FF8865, 0x00150000, 0x00000015, 0, 0, 23, 0, 5, 0x082E01CC

@ Trainer 271: フウとラン
  @ src/data/trainers.h:13569 trainers_line_13569 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x01, 0x2E, 0x7714536C, 0x0015FF7E, 0x00150015, 21, 1, 7, 0, 4, 0x082E021C

@ Trainer 272: アダン
  @ src/data/trainers.h:13675 trainers_line_13675 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x2F, 0xFF7E9151, 0x00150000, 0x00000015, 0, 0, 7, 0, 5, 0x082E025C

@ Trainer 273: ヒデオ
  @ src/data/trainers.h:13798 trainers_line_13798 (+4 aliases)
  trainer_entry 0x00, 0x21, 0x00, 0x30, 0xFF55946B, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E02AC

@ Trainer 274: ノブヒサ
  @ src/data/trainers.h:13834 trainers_line_13834
  trainer_entry 0x00, 0x21, 0x00, 0x30, 0x5B6B9869, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E02B4

@ Trainer 275: カツトシ
  @ src/data/trainers.h:13870 trainers_line_13870
  trainer_entry 0x00, 0x21, 0x00, 0x30, 0x5C646256, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E02BC

@ Trainer 276: ヒデオ
  @ src/data/trainers.h:13798 trainers_line_13798 (+4 aliases)
  trainer_entry 0x00, 0x21, 0x00, 0x30, 0xFF55946B, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E02D4

@ Trainer 277: ヒデオ
  @ src/data/trainers.h:13798 trainers_line_13798 (+4 aliases)
  trainer_entry 0x00, 0x21, 0x00, 0x30, 0xFF55946B, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E02E4

@ Trainer 278: ヒデオ
  @ src/data/trainers.h:13798 trainers_line_13798 (+4 aliases)
  trainer_entry 0x00, 0x21, 0x00, 0x30, 0xFF55946B, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E02F4

@ Trainer 279: ヒデオ
  @ src/data/trainers.h:13798 trainers_line_13798 (+4 aliases)
  trainer_entry 0x00, 0x21, 0x00, 0x30, 0xFF55946B, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E0304

@ Trainer 280: ハツネ
  @ src/data/trainers.h:14134 trainers_line_14134 (+4 aliases)
  trainer_entry 0x00, 0x21, 0x82, 0x31, 0xFF68626A, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E031C

@ Trainer 281: ミキエ
  @ src/data/trainers.h:14170 trainers_line_14170
  trainer_entry 0x00, 0x21, 0x82, 0x31, 0xFF545770, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0324

@ Trainer 282: ハツネ
  @ src/data/trainers.h:14134 trainers_line_14134 (+4 aliases)
  trainer_entry 0x00, 0x21, 0x82, 0x31, 0xFF68626A, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0334

@ Trainer 283: ハツネ
  @ src/data/trainers.h:14134 trainers_line_14134 (+4 aliases)
  trainer_entry 0x00, 0x21, 0x82, 0x31, 0xFF68626A, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0344

@ Trainer 284: ハツネ
  @ src/data/trainers.h:14134 trainers_line_14134 (+4 aliases)
  trainer_entry 0x00, 0x21, 0x82, 0x31, 0xFF68626A, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0354

@ Trainer 285: ハツネ
  @ src/data/trainers.h:14134 trainers_line_14134 (+4 aliases)
  trainer_entry 0x00, 0x21, 0x82, 0x31, 0xFF68626A, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0364

@ Trainer 286: マナとユイ
  @ src/data/trainers.h:14410 trainers_line_14410
  trainer_entry 0x01, 0x22, 0x09, 0x32, 0x7514656F, 0x0000FF52, 0x00000000, 0, 1, 1, 0, 2, 0x082E0374

@ Trainer 287: ミホとリコ
  @ src/data/trainers.h:14472 trainers_line_14472 (+4 aliases)
  trainer_entry 0x01, 0x22, 0x09, 0x32, 0x78146E70, 0x0000FF5A, 0x00000000, 0, 1, 1, 0, 2, 0x082E0394

@ Trainer 288: ミホとリコ
  @ src/data/trainers.h:14472 trainers_line_14472 (+4 aliases)
  trainer_entry 0x01, 0x22, 0x09, 0x32, 0x78146E70, 0x0000FF5A, 0x00000000, 0, 1, 1, 0, 2, 0x082E03B4

@ Trainer 289: ミホとリコ
  @ src/data/trainers.h:14472 trainers_line_14472 (+4 aliases)
  trainer_entry 0x01, 0x22, 0x09, 0x32, 0x78146E70, 0x0000FF5A, 0x00000000, 0, 1, 1, 0, 2, 0x082E03D4

@ Trainer 290: ミホとリコ
  @ src/data/trainers.h:14472 trainers_line_14472 (+4 aliases)
  trainer_entry 0x01, 0x22, 0x09, 0x32, 0x78146E70, 0x0000FF5A, 0x00000000, 0, 1, 1, 0, 2, 0x082E03F4

@ Trainer 291: ミホとリコ
  @ src/data/trainers.h:14472 trainers_line_14472 (+4 aliases)
  trainer_entry 0x01, 0x22, 0x09, 0x32, 0x78146E70, 0x0000FF5A, 0x00000000, 0, 1, 1, 0, 2, 0x082E0414

@ Trainer 292: ハルヒコ
  @ src/data/trainers.h:14777 trainers_line_14777
  trainer_entry 0x02, 0x23, 0x09, 0x33, 0x5A6B796A, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E0434

@ Trainer 293: ミツハル
  @ src/data/trainers.h:14829 trainers_line_14829 (+4 aliases)
  trainer_entry 0x02, 0x24, 0x09, 0x33, 0x796A6270, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E0444

@ Trainer 294: ヒサシ
  @ src/data/trainers.h:14867 trainers_line_14867
  trainer_entry 0x03, 0x24, 0x09, 0x33, 0xFF5C5B6B, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082E044C

@ Trainer 295: ミツハル
  @ src/data/trainers.h:14829 trainers_line_14829 (+4 aliases)
  trainer_entry 0x02, 0x24, 0x09, 0x33, 0x796A6270, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E04AC

@ Trainer 296: ミツハル
  @ src/data/trainers.h:14829 trainers_line_14829 (+4 aliases)
  trainer_entry 0x02, 0x24, 0x09, 0x33, 0x796A6270, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E04B4

@ Trainer 297: ミツハル
  @ src/data/trainers.h:14829 trainers_line_14829 (+4 aliases)
  trainer_entry 0x02, 0x24, 0x09, 0x33, 0x796A6270, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E04BC

@ Trainer 298: ミツハル
  @ src/data/trainers.h:14829 trainers_line_14829 (+4 aliases)
  trainer_entry 0x02, 0x24, 0x09, 0x33, 0x796A6270, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E04C4

@ Trainer 299: ヤスエ
  @ src/data/trainers.h:15169 trainers_line_15169
  trainer_entry 0x02, 0x23, 0x89, 0x34, 0xFF545D74, 0x00000000, 0x00000000, 0, 0, 3, 0, 1, 0x082E04CC

@ Trainer 300: ケサコ
  @ src/data/trainers.h:15207 trainers_line_15207
  trainer_entry 0x02, 0x24, 0x89, 0x34, 0xFF5A5B59, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E04D4

@ Trainer 301: テイコ
  @ src/data/trainers.h:15245 trainers_line_15245
  trainer_entry 0x02, 0x24, 0x89, 0x34, 0xFF5A5263, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E04DC

@ Trainer 302: マサコ
  @ src/data/trainers.h:15311 trainers_line_15311 (+4 aliases)
  trainer_entry 0x02, 0x24, 0x89, 0x34, 0xFF5A5B6F, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E04F4

@ Trainer 303: マサコ
  @ src/data/trainers.h:15311 trainers_line_15311 (+4 aliases)
  trainer_entry 0x02, 0x24, 0x89, 0x34, 0xFF5A5B6F, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0504

@ Trainer 304: マサコ
  @ src/data/trainers.h:15311 trainers_line_15311 (+4 aliases)
  trainer_entry 0x02, 0x24, 0x89, 0x34, 0xFF5A5B6F, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0514

@ Trainer 305: マサコ
  @ src/data/trainers.h:15311 trainers_line_15311 (+4 aliases)
  trainer_entry 0x02, 0x24, 0x89, 0x34, 0xFF5A5B6F, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0524

@ Trainer 306: マサコ
  @ src/data/trainers.h:15311 trainers_line_15311 (+4 aliases)
  trainer_entry 0x02, 0x24, 0x89, 0x34, 0xFF5A5B6F, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0534

@ Trainer 307: ウンショウ
  trainer_entry 0x00, 0x0A, 0x04, 0x09, 0x865C7E53, 0x0000FF53, 0x00000000, 0, 0, 7, 0, 1, 0x082E0544

@ Trainer 308: ウンショウ
  trainer_entry 0x01, 0x0A, 0x04, 0x09, 0x865C7E53, 0x0000FF53, 0x00000000, 0, 0, 7, 0, 1, 0x082E054C

@ Trainer 309: ウンショウ
  trainer_entry 0x01, 0x0A, 0x04, 0x09, 0x865C7E53, 0x0000FF53, 0x00000000, 0, 0, 7, 0, 1, 0x082E055C

@ Trainer 310: ウンショウ
  trainer_entry 0x01, 0x0A, 0x04, 0x09, 0x865C7E53, 0x0000FF53, 0x00000000, 0, 0, 7, 0, 1, 0x082E056C

@ Trainer 311: ウンショウ
  trainer_entry 0x01, 0x0A, 0x04, 0x09, 0x865C7E53, 0x0000FF53, 0x00000000, 0, 0, 7, 0, 1, 0x082E057C

@ Trainer 312: ミツヨ
  @ src/data/trainers.h:15779 trainers_line_15779
  trainer_entry 0x01, 0x23, 0x84, 0x18, 0xFF766270, 0x00000000, 0x00000000, 0, 0, 7, 0, 1, 0x082E058C

@ Trainer 313: ミヤコ
  @ src/data/trainers.h:15822 trainers_line_15822 (+4 aliases)
  trainer_entry 0x00, 0x0A, 0x84, 0x18, 0xFF5A7470, 0x00000000, 0x00000000, 0, 0, 7, 0, 2, 0x082E059C

@ Trainer 314: ミヤコ
  @ src/data/trainers.h:15822 trainers_line_15822 (+4 aliases)
  trainer_entry 0x00, 0x0A, 0x84, 0x18, 0xFF5A7470, 0x00000000, 0x00000000, 0, 0, 7, 0, 2, 0x082E05AC

@ Trainer 315: ミヤコ
  @ src/data/trainers.h:15822 trainers_line_15822 (+4 aliases)
  trainer_entry 0x00, 0x0A, 0x84, 0x18, 0xFF5A7470, 0x00000000, 0x00000000, 0, 0, 7, 0, 2, 0x082E05BC

@ Trainer 316: ミヤコ
  @ src/data/trainers.h:15822 trainers_line_15822 (+4 aliases)
  trainer_entry 0x00, 0x0A, 0x84, 0x18, 0xFF5A7470, 0x00000000, 0x00000000, 0, 0, 7, 0, 2, 0x082E05CC

@ Trainer 317: ミヤコ
  @ src/data/trainers.h:15822 trainers_line_15822 (+4 aliases)
  trainer_entry 0x00, 0x0A, 0x84, 0x18, 0xFF5A7470, 0x00000000, 0x00000000, 0, 0, 7, 0, 2, 0x082E05DC

@ Trainer 318: カズキ
  @ src/data/trainers.h:16062 trainers_line_16062 (+4 aliases)
  trainer_entry 0x00, 0x25, 0x00, 0x35, 0xFF578E56, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E05EC

@ Trainer 319: ケイタ
  @ src/data/trainers.h:16098 trainers_line_16098
  trainer_entry 0x00, 0x25, 0x00, 0x35, 0xFF605259, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E05F4

@ Trainer 320: タロウ
  @ src/data/trainers.h:16146 trainers_line_16146
  trainer_entry 0x01, 0x25, 0x00, 0x35, 0xFF537B60, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0604

@ Trainer 321: カツオ
  @ src/data/trainers.h:16186 trainers_line_16186
  trainer_entry 0x00, 0x25, 0x00, 0x35, 0xFF556256, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0614

@ Trainer 322: タケオ
  @ src/data/trainers.h:16234 trainers_line_16234
  trainer_entry 0x00, 0x25, 0x00, 0x35, 0xFF555960, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0624

@ Trainer 323: ヒロト
  @ src/data/trainers.h:16270 trainers_line_16270
  trainer_entry 0x01, 0x25, 0x00, 0x35, 0xFF647B6B, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E062C

@ Trainer 324: タダトシ
  @ src/data/trainers.h:16332 trainers_line_16332
  trainer_entry 0x01, 0x05, 0x05, 0x03, 0x5C649160, 0x001300FF, 0x00000000, 0, 0, 7, 0, 2, 0x082E064C

@ Trainer 325: スズカ
  @ src/data/trainers.h:16396 trainers_line_16396
  trainer_entry 0x01, 0x05, 0x85, 0x14, 0xFF568E5D, 0x00130000, 0x00000000, 0, 0, 7, 0, 2, 0x082E066C

@ Trainer 326: マサユキ
  @ src/data/trainers.h:16460 trainers_line_16460
  trainer_entry 0x00, 0x25, 0x00, 0x35, 0x57755B6F, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E068C

@ Trainer 327: ヨシト
  @ src/data/trainers.h:16496 trainers_line_16496
  trainer_entry 0x00, 0x25, 0x00, 0x35, 0xFF645C76, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0694

@ Trainer 328: カズキ
  @ src/data/trainers.h:16062 trainers_line_16062 (+4 aliases)
  trainer_entry 0x00, 0x25, 0x00, 0x35, 0xFF578E56, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E069C

@ Trainer 329: カズキ
  @ src/data/trainers.h:16062 trainers_line_16062 (+4 aliases)
  trainer_entry 0x00, 0x25, 0x00, 0x35, 0xFF578E56, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E06A4

@ Trainer 330: カズキ
  @ src/data/trainers.h:16062 trainers_line_16062 (+4 aliases)
  trainer_entry 0x00, 0x25, 0x00, 0x35, 0xFF578E56, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E06B4

@ Trainer 331: カズキ
  @ src/data/trainers.h:16062 trainers_line_16062 (+4 aliases)
  trainer_entry 0x00, 0x25, 0x00, 0x35, 0xFF578E56, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E06CC

@ Trainer 332: ヤスユキ
  @ src/data/trainers.h:16736 trainers_line_16736
  trainer_entry 0x00, 0x25, 0x00, 0x35, 0x57755D74, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E06E4

@ Trainer 333: イサム
  @ src/data/trainers.h:16784 trainers_line_16784
  trainer_entry 0x00, 0x25, 0x00, 0x35, 0xFF715B52, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E06F4

@ Trainer 334: シンゴ
  @ src/data/trainers.h:16832 trainers_line_16832
  trainer_entry 0x00, 0x25, 0x00, 0x35, 0xFF8B7E5C, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0704

@ Trainer 335: ミクリ
  @ src/data/trainers.h:16880 trainers_line_16880 (+2 aliases)
  trainer_entry 0x03, 0x26, 0x00, 0x36, 0xFF785870, 0x00130000, 0x00130013, 19, 0, 7, 0, 6, 0x082E0714

@ Trainer 336: カツノリ
  @ src/data/trainers.h:17024 trainers_line_17024
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x78696256, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E0774

@ Trainer 337: ヨシタカ
  @ src/data/trainers.h:17084 trainers_line_17084
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x56605C76, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E078C

@ Trainer 338: ヒデユキ
  @ src/data/trainers.h:17144 trainers_line_17144
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x5775946B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E07A4

@ Trainer 339: アキヒコ
  @ src/data/trainers.h:17204 trainers_line_17204 (+4 aliases)
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x5A6B5751, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E07BC

@ Trainer 340: トモカズ
  @ src/data/trainers.h:17264 trainers_line_17264
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x8E567364, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E07D4

@ Trainer 341: タカフミ
  @ src/data/trainers.h:17300 trainers_line_17300
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x706C5660, 0x000000FF, 0x00000000, 0, 0, 1, 0, 4, 0x082E07DC

@ Trainer 342: タカノリ
  @ src/data/trainers.h:17372 trainers_line_17372
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x78695660, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E07FC

@ Trainer 343: カズヒコ
  @ src/data/trainers.h:17408 trainers_line_17408
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x5A6B8E56, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E0804

@ Trainer 344: イサオ
  @ src/data/trainers.h:17456 trainers_line_17456
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0xFF555B52, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0814

@ Trainer 345: タカヒロ
  @ src/data/trainers.h:17492 trainers_line_17492
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x7B6B5660, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E081C

@ Trainer 346: アキヒコ
  @ src/data/trainers.h:17204 trainers_line_17204 (+4 aliases)
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x5A6B5751, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E082C

@ Trainer 347: アキヒコ
  @ src/data/trainers.h:17204 trainers_line_17204 (+4 aliases)
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x5A6B5751, 0x000000FF, 0x00000000, 0, 0, 1, 0, 4, 0x082E0844

@ Trainer 348: アキヒコ
  @ src/data/trainers.h:17204 trainers_line_17204 (+4 aliases)
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x5A6B5751, 0x000000FF, 0x00000000, 0, 0, 1, 0, 4, 0x082E0864

@ Trainer 349: アキヒコ
  @ src/data/trainers.h:17204 trainers_line_17204 (+4 aliases)
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x5A6B5751, 0x000000FF, 0x00000000, 0, 0, 3, 0, 4, 0x082E0884

@ Trainer 350: カズオ
  @ src/data/trainers.h:17816 trainers_line_17816
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0xFF558E56, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082E08A4

@ Trainer 351: ススム
  @ src/data/trainers.h:17912 trainers_line_17912
  trainer_entry 0x00, 0x28, 0x00, 0x38, 0xFF715D5D, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E08D4

@ Trainer 352: シュンスケ
  @ src/data/trainers.h:17972 trainers_line_17972
  trainer_entry 0x00, 0x28, 0x00, 0x38, 0x5D7E855C, 0x0000FF59, 0x00000000, 0, 0, 1, 0, 2, 0x082E08EC

@ Trainer 353: ヒデアキ
  @ src/data/trainers.h:18020 trainers_line_18020 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x00, 0x38, 0x5751946B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E08FC

@ Trainer 354: ヒデアキ
  @ src/data/trainers.h:18020 trainers_line_18020 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x00, 0x38, 0x5751946B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E0904

@ Trainer 355: ヒデアキ
  @ src/data/trainers.h:18020 trainers_line_18020 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x00, 0x38, 0x5751946B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E090C

@ Trainer 356: ヒデアキ
  @ src/data/trainers.h:18020 trainers_line_18020 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x00, 0x38, 0x5751946B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E0914

@ Trainer 357: ヒデアキ
  @ src/data/trainers.h:18020 trainers_line_18020 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x00, 0x38, 0x5751946B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E091C

@ Trainer 358: ショウコ
  @ src/data/trainers.h:18200 trainers_line_18200 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x81, 0x39, 0x5A53865C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E0924

@ Trainer 359: ヒデミ
  @ src/data/trainers.h:18236 trainers_line_18236
  trainer_entry 0x00, 0x28, 0x81, 0x39, 0xFF70946B, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E092C

@ Trainer 360: ショウコ
  @ src/data/trainers.h:18200 trainers_line_18200 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x81, 0x39, 0x5A53865C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E0944

@ Trainer 361: ショウコ
  @ src/data/trainers.h:18200 trainers_line_18200 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x81, 0x39, 0x5A53865C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E094C

@ Trainer 362: ショウコ
  @ src/data/trainers.h:18200 trainers_line_18200 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x81, 0x39, 0x5A53865C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E0954

@ Trainer 363: ショウコ
  @ src/data/trainers.h:18200 trainers_line_18200 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x81, 0x39, 0x5A53865C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E095C

@ Trainer 364: ツヨシ
  @ src/data/trainers.h:18440 trainers_line_18440 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x00, 0x3A, 0xFF5C7662, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0964

@ Trainer 365: ツヨシ
  @ src/data/trainers.h:18440 trainers_line_18440 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x00, 0x3A, 0xFF5C7662, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E096C

@ Trainer 366: ツヨシ
  @ src/data/trainers.h:18440 trainers_line_18440 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x00, 0x3A, 0xFF5C7662, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0974

@ Trainer 367: ツヨシ
  @ src/data/trainers.h:18440 trainers_line_18440 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x00, 0x3A, 0xFF5C7662, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E097C

@ Trainer 368: ツヨシ
  @ src/data/trainers.h:18440 trainers_line_18440 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x00, 0x3A, 0xFF5C7662, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0984

@ Trainer 369: サエコ
  @ src/data/trainers.h:18620 trainers_line_18620 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x81, 0x3B, 0xFF5A545B, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E098C

@ Trainer 370: サエコ
  @ src/data/trainers.h:18620 trainers_line_18620 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x81, 0x3B, 0xFF5A545B, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0994

@ Trainer 371: サエコ
  @ src/data/trainers.h:18620 trainers_line_18620 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x81, 0x3B, 0xFF5A545B, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E099C

@ Trainer 372: サエコ
  @ src/data/trainers.h:18620 trainers_line_18620 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x81, 0x3B, 0xFF5A545B, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E09A4

@ Trainer 373: サエコ
  @ src/data/trainers.h:18620 trainers_line_18620 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x81, 0x3B, 0xFF5A545B, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E09AC

@ Trainer 374: シゲハル
  @ src/data/trainers.h:18800 trainers_line_18800
  trainer_entry 0x00, 0x28, 0x08, 0x3C, 0x796A8A5C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E09B4

@ Trainer 375: フミタケ
  @ src/data/trainers.h:18848 trainers_line_18848
  trainer_entry 0x00, 0x25, 0x00, 0x35, 0x5960706C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E09C4

@ Trainer 376: エイスケ
  @ src/data/trainers.h:18896 trainers_line_18896 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x08, 0x3C, 0x595D5254, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E09D4

@ Trainer 377: ヤスヒロ
  @ src/data/trainers.h:18932 trainers_line_18932 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x08, 0x3C, 0x7B6B5D74, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E09DC

@ Trainer 378: ショウゴ
  @ src/data/trainers.h:18980 trainers_line_18980
  trainer_entry 0x00, 0x28, 0x08, 0x3C, 0x8B53865C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E09EC

@ Trainer 379: エイスケ
  @ src/data/trainers.h:18896 trainers_line_18896 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x08, 0x3C, 0x595D5254, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E09FC

@ Trainer 380: エイスケ
  @ src/data/trainers.h:18896 trainers_line_18896 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x08, 0x3C, 0x595D5254, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E0A04

@ Trainer 381: エイスケ
  @ src/data/trainers.h:18896 trainers_line_18896 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x08, 0x3C, 0x595D5254, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E0A0C

@ Trainer 382: エイスケ
  @ src/data/trainers.h:18896 trainers_line_18896 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x08, 0x3C, 0x595D5254, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E0A14

@ Trainer 383: キヌエ
  @ src/data/trainers.h:19172 trainers_line_19172
  trainer_entry 0x00, 0x28, 0x88, 0x3D, 0xFF546757, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0A1C

@ Trainer 384: ユヅル
  @ src/data/trainers.h:19208 trainers_line_19208
  trainer_entry 0x00, 0x28, 0x88, 0x3D, 0xFF799375, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0A24

@ Trainer 385: ミカコ
  @ src/data/trainers.h:19256 trainers_line_19256
  trainer_entry 0x00, 0x28, 0x88, 0x3D, 0xFF5A5670, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0A34

@ Trainer 386: ナツミ
  @ src/data/trainers.h:19292 trainers_line_19292 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x88, 0x3D, 0xFF706265, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0A3C

@ Trainer 387: チサト
  @ src/data/trainers.h:19328 trainers_line_19328
  trainer_entry 0x00, 0x28, 0x88, 0x3D, 0xFF645B61, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0A44

@ Trainer 388: ナツミ
  @ src/data/trainers.h:19292 trainers_line_19292 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x88, 0x3D, 0xFF706265, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0A54

@ Trainer 389: ナツミ
  @ src/data/trainers.h:19292 trainers_line_19292 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x88, 0x3D, 0xFF706265, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0A5C

@ Trainer 390: ナツミ
  @ src/data/trainers.h:19292 trainers_line_19292 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x88, 0x3D, 0xFF706265, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0A64

@ Trainer 391: ナツミ
  @ src/data/trainers.h:19292 trainers_line_19292 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x88, 0x3D, 0xFF706265, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0A6C

@ Trainer 392: タケル
  @ src/data/trainers.h:19520 trainers_line_19520 (+4 aliases)
  trainer_entry 0x00, 0x29, 0x04, 0x3E, 0xFF795960, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0A74

@ Trainer 393: タケル
  @ src/data/trainers.h:19520 trainers_line_19520 (+4 aliases)
  trainer_entry 0x00, 0x29, 0x04, 0x3E, 0xFF795960, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0A84

@ Trainer 394: タケル
  @ src/data/trainers.h:19520 trainers_line_19520 (+4 aliases)
  trainer_entry 0x00, 0x29, 0x04, 0x3E, 0xFF795960, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0A94

@ Trainer 395: タケル
  @ src/data/trainers.h:19520 trainers_line_19520 (+4 aliases)
  trainer_entry 0x00, 0x29, 0x04, 0x3E, 0xFF795960, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E0AA4

@ Trainer 396: タケル
  @ src/data/trainers.h:19520 trainers_line_19520 (+4 aliases)
  trainer_entry 0x02, 0x29, 0x04, 0x3E, 0xFF795960, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E0ABC

@ Trainer 397: タツマ
  @ src/data/trainers.h:19786 trainers_line_19786
  trainer_entry 0x01, 0x29, 0x04, 0x3E, 0xFF6F6260, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0AD4

@ Trainer 398: キヨヒコ
  @ src/data/trainers.h:19829 trainers_line_19829
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0x5A6B7657, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E0AE4

@ Trainer 399: タクミ
  @ src/data/trainers.h:19865 trainers_line_19865
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0xFF705860, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0AEC

@ Trainer 400: シュンペイ
  @ src/data/trainers.h:19913 trainers_line_19913
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0x9E7E855C, 0x0000FF52, 0x00000000, 0, 0, 1, 0, 1, 0x082E0AFC

@ Trainer 401: エイジ
  @ src/data/trainers.h:19949 trainers_line_19949
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0xFF8D5254, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E0B04

@ Trainer 402: ミツアキ
  @ src/data/trainers.h:20009 trainers_line_20009
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0x57516270, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E0B1C

@ Trainer 403: ナオヒロ
  @ src/data/trainers.h:20045 trainers_line_20045
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0x7B6B5565, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E0B24

@ Trainer 404: ジョウタ
  @ src/data/trainers.h:20093 trainers_line_20093
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0x6053868D, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E0B34

@ Trainer 405: モリカズ
  @ src/data/trainers.h:20141 trainers_line_20141
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0x8E567873, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E0B44

@ Trainer 406: ツバサ
  @ src/data/trainers.h:20189 trainers_line_20189 (+4 aliases)
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0xFF5B9662, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0B54

@ Trainer 407: アキマサ
  @ src/data/trainers.h:20225 trainers_line_20225
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0x5B6F5751, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E0B5C

@ Trainer 408: タイシ
  @ src/data/trainers.h:20285 trainers_line_20285
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0xFF5C5260, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0B74

@ Trainer 409: ツバサ
  @ src/data/trainers.h:20189 trainers_line_20189 (+4 aliases)
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0xFF5B9662, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0B84

@ Trainer 410: ツバサ
  @ src/data/trainers.h:20189 trainers_line_20189 (+4 aliases)
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0xFF5B9662, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0B94

@ Trainer 411: ツバサ
  @ src/data/trainers.h:20189 trainers_line_20189 (+4 aliases)
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0xFF5B9662, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0BA4

@ Trainer 412: ツバサ
  @ src/data/trainers.h:20189 trainers_line_20189 (+4 aliases)
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0xFF5B9662, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0BB4

@ Trainer 413: マサツグ
  @ src/data/trainers.h:20525 trainers_line_20525
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0x89625B6F, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E0BC4

@ Trainer 414: トシアキ
  @ src/data/trainers.h:20573 trainers_line_20573
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0x57515C64, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E0BD4

@ Trainer 415: ヒロノブ
  @ src/data/trainers.h:20609 trainers_line_20609
  trainer_entry 0x00, 0x2A, 0x03, 0x3F, 0x98697B6B, 0x000000FF, 0x00000000, 0, 0, 3, 0, 1, 0x082E0BDC

@ Trainer 416: シロウ
  @ src/data/trainers.h:20645 trainers_line_20645
  trainer_entry 0x00, 0x2A, 0x03, 0x3F, 0xFF537B5C, 0x00000000, 0x00000000, 0, 0, 3, 0, 2, 0x082E0BE4

@ Trainer 417: ココロ
  @ src/data/trainers.h:20693 trainers_line_20693
  trainer_entry 0x03, 0x05, 0x85, 0x14, 0xFF7B5A5A, 0x00130000, 0x00000000, 0, 0, 0, 0, 2, 0x082E0BF4

@ Trainer 418: マミ
  @ src/data/trainers.h:20751 trainers_line_20751
  trainer_entry 0x00, 0x12, 0x82, 0x12, 0x00FF706F, 0x00000000, 0x00000000, 0, 0, 0, 0, 1, 0x082E0C14

@ Trainer 419: キンジ
  @ src/data/trainers.h:20785 trainers_line_20785 (+4 aliases)
  trainer_entry 0x01, 0x2A, 0x03, 0x3F, 0xFF8D7E57, 0x00000000, 0x00000000, 0, 0, 0, 0, 3, 0x082E0C1C

@ Trainer 420: ムラマサ
  @ src/data/trainers.h:20864 trainers_line_20864
  trainer_entry 0x00, 0x2A, 0x03, 0x3F, 0x5B6F7771, 0x000000FF, 0x00000000, 0, 0, 0, 0, 2, 0x082E0C4C

@ Trainer 421: キンジ
  @ src/data/trainers.h:20785 trainers_line_20785 (+4 aliases)
  trainer_entry 0x01, 0x2A, 0x03, 0x3F, 0xFF8D7E57, 0x00000000, 0x00000000, 0, 0, 0, 0, 4, 0x082E0C5C

@ Trainer 422: キンジ
  @ src/data/trainers.h:20785 trainers_line_20785 (+4 aliases)
  trainer_entry 0x01, 0x2A, 0x03, 0x3F, 0xFF8D7E57, 0x00000000, 0x00000000, 0, 0, 0, 0, 4, 0x082E0C9C

@ Trainer 423: キンジ
  @ src/data/trainers.h:20785 trainers_line_20785 (+4 aliases)
  trainer_entry 0x01, 0x2A, 0x03, 0x3F, 0xFF8D7E57, 0x00000000, 0x00000000, 0, 0, 0, 0, 4, 0x082E0CDC

@ Trainer 424: キンジ
  @ src/data/trainers.h:20785 trainers_line_20785 (+4 aliases)
  trainer_entry 0x03, 0x2A, 0x03, 0x3F, 0xFF8D7E57, 0x00000000, 0x00000000, 0, 0, 0, 0, 4, 0x082E0D1C

@ Trainer 425: シノブ
  @ src/data/trainers.h:7743 trainers_line_7743 (+1 aliases)
  trainer_entry 0x00, 0x2B, 0x84, 0x40, 0xFF98695C, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0D5C

@ Trainer 426: ミサト
  @ src/data/trainers.h:21326 trainers_line_21326
  trainer_entry 0x00, 0x2B, 0x84, 0x40, 0xFF645B70, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0D64

@ Trainer 427: ユリカ
  @ src/data/trainers.h:21362 trainers_line_21362 (+4 aliases)
  trainer_entry 0x00, 0x2B, 0x84, 0x40, 0xFF567875, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0D6C

@ Trainer 428: フウカ
  @ src/data/trainers.h:21410 trainers_line_21410
  trainer_entry 0x00, 0x2B, 0x84, 0x40, 0xFF56536C, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0D7C

@ Trainer 429: ヒイナ
  @ src/data/trainers.h:21446 trainers_line_21446
  trainer_entry 0x00, 0x2B, 0x84, 0x40, 0xFF65526B, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0D84

@ Trainer 430: ユリカ
  @ src/data/trainers.h:21362 trainers_line_21362 (+4 aliases)
  trainer_entry 0x00, 0x2B, 0x84, 0x40, 0xFF567875, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0D8C

@ Trainer 431: ユリカ
  @ src/data/trainers.h:21362 trainers_line_21362 (+4 aliases)
  trainer_entry 0x00, 0x2B, 0x84, 0x40, 0xFF567875, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0D9C

@ Trainer 432: ユリカ
  @ src/data/trainers.h:21362 trainers_line_21362 (+4 aliases)
  trainer_entry 0x00, 0x2B, 0x84, 0x40, 0xFF567875, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0DAC

@ Trainer 433: ユリカ
  @ src/data/trainers.h:21362 trainers_line_21362 (+4 aliases)
  trainer_entry 0x00, 0x2B, 0x84, 0x40, 0xFF567875, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0DBC

@ Trainer 434: マドカ
  @ src/data/trainers.h:21674 trainers_line_21674 (+4 aliases)
  trainer_entry 0x01, 0x2C, 0x81, 0x41, 0xFF56956F, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0DCC

@ Trainer 435: ミカ
  trainer_entry 0x00, 0x2C, 0x81, 0x41, 0x00FF5670, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0DDC

@ Trainer 436: ウキエ
  @ src/data/trainers.h:21765 trainers_line_21765
  trainer_entry 0x01, 0x2C, 0x81, 0x41, 0xFF545753, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0DEC

@ Trainer 437: マドカ
  @ src/data/trainers.h:21674 trainers_line_21674 (+4 aliases)
  trainer_entry 0x01, 0x2C, 0x81, 0x41, 0xFF56956F, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0DFC

@ Trainer 438: マドカ
  @ src/data/trainers.h:21674 trainers_line_21674 (+4 aliases)
  trainer_entry 0x01, 0x2C, 0x81, 0x41, 0xFF56956F, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0E0C

@ Trainer 439: マドカ
  @ src/data/trainers.h:21674 trainers_line_21674 (+4 aliases)
  trainer_entry 0x01, 0x2C, 0x81, 0x41, 0xFF56956F, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0E1C

@ Trainer 440: マドカ
  @ src/data/trainers.h:21674 trainers_line_21674 (+4 aliases)
  trainer_entry 0x01, 0x2C, 0x81, 0x41, 0xFF56956F, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0E3C

@ Trainer 441: ナツキ
  @ src/data/trainers.h:22018 trainers_line_22018
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF576265, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0E5C

@ Trainer 442: マユカ
  @ src/data/trainers.h:22066 trainers_line_22066
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF56756F, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0E6C

@ Trainer 443: ミズハ
  @ src/data/trainers.h:22102 trainers_line_22102
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF6A8E70, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0E74

@ Trainer 444: マサミ
  @ src/data/trainers.h:22138 trainers_line_22138
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF705B6F, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0E7C

@ Trainer 445: ノリカ
  @ src/data/trainers.h:22186 trainers_line_22186
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF567869, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0E8C

@ Trainer 446: チヒロ
  @ src/data/trainers.h:22222 trainers_line_22222
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF7B6B61, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0E94

@ Trainer 447: クミコ
  @ src/data/trainers.h:22270 trainers_line_22270
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF5A7058, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0EA4

@ Trainer 448: エツコ
  @ src/data/trainers.h:22306 trainers_line_22306
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF5A6254, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E0EAC

@ Trainer 449: ナギサ
  @ src/data/trainers.h:22366 trainers_line_22366 (+4 aliases)
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF5B8865, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0EC4

@ Trainer 450: アキエ
  @ src/data/trainers.h:22402 trainers_line_22402
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF545751, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0ECC

@ Trainer 451: ケイコ
  @ src/data/trainers.h:22438 trainers_line_22438
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF5A5259, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0ED4

@ Trainer 452: サイカ
  @ src/data/trainers.h:22474 trainers_line_22474
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF56525B, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0EDC

@ Trainer 453: シズエ
  @ src/data/trainers.h:22510 trainers_line_22510
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF548E5C, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0EE4

@ Trainer 454: テルミ
  @ src/data/trainers.h:22558 trainers_line_22558
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF707963, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0EF4

@ Trainer 455: フミエ
  @ src/data/trainers.h:22594 trainers_line_22594
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF54706C, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0EFC

@ Trainer 456: ミサキ
  @ src/data/trainers.h:22642 trainers_line_22642
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF575B70, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0F0C

@ Trainer 457: マリエ
  @ src/data/trainers.h:22678 trainers_line_22678
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF54786F, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0F14

@ Trainer 458: ミユキ
  @ src/data/trainers.h:22714 trainers_line_22714
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF577570, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0F1C

@ Trainer 459: イクコ
  @ src/data/trainers.h:22750 trainers_line_22750
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF5A5852, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0F24

@ Trainer 460: リカコ
  @ src/data/trainers.h:22798 trainers_line_22798
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF5A5678, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0F34

@ Trainer 461: ハルミ
  @ src/data/trainers.h:22834 trainers_line_22834
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF70796A, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0F3C

@ Trainer 462: タカコ
  @ src/data/trainers.h:22882 trainers_line_22882
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF5A5660, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0F4C

@ Trainer 463: ソノコ
  @ src/data/trainers.h:22930 trainers_line_22930
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF5A695F, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0F5C

@ Trainer 464: クニコ
  @ src/data/trainers.h:22978 trainers_line_22978
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF5A6658, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0F6C

@ Trainer 465: ナギサ
  @ src/data/trainers.h:22366 trainers_line_22366 (+4 aliases)
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF5B8865, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0F74

@ Trainer 466: ナギサ
  @ src/data/trainers.h:22366 trainers_line_22366 (+4 aliases)
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF5B8865, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E0F7C

@ Trainer 467: ナギサ
  @ src/data/trainers.h:22366 trainers_line_22366 (+4 aliases)
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF5B8865, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0F84

@ Trainer 468: ナギサ
  @ src/data/trainers.h:22366 trainers_line_22366 (+4 aliases)
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF5B8865, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E0F94

@ Trainer 469: チカコ
  @ src/data/trainers.h:23194 trainers_line_23194
  trainer_entry 0x01, 0x1B, 0x82, 0x1E, 0xFF5A5661, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0FAC

@ Trainer 470: アイミ
  @ src/data/trainers.h:23256 trainers_line_23256
  trainer_entry 0x01, 0x1B, 0x82, 0x1E, 0xFF705251, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0FCC

@ Trainer 471: ヒロコ
  @ src/data/trainers.h:23318 trainers_line_23318
  trainer_entry 0x00, 0x1B, 0x82, 0x1E, 0xFF5A7B6B, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0FEC

@ Trainer 472: サツキ
  @ src/data/trainers.h:23366 trainers_line_23366
  trainer_entry 0x00, 0x1B, 0x82, 0x1E, 0xFF57625B, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E0FFC

@ Trainer 473: トモコ
  @ src/data/trainers.h:23414 trainers_line_23414
  trainer_entry 0x00, 0x1B, 0x82, 0x1E, 0xFF5A7364, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E100C

@ Trainer 474: コズエ
  @ src/data/trainers.h:23462 trainers_line_23462 (+4 aliases)
  trainer_entry 0x00, 0x1B, 0x82, 0x1E, 0xFF548E5A, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E101C

@ Trainer 475: ヨシキヨ
  @ src/data/trainers.h:23522 trainers_line_23522
  trainer_entry 0x01, 0x1D, 0x04, 0x21, 0x76575C76, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E1034

@ Trainer 476: ミズキ
  @ src/data/trainers.h:23565 trainers_line_23565
  trainer_entry 0x00, 0x1B, 0x82, 0x1E, 0xFF578E70, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E1044

@ Trainer 477: コズエ
  @ src/data/trainers.h:23462 trainers_line_23462 (+4 aliases)
  trainer_entry 0x00, 0x1B, 0x82, 0x1E, 0xFF548E5A, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E1054

@ Trainer 478: コズエ
  @ src/data/trainers.h:23462 trainers_line_23462 (+4 aliases)
  trainer_entry 0x00, 0x1B, 0x82, 0x1E, 0xFF548E5A, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E106C

@ Trainer 479: コズエ
  @ src/data/trainers.h:23462 trainers_line_23462 (+4 aliases)
  trainer_entry 0x00, 0x1B, 0x82, 0x1E, 0xFF548E5A, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E1084

@ Trainer 480: コズエ
  @ src/data/trainers.h:23462 trainers_line_23462 (+4 aliases)
  trainer_entry 0x00, 0x1B, 0x82, 0x1E, 0xFF548E5A, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E109C

@ Trainer 481: クミとルミ
  @ src/data/trainers.h:23853 trainers_line_23853 (+5 aliases)
  trainer_entry 0x00, 0x2E, 0x09, 0x43, 0x79147058, 0x0000FF70, 0x00000000, 0, 1, 1, 0, 2, 0x082E10B4

@ Trainer 482: クミとルミ
  @ src/data/trainers.h:23853 trainers_line_23853 (+5 aliases)
  trainer_entry 0x00, 0x2E, 0x09, 0x43, 0x79147058, 0x0000FF70, 0x00000000, 0, 1, 1, 0, 2, 0x082E10C4

@ Trainer 483: ナオとミオ
  @ src/data/trainers.h:23949 trainers_line_23949 (+1 aliases)
  trainer_entry 0x00, 0x2E, 0x09, 0x43, 0x70145565, 0x0000FF55, 0x00000000, 0, 1, 1, 0, 2, 0x082E10D4

@ Trainer 484: ミウとユキ
  @ src/data/trainers.h:23997 trainers_line_23997
  trainer_entry 0x00, 0x2E, 0x09, 0x43, 0x75145370, 0x0000FF57, 0x00000000, 0, 1, 1, 0, 2, 0x082E10E4

@ Trainer 485: クミとルミ
  @ src/data/trainers.h:23853 trainers_line_23853 (+5 aliases)
  trainer_entry 0x00, 0x2E, 0x09, 0x43, 0x79147058, 0x0000FF70, 0x00000000, 0, 1, 1, 0, 2, 0x082E10F4

@ Trainer 486: ナオとミオ
  @ src/data/trainers.h:23949 trainers_line_23949 (+1 aliases)
  trainer_entry 0x01, 0x2E, 0x09, 0x43, 0x70145565, 0x0000FF55, 0x00000000, 0, 1, 1, 0, 2, 0x082E1104

@ Trainer 487: クミとルミ
  @ src/data/trainers.h:23853 trainers_line_23853 (+5 aliases)
  trainer_entry 0x00, 0x2E, 0x09, 0x43, 0x79147058, 0x0000FF70, 0x00000000, 0, 1, 1, 0, 2, 0x082E1124

@ Trainer 488: クミとルミ
  @ src/data/trainers.h:23853 trainers_line_23853 (+5 aliases)
  trainer_entry 0x01, 0x2E, 0x09, 0x43, 0x79147058, 0x0000FF70, 0x00000000, 0, 1, 1, 0, 2, 0x082E1134

@ Trainer 489: クミとルミ
  @ src/data/trainers.h:23853 trainers_line_23853 (+5 aliases)
  trainer_entry 0x01, 0x2E, 0x09, 0x43, 0x79147058, 0x0000FF70, 0x00000000, 0, 1, 1, 0, 2, 0x082E1154

@ Trainer 490: タツロウ
  @ src/data/trainers.h:24323 trainers_line_24323
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0x537B6260, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E1174

@ Trainer 491: カツヤ
  @ src/data/trainers.h:24371 trainers_line_24371
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0xFF746256, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E1184

@ Trainer 492: ジロウ
  @ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0xFF537B8D, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E118C

@ Trainer 493: タツヒコ
  @ src/data/trainers.h:24455 trainers_line_24455
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0x5A6B6260, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E119C

@ Trainer 494: ユウサク
  @ src/data/trainers.h:24515 trainers_line_24515
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0x585B5375, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E11B4

@ Trainer 495: ダイキ
  @ src/data/trainers.h:24563 trainers_line_24563
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0xFF575291, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E11C4

@ Trainer 496: ヒデフミ
  @ src/data/trainers.h:24623 trainers_line_24623
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0x706C946B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E11DC

@ Trainer 497: ジロウ
  @ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0xFF537B8D, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E11EC

@ Trainer 498: ジロウ
  @ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0xFF537B8D, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E1204

@ Trainer 499: ジロウ
  @ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0xFF537B8D, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E121C

@ Trainer 500: ジロウ
  @ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0xFF537B8D, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E1234

@ Trainer 501: テルヨシ
  @ src/data/trainers.h:24911 trainers_line_24911
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0x5C767963, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E124C

@ Trainer 502: ミネコ
  @ src/data/trainers.h:24947 trainers_line_24947
  trainer_entry 0x03, 0x24, 0x89, 0x34, 0xFF5A6870, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E1254

@ Trainer 503: ミワ
  @ src/data/trainers.h:25013 trainers_line_25013
  trainer_entry 0x00, 0x30, 0x85, 0x14, 0x00FF7C70, 0x00150000, 0x00000000, 0, 0, 7, 0, 1, 0x082E1274

@ Trainer 504: シンスケ
  @ src/data/trainers.h:25051 trainers_line_25051
  trainer_entry 0x01, 0x2A, 0x03, 0x3F, 0x595D7E5C, 0x000000FF, 0x00000000, 0, 0, 7, 0, 1, 0x082E127C

@ Trainer 505: カオルコ
  @ src/data/trainers.h:25094 trainers_line_25094
  trainer_entry 0x01, 0x2C, 0x81, 0x41, 0x5A795556, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E128C

@ Trainer 506: イッケイ
  @ src/data/trainers.h:25137 trainers_line_25137
  trainer_entry 0x00, 0x0A, 0x04, 0x09, 0x5259A052, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E129C

@ Trainer 507: ナオヤ
  @ src/data/trainers.h:25185 trainers_line_25185
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0xFF745565, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E12AC

@ Trainer 508: リツコ
  @ src/data/trainers.h:25233 trainers_line_25233
  trainer_entry 0x03, 0x05, 0x85, 0x14, 0xFF5A6278, 0x00150000, 0x00000000, 0, 0, 7, 0, 1, 0x082E12BC

@ Trainer 509: タマキ
  @ src/data/trainers.h:25278 trainers_line_25278
  trainer_entry 0x00, 0x2B, 0x84, 0x40, 0xFF576F60, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E12CC

@ Trainer 510: ジュンヤ
  @ src/data/trainers.h:25326 trainers_line_25326
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0x747E858D, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E12DC

@ Trainer 511: シゲヨシ
  @ src/data/trainers.h:25362 trainers_line_25362
  trainer_entry 0x00, 0x0A, 0x04, 0x09, 0x5C768A5C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E12E4

@ Trainer 512: モトキ
  @ src/data/trainers.h:25410 trainers_line_25410 (+4 aliases)
  trainer_entry 0x00, 0x07, 0x03, 0x05, 0xFF576473, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E12F4

@ Trainer 513: トシノブ
  trainer_entry 0x00, 0x07, 0x03, 0x05, 0x98695C64, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E1304

@ Trainer 514: ホムラ
  @ src/data/trainers.h:25506 trainers_line_25506 (+2 aliases)
  trainer_entry 0x00, 0x31, 0x07, 0x45, 0xFF77716E, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E1314

@ Trainer 515: モトキ
  @ src/data/trainers.h:25410 trainers_line_25410 (+4 aliases)
  trainer_entry 0x00, 0x07, 0x03, 0x05, 0xFF576473, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E132C

@ Trainer 516: モトキ
  @ src/data/trainers.h:25410 trainers_line_25410 (+4 aliases)
  trainer_entry 0x00, 0x07, 0x03, 0x05, 0xFF576473, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E133C

@ Trainer 517: モトキ
  @ src/data/trainers.h:25410 trainers_line_25410 (+4 aliases)
  trainer_entry 0x00, 0x07, 0x03, 0x05, 0xFF576473, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E134C

@ Trainer 518: モトキ
  @ src/data/trainers.h:25410 trainers_line_25410 (+4 aliases)
  trainer_entry 0x00, 0x07, 0x03, 0x05, 0xFF576473, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E135C

@ Trainer 519: ミツル
  @ src/battle_message.c:1492 gText_BattleWallyName (+8 aliases)
  trainer_entry 0x01, 0x32, 0x00, 0x46, 0xFF796270, 0x00130000, 0x00000013, 0, 0, 7, 0, 5, 0x082E136C

@ 専用トレーナー 0: ユウキ
  @ ROM 0x2E793C
  @ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x00, 0x47, 0xFF575375, 0x00000000, 0x00000000, 0, 0, 7, 0, 1, 0x082E13BC

@ 専用トレーナー 1: ユウキ
  @ ROM 0x2E795C
  @ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x00, 0x47, 0xFF575375, 0x00000000, 0x00000000, 0, 0, 7, 0, 3, 0x082E13C4

@ 専用トレーナー 2: ユウキ
  @ ROM 0x2E797C
  @ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x00, 0x47, 0xFF575375, 0x00000000, 0x00000000, 0, 0, 7, 0, 3, 0x082E13DC

@ 専用トレーナー 3: ユウキ
  @ ROM 0x2E799C
  @ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x00, 0x47, 0xFF575375, 0x00000000, 0x00000000, 0, 0, 11, 0, 1, 0x082E13F4

@ 専用トレーナー 4: ユウキ
  @ ROM 0x2E79BC
  @ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x00, 0x47, 0xFF575375, 0x00000000, 0x00000000, 0, 0, 7, 0, 3, 0x082E13FC

@ 専用トレーナー 5: ユウキ
  @ ROM 0x2E79DC
  @ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x00, 0x47, 0xFF575375, 0x00000000, 0x00000000, 0, 0, 7, 0, 3, 0x082E1414

@ 専用トレーナー 6: ユウキ
  @ ROM 0x2E79FC
  @ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x00, 0x47, 0xFF575375, 0x00000000, 0x00000000, 0, 0, 7, 0, 1, 0x082E142C

@ 専用トレーナー 7: ユウキ
  @ ROM 0x2E7A1C
  @ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x00, 0x47, 0xFF575375, 0x00000000, 0x00000000, 0, 0, 7, 0, 3, 0x082E1434

@ 専用トレーナー 8: ユウキ
  @ ROM 0x2E7A3C
  @ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x00, 0x47, 0xFF575375, 0x00000000, 0x00000000, 0, 0, 7, 0, 3, 0x082E144C

@ 専用トレーナー 9: ハルカ
  @ ROM 0x2E7A5C
  @ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x81, 0x48, 0xFF56796A, 0x00000000, 0x00000000, 0, 0, 7, 0, 1, 0x082E1464

@ 専用トレーナー 10: ハルカ
  @ ROM 0x2E7A7C
  @ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x81, 0x48, 0xFF56796A, 0x00000000, 0x00000000, 0, 0, 7, 0, 3, 0x082E146C

@ 専用トレーナー 11: ハルカ
  @ ROM 0x2E7A9C
  @ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x81, 0x48, 0xFF56796A, 0x00000000, 0x00000000, 0, 0, 7, 0, 3, 0x082E1484

@ 専用トレーナー 12: ハルカ
  @ ROM 0x2E7ABC
  @ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x81, 0x48, 0xFF56796A, 0x00000000, 0x00000000, 0, 0, 7, 0, 1, 0x082E149C

@ 専用トレーナー 13: ハルカ
  @ ROM 0x2E7ADC
  @ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x81, 0x48, 0xFF56796A, 0x00000000, 0x00000000, 0, 0, 7, 0, 3, 0x082E14A4

@ 専用トレーナー 14: ハルカ
  @ ROM 0x2E7AFC
  @ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x81, 0x48, 0xFF56796A, 0x00000000, 0x00000000, 0, 0, 7, 0, 3, 0x082E14BC

@ 専用トレーナー 15: ハルカ
  @ ROM 0x2E7B1C
  @ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x81, 0x48, 0xFF56796A, 0x00000000, 0x00000000, 0, 0, 7, 0, 1, 0x082E14D4

@ 専用トレーナー 16: ハルカ
  @ ROM 0x2E7B3C
  @ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x81, 0x48, 0xFF56796A, 0x00000000, 0x00000000, 0, 0, 7, 0, 3, 0x082E14DC

@ 専用トレーナー 17: ハルカ
  @ ROM 0x2E7B5C
  @ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x81, 0x48, 0xFF56796A, 0x00000000, 0x00000000, 0, 0, 7, 0, 3, 0x082E14F4

@ 専用トレーナー 18: セイジ
  @ ROM 0x2E7B7C
  @ src/data/trainers.h:26815 trainers_line_26815 (+4 aliases)
  trainer_entry 0x00, 0x04, 0x00, 0x20, 0xFF8D525E, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082E150C

@ 専用トレーナー 19: ヨシロウ
  @ ROM 0x2E7B9C
  @ src/data/trainers.h:26911 trainers_line_26911
  @ Preserve exact byte length: semantic suffix text pointer.
  trainer_entry 0x00, 0x33, 0x00, 0x49, 0x537B5C76, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E153C

@ 専用トレーナー 20: テッペイ
  @ ROM 0x2E7BBC
  @ src/data/trainers.h:26947 trainers_line_26947
  trainer_entry 0x01, 0x05, 0x05, 0x03, 0x529EA063, 0x000000FF, 0x00000000, 0, 0, 7, 0, 2, 0x082E1544

@ 専用トレーナー 21: セイジ
  @ ROM 0x2E7BDC
  @ src/data/trainers.h:26815 trainers_line_26815 (+4 aliases)
  trainer_entry 0x00, 0x04, 0x00, 0x20, 0xFF8D525E, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082E1564

@ 専用トレーナー 22: セイジ
  @ ROM 0x2E7BFC
  @ src/data/trainers.h:26815 trainers_line_26815 (+4 aliases)
  trainer_entry 0x00, 0x04, 0x00, 0x20, 0xFF8D525E, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082E1594

@ 専用トレーナー 23: セイジ
  @ ROM 0x2E7C1C
  @ src/data/trainers.h:26815 trainers_line_26815 (+4 aliases)
  trainer_entry 0x00, 0x04, 0x00, 0x20, 0xFF8D525E, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082E15C4

@ 専用トレーナー 24: セイジ
  @ ROM 0x2E7C3C
  @ src/data/trainers.h:26815 trainers_line_26815 (+4 aliases)
  trainer_entry 0x00, 0x04, 0x00, 0x20, 0xFF8D525E, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082E15F4

@ 専用トレーナー 25: イクエ
  @ ROM 0x2E7C5C
  @ src/data/trainers.h:27393 trainers_line_27393 (+4 aliases)
  trainer_entry 0x00, 0x04, 0x81, 0x02, 0xFF545852, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082E1624

@ 専用トレーナー 26: ヒロエ
  @ ROM 0x2E7C7C
  @ src/data/trainers.h:27489 trainers_line_27489
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF547B6B, 0x00130000, 0x00000000, 0, 0, 7, 0, 2, 0x082E1654

@ 専用トレーナー 27: ツネヤス
  @ ROM 0x2E7C9C
  @ src/data/trainers.h:27539 trainers_line_27539
  trainer_entry 0x00, 0x10, 0x0B, 0x10, 0x5D746862, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E1664

@ 専用トレーナー 28: イクエ
  @ ROM 0x2E7CBC
  @ src/data/trainers.h:27393 trainers_line_27393 (+4 aliases)
  trainer_entry 0x00, 0x04, 0x81, 0x02, 0xFF545852, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082E166C

@ 専用トレーナー 29: イクエ
  @ ROM 0x2E7CDC
  @ src/data/trainers.h:27393 trainers_line_27393 (+4 aliases)
  trainer_entry 0x00, 0x04, 0x81, 0x02, 0xFF545852, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082E169C

@ 専用トレーナー 30: イクエ
  @ ROM 0x2E7CFC
  @ src/data/trainers.h:27393 trainers_line_27393 (+4 aliases)
  trainer_entry 0x00, 0x04, 0x81, 0x02, 0xFF545852, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082E16CC

@ 専用トレーナー 31: イクエ
  @ ROM 0x2E7D1C
  @ src/data/trainers.h:27393 trainers_line_27393 (+4 aliases)
  trainer_entry 0x00, 0x04, 0x81, 0x02, 0xFF545852, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082E16FC

@ 専用トレーナー 32: マモル
  @ ROM 0x2E7D3C
  @ src/data/trainers.h:27959 trainers_line_27959 (+4 aliases)
  trainer_entry 0x00, 0x34, 0x05, 0x4A, 0xFF79736F, 0x00130000, 0x00000000, 0, 0, 7, 0, 1, 0x082E172C

@ 専用トレーナー 33: ジュンサク
  @ ROM 0x2E7D5C
  @ src/data/trainers.h:27997 trainers_line_27997
  trainer_entry 0x00, 0x34, 0x05, 0x4A, 0x5B7E858D, 0x0013FF58, 0x00000000, 0, 0, 7, 0, 3, 0x082E1734

@ 専用トレーナー 34: ケイスケ
  @ ROM 0x2E7D7C
  @ src/data/trainers.h:28059 trainers_line_28059
  trainer_entry 0x00, 0x34, 0x05, 0x4A, 0x595D5259, 0x001300FF, 0x00000000, 0, 0, 7, 0, 1, 0x082E174C

@ 専用トレーナー 35: マモル
  @ ROM 0x2E7D9C
  @ src/data/trainers.h:27959 trainers_line_27959 (+4 aliases)
  trainer_entry 0x00, 0x34, 0x05, 0x4A, 0xFF79736F, 0x00130000, 0x00000000, 0, 0, 11, 0, 1, 0x082E1754

@ 専用トレーナー 36: マモル
  @ ROM 0x2E7DBC
  @ src/data/trainers.h:27959 trainers_line_27959 (+4 aliases)
  trainer_entry 0x00, 0x34, 0x05, 0x4A, 0xFF79736F, 0x00130000, 0x00000000, 0, 0, 7, 0, 1, 0x082E175C

@ 専用トレーナー 37: マモル
  @ ROM 0x2E7DDC
  @ src/data/trainers.h:27959 trainers_line_27959 (+4 aliases)
  trainer_entry 0x00, 0x34, 0x05, 0x4A, 0xFF79736F, 0x00130000, 0x00000000, 0, 0, 11, 0, 1, 0x082E1764

@ 専用トレーナー 38: マモル
  @ ROM 0x2E7DFC
  @ src/data/trainers.h:27959 trainers_line_27959 (+4 aliases)
  trainer_entry 0x00, 0x34, 0x05, 0x4A, 0xFF79736F, 0x00130000, 0x00000000, 0, 0, 7, 0, 2, 0x082E176C

@ 専用トレーナー 39: マナミ
  @ ROM 0x2E7E1C
  @ src/data/trainers.h:28261 trainers_line_28261 (+4 aliases)
  trainer_entry 0x00, 0x34, 0x85, 0x4B, 0xFF70656F, 0x00130000, 0x00000000, 0, 0, 11, 0, 2, 0x082E177C

@ 専用トレーナー 40: セリナ
  @ ROM 0x2E7E3C
  @ src/data/trainers.h:28311 trainers_line_28311
  trainer_entry 0x00, 0x34, 0x85, 0x4B, 0xFF65785E, 0x00130000, 0x00000000, 0, 0, 11, 0, 3, 0x082E178C

@ 専用トレーナー 41: チアキ
  @ ROM 0x2E7E5C
  @ src/data/trainers.h:28373 trainers_line_28373
  trainer_entry 0x00, 0x34, 0x85, 0x4B, 0xFF575161, 0x00130000, 0x00000000, 0, 0, 7, 0, 2, 0x082E17A4

@ 専用トレーナー 42: マナミ
  @ ROM 0x2E7E7C
  @ src/data/trainers.h:28261 trainers_line_28261 (+4 aliases)
  trainer_entry 0x00, 0x34, 0x85, 0x4B, 0xFF70656F, 0x00130000, 0x00000000, 0, 0, 11, 0, 2, 0x082E17B4

@ 専用トレーナー 43: マナミ
  @ ROM 0x2E7E9C
  @ src/data/trainers.h:28261 trainers_line_28261 (+4 aliases)
  trainer_entry 0x00, 0x34, 0x85, 0x4B, 0xFF70656F, 0x00130000, 0x00000000, 0, 0, 7, 0, 2, 0x082E17C4

@ 専用トレーナー 44: マナミ
  @ ROM 0x2E7EBC
  @ src/data/trainers.h:28261 trainers_line_28261 (+4 aliases)
  trainer_entry 0x00, 0x34, 0x85, 0x4B, 0xFF70656F, 0x00130000, 0x00000000, 0, 0, 11, 0, 2, 0x082E17D4

@ 専用トレーナー 45: マナミ
  @ ROM 0x2E7EDC
  @ src/data/trainers.h:28261 trainers_line_28261 (+4 aliases)
  trainer_entry 0x00, 0x34, 0x85, 0x4B, 0xFF70656F, 0x00130000, 0x00000000, 0, 0, 7, 0, 2, 0x082E17E4

@ 専用トレーナー 46: ミツオ
  @ ROM 0x2E7EFC
  @ src/data/trainers.h:28623 trainers_line_28623
  trainer_entry 0x00, 0x28, 0x00, 0x38, 0xFF556270, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E17F4

@ 専用トレーナー 47: したっぱ
  @ ROM 0x2E7F1C
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x06, 0x01, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E17FC

@ 専用トレーナー 48: したっぱ
  @ ROM 0x2E7F3C
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x86, 0x06, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E180C

@ 専用トレーナー 49: したっぱ
  @ ROM 0x2E7F5C
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x86, 0x06, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E181C

@ 専用トレーナー 50: したっぱ
  @ ROM 0x2E7F7C
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E182C

@ 専用トレーナー 51: ソウタロウ
  @ ROM 0x2E7F9C
  @ src/data/trainers.h:28851 trainers_line_28851
  @ Preserve exact byte length: semantic suffix text pointer.
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0x7B60535F, 0x0000FF53, 0x00000000, 0, 0, 1, 0, 2, 0x082E183C

@ 専用トレーナー 52: カズマサ
  @ ROM 0x2E7FBC
  @ src/data/trainers.h:28899 trainers_line_28899
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0x5B6F8E56, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E184C

@ 専用トレーナー 53: アズミ
  @ ROM 0x2E7FDC
  @ src/data/trainers.h:28935 trainers_line_28935
  trainer_entry 0x00, 0x2B, 0x84, 0x40, 0xFF708E51, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E1854

@ 専用トレーナー 54: トシヒデ
  @ ROM 0x2E7FFC
  @ src/data/trainers.h:28971 trainers_line_28971
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0x946B5C64, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E185C

@ 専用トレーナー 55: アサヨ
  @ ROM 0x2E801C
  @ src/data/trainers.h:29007 trainers_line_29007
  trainer_entry 0x00, 0x0E, 0x83, 0x0E, 0xFF765B51, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E1864

@ 専用トレーナー 56: カズシゲ
  @ ROM 0x2E803C
  @ src/data/trainers.h:29043 trainers_line_29043
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x8A5C8E56, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E186C

@ 専用トレーナー 57: エミリ
  @ ROM 0x2E805C
  @ src/data/trainers.h:29079 trainers_line_29079
  trainer_entry 0x03, 0x05, 0x85, 0x14, 0xFF787054, 0x00150000, 0x00000000, 0, 0, 7, 0, 2, 0x082E1874

@ 専用トレーナー 58: マサアキ
  @ ROM 0x2E807C
  @ src/data/trainers.h:29140 trainers_line_29140
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x57515B6F, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E1894

@ 専用トレーナー 59: したっぱ
  @ ROM 0x2E809C
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E189C

@ 専用トレーナー 60: ヨシフミ
  @ ROM 0x2E80BC
  @ src/data/trainers.h:29212 trainers_line_29212
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x706C5C76, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E18A4

@ 専用トレーナー 61: ななし2
  @ ROM 0x2E80DC
  @ src/data/trainers.h:29248 trainers_line_29248
  trainer_entry 0x00, 0x1D, 0x84, 0x22, 0xA30C1515, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E18AC

@ 専用トレーナー 62: トニー
  @ ROM 0x2E80FC
  @ src/data/trainers.h:29284 trainers_line_29284
  trainer_entry 0x00, 0x1E, 0x0D, 0x23, 0xFFAE6664, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E18B4

@ 専用トレーナー 63: ユキヨ
  @ ROM 0x2E811C
  @ src/data/trainers.h:29320 trainers_line_29320
  trainer_entry 0x00, 0x0E, 0x83, 0x0E, 0xFF765775, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E18BC

@ 専用トレーナー 64: スティーブ
  @ ROM 0x2E813C
  @ src/data/trainers.h:29356 trainers_line_29356
  trainer_entry 0x00, 0x1E, 0x0D, 0x23, 0xAE80635D, 0x0000FF98, 0x00000000, 0, 0, 1, 0, 1, 0x082E18C4

@ 専用トレーナー 65: リョウイチ
  @ ROM 0x2E815C
  @ src/data/trainers.h:29392 trainers_line_29392
  trainer_entry 0x00, 0x1D, 0x04, 0x21, 0x52538678, 0x0000FF61, 0x00000000, 0, 0, 1, 0, 1, 0x082E18CC

@ 専用トレーナー 66: したっぱ
  @ ROM 0x2E817C
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x87, 0x1A, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E18D4

@ 専用トレーナー 67: したっぱ
  @ ROM 0x2E819C
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E18E4

@ 専用トレーナー 68: したっぱ
  @ ROM 0x2E81BC
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E18EC

@ 専用トレーナー 69: したっぱ
  @ ROM 0x2E81DC
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E18F4

@ 専用トレーナー 70: したっぱ
  @ ROM 0x2E81FC
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E18FC

@ 専用トレーナー 71: フサコ
  @ ROM 0x2E821C
  @ src/data/trainers.h:29620 trainers_line_29620
  trainer_entry 0x00, 0x1D, 0x84, 0x22, 0xFF5A5B6C, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E1904

@ 専用トレーナー 72: ユウキ
  @ ROM 0x2E823C
  @ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x00, 0x47, 0xFF575375, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E190C

@ 専用トレーナー 73: ユウキ
  @ ROM 0x2E825C
  @ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x00, 0x47, 0xFF575375, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E191C

@ 専用トレーナー 74: ゴウゾウ
  @ ROM 0x2E827C
  @ src/data/trainers.h:29752 trainers_line_29752
  trainer_entry 0x00, 0x0A, 0x04, 0x09, 0x5390538B, 0x000000FF, 0x00000000, 0, 0, 7, 0, 2, 0x082E192C

@ 専用トレーナー 75: カズハ
  @ ROM 0x2E829C
  @ src/data/trainers.h:29800 trainers_line_29800
  trainer_entry 0x00, 0x28, 0x88, 0x3D, 0xFF6A8E56, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E193C

@ 専用トレーナー 76: したっぱ
  @ ROM 0x2E82BC
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x03, 0x86, 0x06, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E1944

@ 専用トレーナー 77: ホムラ
  @ ROM 0x2E82DC
  @ src/data/trainers.h:25506 trainers_line_25506 (+2 aliases)
  trainer_entry 0x00, 0x31, 0x07, 0x45, 0xFF77716E, 0x00000000, 0x00000000, 0, 0, 7, 0, 4, 0x082E1954

@ 専用トレーナー 78: リョウスケ
  @ ROM 0x2E82FC
  @ src/data/trainers.h:29956 trainers_line_29956
  trainer_entry 0x00, 0x05, 0x05, 0x03, 0x5D538678, 0x0015FF59, 0x00000000, 0, 0, 11, 0, 2, 0x082E1974

@ 専用トレーナー 79: ユウキ
  @ ROM 0x2E831C
  @ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x00, 0x47, 0xFF575375, 0x00000000, 0x00000000, 0, 0, 7, 0, 2, 0x082E1984

@ 専用トレーナー 80: ハルカ
  @ ROM 0x2E833C
  @ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x81, 0x48, 0xFF56796A, 0x00000000, 0x00000000, 0, 0, 11, 0, 2, 0x082E1994

@ 専用トレーナー 81: マツブサ
  @ ROM 0x2E835C
  @ src/data/trainers.h:30102 trainers_line_30102 (+4 aliases)
  trainer_entry 0x00, 0x35, 0x07, 0x4C, 0x5B98626F, 0x001600FF, 0x00000016, 0, 0, 7, 0, 3, 0x082E19A4

@ 専用トレーナー 82: マツブサ
  @ ROM 0x2E837C
  @ src/data/trainers.h:30102 trainers_line_30102 (+4 aliases)
  trainer_entry 0x00, 0x35, 0x07, 0x4C, 0x5B98626F, 0x001600FF, 0x00000016, 0, 0, 7, 0, 3, 0x082E19BC

@ 専用トレーナー 83: チカ
  @ ROM 0x2E839C
  trainer_entry 0x00, 0x36, 0x81, 0x4D, 0x00FF5661, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E19D4

@ 専用トレーナー 84: マキ
  @ ROM 0x2E83BC
  trainer_entry 0x00, 0x36, 0x81, 0x4D, 0x00FF576F, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E19E4

@ 専用トレーナー 85: エリ
  @ ROM 0x2E83DC
  @ src/data/trainers.h:30322 trainers_line_30322
  trainer_entry 0x00, 0x36, 0x81, 0x4D, 0x00FF7854, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E19F4

@ 専用トレーナー 86: アキ
  @ ROM 0x2E83FC
  trainer_entry 0x00, 0x23, 0x81, 0x4D, 0x00FF5751, 0x00000000, 0x00000000, 0, 0, 7, 0, 3, 0x082E19FC

@ 専用トレーナー 87: マキ
  @ ROM 0x2E841C
  trainer_entry 0x00, 0x36, 0x81, 0x4D, 0x00FF576F, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E1A14

@ 専用トレーナー 88: マキ
  @ ROM 0x2E843C
  trainer_entry 0x00, 0x36, 0x81, 0x4D, 0x00FF576F, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E1A24

@ 専用トレーナー 89: マキ
  @ ROM 0x2E845C
  trainer_entry 0x00, 0x36, 0x81, 0x4D, 0x00FF576F, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E1A34

@ 専用トレーナー 90: マキ
  @ ROM 0x2E847C
  trainer_entry 0x00, 0x36, 0x81, 0x4D, 0x00FF576F, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E1A44

@ 専用トレーナー 91: ミナ
  @ ROM 0x2E849C
  trainer_entry 0x00, 0x36, 0x81, 0x4D, 0x00FF6570, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E1A5C

@ 専用トレーナー 92: シホ
  @ ROM 0x2E84BC
  @ src/data/trainers.h:30658 trainers_line_30658
  trainer_entry 0x00, 0x36, 0x81, 0x4D, 0x00FF6E5C, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E1A64

@ 専用トレーナー 93: ミキ
  @ ROM 0x2E84DC
  @ src/data/trainers.h:30718 trainers_line_30718
  trainer_entry 0x00, 0x36, 0x81, 0x4D, 0x00FF5770, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E1A7C

@ 専用トレーナー 94: メイ
  @ ROM 0x2E84FC
  trainer_entry 0x00, 0x36, 0x81, 0x4D, 0x00FF5272, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E1A84

@ 専用トレーナー 95: シンイチ
  @ ROM 0x2E851C
  @ src/data/trainers.h:30802 trainers_line_30802
  trainer_entry 0x00, 0x33, 0x00, 0x49, 0x61527E5C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E1A94

@ 専用トレーナー 96: フジオ
  @ ROM 0x2E853C
  @ src/data/trainers.h:30850 trainers_line_30850
  trainer_entry 0x00, 0x33, 0x00, 0x49, 0xFF558D6C, 0x00000000, 0x00000000, 0, 0, 1, 0, 4, 0x082E1AA4

@ 専用トレーナー 97: トモノリ
  @ ROM 0x2E855C
  @ src/data/trainers.h:30922 trainers_line_30922
  trainer_entry 0x00, 0x33, 0x00, 0x49, 0x78697364, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E1AC4

@ 専用トレーナー 98: オサム
  @ ROM 0x2E857C
  @ src/data/trainers.h:30970 trainers_line_30970
  trainer_entry 0x00, 0x33, 0x00, 0x49, 0xFF715B55, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E1AD4

@ 専用トレーナー 99: ヒロユキ
  @ ROM 0x2E859C
  @ src/data/trainers.h:31018 trainers_line_31018
  trainer_entry 0x00, 0x33, 0x00, 0x49, 0x57757B6B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E1AE4

@ 専用トレーナー 100: トモミチ
  @ ROM 0x2E85BC
  @ src/data/trainers.h:31066 trainers_line_31066
  trainer_entry 0x00, 0x33, 0x00, 0x49, 0x61707364, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E1AF4

@ 専用トレーナー 101: ミキヤ
  @ ROM 0x2E85DC
  @ src/data/trainers.h:31102 trainers_line_31102 (+4 aliases)
  trainer_entry 0x00, 0x33, 0x00, 0x49, 0xFF745770, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E1AFC

@ 専用トレーナー 102: ミキヤ
  @ ROM 0x2E85FC
  @ src/data/trainers.h:31102 trainers_line_31102 (+4 aliases)
  trainer_entry 0x00, 0x33, 0x00, 0x49, 0xFF745770, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E1B0C

@ 専用トレーナー 103: ミキヤ
  @ ROM 0x2E861C
  @ src/data/trainers.h:31102 trainers_line_31102 (+4 aliases)
  trainer_entry 0x00, 0x33, 0x00, 0x49, 0xFF745770, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E1B14

@ 専用トレーナー 104: ミキヤ
  @ ROM 0x2E863C
  @ src/data/trainers.h:31102 trainers_line_31102 (+4 aliases)
  trainer_entry 0x00, 0x33, 0x00, 0x49, 0xFF745770, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E1B24

@ 専用トレーナー 105: ミキヤ
  @ ROM 0x2E865C
  @ src/data/trainers.h:31102 trainers_line_31102 (+4 aliases)
  trainer_entry 0x00, 0x33, 0x00, 0x49, 0xFF745770, 0x00000000, 0x00000000, 0, 0, 1, 0, 4, 0x082E1B3C

@ 専用トレーナー 106: ハルノブ
  @ ROM 0x2E867C
  @ src/data/trainers.h:31366 trainers_line_31366
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0x9869796A, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E1B5C

@ 専用トレーナー 107: ケンサク
  @ ROM 0x2E869C
  @ src/data/trainers.h:31414 trainers_line_31414 (+4 aliases)
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0x585B7E59, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E1B6C

@ 専用トレーナー 108: カツヒト
  @ ROM 0x2E86BC
  @ src/data/trainers.h:31474 trainers_line_31474
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0x646B6256, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E1B84

@ 専用トレーナー 109: サブロウ
  @ ROM 0x2E86DC
  @ src/data/trainers.h:31522 trainers_line_31522 (+1 aliases)
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0x537B985B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E1B94

@ 専用トレーナー 110: マサノリ
  @ ROM 0x2E86FC
  @ src/data/trainers.h:31570 trainers_line_31570
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0x78695B6F, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E1BA4

@ 専用トレーナー 111: カズノリ
  @ ROM 0x2E871C
  @ src/data/trainers.h:31630 trainers_line_31630
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0x78698E56, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E1BBC

@ 専用トレーナー 112: ダイチ
  @ ROM 0x2E873C
  @ src/data/trainers.h:31666 trainers_line_31666
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0xFF615291, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E1BC4

@ 専用トレーナー 113: サブロウ
  @ ROM 0x2E875C
  @ src/data/trainers.h:31522 trainers_line_31522 (+1 aliases)
  trainer_entry 0x01, 0x02, 0x0B, 0x00, 0x537B985B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E1BD4

@ 専用トレーナー 114: ノボル
  @ ROM 0x2E877C
  @ src/data/trainers.h:31755 trainers_line_31755 (+1 aliases)
  trainer_entry 0x01, 0x02, 0x0B, 0x00, 0xFF799A69, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E1BE4

@ 専用トレーナー 115: ノボル
  @ ROM 0x2E879C
  @ src/data/trainers.h:31755 trainers_line_31755 (+1 aliases)
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0xFF799A69, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E1C04

@ 専用トレーナー 116: ケンサク
  @ ROM 0x2E87BC
  @ src/data/trainers.h:31414 trainers_line_31414 (+4 aliases)
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0x585B7E59, 0x000000FF, 0x00000000, 0, 0, 1, 0, 4, 0x082E1C1C

@ 専用トレーナー 117: ケンサク
  @ ROM 0x2E87DC
  @ src/data/trainers.h:31414 trainers_line_31414 (+4 aliases)
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0x585B7E59, 0x000000FF, 0x00000000, 0, 0, 1, 0, 4, 0x082E1C3C

@ 専用トレーナー 118: ケンサク
  @ ROM 0x2E87FC
  @ src/data/trainers.h:31414 trainers_line_31414 (+4 aliases)
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0x585B7E59, 0x000000FF, 0x00000000, 0, 0, 1, 0, 4, 0x082E1C5C

@ 専用トレーナー 119: ケンサク
  @ ROM 0x2E881C
  @ src/data/trainers.h:31414 trainers_line_31414 (+4 aliases)
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0x585B7E59, 0x000000FF, 0x00000000, 0, 0, 1, 0, 4, 0x082E1C7C

@ 専用トレーナー 120: マコとテル
  @ ROM 0x2E883C
  @ src/data/trainers.h:32161 trainers_line_32161
  trainer_entry 0x00, 0x37, 0x02, 0x4E, 0x63145A6F, 0x0000FF79, 0x00000000, 0, 1, 1, 0, 2, 0x082E1C9C

@ 専用トレーナー 121: カホとジン
  @ ROM 0x2E885C
  @ src/data/trainers.h:32209 trainers_line_32209
  trainer_entry 0x00, 0x37, 0x02, 0x4E, 0x8D146E56, 0x0000FF7E, 0x00000000, 0, 1, 1, 0, 2, 0x082E1CAC

@ 専用トレーナー 122: ナツとフミ
  @ ROM 0x2E887C
  @ src/data/trainers.h:32257 trainers_line_32257 (+4 aliases)
  trainer_entry 0x00, 0x37, 0x02, 0x4E, 0x6C146265, 0x0000FF70, 0x00000000, 0, 1, 1, 0, 2, 0x082E1CBC

@ 専用トレーナー 123: ナツとフミ
  @ ROM 0x2E889C
  @ src/data/trainers.h:32257 trainers_line_32257 (+4 aliases)
  trainer_entry 0x00, 0x37, 0x02, 0x4E, 0x6C146265, 0x0000FF70, 0x00000000, 0, 1, 1, 0, 2, 0x082E1CCC

@ 専用トレーナー 124: ナツとフミ
  @ ROM 0x2E88BC
  @ src/data/trainers.h:32257 trainers_line_32257 (+4 aliases)
  trainer_entry 0x00, 0x37, 0x02, 0x4E, 0x6C146265, 0x0000FF70, 0x00000000, 0, 1, 1, 0, 2, 0x082E1CDC

@ 専用トレーナー 125: ナツとフミ
  @ ROM 0x2E88DC
  @ src/data/trainers.h:32257 trainers_line_32257 (+4 aliases)
  trainer_entry 0x00, 0x37, 0x02, 0x4E, 0x6C146265, 0x0000FF70, 0x00000000, 0, 1, 1, 0, 2, 0x082E1CEC

@ 専用トレーナー 126: ナツとフミ
  @ ROM 0x2E88FC
  @ src/data/trainers.h:32257 trainers_line_32257 (+4 aliases)
  trainer_entry 0x00, 0x37, 0x02, 0x4E, 0x6C146265, 0x0000FF70, 0x00000000, 0, 1, 1, 0, 2, 0x082E1CFC

@ 専用トレーナー 127: アツコ
  @ ROM 0x2E891C
  @ src/data/trainers.h:32497 trainers_line_32497
  trainer_entry 0x00, 0x15, 0x81, 0x16, 0xFF5A6251, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E1D0C

@ 専用トレーナー 128: タクロウ
  @ ROM 0x2E893C
  @ src/data/trainers.h:32533 trainers_line_32533
  trainer_entry 0x01, 0x05, 0x05, 0x03, 0x537B5860, 0x001500FF, 0x00000000, 0, 0, 7, 0, 1, 0x082E1D14

@ 専用トレーナー 129: マコト
  @ ROM 0x2E895C
  @ src/data/trainers.h:3625 trainers_line_3625 (+1 aliases)
  trainer_entry 0x01, 0x2B, 0x84, 0x40, 0xFF645A6F, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E1D24

@ 専用トレーナー 130: トモミ
  @ ROM 0x2E897C
  @ src/data/trainers.h:32640 trainers_line_32640
  trainer_entry 0x01, 0x2B, 0x84, 0x40, 0xFF707364, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E1D44

@ 専用トレーナー 131: カツハル
  @ ROM 0x2E899C
  @ src/data/trainers.h:32683 trainers_line_32683
  trainer_entry 0x01, 0x2A, 0x03, 0x3F, 0x796A6256, 0x000000FF, 0x00000000, 0, 0, 3, 0, 2, 0x082E1D54

@ 専用トレーナー 132: テツジ
  @ ROM 0x2E89BC
  @ src/data/trainers.h:32745 trainers_line_32745
  trainer_entry 0x01, 0x2A, 0x03, 0x3F, 0xFF8D6263, 0x00000000, 0x00000000, 0, 0, 3, 0, 2, 0x082E1D74

@ 専用トレーナー 133: タダヒロ
  @ ROM 0x2E89DC
  @ src/data/trainers.h:32807 trainers_line_32807
  trainer_entry 0x01, 0x2A, 0x03, 0x3F, 0x7B6B9160, 0x000000FF, 0x00000000, 0, 0, 3, 0, 2, 0x082E1D94

@ 専用トレーナー 134: テルオ
  @ ROM 0x2E89FC
  @ src/data/trainers.h:32869 trainers_line_32869
  trainer_entry 0x00, 0x1A, 0x00, 0x1D, 0xFF557963, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E1DB4

@ 専用トレーナー 135: ミミコ
  @ ROM 0x2E8A1C
  @ src/data/trainers.h:32917 trainers_line_32917
  trainer_entry 0x00, 0x1B, 0x82, 0x1E, 0xFF5A7070, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E1DC4

@ 専用トレーナー 136: ミツル
  @ ROM 0x2E8A3C
  @ src/battle_message.c:1492 gText_BattleWallyName (+8 aliases)
  trainer_entry 0x00, 0x32, 0x00, 0x46, 0xFF796270, 0x00000000, 0x00000000, 0, 0, 7, 0, 1, 0x082E1DDC

@ 専用トレーナー 137: ミツル
  @ ROM 0x2E8A5C
  @ src/battle_message.c:1492 gText_BattleWallyName (+8 aliases)
  trainer_entry 0x01, 0x32, 0x00, 0x46, 0xFF796270, 0x00130000, 0x00000013, 0, 0, 7, 0, 5, 0x082E1DE4

@ 専用トレーナー 138: ミツル
  @ ROM 0x2E8A7C
  @ src/battle_message.c:1492 gText_BattleWallyName (+8 aliases)
  trainer_entry 0x01, 0x32, 0x00, 0x46, 0xFF796270, 0x00130000, 0x00000013, 0, 0, 7, 0, 5, 0x082E1E34

@ 専用トレーナー 139: ミツル
  @ ROM 0x2E8A9C
  @ src/battle_message.c:1492 gText_BattleWallyName (+8 aliases)
  trainer_entry 0x01, 0x32, 0x00, 0x46, 0xFF796270, 0x00130000, 0x00000013, 0, 0, 7, 0, 5, 0x082E1E84

@ 専用トレーナー 140: ミツル
  @ ROM 0x2E8ABC
  @ src/battle_message.c:1492 gText_BattleWallyName (+8 aliases)
  trainer_entry 0x01, 0x32, 0x00, 0x46, 0xFF796270, 0x00130000, 0x00000013, 0, 0, 7, 0, 5, 0x082E1ED4

@ 専用トレーナー 141: ユウキ
  @ ROM 0x2E8ADC
  @ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x00, 0x47, 0xFF575375, 0x00000000, 0x00000000, 0, 0, 7, 0, 4, 0x082E1F24

@ 専用トレーナー 142: ユウキ
  @ ROM 0x2E8AFC
  @ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x00, 0x47, 0xFF575375, 0x00000000, 0x00000000, 0, 0, 7, 0, 4, 0x082E1F44

@ 専用トレーナー 143: ユウキ
  @ ROM 0x2E8B1C
  @ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x00, 0x47, 0xFF575375, 0x00000000, 0x00000000, 0, 0, 7, 0, 4, 0x082E1F64

@ 専用トレーナー 144: ハルカ
  @ ROM 0x2E8B3C
  @ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x81, 0x48, 0xFF56796A, 0x00000000, 0x00000000, 0, 0, 7, 0, 4, 0x082E1F84

@ 専用トレーナー 145: ハルカ
  @ ROM 0x2E8B5C
  @ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x81, 0x48, 0xFF56796A, 0x00000000, 0x00000000, 0, 0, 7, 0, 4, 0x082E1FA4

@ 専用トレーナー 146: ハルカ
  @ ROM 0x2E8B7C
  @ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x81, 0x48, 0xFF56796A, 0x00000000, 0x00000000, 0, 0, 7, 0, 4, 0x082E1FC4

@ 専用トレーナー 147: ヨシノリ
  @ ROM 0x2E8B9C
  @ src/data/trainers.h:33929 trainers_line_33929
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x78695C76, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E1FE4

@ 専用トレーナー 148: ケンタロウ
  @ ROM 0x2E8BBC
  @ src/data/trainers.h:33989 trainers_line_33989
  @ Preserve exact byte length: semantic suffix text pointer.
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x7B607E59, 0x0000FF53, 0x00000000, 0, 0, 1, 0, 2, 0x082E1FFC

@ 専用トレーナー 149: トモヒコ
  @ ROM 0x2E8BDC
  @ src/data/trainers.h:34037 trainers_line_34037
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x5A6B7364, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E200C

@ 専用トレーナー 150: サヤカ
  @ ROM 0x2E8BFC
  @ src/data/trainers.h:34097 trainers_line_34097
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF56745B, 0x00130000, 0x00000000, 0, 0, 7, 0, 2, 0x082E2024

@ 専用トレーナー 151: ジュン
  @ ROM 0x2E8C1C
  @ src/data/trainers.h:34147 trainers_line_34147
  trainer_entry 0x00, 0x05, 0x05, 0x03, 0xFF7E858D, 0x00150000, 0x00000000, 0, 0, 7, 0, 2, 0x082E2034

@ 専用トレーナー 152: テツロウ
  @ ROM 0x2E8C3C
  @ src/data/trainers.h:34197 trainers_line_34197 (+4 aliases)
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0x537B6263, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E2044

@ 専用トレーナー 153: コウサク
  @ ROM 0x2E8C5C
  @ src/data/trainers.h:34233 trainers_line_34233
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x585B535A, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E204C

@ 専用トレーナー 154: イクオ
  @ ROM 0x2E8C7C
  @ src/data/trainers.h:34293 trainers_line_34293
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0xFF555852, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E2064

@ 専用トレーナー 155: アキオ
  @ ROM 0x2E8C9C
  @ src/data/trainers.h:34341 trainers_line_34341
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0xFF555751, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E2074

@ 専用トレーナー 156: ユカリ
  @ ROM 0x2E8CBC
  @ src/data/trainers.h:34389 trainers_line_34389
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF785675, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E2084

@ 専用トレーナー 157: ナナとネネ
  @ ROM 0x2E8CDC
  @ src/data/trainers.h:34425 trainers_line_34425
  trainer_entry 0x00, 0x2E, 0x09, 0x43, 0x68146565, 0x0000FF68, 0x00000000, 0, 1, 1, 0, 2, 0x082E208C

@ 専用トレーナー 158: マホとナホ
  @ ROM 0x2E8CFC
  @ src/data/trainers.h:34473 trainers_line_34473
  trainer_entry 0x01, 0x22, 0x09, 0x32, 0x65146E6F, 0x0000FF6E, 0x00000000, 0, 1, 1, 0, 2, 0x082E209C

@ 専用トレーナー 159: カヨとイヨ
  @ ROM 0x2E8D1C
  @ src/data/trainers.h:34535 trainers_line_34535
  trainer_entry 0x01, 0x22, 0x09, 0x32, 0x52147656, 0x0000FF76, 0x00000000, 0, 1, 1, 0, 2, 0x082E20BC

@ 専用トレーナー 160: シキとリキ
  @ ROM 0x2E8D3C
  @ src/data/trainers.h:34597 trainers_line_34597
  trainer_entry 0x01, 0x37, 0x02, 0x4E, 0x7814575C, 0x0000FF57, 0x00000000, 0, 1, 1, 0, 2, 0x082E20DC

@ 専用トレーナー 161: ゲンとハツ
  @ ROM 0x2E8D5C
  @ src/data/trainers.h:34659 trainers_line_34659 (+4 aliases)
  trainer_entry 0x01, 0x38, 0x04, 0x4F, 0x6A147E8A, 0x0000FF62, 0x00000000, 0, 1, 7, 0, 2, 0x082E20FC

@ 専用トレーナー 162: ゲンとハツ
  @ ROM 0x2E8D7C
  @ src/data/trainers.h:34659 trainers_line_34659 (+4 aliases)
  trainer_entry 0x01, 0x38, 0x04, 0x4F, 0x6A147E8A, 0x0000FF62, 0x00000000, 0, 1, 7, 0, 2, 0x082E211C

@ 専用トレーナー 163: ゲンとハツ
  @ ROM 0x2E8D9C
  @ src/data/trainers.h:34659 trainers_line_34659 (+4 aliases)
  trainer_entry 0x01, 0x38, 0x04, 0x4F, 0x6A147E8A, 0x0000FF62, 0x00000000, 0, 1, 7, 0, 2, 0x082E213C

@ 専用トレーナー 164: ゲンとハツ
  @ ROM 0x2E8DBC
  @ src/data/trainers.h:34659 trainers_line_34659 (+4 aliases)
  trainer_entry 0x01, 0x38, 0x04, 0x4F, 0x6A147E8A, 0x0000FF62, 0x00000000, 0, 1, 11, 0, 2, 0x082E215C

@ 専用トレーナー 165: ゲンとハツ
  @ ROM 0x2E8DDC
  @ src/data/trainers.h:34659 trainers_line_34659 (+4 aliases)
  trainer_entry 0x01, 0x38, 0x04, 0x4F, 0x6A147E8A, 0x0000FF62, 0x00000000, 0, 1, 7, 0, 2, 0x082E217C

@ 専用トレーナー 166: カツとアミ
  @ ROM 0x2E8DFC
  @ src/data/trainers.h:34969 trainers_line_34969
  trainer_entry 0x00, 0x39, 0x08, 0x50, 0x51146256, 0x0000FF70, 0x00000000, 0, 1, 1, 0, 2, 0x082E219C

@ 専用トレーナー 167: コウとカコ
  @ ROM 0x2E8E1C
  @ src/data/trainers.h:35017 trainers_line_35017 (+4 aliases)
  trainer_entry 0x00, 0x39, 0x08, 0x50, 0x5614535A, 0x0000FF5A, 0x00000000, 0, 1, 1, 0, 2, 0x082E21AC

@ 専用トレーナー 168: コウとカコ
  @ ROM 0x2E8E3C
  @ src/data/trainers.h:35017 trainers_line_35017 (+4 aliases)
  trainer_entry 0x00, 0x39, 0x08, 0x50, 0x5614535A, 0x0000FF5A, 0x00000000, 0, 1, 1, 0, 2, 0x082E21BC

@ 専用トレーナー 169: コウとカコ
  @ ROM 0x2E8E5C
  @ src/data/trainers.h:35017 trainers_line_35017 (+4 aliases)
  trainer_entry 0x00, 0x39, 0x08, 0x50, 0x5614535A, 0x0000FF5A, 0x00000000, 0, 1, 1, 0, 2, 0x082E21CC

@ 専用トレーナー 170: コウとカコ
  @ ROM 0x2E8E7C
  @ src/data/trainers.h:35017 trainers_line_35017 (+4 aliases)
  trainer_entry 0x00, 0x39, 0x08, 0x50, 0x5614535A, 0x0000FF5A, 0x00000000, 0, 1, 1, 0, 2, 0x082E21DC

@ 専用トレーナー 171: コウとカコ
  @ ROM 0x2E8E9C
  @ src/data/trainers.h:35017 trainers_line_35017 (+4 aliases)
  trainer_entry 0x00, 0x39, 0x08, 0x50, 0x5614535A, 0x0000FF5A, 0x00000000, 0, 1, 1, 0, 2, 0x082E21EC

@ 専用トレーナー 172: シンとユミ
  @ ROM 0x2E8EBC
  @ src/data/trainers.h:35257 trainers_line_35257
  trainer_entry 0x00, 0x39, 0x08, 0x50, 0x75147E5C, 0x0000FF70, 0x00000000, 0, 1, 1, 0, 2, 0x082E21FC

@ 専用トレーナー 173: マサシ
  @ ROM 0x2E8EDC
  @ src/data/trainers.h:35305 trainers_line_35305
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0xFF5C5B6F, 0x00000000, 0x00000000, 0, 0, 1, 0, 4, 0x082E220C

@ 専用トレーナー 174: ノゾム
  @ ROM 0x2E8EFC
  @ src/data/trainers.h:35377 trainers_line_35377
  trainer_entry 0x02, 0x16, 0x0D, 0x17, 0xFF719069, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E222C

@ 専用トレーナー 175: サクラコ
  @ ROM 0x2E8F1C
  @ src/data/trainers.h:35427 trainers_line_35427
  trainer_entry 0x02, 0x14, 0x81, 0x15, 0x5A77585B, 0x001300FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E223C

@ 専用トレーナー 176: ケンキチ
  @ ROM 0x2E8F3C
  @ src/data/trainers.h:35479 trainers_line_35479
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x61577E59, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E224C

@ 専用トレーナー 177: ハナ
  @ ROM 0x2E8F5C
  trainer_entry 0x00, 0x12, 0x82, 0x12, 0x00FF656A, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E2254
@ 専用トレーナー 178: タイスケ
  @ ROM 0x2E8F7C
  @ src/data/trainers.h:35551 trainers_line_35551
  trainer_entry 0x00, 0x13, 0x02, 0x13, 0x595D5260, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E225C

@ 専用トレーナー 179: マサタカ
  @ ROM 0x2E8F9C
  @ src/data/trainers.h:35599 trainers_line_35599
  trainer_entry 0x02, 0x24, 0x09, 0x33, 0x56605B6F, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E226C

@ 専用トレーナー 180: ポール
  @ ROM 0x2E8FBC
  @ src/data/trainers.h:35651 trainers_line_35651
  trainer_entry 0x00, 0x18, 0x04, 0x1B, 0xFF79AE9F, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E227C

@ 専用トレーナー 181: サエミ
  @ ROM 0x2E8FDC
  @ src/data/trainers.h:35699 trainers_line_35699
  trainer_entry 0x00, 0x28, 0x81, 0x39, 0xFF70545B, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E228C

@ 専用トレーナー 182: エリック
  @ ROM 0x2E8FFC
  @ src/data/trainers.h:35735 trainers_line_35735
  trainer_entry 0x00, 0x18, 0x04, 0x1B, 0x58A07854, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E2294

@ 専用トレーナー 183: シゲモリ
  @ ROM 0x2E901C
  @ src/data/trainers.h:35771 trainers_line_35771
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0x78738A5C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E229C

@ 専用トレーナー 184: トシフミ
  @ ROM 0x2E903C
  @ src/data/trainers.h:35807 trainers_line_35807
  trainer_entry 0x00, 0x1A, 0x00, 0x1D, 0x706C5C64, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E22A4

@ 専用トレーナー 185: ワカコ
  @ ROM 0x2E905C
  @ src/data/trainers.h:35843 trainers_line_35843
  trainer_entry 0x00, 0x0F, 0x81, 0x0F, 0xFF5A567C, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E22AC

@ 専用トレーナー 186: イオリ
  @ ROM 0x2E907C
  @ src/data/trainers.h:35879 trainers_line_35879
  trainer_entry 0x00, 0x1B, 0x82, 0x1E, 0xFF785552, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E22B4

@ 専用トレーナー 187: クニアキ
  @ ROM 0x2E909C
  @ src/data/trainers.h:35915 trainers_line_35915
  trainer_entry 0x00, 0x19, 0x0B, 0x1C, 0x57516658, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E22BC

@ 専用トレーナー 188: ノドカ
  @ ROM 0x2E90BC
  @ src/data/trainers.h:35951 trainers_line_35951
  trainer_entry 0x00, 0x1B, 0x82, 0x1E, 0xFF569569, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E22C4

@ 専用トレーナー 189: カズタカ
  @ ROM 0x2E90DC
  @ src/data/trainers.h:35999 trainers_line_35999
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0x56608E56, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E22D4

@ 専用トレーナー 190: ユウゴ
  @ ROM 0x2E90FC
  @ src/data/trainers.h:36047 trainers_line_36047
  trainer_entry 0x00, 0x1A, 0x00, 0x1D, 0xFF8B5375, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E22E4

@ 専用トレーナー 191: ミチオ
  @ ROM 0x2E911C
  @ src/data/trainers.h:36095 trainers_line_36095
  trainer_entry 0x00, 0x17, 0x03, 0x19, 0xFF556170, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E22F4

@ 専用トレーナー 192: マツリ
  @ ROM 0x2E913C
  @ src/data/trainers.h:36143 trainers_line_36143
  trainer_entry 0x00, 0x1B, 0x82, 0x1E, 0xFF78626F, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E2304

@ 専用トレーナー 193: ヒロミツ
  @ ROM 0x2E915C
  @ src/data/trainers.h:36191 trainers_line_36191
  trainer_entry 0x00, 0x27, 0x0B, 0x37, 0x62707B6B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E2314

@ 専用トレーナー 194: ミナミ
  @ ROM 0x2E917C
  @ src/data/trainers.h:36227 trainers_line_36227
  trainer_entry 0x00, 0x1B, 0x82, 0x1E, 0xFF706570, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E231C

@ 専用トレーナー 195: マサヤ
  @ ROM 0x2E919C
  @ src/data/trainers.h:36263 trainers_line_36263
  trainer_entry 0x00, 0x25, 0x00, 0x35, 0xFF745B6F, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E2324

@ 専用トレーナー 196: したっぱ
  @ ROM 0x2E91BC
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E233C

@ 専用トレーナー 197: したっぱ
  @ ROM 0x2E91DC
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E2344

@ 専用トレーナー 198: したっぱ
  @ ROM 0x2E91FC
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E234C

@ 専用トレーナー 199: したっぱ
  @ ROM 0x2E921C
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E2354

@ 専用トレーナー 200: したっぱ
  @ ROM 0x2E923C
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E2364

@ 専用トレーナー 201: したっぱ
  @ ROM 0x2E925C
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E2374

@ 専用トレーナー 202: したっぱ
  @ ROM 0x2E927C
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E237C

@ 専用トレーナー 203: したっぱ
  @ ROM 0x2E929C
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E2384

@ 専用トレーナー 204: したっぱ
  @ ROM 0x2E92BC
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E238C

@ 専用トレーナー 205: したっぱ
  @ ROM 0x2E92DC
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E2394

@ 専用トレーナー 206: したっぱ
  @ ROM 0x2E92FC
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E239C

@ 専用トレーナー 207: したっぱ
  @ ROM 0x2E931C
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E23A4

@ 専用トレーナー 208: したっぱ
  @ ROM 0x2E933C
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x07, 0x08, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E23AC

@ 専用トレーナー 209: したっぱ
  @ ROM 0x2E935C
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x87, 0x1A, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E23B4

@ 専用トレーナー 210: したっぱ
  @ ROM 0x2E937C
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x87, 0x1A, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E23BC

@ 専用トレーナー 211: したっぱ
  @ ROM 0x2E939C
  @ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
  trainer_entry 0x00, 0x09, 0x87, 0x1A, 0x4B50100C, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E23C4

@ 専用トレーナー 212: ホムラ
  @ ROM 0x2E93BC
  @ src/data/trainers.h:25506 trainers_line_25506 (+2 aliases)
  trainer_entry 0x00, 0x31, 0x07, 0x45, 0xFF77716E, 0x00000000, 0x00000000, 0, 0, 1, 0, 4, 0x082E23CC

@ 専用トレーナー 213: ナルミ
  @ ROM 0x2E93DC
  @ src/data/trainers.h:36995 trainers_line_36995
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF707965, 0x00150000, 0x00000000, 0, 0, 7, 0, 2, 0x082E23EC

@ 専用トレーナー 214: マツブサ
  @ ROM 0x2E93FC
  @ src/data/trainers.h:30102 trainers_line_30102 (+4 aliases)
  trainer_entry 0x00, 0x35, 0x07, 0x4C, 0x5B98626F, 0x000000FF, 0x00000000, 0, 0, 7, 0, 3, 0x082E23FC

@ 専用トレーナー 215: ヒデヒコ
  @ ROM 0x2E941C
  @ src/data/trainers.h:37105 trainers_line_37105
  trainer_entry 0x00, 0x08, 0x08, 0x07, 0x5A6B946B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 1, 0x082E2414

@ 専用トレーナー 216: ユミコ
  @ ROM 0x2E943C
  @ src/data/trainers.h:37141 trainers_line_37141
  trainer_entry 0x00, 0x2D, 0x88, 0x42, 0xFF5A7075, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E241C

@ 専用トレーナー 217: ダイジロウ
  @ ROM 0x2E945C
  @ src/data/trainers.h:37177 trainers_line_37177 (+4 aliases)
  @ Preserve exact byte length: semantic suffix text pointer.
  trainer_entry 0x00, 0x10, 0x0B, 0x10, 0x7B8D5291, 0x0000FF53, 0x00000000, 0, 0, 1, 0, 2, 0x082E2424

@ 専用トレーナー 218: ヤスフミ
  @ ROM 0x2E947C
  @ src/data/trainers.h:37225 trainers_line_37225
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0x706C5D74, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E2434

@ 専用トレーナー 219: クニオ
  @ ROM 0x2E949C
  @ src/data/trainers.h:37273 trainers_line_37273
  trainer_entry 0x00, 0x28, 0x08, 0x3C, 0xFF556658, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E2444

@ 専用トレーナー 220: ノリタカ
  @ ROM 0x2E94BC
  @ src/data/trainers.h:37309 trainers_line_37309 (+4 aliases)
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0x56607869, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E244C

@ 専用トレーナー 221: セイカ
  @ ROM 0x2E94DC
  @ src/data/trainers.h:37369 trainers_line_37369
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF56525E, 0x00150000, 0x00000000, 0, 0, 7, 0, 3, 0x082E2464

@ 専用トレーナー 222: トシタカ
  @ ROM 0x2E94FC
  @ src/data/trainers.h:37431 trainers_line_37431
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0x56605C64, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E247C

@ 専用トレーナー 223: アキコ
  @ ROM 0x2E951C
  @ src/data/trainers.h:37479 trainers_line_37479
  trainer_entry 0x00, 0x1B, 0x82, 0x1E, 0xFF5A5751, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E248C

@ 専用トレーナー 224: ヒロトシ
  @ ROM 0x2E953C
  @ src/data/trainers.h:37527 trainers_line_37527
  trainer_entry 0x00, 0x10, 0x0B, 0x10, 0x5C647B6B, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E249C

@ 専用トレーナー 225: ヤスノリ
  @ ROM 0x2E955C
  @ src/data/trainers.h:37575 trainers_line_37575
  trainer_entry 0x00, 0x1A, 0x00, 0x1D, 0x78695D74, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E24AC

@ 専用トレーナー 226: アツオ
  @ ROM 0x2E957C
  @ src/data/trainers.h:37623 trainers_line_37623
  trainer_entry 0x00, 0x19, 0x0B, 0x1C, 0xFF556251, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E24BC

@ 専用トレーナー 227: タエコ
  @ ROM 0x2E959C
  @ src/data/trainers.h:37671 trainers_line_37671
  trainer_entry 0x00, 0x0F, 0x81, 0x0F, 0xFF5A5460, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E24CC

@ 専用トレーナー 228: リンコ
  @ ROM 0x2E95BC
  @ src/data/trainers.h:37719 trainers_line_37719
  trainer_entry 0x00, 0x28, 0x81, 0x3B, 0xFF5A7E78, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E24DC

@ 専用トレーナー 229: ユウゾウ
  @ ROM 0x2E95DC
  @ src/data/trainers.h:37767 trainers_line_37767
  trainer_entry 0x00, 0x2A, 0x03, 0x3F, 0x53905375, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E24EC

@ 専用トレーナー 230: シノ
  @ ROM 0x2E95FC
  trainer_entry 0x00, 0x1D, 0x84, 0x22, 0x00FF695C, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E24FC
@ 専用トレーナー 231: チトセ
  @ ROM 0x2E961C
  @ src/data/trainers.h:37863 trainers_line_37863
  trainer_entry 0x00, 0x2B, 0x84, 0x40, 0xFF5E6461, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E250C

@ 専用トレーナー 232: リネ
  @ ROM 0x2E963C
  @ src/data/trainers.h:37911 trainers_line_37911
  trainer_entry 0x00, 0x1D, 0x84, 0x22, 0x00FF6878, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E251C

@ 専用トレーナー 233: ミチヤス
  @ ROM 0x2E965C
  @ src/data/trainers.h:37959 trainers_line_37959
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0x5D746170, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E252C

@ 専用トレーナー 234: ユウリ
  @ ROM 0x2E967C
  @ src/data/trainers.h:38007 trainers_line_38007
  trainer_entry 0x00, 0x25, 0x00, 0x35, 0xFF785375, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E253C

@ 専用トレーナー 235: モトコ
  @ ROM 0x2E969C
  @ src/data/trainers.h:38055 trainers_line_38055
  trainer_entry 0x00, 0x28, 0x81, 0x3B, 0xFF5A6473, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E254C

@ 専用トレーナー 236: ミナツ
  @ ROM 0x2E96BC
  @ src/data/trainers.h:38091 trainers_line_38091
  trainer_entry 0x00, 0x1D, 0x84, 0x22, 0xFF626570, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E2554

@ 専用トレーナー 237: シマ
  @ ROM 0x2E96DC
  @ src/data/trainers.h:38127 trainers_line_38127
  trainer_entry 0x00, 0x2B, 0x84, 0x40, 0x00FF6F5C, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E255C

@ 専用トレーナー 238: スズ
  @ ROM 0x2E96FC
  trainer_entry 0x00, 0x0A, 0x84, 0x18, 0x00FF8E5D, 0x00150000, 0x00000000, 0, 0, 7, 0, 2, 0x082E2564
@ 専用トレーナー 239: ジミー
  @ ROM 0x2E971C
  @ src/data/trainers.h:38213 trainers_line_38213
  trainer_entry 0x00, 0x18, 0x04, 0x1B, 0xFFAE708D, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E2574

@ 専用トレーナー 240: アツヒロ
  @ ROM 0x2E973C
  @ src/data/trainers.h:38249 trainers_line_38249
  trainer_entry 0x00, 0x19, 0x0B, 0x1C, 0x7B6B6251, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E257C

@ 専用トレーナー 241: ミヅキ
  @ ROM 0x2E975C
  @ src/data/trainers.h:38297 trainers_line_38297
  trainer_entry 0x00, 0x2C, 0x81, 0x41, 0xFF579370, 0x00000000, 0x00000000, 0, 0, 1, 0, 1, 0x082E258C

@ 専用トレーナー 242: カズヒロ
  @ ROM 0x2E977C
  @ src/data/trainers.h:38333 trainers_line_38333
  trainer_entry 0x01, 0x05, 0x05, 0x03, 0x7B6B8E56, 0x001500FF, 0x00000000, 0, 0, 7, 0, 1, 0x082E2594

@ 専用トレーナー 243: フウコ
  @ ROM 0x2E979C
  @ src/data/trainers.h:38377 trainers_line_38377
  trainer_entry 0x00, 0x2B, 0x84, 0x40, 0xFF5A536C, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E25A4

@ 専用トレーナー 244: ケンスケ
  @ ROM 0x2E97BC
  @ src/data/trainers.h:38425 trainers_line_38425
  trainer_entry 0x00, 0x1C, 0x03, 0x1F, 0x595D7E59, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E25B4

@ 専用トレーナー 245: ヤスオ
  @ ROM 0x2E97DC
  @ src/data/trainers.h:38473 trainers_line_38473
  trainer_entry 0x00, 0x04, 0x00, 0x20, 0xFF555D74, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082E25C4

@ 専用トレーナー 246: ハルイ
  @ ROM 0x2E97FC
  @ src/data/trainers.h:38569 trainers_line_38569
  trainer_entry 0x00, 0x04, 0x81, 0x02, 0xFF52796A, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082E25F4

@ 専用トレーナー 247: トキコ
  @ ROM 0x2E981C
  @ src/data/trainers.h:38665 trainers_line_38665 (+4 aliases)
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF5A5764, 0x00150000, 0x00000000, 0, 0, 7, 0, 2, 0x082E2624

@ 専用トレーナー 248: ハルカ
  @ ROM 0x2E983C
  @ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x81, 0x48, 0xFF56796A, 0x00000000, 0x00000000, 0, 0, 7, 0, 2, 0x082E2634

@ 専用トレーナー 249: ハルカ
  @ ROM 0x2E985C
  @ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
  trainer_entry 0x00, 0x32, 0x81, 0x48, 0xFF56796A, 0x00000000, 0x00000000, 0, 0, 7, 0, 2, 0x082E2644

@ 専用トレーナー 250: ツツジ
  @ ROM 0x2E987C
  @ src/data/trainers.h:12964 trainers_line_12964 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x81, 0x28, 0xFF8D6262, 0x00130000, 0x00130013, 0, 1, 7, 0, 4, 0x082E2654

@ 専用トレーナー 251: ツツジ
  @ ROM 0x2E989C
  @ src/data/trainers.h:12964 trainers_line_12964 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x81, 0x28, 0xFF8D6262, 0x00130000, 0x00130013, 0, 1, 7, 0, 5, 0x082E2694

@ 専用トレーナー 252: ツツジ
  @ ROM 0x2E98BC
  @ src/data/trainers.h:12964 trainers_line_12964 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x81, 0x28, 0xFF8D6262, 0x00130000, 0x00130013, 0, 1, 7, 0, 5, 0x082E26E4

@ 専用トレーナー 253: ツツジ
  @ ROM 0x2E98DC
  @ src/data/trainers.h:12964 trainers_line_12964 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x81, 0x28, 0xFF8D6262, 0x00130000, 0x00130013, 0, 1, 7, 0, 6, 0x082E2734

@ 専用トレーナー 254: トウキ
  @ ROM 0x2E98FC
  @ src/data/trainers.h:13049 trainers_line_13049 (+6 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x29, 0xFF575364, 0x00130000, 0x00130013, 0, 1, 7, 0, 4, 0x082E2794

@ 専用トレーナー 255: トウキ
  @ ROM 0x2E991C
  @ src/data/trainers.h:13049 trainers_line_13049 (+6 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x29, 0xFF575364, 0x00130000, 0x00130013, 0, 1, 7, 0, 4, 0x082E27D4

@ 専用トレーナー 256: トウキ
  @ ROM 0x2E993C
  @ src/data/trainers.h:13049 trainers_line_13049 (+6 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x29, 0xFF575364, 0x00130000, 0x00130013, 0, 1, 7, 0, 5, 0x082E2814

@ 専用トレーナー 257: トウキ
  @ ROM 0x2E995C
  @ src/data/trainers.h:13049 trainers_line_13049 (+6 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x29, 0xFF575364, 0x00130000, 0x00130013, 0, 1, 7, 0, 6, 0x082E2864

@ 専用トレーナー 258: テッセン
  @ ROM 0x2E997C
  @ src/data/trainers.h:13134 trainers_line_13134 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x2A, 0x7E5EA063, 0x001300FF, 0x00130013, 0, 1, 7, 0, 4, 0x082E28C4

@ 専用トレーナー 259: テッセン
  @ ROM 0x2E999C
  @ src/data/trainers.h:13134 trainers_line_13134 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x2A, 0x7E5EA063, 0x001300FF, 0x00130013, 0, 1, 7, 0, 5, 0x082E2904

@ 専用トレーナー 260: テッセン
  @ ROM 0x2E99BC
  @ src/data/trainers.h:13134 trainers_line_13134 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x2A, 0x7E5EA063, 0x001300FF, 0x00130013, 0, 1, 7, 0, 5, 0x082E2954

@ 専用トレーナー 261: テッセン
  @ ROM 0x2E99DC
  @ src/data/trainers.h:13134 trainers_line_13134 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x2A, 0x7E5EA063, 0x001300FF, 0x00130013, 0, 1, 7, 0, 6, 0x082E29A4

@ 専用トレーナー 262: アスナ
  @ ROM 0x2E99FC
  @ src/data/trainers.h:13238 trainers_line_13238 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x81, 0x2B, 0xFF655D51, 0x00130000, 0x00130013, 0, 1, 7, 0, 4, 0x082E2A04

@ 専用トレーナー 263: アスナ
  @ ROM 0x2E9A1C
  @ src/data/trainers.h:13238 trainers_line_13238 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x81, 0x2B, 0xFF655D51, 0x00130000, 0x00130013, 0, 1, 7, 0, 5, 0x082E2A44

@ 専用トレーナー 264: アスナ
  @ ROM 0x2E9A3C
  @ src/data/trainers.h:13238 trainers_line_13238 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x81, 0x2B, 0xFF655D51, 0x00130000, 0x00130013, 0, 1, 7, 0, 6, 0x082E2A94

@ 専用トレーナー 265: アスナ
  @ ROM 0x2E9A5C
  @ src/data/trainers.h:13238 trainers_line_13238 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x81, 0x2B, 0xFF655D51, 0x00130000, 0x00130013, 0, 1, 7, 0, 6, 0x082E2AF4

@ 専用トレーナー 266: センリ
  @ ROM 0x2E9A7C
  @ src/data/trainers.h:13342 trainers_line_13342 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x2C, 0xFF787E5E, 0x00130000, 0x00130013, 0, 1, 7, 0, 4, 0x082E2B54

@ 専用トレーナー 267: センリ
  @ ROM 0x2E9A9C
  @ src/data/trainers.h:13342 trainers_line_13342 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x2C, 0xFF787E5E, 0x00130000, 0x00130013, 0, 1, 7, 0, 5, 0x082E2B94

@ 専用トレーナー 268: センリ
  @ ROM 0x2E9ABC
  @ src/data/trainers.h:13342 trainers_line_13342 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x2C, 0xFF787E5E, 0x00130000, 0x00130013, 0, 1, 7, 0, 5, 0x082E2BE4

@ 専用トレーナー 269: センリ
  @ ROM 0x2E9ADC
  @ src/data/trainers.h:13342 trainers_line_13342 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x2C, 0xFF787E5E, 0x00130000, 0x00130013, 0, 1, 7, 0, 6, 0x082E2C34

@ 専用トレーナー 270: ナギ
  @ ROM 0x2E9AFC
  trainer_entry 0x03, 0x20, 0x81, 0x2D, 0x00FF8865, 0x00130000, 0x00130013, 0, 1, 23, 0, 5, 0x082E2C94
@ 専用トレーナー 271: ナギ
  @ ROM 0x2E9B1C
  trainer_entry 0x03, 0x20, 0x81, 0x2D, 0x00FF8865, 0x00130000, 0x00130013, 0, 1, 23, 0, 6, 0x082E2CE4
@ 専用トレーナー 272: ナギ
  @ ROM 0x2E9B3C
  trainer_entry 0x03, 0x20, 0x81, 0x2D, 0x00FF8865, 0x00130000, 0x00130013, 0, 1, 23, 0, 6, 0x082E2D44
@ 専用トレーナー 273: ナギ
  @ ROM 0x2E9B5C
  trainer_entry 0x03, 0x20, 0x81, 0x2D, 0x00FF8865, 0x00130000, 0x00130013, 0, 1, 23, 0, 6, 0x082E2DA4
@ 専用トレーナー 274: フウとラン
  @ ROM 0x2E9B7C
  @ src/data/trainers.h:13569 trainers_line_13569 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x01, 0x2E, 0x7714536C, 0x0013FF7E, 0x00130013, 0, 1, 7, 0, 5, 0x082E2E04

@ 専用トレーナー 275: フウとラン
  @ ROM 0x2E9B9C
  @ src/data/trainers.h:13569 trainers_line_13569 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x01, 0x2E, 0x7714536C, 0x0013FF7E, 0x00130013, 0, 1, 7, 0, 6, 0x082E2E54

@ 専用トレーナー 276: フウとラン
  @ ROM 0x2E9BBC
  @ src/data/trainers.h:13569 trainers_line_13569 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x01, 0x2E, 0x7714536C, 0x0013FF7E, 0x00130013, 0, 1, 7, 0, 6, 0x082E2EB4

@ 専用トレーナー 277: フウとラン
  @ ROM 0x2E9BDC
  @ src/data/trainers.h:13569 trainers_line_13569 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x01, 0x2E, 0x7714536C, 0x0013FF7E, 0x00130013, 0, 1, 7, 0, 6, 0x082E2F14

@ 専用トレーナー 278: アダン
  @ ROM 0x2E9BFC
  @ src/data/trainers.h:13675 trainers_line_13675 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x2F, 0xFF7E9151, 0x00130000, 0x00130013, 0, 1, 7, 0, 5, 0x082E2F74

@ 専用トレーナー 279: アダン
  @ ROM 0x2E9C1C
  @ src/data/trainers.h:13675 trainers_line_13675 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x2F, 0xFF7E9151, 0x00130000, 0x00130013, 0, 1, 7, 0, 5, 0x082E2FC4

@ 専用トレーナー 280: アダン
  @ ROM 0x2E9C3C
  @ src/data/trainers.h:13675 trainers_line_13675 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x2F, 0xFF7E9151, 0x00130000, 0x00130013, 0, 1, 7, 0, 6, 0x082E3014

@ 専用トレーナー 281: アダン
  @ ROM 0x2E9C5C
  @ src/data/trainers.h:13675 trainers_line_13675 (+5 aliases)
  trainer_entry 0x03, 0x20, 0x00, 0x2F, 0xFF7E9151, 0x00130000, 0x00130013, 0, 1, 7, 0, 6, 0x082E3074

@ 専用トレーナー 282: モトヒロ
  @ ROM 0x2E9C7C
  @ src/data/trainers.h:42979 trainers_line_42979
  trainer_entry 0x03, 0x1C, 0x03, 0x1F, 0x7B6B6473, 0x000000FF, 0x00000000, 0, 0, 7, 0, 2, 0x082E30D4

@ 専用トレーナー 283: セイイチ
  @ ROM 0x2E9C9C
  @ src/data/trainers.h:43039 trainers_line_43039
  trainer_entry 0x00, 0x06, 0x05, 0x04, 0x6152525E, 0x000000FF, 0x00000000, 0, 0, 7, 0, 1, 0x082E30F4

@ 専用トレーナー 284: ダイゴ
  @ ROM 0x2E9CBC
  @ src/data/trainers.h:43075 trainers_line_43075 (+4 aliases)
  trainer_entry 0x03, 0x32, 0x00, 0x51, 0xFF8B5291, 0x00130000, 0x00130013, 19, 0, 7, 0, 6, 0x082E30FC

@ 専用トレーナー 285: リラ
  @ ROM 0x2E9CDC
  trainer_entry 0x00, 0x3A, 0x80, 0x52, 0x00FF7778, 0x00000000, 0x00000000, 0, 0, 7, 0, 1, 0x082E315C
@ 専用トレーナー 286: ヒース
  @ ROM 0x2E9CFC
  @ src/data/trainers.h:43253 trainers_line_43253
  trainer_entry 0x00, 0x3B, 0x00, 0x53, 0xFF5DAE6B, 0x00000000, 0x00000000, 0, 0, 7, 0, 1, 0x082E3164

@ 専用トレーナー 287: ウコン
  @ ROM 0x2E9D1C
  @ src/data/trainers.h:43289 trainers_line_43289
  trainer_entry 0x00, 0x3C, 0x00, 0x54, 0xFF7E5A53, 0x00000000, 0x00000000, 0, 0, 7, 0, 1, 0x082E316C

@ 専用トレーナー 288: コゴミ
  @ ROM 0x2E9D3C
  @ src/data/trainers.h:43325 trainers_line_43325
  trainer_entry 0x00, 0x3D, 0x80, 0x55, 0xFF708B5A, 0x00000000, 0x00000000, 0, 0, 7, 0, 1, 0x082E3174

@ 専用トレーナー 289: ダツラ
  @ ROM 0x2E9D5C
  @ src/data/trainers.h:43361 trainers_line_43361
  trainer_entry 0x00, 0x3E, 0x00, 0x56, 0xFF776291, 0x00000000, 0x00000000, 0, 0, 7, 0, 1, 0x082E317C

@ 専用トレーナー 290: アザミ
  @ ROM 0x2E9D7C
  @ src/data/trainers.h:43397 trainers_line_43397
  trainer_entry 0x00, 0x3F, 0x80, 0x57, 0xFF708C51, 0x00000000, 0x00000000, 0, 0, 7, 0, 1, 0x082E3184

@ 専用トレーナー 291: ジンダイ
  @ ROM 0x2E9D9C
  @ src/data/trainers.h:43433 trainers_line_43433
  trainer_entry 0x00, 0x40, 0x00, 0x58, 0x52917E8D, 0x000000FF, 0x00000000, 0, 0, 7, 0, 1, 0x082E318C

@ 専用トレーナー 292: ダイジロウ
  @ ROM 0x2E9DBC
  @ src/data/trainers.h:37177 trainers_line_37177 (+4 aliases)
  @ Preserve exact byte length: semantic suffix text pointer.
  trainer_entry 0x00, 0x10, 0x0B, 0x10, 0x7B8D5291, 0x0000FF53, 0x00000000, 0, 0, 1, 0, 2, 0x082E3194

@ 専用トレーナー 293: ダイジロウ
  @ ROM 0x2E9DDC
  @ src/data/trainers.h:37177 trainers_line_37177 (+4 aliases)
  @ Preserve exact byte length: semantic suffix text pointer.
  trainer_entry 0x00, 0x10, 0x0B, 0x10, 0x7B8D5291, 0x0000FF53, 0x00000000, 0, 0, 1, 0, 3, 0x082E31A4

@ 専用トレーナー 294: ダイジロウ
  @ ROM 0x2E9DFC
  @ src/data/trainers.h:37177 trainers_line_37177 (+4 aliases)
  @ Preserve exact byte length: semantic suffix text pointer.
  trainer_entry 0x00, 0x10, 0x0B, 0x10, 0x7B8D5291, 0x0000FF53, 0x00000000, 0, 0, 1, 0, 3, 0x082E31BC

@ 専用トレーナー 295: ダイジロウ
  @ ROM 0x2E9E1C
  @ src/data/trainers.h:37177 trainers_line_37177 (+4 aliases)
  @ Preserve exact byte length: semantic suffix text pointer.
  trainer_entry 0x00, 0x10, 0x0B, 0x10, 0x7B8D5291, 0x0000FF53, 0x00000000, 0, 0, 1, 0, 3, 0x082E31D4

@ 専用トレーナー 296: ノリタカ
  @ ROM 0x2E9E3C
  @ src/data/trainers.h:37309 trainers_line_37309 (+4 aliases)
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0x56607869, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E31EC

@ 専用トレーナー 297: ノリタカ
  @ ROM 0x2E9E5C
  @ src/data/trainers.h:37309 trainers_line_37309 (+4 aliases)
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0x56607869, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E3204

@ 専用トレーナー 298: ノリタカ
  @ ROM 0x2E9E7C
  @ src/data/trainers.h:37309 trainers_line_37309 (+4 aliases)
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0x56607869, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E321C

@ 専用トレーナー 299: ノリタカ
  @ ROM 0x2E9E9C
  @ src/data/trainers.h:37309 trainers_line_37309 (+4 aliases)
  trainer_entry 0x00, 0x2F, 0x00, 0x44, 0x56607869, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E3234

@ 専用トレーナー 300: ヤスヒロ
  @ ROM 0x2E9EBC
  @ src/data/trainers.h:18932 trainers_line_18932 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x08, 0x3C, 0x7B6B5D74, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E324C

@ 専用トレーナー 301: ヤスヒロ
  @ ROM 0x2E9EDC
  @ src/data/trainers.h:18932 trainers_line_18932 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x08, 0x3C, 0x7B6B5D74, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E325C

@ 専用トレーナー 302: ヤスヒロ
  @ ROM 0x2E9EFC
  @ src/data/trainers.h:18932 trainers_line_18932 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x08, 0x3C, 0x7B6B5D74, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E3274

@ 専用トレーナー 303: ヤスヒロ
  @ ROM 0x2E9F1C
  @ src/data/trainers.h:18932 trainers_line_18932 (+4 aliases)
  trainer_entry 0x00, 0x28, 0x08, 0x3C, 0x7B6B5D74, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E328C

@ 専用トレーナー 304: テツロウ
  @ ROM 0x2E9F3C
  @ src/data/trainers.h:34197 trainers_line_34197 (+4 aliases)
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0x537B6263, 0x000000FF, 0x00000000, 0, 0, 1, 0, 2, 0x082E32A4

@ 専用トレーナー 305: テツロウ
  @ ROM 0x2E9F5C
  @ src/data/trainers.h:34197 trainers_line_34197 (+4 aliases)
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0x537B6263, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E32B4

@ 専用トレーナー 306: テツロウ
  @ ROM 0x2E9F7C
  @ src/data/trainers.h:34197 trainers_line_34197 (+4 aliases)
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0x537B6263, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E32CC

@ 専用トレーナー 307: テツロウ
  @ ROM 0x2E9F9C
  @ src/data/trainers.h:34197 trainers_line_34197 (+4 aliases)
  trainer_entry 0x00, 0x0C, 0x04, 0x0B, 0x537B6263, 0x000000FF, 0x00000000, 0, 0, 1, 0, 3, 0x082E32E4

@ 専用トレーナー 308: トキコ
  @ ROM 0x2E9FBC
  @ src/data/trainers.h:38665 trainers_line_38665 (+4 aliases)
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF5A5764, 0x00150000, 0x00000000, 0, 0, 7, 0, 2, 0x082E32FC

@ 専用トレーナー 309: トキコ
  @ ROM 0x2E9FDC
  @ src/data/trainers.h:38665 trainers_line_38665 (+4 aliases)
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF5A5764, 0x00150000, 0x00000000, 0, 0, 7, 0, 3, 0x082E330C

@ 専用トレーナー 310: トキコ
  @ ROM 0x2E9FFC
  @ src/data/trainers.h:38665 trainers_line_38665 (+4 aliases)
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF5A5764, 0x00150000, 0x00000000, 0, 0, 7, 0, 3, 0x082E3324

@ 専用トレーナー 311: トキコ
  @ ROM 0x2EA01C
  @ src/data/trainers.h:38665 trainers_line_38665 (+4 aliases)
  trainer_entry 0x00, 0x05, 0x85, 0x14, 0xFF5A5764, 0x00150000, 0x00000000, 0, 0, 7, 0, 3, 0x082E333C

@ 専用トレーナー 312: ジョー
  @ ROM 0x2EA03C
  @ src/data/trainers.h:9234 trainers_line_9234 (+4 aliases)
  trainer_entry 0x00, 0x18, 0x04, 0x1B, 0xFFAE868D, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E3354

@ 専用トレーナー 313: ジョー
  @ ROM 0x2EA05C
  @ src/data/trainers.h:9234 trainers_line_9234 (+4 aliases)
  trainer_entry 0x00, 0x18, 0x04, 0x1B, 0xFFAE868D, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E336C

@ 専用トレーナー 314: ジョー
  @ ROM 0x2EA07C
  @ src/data/trainers.h:9234 trainers_line_9234 (+4 aliases)
  trainer_entry 0x00, 0x18, 0x04, 0x1B, 0xFFAE868D, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E3384

@ 専用トレーナー 315: ジョー
  @ ROM 0x2EA09C
  @ src/data/trainers.h:9234 trainers_line_9234 (+4 aliases)
  trainer_entry 0x00, 0x18, 0x04, 0x1B, 0xFFAE868D, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E339C

@ 専用トレーナー 316: マサヒコ
  @ ROM 0x2EA0BC
  @ src/data/trainers.h:33 trainers_line_33 (+4 aliases)
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0x5A6B5B6F, 0x000000FF, 0x00000000, 0, 0, 7, 0, 2, 0x082E33B4

@ 専用トレーナー 317: マサヒコ
  @ ROM 0x2EA0DC
  @ src/data/trainers.h:33 trainers_line_33 (+4 aliases)
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0x5A6B5B6F, 0x000000FF, 0x00000000, 0, 0, 7, 0, 3, 0x082E33C4

@ 専用トレーナー 318: マサヒコ
  @ ROM 0x2EA0FC
  @ src/data/trainers.h:33 trainers_line_33 (+4 aliases)
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0x5A6B5B6F, 0x000000FF, 0x00000000, 0, 0, 7, 0, 3, 0x082E33DC

@ 専用トレーナー 319: マサヒコ
  @ ROM 0x2EA11C
  @ src/data/trainers.h:33 trainers_line_33 (+4 aliases)
  trainer_entry 0x00, 0x02, 0x0B, 0x00, 0x5A6B5B6F, 0x000000FF, 0x00000000, 0, 0, 7, 0, 3, 0x082E33F4

@ 専用トレーナー 320: フクミ
  @ ROM 0x2EA13C
  @ src/data/trainers.h:333 trainers_line_333 (+4 aliases)
  trainer_entry 0x00, 0x04, 0x81, 0x02, 0xFF70586C, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082E340C

@ 専用トレーナー 321: フクミ
  @ ROM 0x2EA15C
  @ src/data/trainers.h:333 trainers_line_333 (+4 aliases)
  trainer_entry 0x00, 0x04, 0x81, 0x02, 0xFF70586C, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082E343C

@ 専用トレーナー 322: フクミ
  @ ROM 0x2EA17C
  @ src/data/trainers.h:333 trainers_line_333 (+4 aliases)
  trainer_entry 0x00, 0x04, 0x81, 0x02, 0xFF70586C, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082E346C

@ 専用トレーナー 323: フクミ
  @ ROM 0x2EA19C
  @ src/data/trainers.h:333 trainers_line_333 (+4 aliases)
  trainer_entry 0x00, 0x04, 0x81, 0x02, 0xFF70586C, 0x00000000, 0x00000000, 0, 0, 1, 0, 6, 0x082E349C

@ 専用トレーナー 324: ショウ
  @ ROM 0x2EA1BC
  @ src/data/trainers.h:3787 trainers_line_3787 (+5 aliases)
  trainer_entry 0x00, 0x15, 0x81, 0x16, 0xFF53865C, 0x00000000, 0x00000000, 0, 0, 1, 0, 2, 0x082E34CC

@ 専用トレーナー 325: ショウ
  @ ROM 0x2EA1DC
  @ src/data/trainers.h:3787 trainers_line_3787 (+5 aliases)
  trainer_entry 0x00, 0x15, 0x81, 0x16, 0xFF53865C, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E34DC

@ 専用トレーナー 326: ショウ
  @ ROM 0x2EA1FC
  @ src/data/trainers.h:3787 trainers_line_3787 (+5 aliases)
  trainer_entry 0x00, 0x15, 0x81, 0x16, 0xFF53865C, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E34F4

@ 専用トレーナー 327: ショウ
  @ ROM 0x2EA21C
  @ src/data/trainers.h:3787 trainers_line_3787 (+5 aliases)
  trainer_entry 0x00, 0x15, 0x81, 0x16, 0xFF53865C, 0x00000000, 0x00000000, 0, 0, 1, 0, 3, 0x082E350C

@ 専用トレーナー 328: ミハネ
  @ ROM 0x2EA23C
  @ src/data/trainers.h:45709 trainers_line_45709
  trainer_entry 0x00, 0x1D, 0x84, 0x22, 0xFF686A70, 0x00000000, 0x00000000, 0, 0, 0, 0, 1, 0x082E3524

@ 専用トレーナー 329: シンヤ
  @ ROM 0x2EA25C
  @ src/data/trainers.h:45743 trainers_line_45743
  trainer_entry 0x00, 0x1D, 0x04, 0x21, 0xFF747E5C, 0x00000000, 0x00000000, 0, 0, 0, 0, 2, 0x082E352C

@ 専用トレーナー 330: ダグ
  @ ROM 0x2EA27C
  @ src/data/trainers.h:45789 trainers_line_45789
  trainer_entry 0x00, 0x1E, 0x0D, 0x23, 0x00FF8991, 0x00000000, 0x00000000, 0, 0, 0, 0, 1, 0x082E353C

@ 専用トレーナー 331: レッド
  @ ROM 0x2EA29C
  @ src/data/easy_chat/easy_chat_group_trainer.h:154 easy_chat_group_trainer_line_154 (+4 aliases)
  trainer_entry 0x00, 0x32, 0x00, 0x59, 0xFF95A07A, 0x00000000, 0x00000000, 0, 0, 0, 0, 1, 0x082E3544

@ 専用トレーナー 332: リーフ
  @ ROM 0x2EA2BC
  @ src/data/easy_chat/easy_chat_group_trainer.h:148 easy_chat_group_trainer_line_148 (+3 aliases)
  trainer_entry 0x00, 0x32, 0x80, 0x5A, 0xFF6CAE78, 0x00000000, 0x00000000, 0, 0, 0, 0, 1, 0x082E354C

@ 専用トレーナー 333: ユウキ
  @ ROM 0x2EA2DC
  @ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
  trainer_entry 0x00, 0x41, 0x00, 0x5B, 0xFF575375, 0x00000000, 0x00000000, 0, 0, 0, 0, 1, 0x082E3554

@ 専用トレーナー 334: ハルカ
  @ ROM 0x2EA2FC
  @ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
  trainer_entry 0x00, 0x41, 0x80, 0x5C, 0xFF56796A, 0x00000000, 0x00000000, 0, 0, 0, 0, 1, 0x082E355C
