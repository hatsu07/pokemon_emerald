	@ src/data/items.h:14440 items_line_14440
	.globl gText_Rom_55CB9B
gText_Rom_55CB9B: @ 0x0855CB9B
	.string "グレンじま ジムの\nいりぐちを あける カギ$"
	.if (. - gText_Rom_55CB9B) > 0x17
	.error "gText_Rom_55CB9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CB9B) < 0x17
	.space 0x17 - (. - gText_Rom_55CB9B)
	.endif

	@ src/data/items.h:14455 items_line_14455
	.globl gText_Rom_55CBB2
gText_Rom_55CBB2: @ 0x0855CBB2
	.string "ミラクル・サイクルで\nおりたたみ じてんしゃと\nこうかん できる かみ$"
	.if (. - gText_Rom_55CBB2) > 0x24
	.error "gText_Rom_55CBB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CBB2) < 0x24
	.space 0x24 - (. - gText_Rom_55CBB2)
	.endif

	@ src/data/items.h:14472 items_line_14472
	.globl gText_Rom_55CBD6
gText_Rom_55CBD6: @ 0x0855CBD6
	.string "サファリゾーンの\nえんちょうが おとした\nきんいろの いれば$"
	.if (. - gText_Rom_55CBD6) > 0x1f
	.error "gText_Rom_55CBD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CBD6) < 0x1f
	.space 0x1f - (. - gText_Rom_55CBD6)
	.endif

	@ src/data/items.h:3264 items_line_3264
	.globl gText_Rom_55CBF5
gText_Rom_55CBF5: @ 0x0855CBF5
	.string "こだい ポケモンの\nいでんし じょうほうが\nとじこめられている いし$"
	.if (. - gText_Rom_55CBF5) > 0x23
	.error "gText_Rom_55CBF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CBF5) < 0x23
	.space 0x23 - (. - gText_Rom_55CBF5)
	.endif

	@ src/data/items.h:14488 items_line_14488
	.globl gText_Rom_55CC18
gText_Rom_55CC18: @ 0x0855CC18
	.string "カードで できた カギ\nシルフカンパニー ビルの\nドアロックを はずせる$"
	.if (. - gText_Rom_55CC18) > 0x25
	.error "gText_Rom_55CC18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CC18) < 0x25
	.space 0x25 - (. - gText_Rom_55CC18)
	.endif

	@ src/data/items.h:14504 items_line_14504
	.globl gText_Rom_55CC3D
gText_Rom_55CC3D: @ 0x0855CC3D
	.string "ロケットだん アジトの\nエレベーターを うごかす\nことが できる カギ$"
	.if (. - gText_Rom_55CC3D) > 0x24
	.error "gText_Rom_55CC3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CC3D) < 0x24
	.space 0x24 - (. - gText_Rom_55CC3D)
	.endif

	@ src/data/items.h:3218 items_line_3218
	.globl gText_Rom_55CC61
gText_Rom_55CC61: @ 0x0855CC61
	.string "おおむかし うみに\nすんでいた ポケモンの\nかいがらの いちぶ$"
	.if (. - gText_Rom_55CC61) > 0x20
	.error "gText_Rom_55CC61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CC61) < 0x20
	.space 0x20 - (. - gText_Rom_55CC61)
	.endif

	@ src/data/items.h:3241 items_line_3241
	.globl gText_Rom_55CC81
gText_Rom_55CC81: @ 0x0855CC81
	.string "おおむかし うみに\nすんでいた ポケモンの\nこうらの いちぶ$"
	.if (. - gText_Rom_55CC81) > 0x1f
	.error "gText_Rom_55CC81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CC81) < 0x1f
	.space 0x1f - (. - gText_Rom_55CC81)
	.endif

	@ src/data/items.h:14520 items_line_14520
	.globl gText_Rom_55CCA0
gText_Rom_55CCA0: @ 0x0855CCA0
	.string "めに みえない ものを\nみられる スコープ\nシルフ カンパニーせい$"
	.if (. - gText_Rom_55CCA0) > 0x22
	.error "gText_Rom_55CCA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CCA0) < 0x22
	.space 0x22 - (. - gText_Rom_55CCA0)
	.endif

	@ src/data/items.h:13784 items_line_13784
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55CCC2
gText_Rom_55CCC2: @ 0x0855CCC2
	.string "おりたたみの じてんしゃ\nランニングシューズより\nはやく はしる$"
	.if (. - gText_Rom_55CCC2) != 0x21
	.error "gText_Rom_55CCC2 must retain its original byte length"
	.endif
	.globl gText_Rom_55CCDF
	.set gText_Rom_55CCDF, gText_Rom_55CCC2 + 0x1d

	@ src/data/items.h:13902 items_line_13902
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55CCE3
gText_Rom_55CCE3: @ 0x0855CCE3
	.string "いつでも みることが\nできる べんりな ちず\nじぶんの いちも わかる$"
	.if (. - gText_Rom_55CCE3) != 0x24
	.error "gText_Rom_55CCE3 must retain its original byte length"
	.endif
	.globl gText_Rom_55CD03
	.set gText_Rom_55CD03, gText_Rom_55CCE3 + 0x20

	@ src/data/items.h:13918 items_line_13918
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55CD07
gText_Rom_55CD07: @ 0x0855CD07
	.string "たたかえる トレーナーを\nおしえてくれる きかい\nじゅうでんして つかう$"
	.if (. - gText_Rom_55CD07) != 0x25
	.error "gText_Rom_55CD07 must retain its original byte length"
	.endif
	.globl gText_Rom_55CD28
	.set gText_Rom_55CD28, gText_Rom_55CD07 + 0x21

	@ src/data/items.h:14097 items_line_14097
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55CD2C
gText_Rom_55CD2C: @ 0x0855CD2C
	.string "ゆうめいな じんぶつの\nじょうほうを いつでも\nみなおすことが できる$"
	.if (. - gText_Rom_55CD2C) != 0x24
	.error "gText_Rom_55CD2C must retain its original byte length"
	.endif
	.globl gText_Rom_55CD4C
	.set gText_Rom_55CD4C, gText_Rom_55CD2C + 0x20

	@ src/data/items.h:13938 items_line_13938
	.globl gText_Rom_55CD50
gText_Rom_55CD50: @ 0x0855CD50
	.string "わざマシンを ほかんする\nべんりな いれもの$"
	.if (. - gText_Rom_55CD50) > 0x17
	.error "gText_Rom_55CD50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CD50) < 0x17
	.space 0x17 - (. - gText_Rom_55CD50)
	.endif

	@ src/data/items.h:13954 items_line_13954
	.globl gText_Rom_55CD67
gText_Rom_55CD67: @ 0x0855CD67
	.string "きのみを ほぞんする\nべんりな いれもの$"
	.if (. - gText_Rom_55CD67) > 0x15
	.error "gText_Rom_55CD67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CD67) < 0x15
	.space 0x15 - (. - gText_Rom_55CD67)
	.endif

	@ src/data/items.h:14113 items_line_14113
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55CD7C
gText_Rom_55CD7C: @ 0x0855CD7C
	.string "トレーナーの やくにたつ\nばんぐみを みることが\nできる テレビ$"
	.if (. - gText_Rom_55CD7C) != 0x21
	.error "gText_Rom_55CD7C must retain its original byte length"
	.endif
	.globl gText_Rom_55CD99
	.set gText_Rom_55CD99, gText_Rom_55CD7C + 0x1d
	.incbin "baserom.gba", 0x55cd9d, 0x3e

	@ src/data/items.h:14571 items_line_14571
	.globl gText_Rom_55CDDB
gText_Rom_55CDDB: @ 0x0855CDDB
	.string "おばあさんが いれた\nおいしい おちゃ\nかわきを うるおす$"
	.if (. - gText_Rom_55CDDB) > 0x1e
	.error "gText_Rom_55CDDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CDDB) < 0x1e
	.space 0x1e - (. - gText_Rom_55CDDB)
	.endif

	@ src/data/items.h:14162 items_line_14162
	.globl gText_Rom_55CDF9
gText_Rom_55CDF9: @ 0x0855CDF9
	.string "へそのいわへ\nいくために ひつような\nふねの チケット$"
	.if (. - gText_Rom_55CDF9) > 0x1c
	.error "gText_Rom_55CDF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CDF9) < 0x1c
	.space 0x1c - (. - gText_Rom_55CDF9)
	.endif

	@ src/data/items.h:14178 items_line_14178
	.globl gText_Rom_55CE15
gText_Rom_55CE15: @ 0x0855CE15
	.string "たんじょうのしまへ\nいくために ひつような\nふねの チケット$"
	.if (. - gText_Rom_55CE15) > 0x1f
	.error "gText_Rom_55CE15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CE15) < 0x1f
	.space 0x1f - (. - gText_Rom_55CE15)
	.endif

	@ src/data/items.h:14001 items_line_14001
	.globl gText_Rom_55CE34
gText_Rom_55CE34: @ 0x0855CE34
	.string "きのみクラッシュで\nできた きのみの こなを\nほぞんする いれもの$"
	.if (. - gText_Rom_55CE34) > 0x22
	.error "gText_Rom_55CE34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CE34) < 0x22
	.space 0x22 - (. - gText_Rom_55CE34)
	.endif

	@ src/data/items.h:14588 items_line_14588
	.globl gText_Rom_55CE56
gText_Rom_55CE56: @ 0x0855CE56
	.string "じょうねつを あらわす\nうつくしい ほうせき\nあかく ひかり かがやく$"
	.if (. - gText_Rom_55CE56) > 0x24
	.error "gText_Rom_55CE56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CE56) < 0x24
	.space 0x24 - (. - gText_Rom_55CE56)
	.endif

	@ src/data/items.h:14604 items_line_14604
	.globl gText_Rom_55CE7A
gText_Rom_55CE7A: @ 0x0855CE7A
	.string "せいじつを あらわす\nうつくしい ほうせき\nあおく ひかり かがやく$"
	.if (. - gText_Rom_55CE7A) > 0x23
	.error "gText_Rom_55CE7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CE7A) < 0x23
	.space 0x23 - (. - gText_Rom_55CE7A)
	.endif
	.incbin "baserom.gba", 0x55ce9d, 0x23

	@ src/data/items.h:14194 items_line_14194
	.globl gText_Rom_55CEC0
gText_Rom_55CEC0: @ 0x0855CEC0
	.string "ある しまへの かいろを\nしるして ある\nふるぼけた うみの ちず$"
	.if (. - gText_Rom_55CEC0) > 0x22
	.error "gText_Rom_55CEC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CEC0) < 0x22
	.space 0x22 - (. - gText_Rom_55CEC0)
	.endif
	.incbin "baserom.gba", 0x55cee2, 0x6
	.globl gUnknown_855CEE8
gUnknown_855CEE8: @ 0x0855CEE8
	.incbin "baserom.gba", 0x55cee8, 0x2c

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_55CF14
gText_Rom_55CF14: @ 0x0855CF14
	.string "ボール$"
	.if (. - gText_Rom_55CF14) > 0x4
	.error "gText_Rom_55CF14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CF14) < 0x4
	.space 0x4 - (. - gText_Rom_55CF14)
	.endif
	.incbin "baserom.gba", 0x55cf18, 0x24

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_55CF3C
gText_Rom_55CF3C: @ 0x0855CF3C
	.string "ボール$"
	.if (. - gText_Rom_55CF3C) > 0x4
	.error "gText_Rom_55CF3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CF3C) < 0x4
	.space 0x4 - (. - gText_Rom_55CF3C)
	.endif
	.incbin "baserom.gba", 0x55cf40, 0x24

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_55CF64
gText_Rom_55CF64: @ 0x0855CF64
	.string "ボール$"
	.if (. - gText_Rom_55CF64) > 0x4
	.error "gText_Rom_55CF64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CF64) < 0x4
	.space 0x4 - (. - gText_Rom_55CF64)
	.endif
	.incbin "baserom.gba", 0x55cf68, 0x20

	@ src/strings.c:208 strings_line_208
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55CF88
gText_Rom_55CF88: @ 0x0855CF88
	.string "モンスターボール$"
	.if (. - gText_Rom_55CF88) != 0x9
	.error "gText_Rom_55CF88 must retain its original byte length"
	.endif
	.globl gText_Rom_55CF8D
	.set gText_Rom_55CF8D, gText_Rom_55CF88 + 0x5
	.incbin "baserom.gba", 0x55cf91, 0x1f

	@ src/battle_message.c:1475 gText_SafariBalls
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55CFB0
gText_Rom_55CFB0: @ 0x0855CFB0
	.string "サファリボール$"
	.if (. - gText_Rom_55CFB0) != 0x8
	.error "gText_Rom_55CFB0 must retain its original byte length"
	.endif
	.globl gText_Rom_55CFB4
	.set gText_Rom_55CFB4, gText_Rom_55CFB0 + 0x4
	.incbin "baserom.gba", 0x55cfb8, 0x23

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_55CFDB
gText_Rom_55CFDB: @ 0x0855CFDB
	.string "ボール$"
	.if (. - gText_Rom_55CFDB) > 0x4
	.error "gText_Rom_55CFDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CFDB) < 0x4
	.space 0x4 - (. - gText_Rom_55CFDB)
	.endif
	.incbin "baserom.gba", 0x55cfdf, 0x24

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_55D003
gText_Rom_55D003: @ 0x0855D003
	.string "ボール$"
	.if (. - gText_Rom_55D003) > 0x4
	.error "gText_Rom_55D003 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D003) < 0x4
	.space 0x4 - (. - gText_Rom_55D003)
	.endif
	.incbin "baserom.gba", 0x55d007, 0x24

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_55D02B
gText_Rom_55D02B: @ 0x0855D02B
	.string "ボール$"
	.if (. - gText_Rom_55D02B) > 0x4
	.error "gText_Rom_55D02B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D02B) < 0x4
	.space 0x4 - (. - gText_Rom_55D02B)
	.endif
	.incbin "baserom.gba", 0x55d02f, 0x25

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_55D054
gText_Rom_55D054: @ 0x0855D054
	.string "ボール$"
	.if (. - gText_Rom_55D054) > 0x4
	.error "gText_Rom_55D054 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D054) < 0x4
	.space 0x4 - (. - gText_Rom_55D054)
	.endif
	.incbin "baserom.gba", 0x55d058, 0x24

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_55D07C
gText_Rom_55D07C: @ 0x0855D07C
	.string "ボール$"
	.if (. - gText_Rom_55D07C) > 0x4
	.error "gText_Rom_55D07C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D07C) < 0x4
	.space 0x4 - (. - gText_Rom_55D07C)
	.endif
	.incbin "baserom.gba", 0x55d080, 0x25

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_55D0A5
gText_Rom_55D0A5: @ 0x0855D0A5
	.string "ボール$"
	.if (. - gText_Rom_55D0A5) > 0x4
	.error "gText_Rom_55D0A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D0A5) < 0x4
	.space 0x4 - (. - gText_Rom_55D0A5)
	.endif
	.incbin "baserom.gba", 0x55d0a9, 0x23

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_55D0CC
gText_Rom_55D0CC: @ 0x0855D0CC
	.string "ボール$"
	.if (. - gText_Rom_55D0CC) > 0x4
	.error "gText_Rom_55D0CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D0CC) < 0x4
	.space 0x4 - (. - gText_Rom_55D0CC)
	.endif
	.incbin "baserom.gba", 0x55d0d0, 0x70

	@ src/data/script_menu.h:156 script_menu_line_156
	.globl gText_Rom_55D140
gText_Rom_55D140: @ 0x0855D140
	.string "やけどなおし$"
	.if (. - gText_Rom_55D140) > 0x7
	.error "gText_Rom_55D140 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D140) < 0x7
	.space 0x7 - (. - gText_Rom_55D140)
	.endif
	.incbin "baserom.gba", 0x55d147, 0x1b1

	@ src/data/script_menu.h:983 sText_FreshWater
	.globl gText_Rom_55D2F8
gText_Rom_55D2F8: @ 0x0855D2F8
	.string "おいしいみず$"
	.if (. - gText_Rom_55D2F8) > 0x7
	.error "gText_Rom_55D2F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D2F8) < 0x7
	.space 0x7 - (. - gText_Rom_55D2F8)
	.endif
	.incbin "baserom.gba", 0x55d2ff, 0x21

	@ src/data/script_menu.h:984 sText_SodaPop
	.globl gText_Rom_55D320
gText_Rom_55D320: @ 0x0855D320
	.string "サイコソーダ$"
	.if (. - gText_Rom_55D320) > 0x7
	.error "gText_Rom_55D320 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D320) < 0x7
	.space 0x7 - (. - gText_Rom_55D320)
	.endif
	.incbin "baserom.gba", 0x55d327, 0x21

	@ src/data/script_menu.h:985 sText_Lemonade
	.globl gText_Rom_55D348
gText_Rom_55D348: @ 0x0855D348
	.string "ミックスオレ$"
	.if (. - gText_Rom_55D348) > 0x7
	.error "gText_Rom_55D348 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D348) < 0x7
	.space 0x7 - (. - gText_Rom_55D348)
	.endif
	.incbin "baserom.gba", 0x55d34f, 0x1b1

	@ src/data/script_menu.h:256 script_menu_line_256 (+1 aliases)
	.globl gText_Rom_55D500
gText_Rom_55D500: @ 0x0855D500
	.string "あおいビードロ$"
	.if (. - gText_Rom_55D500) > 0x8
	.error "gText_Rom_55D500 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D500) < 0x8
	.space 0x8 - (. - gText_Rom_55D500)
	.endif
	.incbin "baserom.gba", 0x55d508, 0x20

	@ src/data/script_menu.h:257 script_menu_line_257 (+1 aliases)
	.globl gText_Rom_55D528
gText_Rom_55D528: @ 0x0855D528
	.string "きいろビードロ$"
	.if (. - gText_Rom_55D528) > 0x8
	.error "gText_Rom_55D528 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D528) < 0x8
	.space 0x8 - (. - gText_Rom_55D528)
	.endif
	.incbin "baserom.gba", 0x55d530, 0x20

	@ src/data/script_menu.h:258 script_menu_line_258 (+1 aliases)
	.globl gText_Rom_55D550
gText_Rom_55D550: @ 0x0855D550
	.string "あかいビードロ$"
	.if (. - gText_Rom_55D550) > 0x8
	.error "gText_Rom_55D550 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D550) < 0x8
	.space 0x8 - (. - gText_Rom_55D550)
	.endif
	.incbin "baserom.gba", 0x55d558, 0x20

	@ src/data/script_menu.h:260 script_menu_line_260 (+1 aliases)
	.globl gText_Rom_55D578
gText_Rom_55D578: @ 0x0855D578
	.string "くろいビードロ$"
	.if (. - gText_Rom_55D578) > 0x8
	.error "gText_Rom_55D578 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D578) < 0x8
	.space 0x8 - (. - gText_Rom_55D578)
	.endif
	.incbin "baserom.gba", 0x55d580, 0x20

	@ src/data/script_menu.h:259 script_menu_line_259 (+1 aliases)
	.globl gText_Rom_55D5A0
gText_Rom_55D5A0: @ 0x0855D5A0
	.string "しろいビードロ$"
	.if (. - gText_Rom_55D5A0) > 0x8
	.error "gText_Rom_55D5A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D5A0) < 0x8
	.space 0x8 - (. - gText_Rom_55D5A0)
	.endif
	.incbin "baserom.gba", 0x55d5a8, 0xc0

	@ src/data/script_menu.h:335 gText_RedShard
	.globl gText_Rom_55D668
gText_Rom_55D668: @ 0x0855D668
	.string "あかいかけら$"
	.if (. - gText_Rom_55D668) > 0x7
	.error "gText_Rom_55D668 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D668) < 0x7
	.space 0x7 - (. - gText_Rom_55D668)
	.endif
	.incbin "baserom.gba", 0x55d66f, 0x21

	@ src/data/script_menu.h:337 gText_BlueShard
	.globl gText_Rom_55D690
gText_Rom_55D690: @ 0x0855D690
	.string "あおいかけら$"
	.if (. - gText_Rom_55D690) > 0x7
	.error "gText_Rom_55D690 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D690) < 0x7
	.space 0x7 - (. - gText_Rom_55D690)
	.endif
	.incbin "baserom.gba", 0x55d697, 0x21

	@ src/data/script_menu.h:336 gText_YellowShard
	.globl gText_Rom_55D6B8
gText_Rom_55D6B8: @ 0x0855D6B8
	.string "きいろいかけら$"
	.if (. - gText_Rom_55D6B8) > 0x8
	.error "gText_Rom_55D6B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D6B8) < 0x8
	.space 0x8 - (. - gText_Rom_55D6B8)
	.endif
	.incbin "baserom.gba", 0x55d6c0, 0x20

	@ src/data/script_menu.h:338 gText_GreenShard
	.globl gText_Rom_55D6E0
gText_Rom_55D6E0: @ 0x0855D6E0
	.string "みどりのかけら$"
	.if (. - gText_Rom_55D6E0) > 0x8
	.error "gText_Rom_55D6E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D6E0) < 0x8
	.space 0x8 - (. - gText_Rom_55D6E0)
	.endif
	.incbin "baserom.gba", 0x55d6e8, 0xaec

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E1D4
gText_Rom_55E1D4: @ 0x0855E1D4
	.string "メール$"
	.if (. - gText_Rom_55E1D4) > 0x4
	.error "gText_Rom_55E1D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E1D4) < 0x4
	.space 0x4 - (. - gText_Rom_55E1D4)
	.endif
	.incbin "baserom.gba", 0x55e1d8, 0x20

	@ src/data/script_menu.h:157 script_menu_line_157
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55E1F8
gText_Rom_55E1F8: @ 0x0855E1F8
	.string "ハーバーメール$"
	.if (. - gText_Rom_55E1F8) != 0x8
	.error "gText_Rom_55E1F8 must retain its original byte length"
	.endif
	.globl gText_Rom_55E1FC
	.set gText_Rom_55E1FC, gText_Rom_55E1F8 + 0x4
	.incbin "baserom.gba", 0x55e200, 0x24

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E224
gText_Rom_55E224: @ 0x0855E224
	.string "メール$"
	.if (. - gText_Rom_55E224) > 0x4
	.error "gText_Rom_55E224 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E224) < 0x4
	.space 0x4 - (. - gText_Rom_55E224)
	.endif
	.incbin "baserom.gba", 0x55e228, 0x25

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E24D
gText_Rom_55E24D: @ 0x0855E24D
	.string "メール$"
	.if (. - gText_Rom_55E24D) > 0x4
	.error "gText_Rom_55E24D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E24D) < 0x4
	.space 0x4 - (. - gText_Rom_55E24D)
	.endif
	.incbin "baserom.gba", 0x55e251, 0x23

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E274
gText_Rom_55E274: @ 0x0855E274
	.string "メール$"
	.if (. - gText_Rom_55E274) > 0x4
	.error "gText_Rom_55E274 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E274) < 0x4
	.space 0x4 - (. - gText_Rom_55E274)
	.endif
	.incbin "baserom.gba", 0x55e278, 0x23

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E29B
gText_Rom_55E29B: @ 0x0855E29B
	.string "メール$"
	.if (. - gText_Rom_55E29B) > 0x4
	.error "gText_Rom_55E29B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E29B) < 0x4
	.space 0x4 - (. - gText_Rom_55E29B)
	.endif
	.incbin "baserom.gba", 0x55e29f, 0x26

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E2C5
gText_Rom_55E2C5: @ 0x0855E2C5
	.string "メール$"
	.if (. - gText_Rom_55E2C5) > 0x4
	.error "gText_Rom_55E2C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E2C5) < 0x4
	.space 0x4 - (. - gText_Rom_55E2C5)
	.endif
	.incbin "baserom.gba", 0x55e2c9, 0x23

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E2EC
gText_Rom_55E2EC: @ 0x0855E2EC
	.string "メール$"
	.if (. - gText_Rom_55E2EC) > 0x4
	.error "gText_Rom_55E2EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E2EC) < 0x4
	.space 0x4 - (. - gText_Rom_55E2EC)
	.endif
	.incbin "baserom.gba", 0x55e2f0, 0x25

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E315
gText_Rom_55E315: @ 0x0855E315
	.string "メール$"
	.if (. - gText_Rom_55E315) > 0x4
	.error "gText_Rom_55E315 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E315) < 0x4
	.space 0x4 - (. - gText_Rom_55E315)
	.endif
	.incbin "baserom.gba", 0x55e319, 0x23

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E33C
gText_Rom_55E33C: @ 0x0855E33C
	.string "メール$"
	.if (. - gText_Rom_55E33C) > 0x4
	.error "gText_Rom_55E33C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E33C) < 0x4
	.space 0x4 - (. - gText_Rom_55E33C)
	.endif
	.incbin "baserom.gba", 0x55e340, 0x24

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E364
gText_Rom_55E364: @ 0x0855E364
	.string "メール$"
	.if (. - gText_Rom_55E364) > 0x4
	.error "gText_Rom_55E364 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E364) < 0x4
	.space 0x4 - (. - gText_Rom_55E364)
	.endif
	.incbin "baserom.gba", 0x55e368, 0x23

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E38B
gText_Rom_55E38B: @ 0x0855E38B
	.string "メール$"
	.if (. - gText_Rom_55E38B) > 0x4
	.error "gText_Rom_55E38B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E38B) < 0x4
	.space 0x4 - (. - gText_Rom_55E38B)
	.endif
	.incbin "baserom.gba", 0x55e38f, 0x6b1

	@ src/battle_message.c:180 sText_EnigmaBerry
	.globl gText_Rom_55EA40
gText_Rom_55EA40: @ 0x0855EA40
	.string "ナゾのみ$"
	.if (. - gText_Rom_55EA40) > 0x5
	.error "gText_Rom_55EA40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55EA40) < 0x5
	.space 0x5 - (. - gText_Rom_55EA40)
	.endif
	.incbin "baserom.gba", 0x55ea45, 0x2a3

	@ src/data/script_menu.h:249 script_menu_line_249
	.globl gText_Rom_55ECE8
gText_Rom_55ECE8: @ 0x0855ECE8
	.string "しんかいのキバ$"
	.if (. - gText_Rom_55ECE8) > 0x8
	.error "gText_Rom_55ECE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ECE8) < 0x8
	.space 0x8 - (. - gText_Rom_55ECE8)
	.endif
	.incbin "baserom.gba", 0x55ecf0, 0x20

	@ src/data/script_menu.h:250 script_menu_line_250
	.globl gText_Rom_55ED10
gText_Rom_55ED10: @ 0x0855ED10
	.string "しんかいのウロコ$"
	.if (. - gText_Rom_55ED10) > 0x9
	.error "gText_Rom_55ED10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ED10) < 0x9
	.space 0x9 - (. - gText_Rom_55ED10)
	.endif
	.incbin "baserom.gba", 0x55ed19, 0x9b

	@ src/data/easy_chat/easy_chat_group_trainer.h:52 easy_chat_group_trainer_line_52 (+3 aliases)
	.globl gText_Rom_55EDB4
gText_Rom_55EDB4: @ 0x0855EDB4
	.string "タマゴ$"
	.if (. - gText_Rom_55EDB4) > 0x4
	.error "gText_Rom_55EDB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55EDB4) < 0x4
	.space 0x4 - (. - gText_Rom_55EDB4)
	.endif
	.incbin "baserom.gba", 0x55edb8, 0x254

	@ src/battle_debug.c:349 battle_debug_line_349 (+5 aliases)
	.globl gText_Rom_55F00C
gText_Rom_55F00C: @ 0x0855F00C
	.string "こおり$"
	.if (. - gText_Rom_55F00C) > 0x4
	.error "gText_Rom_55F00C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55F00C) < 0x4
	.space 0x4 - (. - gText_Rom_55F00C)
	.endif
	.incbin "baserom.gba", 0x55f010, 0x753

	@ src/data/easy_chat/easy_chat_group_hobbies.h:130 easy_chat_group_hobbies_line_130
	.globl gText_Rom_55F763
gText_Rom_55F763: @ 0x0855F763
	.string "じてんしゃ$"
	.if (. - gText_Rom_55F763) > 0x6
	.error "gText_Rom_55F763 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55F763) < 0x6
	.space 0x6 - (. - gText_Rom_55F763)
	.endif
	.incbin "baserom.gba", 0x55f769, 0x4c

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:214 easy_chat_group_lifestyle_line_214
	.globl gText_Rom_55F7B5
gText_Rom_55F7B5: @ 0x0855F7B5
	.string "マシン$"
	.if (. - gText_Rom_55F7B5) > 0x4
	.error "gText_Rom_55F7B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55F7B5) < 0x4
	.space 0x4 - (. - gText_Rom_55F7B5)
	.endif
	.incbin "baserom.gba", 0x55f7b9, 0x1b2

	@ src/data/easy_chat/easy_chat_group_hobbies.h:130 easy_chat_group_hobbies_line_130
	.globl gText_Rom_55F96B
gText_Rom_55F96B: @ 0x0855F96B
	.string "じてんしゃ$"
	.if (. - gText_Rom_55F96B) > 0x6
	.error "gText_Rom_55F96B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55F96B) < 0x6
	.space 0x6 - (. - gText_Rom_55F96B)
	.endif
	.incbin "baserom.gba", 0x55f971, 0x4c

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:136 easy_chat_group_lifestyle_line_136
	.globl gText_Rom_55F9BD
gText_Rom_55F9BD: @ 0x0855F9BD
	.string "てがみ$"
	.if (. - gText_Rom_55F9BD) > 0x4
	.error "gText_Rom_55F9BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55F9BD) < 0x4
	.space 0x4 - (. - gText_Rom_55F9BD)
	.endif
	.incbin "baserom.gba", 0x55f9c1, 0x1d7

	@ src/data/script_menu.h:630 script_menu_line_630
	.globl gText_Rom_55FB98
gText_Rom_55FB98: @ 0x0855FB98
	.string "ねっこのカセキ$"
	.if (. - gText_Rom_55FB98) > 0x8
	.error "gText_Rom_55FB98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55FB98) < 0x8
	.space 0x8 - (. - gText_Rom_55FB98)
	.endif
	.incbin "baserom.gba", 0x55fba0, 0x20

	@ src/data/script_menu.h:629 script_menu_line_629
	.globl gText_Rom_55FBC0
gText_Rom_55FBC0: @ 0x0855FBC0
	.string "ツメのカセキ$"
	.if (. - gText_Rom_55FBC0) > 0x7
	.error "gText_Rom_55FBC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55FBC0) < 0x7
	.space 0x7 - (. - gText_Rom_55FBC0)
	.endif
	.incbin "baserom.gba", 0x55fbc7, 0xa71

	@ src/data/script_menu.h:1036 sText_OldAmber
	.globl gText_Rom_560638
gText_Rom_560638: @ 0x08560638
	.string "ひみつのコハク$"
	.if (. - gText_Rom_560638) > 0x8
	.error "gText_Rom_560638 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_560638) < 0x8
	.space 0x8 - (. - gText_Rom_560638)
	.endif
	.incbin "baserom.gba", 0x560640, 0x70

	@ src/data/script_menu.h:1034 sText_HelixFossil
	.globl gText_Rom_5606B0
gText_Rom_5606B0: @ 0x085606B0
	.string "かいのカセキ$"
	.if (. - gText_Rom_5606B0) > 0x7
	.error "gText_Rom_5606B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5606B0) < 0x7
	.space 0x7 - (. - gText_Rom_5606B0)
	.endif
	.incbin "baserom.gba", 0x5606b7, 0x21

	@ src/data/script_menu.h:1035 sText_DomeFossil
	.globl gText_Rom_5606D8
gText_Rom_5606D8: @ 0x085606D8
	.string "こうらのカセキ$"
	.if (. - gText_Rom_5606D8) > 0x8
	.error "gText_Rom_5606D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5606D8) < 0x8
	.space 0x8 - (. - gText_Rom_5606D8)
	.endif
	.incbin "baserom.gba", 0x5606e0, 0x48

	@ src/data/easy_chat/easy_chat_group_hobbies.h:130 easy_chat_group_hobbies_line_130
	.globl gText_Rom_560728
gText_Rom_560728: @ 0x08560728
	.string "じてんしゃ$"
	.if (. - gText_Rom_560728) > 0x6
	.error "gText_Rom_560728 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_560728) < 0x6
	.space 0x6 - (. - gText_Rom_560728)
	.endif
	.incbin "baserom.gba", 0x56072e, 0xed

	@ src/data/decoration/header.h:636 header_line_636 (+1 aliases)
	.globl gText_Rom_56081B
gText_Rom_56081B: @ 0x0856081B
	.string "テレビ$"
	.if (. - gText_Rom_56081B) > 0x4
	.error "gText_Rom_56081B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_56081B) < 0x4
	.space 0x4 - (. - gText_Rom_56081B)
	.endif
	.incbin "baserom.gba", 0x56081f, 0x111

	@ src/data/easy_chat/easy_chat_group_trainer.h:106 easy_chat_group_trainer_line_106 (+1 aliases)
	.globl gText_Rom_560930
gText_Rom_560930: @ 0x08560930
	.string "ルビー$"
	.if (. - gText_Rom_560930) > 0x4
	.error "gText_Rom_560930 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_560930) < 0x4
	.space 0x4 - (. - gText_Rom_560930)
	.endif
	.incbin "baserom.gba", 0x560934, 0x24

	@ src/data/easy_chat/easy_chat_group_trainer.h:22 easy_chat_group_trainer_line_22 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_560958
gText_Rom_560958: @ 0x08560958
	.string "サファイア$"
	.if (. - gText_Rom_560958) != 0x6
	.error "gText_Rom_560958 must retain its original byte length"
	.endif
	.globl gText_Rom_560959
	.set gText_Rom_560959, gText_Rom_560958 + 0x1
	.incbin "baserom.gba", 0x56095e, 0x72
	.globl gUnknown_85609D0
gUnknown_85609D0: @ 0x085609D0
	.incbin "baserom.gba", 0x5609d0, 0x4
	.globl gUnknown_85609D4
gUnknown_85609D4: @ 0x085609D4
	.incbin "baserom.gba", 0x5609d4, 0x4
	.globl gUnknown_85609D8
gUnknown_85609D8: @ 0x085609D8
	.incbin "baserom.gba", 0x5609d8, 0x5c
	.globl gUnknown_8560A34
gUnknown_8560A34: @ 0x08560A34
	.incbin "baserom.gba", 0x560a34, 0x18
	.globl gUnknown_8560A4C
gUnknown_8560A4C: @ 0x08560A4C
	.incbin "baserom.gba", 0x560a4c, 0x20
	.globl gUnknown_8560A6C
gUnknown_8560A6C: @ 0x08560A6C
	.incbin "baserom.gba", 0x560a6c, 0x10
	.globl gUnknown_8560A7C
gUnknown_8560A7C: @ 0x08560A7C
	.incbin "baserom.gba", 0x560a7c, 0x68
	.globl gUnknown_8560AE4
gUnknown_8560AE4: @ 0x08560AE4
	.incbin "baserom.gba", 0x560ae4, 0x30
	.globl gUnknown_8560B14
gUnknown_8560B14: @ 0x08560B14
	.incbin "baserom.gba", 0x560b14, 0x8
	.globl gUnknown_8560B1C
gUnknown_8560B1C: @ 0x08560B1C
	.incbin "baserom.gba", 0x560b1c, 0x10
	.globl gUnknown_8560B2C
gUnknown_8560B2C: @ 0x08560B2C
	.incbin "baserom.gba", 0x560b2c, 0x20
	.globl gUnknown_8560B4C
gUnknown_8560B4C: @ 0x08560B4C
	.incbin "baserom.gba", 0x560b4c, 0x18
	.globl gUnknown_8560B64
gUnknown_8560B64: @ 0x08560B64
	.incbin "baserom.gba", 0x560b64, 0x8
	.globl gUnknown_8560B6C
gUnknown_8560B6C: @ 0x08560B6C
	.incbin "baserom.gba", 0x560b6c, 0x8
	.globl gUnknown_8560B74
gUnknown_8560B74: @ 0x08560B74
	.incbin "baserom.gba", 0x560b74, 0x8
	.globl gUnknown_8560B7C
gUnknown_8560B7C: @ 0x08560B7C
	.incbin "baserom.gba", 0x560b7c, 0x18
	.globl gUnknown_8560B94
gUnknown_8560B94: @ 0x08560B94
	.incbin "baserom.gba", 0x560b94, 0x20
	.globl gUnknown_8560BB4
gUnknown_8560BB4: @ 0x08560BB4
	.incbin "baserom.gba", 0x560bb4, 0xf8
	.globl gUnknown_8560CAC
gUnknown_8560CAC: @ 0x08560CAC
	.incbin "baserom.gba", 0x560cac, 0x48
	.globl gUnknown_8560CF4
gUnknown_8560CF4: @ 0x08560CF4
	.incbin "baserom.gba", 0x560cf4, 0x80
	.globl gUnknown_8560D74
gUnknown_8560D74: @ 0x08560D74
	.incbin "baserom.gba", 0x560d74, 0xf8
	.globl gUnknown_8560E6C
gUnknown_8560E6C: @ 0x08560E6C
	.incbin "baserom.gba", 0x560e6c, 0x14
	.globl gUnknown_8560E80
gUnknown_8560E80: @ 0x08560E80
	.incbin "baserom.gba", 0x560e80, 0x18
	.globl gUnknown_8560E98
gUnknown_8560E98: @ 0x08560E98
	.incbin "baserom.gba", 0x560e98, 0x10
	.globl gUnknown_8560EA8
gUnknown_8560EA8: @ 0x08560EA8
	.incbin "baserom.gba", 0x560ea8, 0x80
	.globl gUnknown_8560F28
gUnknown_8560F28: @ 0x08560F28
	.incbin "baserom.gba", 0x560f28, 0x76

	@ src/data/trainers.h:33929 trainers_line_33929
	.globl gText_Rom_560F9E
gText_Rom_560F9E: @ 0x08560F9E
	.string "ヨシノリ$"
	.if (. - gText_Rom_560F9E) > 0x5
	.error "gText_Rom_560F9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_560F9E) < 0x5
	.space 0x5 - (. - gText_Rom_560F9E)
	.endif
	.incbin "baserom.gba", 0x560fa3, 0x85
	.globl gUnknown_8561028
gUnknown_8561028: @ 0x08561028
	.incbin "baserom.gba", 0x561028, 0x1c4

	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_5611EC
gText_Rom_5611EC: @ 0x085611EC
	.string "ちゃん$"
	.if (. - gText_Rom_5611EC) > 0x4
	.error "gText_Rom_5611EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5611EC) < 0x4
	.space 0x4 - (. - gText_Rom_5611EC)
	.endif
	.incbin "baserom.gba", 0x5611f0, 0x3c

	@ src/data/trainers.h:16146 trainers_line_16146
	.globl gText_Rom_56122C
gText_Rom_56122C: @ 0x0856122C
	.string "タロウ$"
	.if (. - gText_Rom_56122C) > 0x4
	.error "gText_Rom_56122C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_56122C) < 0x4
	.space 0x4 - (. - gText_Rom_56122C)
	.endif
	.incbin "baserom.gba", 0x561230, 0xbc

	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_5612EC
gText_Rom_5612EC: @ 0x085612EC
	.string "ちゃん$"
	.if (. - gText_Rom_5612EC) > 0x4
	.error "gText_Rom_5612EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5612EC) < 0x4
	.space 0x4 - (. - gText_Rom_5612EC)
	.endif
	.incbin "baserom.gba", 0x5612f0, 0x13c

	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_56142C
gText_Rom_56142C: @ 0x0856142C
	.string "ちゃん$"
	.if (. - gText_Rom_56142C) > 0x4
	.error "gText_Rom_56142C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_56142C) < 0x4
	.space 0x4 - (. - gText_Rom_56142C)
	.endif
	.incbin "baserom.gba", 0x561430, 0x3b

	@ src/data/trainers.h:9234 trainers_line_9234 (+4 aliases)
	.globl gText_Rom_56146B
gText_Rom_56146B: @ 0x0856146B
	.string "ジョー$"
	.if (. - gText_Rom_56146B) > 0x4
	.error "gText_Rom_56146B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_56146B) < 0x4
	.space 0x4 - (. - gText_Rom_56146B)
	.endif
	.incbin "baserom.gba", 0x56146f, 0x148

	@ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
	.globl gText_Rom_5615B7
gText_Rom_5615B7: @ 0x085615B7
	.string "ジロウ$"
	.if (. - gText_Rom_5615B7) > 0x4
	.error "gText_Rom_5615B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5615B7) < 0x4
	.space 0x4 - (. - gText_Rom_5615B7)
	.endif
	.incbin "baserom.gba", 0x5615bb, 0x171

	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_56172C
gText_Rom_56172C: @ 0x0856172C
	.string "ちゃん$"
	.if (. - gText_Rom_56172C) > 0x4
	.error "gText_Rom_56172C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_56172C) < 0x4
	.space 0x4 - (. - gText_Rom_56172C)
	.endif
	.incbin "baserom.gba", 0x561730, 0x1bc

	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_5618EC
gText_Rom_5618EC: @ 0x085618EC
	.string "ちゃん$"
	.if (. - gText_Rom_5618EC) > 0x4
	.error "gText_Rom_5618EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5618EC) < 0x4
	.space 0x4 - (. - gText_Rom_5618EC)
	.endif
	.incbin "baserom.gba", 0x5618f0, 0x2ba

	@ src/data/easy_chat/easy_chat_group_adjectives.h:160 easy_chat_group_adjectives_line_160
	.globl gText_Rom_561BAA
gText_Rom_561BAA: @ 0x08561BAA
	.string "ブルブル$"
	.if (. - gText_Rom_561BAA) > 0x5
	.error "gText_Rom_561BAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_561BAA) < 0x5
	.space 0x5 - (. - gText_Rom_561BAA)
	.endif
	.incbin "baserom.gba", 0x561baf, 0x108

	@ src/data/trainers.h:16146 trainers_line_16146
	.globl gText_Rom_561CB7
gText_Rom_561CB7: @ 0x08561CB7
	.string "タロウ$"
	.if (. - gText_Rom_561CB7) > 0x4
	.error "gText_Rom_561CB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_561CB7) < 0x4
	.space 0x4 - (. - gText_Rom_561CB7)
	.endif
	.incbin "baserom.gba", 0x561cbb, 0x3f1

	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_5620AC
gText_Rom_5620AC: @ 0x085620AC
	.string "ちゃん$"
	.if (. - gText_Rom_5620AC) > 0x4
	.error "gText_Rom_5620AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5620AC) < 0x4
	.space 0x4 - (. - gText_Rom_5620AC)
	.endif
	.incbin "baserom.gba", 0x5620b0, 0x4bb

	@ src/data/trainers.h:16146 trainers_line_16146
	.globl gText_Rom_56256B
gText_Rom_56256B: @ 0x0856256B
	.string "タロウ$"
	.if (. - gText_Rom_56256B) > 0x4
	.error "gText_Rom_56256B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_56256B) < 0x4
	.space 0x4 - (. - gText_Rom_56256B)
	.endif
	.incbin "baserom.gba", 0x56256f, 0x246

	@ src/data/trainers.h:36047 trainers_line_36047
	.globl gText_Rom_5627B5
gText_Rom_5627B5: @ 0x085627B5
	.string "ユウゴ$"
	.if (. - gText_Rom_5627B5) > 0x4
	.error "gText_Rom_5627B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5627B5) < 0x4
	.space 0x4 - (. - gText_Rom_5627B5)
	.endif
	.incbin "baserom.gba", 0x5627b9, 0x6f
	.globl gUnknown_8562828
gUnknown_8562828: @ 0x08562828
	.incbin "baserom.gba", 0x562828, 0x60
	.globl gUnknown_8562888
gUnknown_8562888: @ 0x08562888
	.incbin "baserom.gba", 0x562888, 0x20
	.globl gUnknown_85628A8
gUnknown_85628A8: @ 0x085628A8
	.incbin "baserom.gba", 0x5628a8, 0x68
	.globl gUnknown_8562910
gUnknown_8562910: @ 0x08562910
	.incbin "baserom.gba", 0x562910, 0x60
	.globl gUnknown_8562970
gUnknown_8562970: @ 0x08562970
	.incbin "baserom.gba", 0x562970, 0x1c
	.globl gUnknown_856298C
gUnknown_856298C: @ 0x0856298C
	.incbin "baserom.gba", 0x56298c, 0x8
	.globl gUnknown_8562994
gUnknown_8562994: @ 0x08562994
	.incbin "baserom.gba", 0x562994, 0x18
	.globl gUnknown_85629AC
gUnknown_85629AC: @ 0x085629AC
	.incbin "baserom.gba", 0x5629ac, 0x10
	.globl gUnknown_85629BC
gUnknown_85629BC: @ 0x085629BC
	.incbin "baserom.gba", 0x5629bc, 0x8
	.globl gUnknown_85629C4
gUnknown_85629C4: @ 0x085629C4
	.incbin "baserom.gba", 0x5629c4, 0x8
	.globl gUnknown_85629CC
gUnknown_85629CC: @ 0x085629CC
	.incbin "baserom.gba", 0x5629cc, 0x18
	.globl gUnknown_85629E4
gUnknown_85629E4: @ 0x085629E4
	.incbin "baserom.gba", 0x5629e4, 0x10
	.globl gUnknown_85629F4
gUnknown_85629F4: @ 0x085629F4
	.incbin "baserom.gba", 0x5629f4, 0x38
	.globl gUnknown_8562A2C
gUnknown_8562A2C: @ 0x08562A2C
	.incbin "baserom.gba", 0x562a2c, 0x8
	.globl gUnknown_8562A34
gUnknown_8562A34: @ 0x08562A34
	.incbin "baserom.gba", 0x562a34, 0xa
	.globl gUnknown_8562A3E
gUnknown_8562A3E: @ 0x08562A3E
	.incbin "baserom.gba", 0x562a3e, 0x6
	.globl gUnknown_8562A44
gUnknown_8562A44: @ 0x08562A44
	.incbin "baserom.gba", 0x562a44, 0x6
	.globl gUnknown_8562A4A
gUnknown_8562A4A: @ 0x08562A4A
	.incbin "baserom.gba", 0x562a4a, 0x6
	.globl gUnknown_8562A50
gUnknown_8562A50: @ 0x08562A50
	.incbin "baserom.gba", 0x562a50, 0x6
	.globl gUnknown_8562A56
gUnknown_8562A56: @ 0x08562A56
	.incbin "baserom.gba", 0x562a56, 0x6
	.globl gUnknown_8562A5C
gUnknown_8562A5C: @ 0x08562A5C
	.incbin "baserom.gba", 0x562a5c, 0x6
	.globl gUnknown_8562A62
gUnknown_8562A62: @ 0x08562A62
	.incbin "baserom.gba", 0x562a62, 0x37d

	@ src/data/easy_chat/easy_chat_group_feelings.h:59 gEasyChatWord_Rare (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_562DDF
gText_Rom_562DDF: @ 0x08562DDF
	.string "めずらしい$"
	.if (. - gText_Rom_562DDF) != 0x6
	.error "gText_Rom_562DDF must retain its original byte length"
	.endif
	.globl gText_Rom_562DE1
	.set gText_Rom_562DE1, gText_Rom_562DDF + 0x2
	.incbin "baserom.gba", 0x562de5, 0x10a

	@ src/data/easy_chat/easy_chat_group_feelings.h:59 gEasyChatWord_Rare (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_562EEF
gText_Rom_562EEF: @ 0x08562EEF
	.string "めずらしい$"
	.if (. - gText_Rom_562EEF) != 0x6
	.error "gText_Rom_562EEF must retain its original byte length"
	.endif
	.globl gText_Rom_562EF1
	.set gText_Rom_562EF1, gText_Rom_562EEF + 0x2
	.incbin "baserom.gba", 0x562ef5, 0x1b5

	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_5630AA
gText_Rom_5630AA: @ 0x085630AA
	.string "ている$"
	.if (. - gText_Rom_5630AA) > 0x4
	.error "gText_Rom_5630AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5630AA) < 0x4
	.space 0x4 - (. - gText_Rom_5630AA)
	.endif
	.incbin "baserom.gba", 0x5630ae, 0x86
	.globl gUnknown_8563134
gUnknown_8563134: @ 0x08563134
	.incbin "baserom.gba", 0x563134, 0x1c
	.globl gUnknown_8563150
gUnknown_8563150: @ 0x08563150
	.incbin "baserom.gba", 0x563150, 0x4b4
	.globl gUnknown_8563604
gUnknown_8563604: @ 0x08563604
	.incbin "baserom.gba", 0x563604, 0xac
	.globl gUnknown_85636B0
gUnknown_85636B0: @ 0x085636B0
	.incbin "baserom.gba", 0x5636b0, 0xb68
	.globl gUnknown_8564218
gUnknown_8564218: @ 0x08564218
	.incbin "baserom.gba", 0x564218, 0x388
	.globl gUnknown_85645A0
gUnknown_85645A0: @ 0x085645A0
	.incbin "baserom.gba", 0x5645a0, 0x78
	.globl gUnknown_8564618
gUnknown_8564618: @ 0x08564618
	.incbin "baserom.gba", 0x564618, 0x8
	.globl gUnknown_8564620
gUnknown_8564620: @ 0x08564620
	.incbin "baserom.gba", 0x564620, 0x1c
	.globl gUnknown_856463C
gUnknown_856463C: @ 0x0856463C
	.incbin "baserom.gba", 0x56463c, 0x10
	.globl gUnknown_856464C
gUnknown_856464C: @ 0x0856464C
	.incbin "baserom.gba", 0x56464c, 0x10
	.globl gUnknown_856465C
gUnknown_856465C: @ 0x0856465C
	.incbin "baserom.gba", 0x56465c, 0x10
	.globl gUnknown_856466C
gUnknown_856466C: @ 0x0856466C
	.incbin "baserom.gba", 0x56466c, 0x14
	.globl gUnknown_8564680
gUnknown_8564680: @ 0x08564680
	.incbin "baserom.gba", 0x564680, 0xc
	.globl gUnknown_856468C
gUnknown_856468C: @ 0x0856468C
	.incbin "baserom.gba", 0x56468c, 0xb8c
	.globl gUnknown_8565218
gUnknown_8565218: @ 0x08565218
	.incbin "baserom.gba", 0x565218, 0x40
	.globl gUnknown_8565258
gUnknown_8565258: @ 0x08565258
	.incbin "baserom.gba", 0x565258, 0xc0
	.globl gUnknown_8565318
gUnknown_8565318: @ 0x08565318
	.incbin "baserom.gba", 0x565318, 0x20c
	.globl gUnknown_8565524
gUnknown_8565524: @ 0x08565524
	.incbin "baserom.gba", 0x565524, 0xdc
	.globl gUnknown_8565600
gUnknown_8565600: @ 0x08565600
	.incbin "baserom.gba", 0x565600, 0xc8
	.globl gUnknown_85656C8
gUnknown_85656C8: @ 0x085656C8
	.incbin "baserom.gba", 0x5656c8, 0x190
	.globl gUnknown_8565858
gUnknown_8565858: @ 0x08565858
	.incbin "baserom.gba", 0x565858, 0x10

	@ src/naming_screen.c:2607 naming_screen_line_2607
	.globl gText_Rom_565868
gText_Rom_565868: @ 0x08565868
	.string "あなた の なまえは?$"
	.if (. - gText_Rom_565868) > 0xc
	.error "gText_Rom_565868 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_565868) < 0xc
	.space 0xc - (. - gText_Rom_565868)
	.endif

	@ src/naming_screen.c:2618 naming_screen_line_2618
	.globl gText_Rom_565874
gText_Rom_565874: @ 0x08565874
	.string "ボックス の なまえは?$"
	.if (. - gText_Rom_565874) > 0xd
	.error "gText_Rom_565874 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_565874) < 0xd
	.space 0xd - (. - gText_Rom_565874)
	.endif
	.incbin "baserom.gba", 0x565881, 0xe

	@ src/naming_screen.c:2640 naming_screen_line_2640
	.globl gText_Rom_56588F
gText_Rom_56588F: @ 0x0856588F
	.string "おじさんに ことばを おしえよう$"
	.if (. - gText_Rom_56588F) > 0x11
	.error "gText_Rom_56588F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_56588F) < 0x11
	.space 0x11 - (. - gText_Rom_56588F)
	.endif
	.globl gUnknown_85658A0
gUnknown_85658A0: @ 0x085658A0
	.incbin "baserom.gba", 0x5658a0, 0x21
	.globl gUnknown_85658C1
gUnknown_85658C1: @ 0x085658C1

	@ src/naming_screen.c:225 sText_AlphabetUpperLower
	.globl gText_Rom_5658C1
gText_Rom_5658C1: @ 0x085658C1
	.string "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz！$"
	.if (. - gText_Rom_5658C1) > 0x36
	.error "gText_Rom_5658C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5658C1) < 0x36
	.space 0x36 - (. - gText_Rom_5658C1)
	.endif
	.incbin "baserom.gba", 0x5658f7, 0x105
	.globl gUnknown_85659FC
gUnknown_85659FC: @ 0x085659FC
	.incbin "baserom.gba", 0x5659fc, 0x10
	.globl gUnknown_8565A0C
gUnknown_8565A0C: @ 0x08565A0C
	.incbin "baserom.gba", 0x565a0c, 0x30
	.globl gUnknown_8565A3C
gUnknown_8565A3C: @ 0x08565A3C
	.incbin "baserom.gba", 0x565a3c, 0x6
	.globl gUnknown_8565A42
gUnknown_8565A42: @ 0x08565A42
	.incbin "baserom.gba", 0x565a42, 0x6
	.globl gUnknown_8565A48
gUnknown_8565A48: @ 0x08565A48
	.incbin "baserom.gba", 0x565a48, 0x8
	.globl gUnknown_8565A50
gUnknown_8565A50: @ 0x08565A50
	.incbin "baserom.gba", 0x565a50, 0x10
	.globl gUnknown_8565A60
gUnknown_8565A60: @ 0x08565A60
	.incbin "baserom.gba", 0x565a60, 0x8
	.globl gUnknown_8565A68
gUnknown_8565A68: @ 0x08565A68
	.incbin "baserom.gba", 0x565a68, 0x8
	.globl gUnknown_8565A70
gUnknown_8565A70: @ 0x08565A70
	.incbin "baserom.gba", 0x565a70, 0x4
	.globl gUnknown_8565A74
gUnknown_8565A74: @ 0x08565A74
	.incbin "baserom.gba", 0x565a74, 0x10
	.globl gUnknown_8565A84
gUnknown_8565A84: @ 0x08565A84
	.incbin "baserom.gba", 0x565a84, 0x6
	.globl gUnknown_8565A8A
gUnknown_8565A8A: @ 0x08565A8A
	.incbin "baserom.gba", 0x565a8a, 0x6
	.globl gUnknown_8565A90
gUnknown_8565A90: @ 0x08565A90
	.incbin "baserom.gba", 0x565a90, 0x14
	.globl gUnknown_8565AA4
gUnknown_8565AA4: @ 0x08565AA4
	.incbin "baserom.gba", 0x565aa4, 0x10
	.globl gUnknown_8565AB4
gUnknown_8565AB4: @ 0x08565AB4
	.incbin "baserom.gba", 0x565ab4, 0xc
	.globl gUnknown_8565AC0
gUnknown_8565AC0: @ 0x08565AC0
	.incbin "baserom.gba", 0x565ac0, 0xa
	.globl gUnknown_8565ACA
gUnknown_8565ACA: @ 0x08565ACA
	.incbin "baserom.gba", 0x565aca, 0xa
	.globl gUnknown_8565AD4
gUnknown_8565AD4: @ 0x08565AD4
	.incbin "baserom.gba", 0x565ad4, 0x8
	.globl gUnknown_8565ADC
gUnknown_8565ADC: @ 0x08565ADC
	.incbin "baserom.gba", 0x565adc, 0x8
	.globl gUnknown_8565AE4
gUnknown_8565AE4: @ 0x08565AE4
	.incbin "baserom.gba", 0x565ae4, 0x14
	.globl gUnknown_8565AF8
gUnknown_8565AF8: @ 0x08565AF8
	.incbin "baserom.gba", 0x565af8, 0x8
	.globl gUnknown_8565B00
gUnknown_8565B00: @ 0x08565B00
	.incbin "baserom.gba", 0x565b00, 0x6
	.globl gUnknown_8565B06
gUnknown_8565B06: @ 0x08565B06
	.incbin "baserom.gba", 0x565b06, 0xb5

	@ src/text_input_strings.c:31 gText_UnionRoomChatKeyboard_56789Upper (+1 aliases)
	.globl gText_Rom_565BBB
gText_Rom_565BBB: @ 0x08565BBB
	.string "56789$"
	.if (. - gText_Rom_565BBB) > 0x6
	.error "gText_Rom_565BBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_565BBB) < 0x6
	.space 0x6 - (. - gText_Rom_565BBB)
	.endif
	.globl gUnknown_8565BC1
gUnknown_8565BC1: @ 0x08565BC1
	.incbin "baserom.gba", 0x565bc1, 0xba
	.globl gUnknown_8565C7B
gUnknown_8565C7B: @ 0x08565C7B
	.incbin "baserom.gba", 0x565c7b, 0x11
	.globl gUnknown_8565C8C
gUnknown_8565C8C: @ 0x08565C8C
	.incbin "baserom.gba", 0x565c8c, 0x4
	.globl gUnknown_8565C90
gUnknown_8565C90: @ 0x08565C90
	.incbin "baserom.gba", 0x565c90, 0xc
	.globl gUnknown_8565C9C
gUnknown_8565C9C: @ 0x08565C9C
	.incbin "baserom.gba", 0x565c9c, 0x18
	.globl gUnknown_8565CB4
gUnknown_8565CB4: @ 0x08565CB4
	.incbin "baserom.gba", 0x565cb4, 0x34
	.globl gUnknown_8565CE8
gUnknown_8565CE8: @ 0x08565CE8
	.incbin "baserom.gba", 0x565ce8, 0x80
	.globl gUnknown_8565D68
gUnknown_8565D68: @ 0x08565D68
	.incbin "baserom.gba", 0x565d68, 0x8
	.globl gUnknown_8565D70
gUnknown_8565D70: @ 0x08565D70
	.incbin "baserom.gba", 0x565d70, 0x18
	.globl gUnknown_8565D88
gUnknown_8565D88: @ 0x08565D88
	.incbin "baserom.gba", 0x565d88, 0x8
	.globl gUnknown_8565D90
gUnknown_8565D90: @ 0x08565D90
	.incbin "baserom.gba", 0x565d90, 0x48
	.globl gUnknown_8565DD8
gUnknown_8565DD8: @ 0x08565DD8
	.incbin "baserom.gba", 0x565dd8, 0x18
	.globl gUnknown_8565DF0
gUnknown_8565DF0: @ 0x08565DF0
	.incbin "baserom.gba", 0x565df0, 0x18
	.globl gUnknown_8565E08
gUnknown_8565E08: @ 0x08565E08
	.incbin "baserom.gba", 0x565e08, 0x18
	.globl gUnknown_8565E20
gUnknown_8565E20: @ 0x08565E20
	.incbin "baserom.gba", 0x565e20, 0x18
	.globl gUnknown_8565E38
gUnknown_8565E38: @ 0x08565E38
	.incbin "baserom.gba", 0x565e38, 0x18
	.globl gUnknown_8565E50
gUnknown_8565E50: @ 0x08565E50
	.incbin "baserom.gba", 0x565e50, 0x18
	.globl gUnknown_8565E68
gUnknown_8565E68: @ 0x08565E68
	.incbin "baserom.gba", 0x565e68, 0x18
	.globl gUnknown_8565E80
gUnknown_8565E80: @ 0x08565E80
	.incbin "baserom.gba", 0x565e80, 0x18
	.globl gUnknown_8565E98
gUnknown_8565E98: @ 0x08565E98
	.incbin "baserom.gba", 0x565e98, 0x18
	.globl gUnknown_8565EB0
gUnknown_8565EB0: @ 0x08565EB0
	.incbin "baserom.gba", 0x565eb0, 0x30
	.globl gUnknown_8565EE0
gUnknown_8565EE0: @ 0x08565EE0
	.incbin "baserom.gba", 0x565ee0, 0x68
	.globl gUnknown_8565F48
gUnknown_8565F48: @ 0x08565F48
	.incbin "baserom.gba", 0x565f48, 0x5c
	.globl gUnknown_8565FA4
gUnknown_8565FA4: @ 0x08565FA4
	.incbin "baserom.gba", 0x565fa4, 0x18
	.globl gUnknown_8565FBC
gUnknown_8565FBC: @ 0x08565FBC
	.incbin "baserom.gba", 0x565fbc, 0x8
	.globl gUnknown_8565FC4
gUnknown_8565FC4: @ 0x08565FC4
	.incbin "baserom.gba", 0x565fc4, 0x8
	.globl gUnknown_8565FCC
gUnknown_8565FCC: @ 0x08565FCC
	.incbin "baserom.gba", 0x565fcc, 0xb18
	.globl gUnknown_8566AE4
gUnknown_8566AE4: @ 0x08566AE4
	.incbin "baserom.gba", 0x566ae4, 0xc0
	.globl gUnknown_8566BA4
gUnknown_8566BA4: @ 0x08566BA4
	.incbin "baserom.gba", 0x566ba4, 0x40
	.globl gUnknown_8566BE4
gUnknown_8566BE4: @ 0x08566BE4
	.incbin "baserom.gba", 0x566be4, 0xc0
	.globl gUnknown_8566CA4
gUnknown_8566CA4: @ 0x08566CA4

	@ src/strings.c:990 gText_MixingRecords
	.globl gText_Rom_566CA4
gText_Rom_566CA4: @ 0x08566CA4
	.string "レコードを まぜています$"
	.if (. - gText_Rom_566CA4) > 0xd
	.error "gText_Rom_566CA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566CA4) < 0xd
	.space 0xd - (. - gText_Rom_566CA4)
	.endif
	.globl gUnknown_8566CB1
gUnknown_8566CB1: @ 0x08566CB1

	@ src/strings.c:991 gText_RecordMixingComplete
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_566CB1
gText_Rom_566CB1: @ 0x08566CB1
	.string "しゅうりょう しました\nおつかれさまでした$"
	.if (. - gText_Rom_566CB1) != 0x16
	.error "gText_Rom_566CB1 must retain its original byte length"
	.endif
	.globl gText_Rom_566CC3
	.set gText_Rom_566CC3, gText_Rom_566CB1 + 0x12
	.globl gUnknown_8566CC7
gUnknown_8566CC7: @ 0x08566CC7
	.incbin "baserom.gba", 0x566cc7, 0x2
	.globl gUnknown_8566CC9
gUnknown_8566CC9: @ 0x08566CC9
	.incbin "baserom.gba", 0x566cc9, 0x6
	.globl gUnknown_8566CCF
gUnknown_8566CCF: @ 0x08566CCF
	.incbin "baserom.gba", 0x566ccf, 0x24
	.globl gUnknown_8566CF3
gUnknown_8566CF3: @ 0x08566CF3
	.incbin "baserom.gba", 0x566cf3, 0x6
	.globl gUnknown_8566CF9
gUnknown_8566CF9: @ 0x08566CF9
	.incbin "baserom.gba", 0x566cf9, 0xf
	.globl gUnknown_8566D08
gUnknown_8566D08: @ 0x08566D08
	.incbin "baserom.gba", 0x566d08, 0x4
	.globl gUnknown_8566D0C
gUnknown_8566D0C: @ 0x08566D0C
	.incbin "baserom.gba", 0x566d0c, 0x20
	.globl gUnknown_8566D2C
gUnknown_8566D2C: @ 0x08566D2C
	.incbin "baserom.gba", 0x566d2c, 0x12

	@ src/data/easy_chat/easy_chat_group_time.h:64 easy_chat_group_time_line_64
	.globl gText_Rom_566D3E
gText_Rom_566D3E: @ 0x08566D3E
	.string "おわり$"
	.if (. - gText_Rom_566D3E) > 0x4
	.error "gText_Rom_566D3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566D3E) < 0x4
	.space 0x4 - (. - gText_Rom_566D3E)
	.endif
	.globl gUnknown_8566D42
gUnknown_8566D42: @ 0x08566D42
	.incbin "baserom.gba", 0x566d42, 0x4
	.globl gUnknown_8566D46
gUnknown_8566D46: @ 0x08566D46
	.incbin "baserom.gba", 0x566d46, 0x4
	.globl gUnknown_8566D4A
gUnknown_8566D4A: @ 0x08566D4A
	.incbin "baserom.gba", 0x566d4a, 0xc
	.globl gUnknown_8566D56
gUnknown_8566D56: @ 0x08566D56
	.incbin "baserom.gba", 0x566d56, 0xe
	.globl gUnknown_8566D64
gUnknown_8566D64: @ 0x08566D64
	.incbin "baserom.gba", 0x566d64, 0x10
	.globl gUnknown_8566D74
gUnknown_8566D74: @ 0x08566D74
	.incbin "baserom.gba", 0x566d74, 0x6

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_566D7A
gText_Rom_566D7A: @ 0x08566D7A
	.string "もどる$"
	.if (. - gText_Rom_566D7A) > 0x4
	.error "gText_Rom_566D7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566D7A) < 0x4
	.space 0x4 - (. - gText_Rom_566D7A)
	.endif
	.globl gUnknown_8566D7E
gUnknown_8566D7E: @ 0x08566D7E
	.incbin "baserom.gba", 0x566d7e, 0xb
	.globl gUnknown_8566D89
gUnknown_8566D89: @ 0x08566D89
	.incbin "baserom.gba", 0x566d89, 0x6

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566D8F
gText_Rom_566D8F: @ 0x08566D8F
	.string "………$"
	.if (. - gText_Rom_566D8F) > 0x4
	.error "gText_Rom_566D8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566D8F) < 0x4
	.space 0x4 - (. - gText_Rom_566D8F)
	.endif
	.globl gUnknown_8566D93
gUnknown_8566D93: @ 0x08566D93
	.incbin "baserom.gba", 0x566d93, 0x6

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566D99
gText_Rom_566D99: @ 0x08566D99
	.string "………$"
	.if (. - gText_Rom_566D99) > 0x4
	.error "gText_Rom_566D99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566D99) < 0x4
	.space 0x4 - (. - gText_Rom_566D99)
	.endif
	.globl gUnknown_8566D9D
gUnknown_8566D9D: @ 0x08566D9D
	.incbin "baserom.gba", 0x566d9d, 0x6

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566DA3
gText_Rom_566DA3: @ 0x08566DA3
	.string "………$"
	.if (. - gText_Rom_566DA3) > 0x4
	.error "gText_Rom_566DA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566DA3) < 0x4
	.space 0x4 - (. - gText_Rom_566DA3)
	.endif
	.globl gUnknown_8566DA7
gUnknown_8566DA7: @ 0x08566DA7
	.incbin "baserom.gba", 0x566da7, 0x6

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566DAD
gText_Rom_566DAD: @ 0x08566DAD
	.string "………$"
	.if (. - gText_Rom_566DAD) > 0x4
	.error "gText_Rom_566DAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566DAD) < 0x4
	.space 0x4 - (. - gText_Rom_566DAD)
	.endif
	.globl gUnknown_8566DB1
gUnknown_8566DB1: @ 0x08566DB1
	.incbin "baserom.gba", 0x566db1, 0x6

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566DB7
gText_Rom_566DB7: @ 0x08566DB7
	.string "………$"
	.if (. - gText_Rom_566DB7) > 0x4
	.error "gText_Rom_566DB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566DB7) < 0x4
	.space 0x4 - (. - gText_Rom_566DB7)
	.endif
	.globl gUnknown_8566DBB
gUnknown_8566DBB: @ 0x08566DBB
	.incbin "baserom.gba", 0x566dbb, 0xa
	.globl gUnknown_8566DC5
gUnknown_8566DC5: @ 0x08566DC5
	.incbin "baserom.gba", 0x566dc5, 0xa
	.globl gUnknown_8566DCF
gUnknown_8566DCF: @ 0x08566DCF
	.incbin "baserom.gba", 0x566dcf, 0x6

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566DD5
gText_Rom_566DD5: @ 0x08566DD5
	.string "………$"
	.if (. - gText_Rom_566DD5) > 0x4
	.error "gText_Rom_566DD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566DD5) < 0x4
	.space 0x4 - (. - gText_Rom_566DD5)
	.endif
	.globl gUnknown_8566DD9
gUnknown_8566DD9: @ 0x08566DD9
	.incbin "baserom.gba", 0x566dd9, 0xa
	.globl gUnknown_8566DE3
gUnknown_8566DE3: @ 0x08566DE3
	.incbin "baserom.gba", 0x566de3, 0x9
	.globl gUnknown_8566DEC
gUnknown_8566DEC: @ 0x08566DEC
	.incbin "baserom.gba", 0x566dec, 0x5

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566DF1
gText_Rom_566DF1: @ 0x08566DF1
	.string "………$"
	.if (. - gText_Rom_566DF1) > 0x4
	.error "gText_Rom_566DF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566DF1) < 0x4
	.space 0x4 - (. - gText_Rom_566DF1)
	.endif
	.globl gUnknown_8566DF5
gUnknown_8566DF5: @ 0x08566DF5
	.incbin "baserom.gba", 0x566df5, 0x5

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566DFA
gText_Rom_566DFA: @ 0x08566DFA
	.string "………$"
	.if (. - gText_Rom_566DFA) > 0x4
	.error "gText_Rom_566DFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566DFA) < 0x4
	.space 0x4 - (. - gText_Rom_566DFA)
	.endif
	.incbin "baserom.gba", 0x566dfe, 0x2
	.globl gUnknown_8566E00
gUnknown_8566E00: @ 0x08566E00
	.incbin "baserom.gba", 0x566e00, 0x40
	.globl gUnknown_8566E40
gUnknown_8566E40: @ 0x08566E40
	.incbin "baserom.gba", 0x566e40, 0x18
	.globl gUnknown_8566E58
gUnknown_8566E58: @ 0x08566E58
	.incbin "baserom.gba", 0x566e58, 0x5
	.globl gUnknown_8566E5D
gUnknown_8566E5D: @ 0x08566E5D
	.incbin "baserom.gba", 0x566e5d, 0x3
	.globl gUnknown_8566E60
gUnknown_8566E60: @ 0x08566E60
	.incbin "baserom.gba", 0x566e60, 0x4
	.globl gUnknown_8566E64
gUnknown_8566E64: @ 0x08566E64
	.incbin "baserom.gba", 0x566e64, 0x5
	.globl gUnknown_8566E69
gUnknown_8566E69: @ 0x08566E69
	.incbin "baserom.gba", 0x566e69, 0xf1f

	@ src/map_name_popup.c:325 sText_Pyramid
	.globl gText_Rom_567D88
gText_Rom_567D88: @ 0x08567D88
	.string "PYRAMID$"
	.if (. - gText_Rom_567D88) > 0x8
	.error "gText_Rom_567D88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_567D88) < 0x8
	.space 0x8 - (. - gText_Rom_567D88)
	.endif
	.incbin "baserom.gba", 0x567d90, 0x568
	.globl gUnknown_85682F8
gUnknown_85682F8: @ 0x085682F8
	.incbin "baserom.gba", 0x5682f8, 0x438
	.globl gUnknown_8568730
gUnknown_8568730: @ 0x08568730
	.incbin "baserom.gba", 0x568730, 0x348
	.globl gUnknown_8568A78
gUnknown_8568A78: @ 0x08568A78
	.incbin "baserom.gba", 0x568a78, 0x1c
	.globl gUnknown_8568A94
gUnknown_8568A94: @ 0x08568A94
	.incbin "baserom.gba", 0x568a94, 0x60
	.globl gUnknown_8568AF4
gUnknown_8568AF4: @ 0x08568AF4
	.incbin "baserom.gba", 0x568af4, 0x10
	.globl gUnknown_8568B04
gUnknown_8568B04: @ 0x08568B04
	.incbin "baserom.gba", 0x568b04, 0x8
	.globl gUnknown_8568B0C
gUnknown_8568B0C: @ 0x08568B0C
	.incbin "baserom.gba", 0x568b0c, 0xc
	.globl gUnknown_8568B18
gUnknown_8568B18: @ 0x08568B18
	.incbin "baserom.gba", 0x568b18, 0x8
	.globl gUnknown_8568B20
gUnknown_8568B20: @ 0x08568B20
	.incbin "baserom.gba", 0x568b20, 0x8
	.globl gUnknown_8568B28
gUnknown_8568B28: @ 0x08568B28
	.incbin "baserom.gba", 0x568b28, 0x18
	.globl gUnknown_8568B40
gUnknown_8568B40: @ 0x08568B40
	.incbin "baserom.gba", 0x568b40, 0x3c
	.globl gUnknown_8568B7C
gUnknown_8568B7C: @ 0x08568B7C
	.incbin "baserom.gba", 0x568b7c, 0xe
	.globl gUnknown_8568B8A
gUnknown_8568B8A: @ 0x08568B8A
	.incbin "baserom.gba", 0x568b8a, 0xe
	.globl gUnknown_8568B98
gUnknown_8568B98: @ 0x08568B98
	.incbin "baserom.gba", 0x568b98, 0x1c
	.globl gUnknown_8568BB4
gUnknown_8568BB4: @ 0x08568BB4
	.incbin "baserom.gba", 0x568bb4, 0x14
	.globl gUnknown_8568BC8
gUnknown_8568BC8: @ 0x08568BC8
	.incbin "baserom.gba", 0x568bc8, 0x14
	.globl gUnknown_8568BDC
gUnknown_8568BDC: @ 0x08568BDC
	.incbin "baserom.gba", 0x568bdc, 0x14
	.globl gUnknown_8568BF0
gUnknown_8568BF0: @ 0x08568BF0
	.incbin "baserom.gba", 0x568bf0, 0xc
	.globl gUnknown_8568BFC
gUnknown_8568BFC: @ 0x08568BFC
	.incbin "baserom.gba", 0x568bfc, 0x20
	.globl gUnknown_8568C1C
gUnknown_8568C1C: @ 0x08568C1C
	.incbin "baserom.gba", 0x568c1c, 0x18
	.globl gUnknown_8568C34
gUnknown_8568C34: @ 0x08568C34
	.incbin "baserom.gba", 0x568c34, 0x14
	.globl gUnknown_8568C48
gUnknown_8568C48: @ 0x08568C48
	.incbin "baserom.gba", 0x568c48, 0x4
	.globl gUnknown_8568C4C
gUnknown_8568C4C: @ 0x08568C4C
	.incbin "baserom.gba", 0x568c4c, 0x30
	.globl gUnknown_8568C7C
gUnknown_8568C7C: @ 0x08568C7C
	.incbin "baserom.gba", 0x568c7c, 0x34
	.globl gUnknown_8568CB0
gUnknown_8568CB0: @ 0x08568CB0
	.incbin "baserom.gba", 0x568cb0, 0x24
	.globl gUnknown_8568CD4
gUnknown_8568CD4: @ 0x08568CD4
	.incbin "baserom.gba", 0x568cd4, 0x18
	.globl gUnknown_8568CEC
gUnknown_8568CEC: @ 0x08568CEC
	.incbin "baserom.gba", 0x568cec, 0x3c
	.globl gUnknown_8568D28
gUnknown_8568D28: @ 0x08568D28
	.incbin "baserom.gba", 0x568d28, 0x84
	.globl gUnknown_8568DAC
gUnknown_8568DAC: @ 0x08568DAC
	.incbin "baserom.gba", 0x568dac, 0x20
	.globl gUnknown_8568DCC
gUnknown_8568DCC: @ 0x08568DCC
	.incbin "baserom.gba", 0x568dcc, 0x18
	.globl gUnknown_8568DE4
gUnknown_8568DE4: @ 0x08568DE4
	.incbin "baserom.gba", 0x568de4, 0x4c
	.globl gUnknown_8568E30
gUnknown_8568E30: @ 0x08568E30
	.incbin "baserom.gba", 0x568e30, 0x10
	.globl gUnknown_8568E40
gUnknown_8568E40: @ 0x08568E40
	.incbin "baserom.gba", 0x568e40, 0x1c
	.globl gUnknown_8568E5C
gUnknown_8568E5C: @ 0x08568E5C
	.incbin "baserom.gba", 0x568e5c, 0x8
	.globl gUnknown_8568E64
gUnknown_8568E64: @ 0x08568E64
	.incbin "baserom.gba", 0x568e64, 0xc
	.globl gUnknown_8568E70
gUnknown_8568E70: @ 0x08568E70
	.incbin "baserom.gba", 0x568e70, 0x2c
	.globl gUnknown_8568E9C
gUnknown_8568E9C: @ 0x08568E9C
	.incbin "baserom.gba", 0x568e9c, 0x1c
	.globl gUnknown_8568EB8
gUnknown_8568EB8: @ 0x08568EB8
	.incbin "baserom.gba", 0x568eb8, 0xc
	.globl gUnknown_8568EC4
gUnknown_8568EC4: @ 0x08568EC4
	.incbin "baserom.gba", 0x568ec4, 0x10
	.globl gUnknown_8568ED4
gUnknown_8568ED4: @ 0x08568ED4
	.incbin "baserom.gba", 0x568ed4, 0x34
	.globl gUnknown_8568F08
gUnknown_8568F08: @ 0x08568F08
	.incbin "baserom.gba", 0x568f08, 0x38
	.globl gUnknown_8568F40
gUnknown_8568F40: @ 0x08568F40
	.incbin "baserom.gba", 0x568f40, 0x4
	.globl gUnknown_8568F44
gUnknown_8568F44: @ 0x08568F44
	.incbin "baserom.gba", 0x568f44, 0x1c
	.globl gUnknown_8568F60
gUnknown_8568F60: @ 0x08568F60
	.incbin "baserom.gba", 0x568f60, 0x30
	.globl gUnknown_8568F90
gUnknown_8568F90: @ 0x08568F90
	.incbin "baserom.gba", 0x568f90, 0x40
	.globl gUnknown_8568FD0
gUnknown_8568FD0: @ 0x08568FD0
	.incbin "baserom.gba", 0x568fd0, 0x4c
	.globl gUnknown_856901C
gUnknown_856901C: @ 0x0856901C
	.incbin "baserom.gba", 0x56901c, 0x24
	.globl gUnknown_8569040
gUnknown_8569040: @ 0x08569040
	.incbin "baserom.gba", 0x569040, 0xac
	.globl gUnknown_85690EC
gUnknown_85690EC: @ 0x085690EC
	.incbin "baserom.gba", 0x5690ec, 0x2c
	.globl gUnknown_8569118
gUnknown_8569118: @ 0x08569118
	.incbin "baserom.gba", 0x569118, 0x24
	.globl gUnknown_856913C
gUnknown_856913C: @ 0x0856913C
	.incbin "baserom.gba", 0x56913c, 0x20
	.globl gUnknown_856915C
gUnknown_856915C: @ 0x0856915C
	.incbin "baserom.gba", 0x56915c, 0x20
	.globl gUnknown_856917C
gUnknown_856917C: @ 0x0856917C
	.incbin "baserom.gba", 0x56917c, 0x20
	.globl gUnknown_856919C
gUnknown_856919C: @ 0x0856919C
	.incbin "baserom.gba", 0x56919c, 0xa0
	.globl gUnknown_856923C
gUnknown_856923C: @ 0x0856923C
	.incbin "baserom.gba", 0x56923c, 0x68
	.globl gUnknown_85692A4
gUnknown_85692A4: @ 0x085692A4
	.incbin "baserom.gba", 0x5692a4, 0x18
	.globl gUnknown_85692BC
gUnknown_85692BC: @ 0x085692BC
	.incbin "baserom.gba", 0x5692bc, 0x40
	.globl gUnknown_85692FC
gUnknown_85692FC: @ 0x085692FC
	.incbin "baserom.gba", 0x5692fc, 0x10
	.globl gUnknown_856930C
gUnknown_856930C: @ 0x0856930C
	.incbin "baserom.gba", 0x56930c, 0x18
	.globl gUnknown_8569324
gUnknown_8569324: @ 0x08569324
	.incbin "baserom.gba", 0x569324, 0x8
	.globl gUnknown_856932C
gUnknown_856932C: @ 0x0856932C
	.incbin "baserom.gba", 0x56932c, 0x8
	.globl gUnknown_8569334
gUnknown_8569334: @ 0x08569334
	.incbin "baserom.gba", 0x569334, 0x20
	.globl gUnknown_8569354
gUnknown_8569354: @ 0x08569354
	.incbin "baserom.gba", 0x569354, 0x20
	.globl gUnknown_8569374
gUnknown_8569374: @ 0x08569374
	.incbin "baserom.gba", 0x569374, 0x20
	.globl gUnknown_8569394
gUnknown_8569394: @ 0x08569394
	.incbin "baserom.gba", 0x569394, 0x20
	.globl gUnknown_85693B4
gUnknown_85693B4: @ 0x085693B4
	.incbin "baserom.gba", 0x5693b4, 0x20
	.globl gUnknown_85693D4
gUnknown_85693D4: @ 0x085693D4
	.incbin "baserom.gba", 0x5693d4, 0x14
	.globl gUnknown_85693E8
gUnknown_85693E8: @ 0x085693E8
	.incbin "baserom.gba", 0x5693e8, 0x14
	.globl gUnknown_85693FC
gUnknown_85693FC: @ 0x085693FC
	.incbin "baserom.gba", 0x5693fc, 0x14
	.globl gUnknown_8569410
gUnknown_8569410: @ 0x08569410
	.incbin "baserom.gba", 0x569410, 0x14
	.globl gUnknown_8569424
gUnknown_8569424: @ 0x08569424
	.incbin "baserom.gba", 0x569424, 0x14
	.globl gUnknown_8569438
gUnknown_8569438: @ 0x08569438
	.incbin "baserom.gba", 0x569438, 0x14
	.globl gUnknown_856944C
gUnknown_856944C: @ 0x0856944C
	.incbin "baserom.gba", 0x56944c, 0x10
	.globl gUnknown_856945C
gUnknown_856945C: @ 0x0856945C
	.incbin "baserom.gba", 0x56945c, 0x50
	.globl gUnknown_85694AC
gUnknown_85694AC: @ 0x085694AC
	.incbin "baserom.gba", 0x5694ac, 0x18
	.globl gUnknown_85694C4
gUnknown_85694C4: @ 0x085694C4
	.incbin "baserom.gba", 0x5694c4, 0x8
	.globl gUnknown_85694CC
gUnknown_85694CC: @ 0x085694CC
	.incbin "baserom.gba", 0x5694cc, 0x4
	.globl gUnknown_85694D0
gUnknown_85694D0: @ 0x085694D0
	.incbin "baserom.gba", 0x5694d0, 0x80
	.globl gUnknown_8569550
gUnknown_8569550: @ 0x08569550
	.incbin "baserom.gba", 0x569550, 0x2
	.globl gUnknown_8569552
gUnknown_8569552: @ 0x08569552
	.incbin "baserom.gba", 0x569552, 0xc92
	.globl gUnknown_856A1E4
gUnknown_856A1E4: @ 0x0856A1E4
	.incbin "baserom.gba", 0x56a1e4, 0x18
	.globl gUnknown_856A1FC
gUnknown_856A1FC: @ 0x0856A1FC
	.incbin "baserom.gba", 0x56a1fc, 0x18
	.globl gUnknown_856A214
gUnknown_856A214: @ 0x0856A214
	.incbin "baserom.gba", 0x56a214, 0x5c
	.globl gUnknown_856A270
gUnknown_856A270: @ 0x0856A270
	.incbin "baserom.gba", 0x56a270, 0x1d8
	.globl gUnknown_856A448
gUnknown_856A448: @ 0x0856A448
	.incbin "baserom.gba", 0x56a448, 0x1c
	.globl gUnknown_856A464
gUnknown_856A464: @ 0x0856A464
	.incbin "baserom.gba", 0x56a464, 0x18
	.globl gUnknown_856A47C
gUnknown_856A47C: @ 0x0856A47C
	.incbin "baserom.gba", 0x56a47c, 0x13
	.globl gUnknown_856A48F
gUnknown_856A48F: @ 0x0856A48F
	.incbin "baserom.gba", 0x56a48f, 0x2
	.globl gUnknown_856A491
gUnknown_856A491: @ 0x0856A491
	.incbin "baserom.gba", 0x56a491, 0x3
	.globl gUnknown_856A494
gUnknown_856A494: @ 0x0856A494
	.incbin "baserom.gba", 0x56a494, 0x40
	.globl gUnknown_856A4D4
gUnknown_856A4D4: @ 0x0856A4D4
	.incbin "baserom.gba", 0x56a4d4, 0x3468
	.globl gUnknown_856D93C
gUnknown_856D93C: @ 0x0856D93C
	.incbin "baserom.gba", 0x56d93c, 0x270
	.globl gUnknown_856DBAC
gUnknown_856DBAC: @ 0x0856DBAC
	.incbin "baserom.gba", 0x56dbac, 0x18
	.globl gUnknown_856DBC4
gUnknown_856DBC4: @ 0x0856DBC4
	.incbin "baserom.gba", 0x56dbc4, 0x18
	.globl gUnknown_856DBDC
gUnknown_856DBDC: @ 0x0856DBDC
	.incbin "baserom.gba", 0x56dbdc, 0x10
	.globl gUnknown_856DBEC
gUnknown_856DBEC: @ 0x0856DBEC
	.incbin "baserom.gba", 0x56dbec, 0x10
	.globl gUnknown_856DBFC
gUnknown_856DBFC: @ 0x0856DBFC
	.incbin "baserom.gba", 0x56dbfc, 0x10
	.globl gUnknown_856DC0C
gUnknown_856DC0C: @ 0x0856DC0C
	.incbin "baserom.gba", 0x56dc0c, 0x10
	.globl gUnknown_856DC1C
gUnknown_856DC1C: @ 0x0856DC1C
	.incbin "baserom.gba", 0x56dc1c, 0x20
	.globl gUnknown_856DC3C
gUnknown_856DC3C: @ 0x0856DC3C
	.incbin "baserom.gba", 0x56dc3c, 0x20
	.globl gUnknown_856DC5C
gUnknown_856DC5C: @ 0x0856DC5C
	.incbin "baserom.gba", 0x56dc5c, 0x60
	.globl gUnknown_856DCBC
gUnknown_856DCBC: @ 0x0856DCBC
	.incbin "baserom.gba", 0x56dcbc, 0xc
	.globl gUnknown_856DCC8
gUnknown_856DCC8: @ 0x0856DCC8
	.incbin "baserom.gba", 0x56dcc8, 0x4
	.globl gUnknown_856DCCC
gUnknown_856DCCC: @ 0x0856DCCC
	.incbin "baserom.gba", 0x56dccc, 0x128
	.globl gUnknown_856DDF4
gUnknown_856DDF4: @ 0x0856DDF4
	.incbin "baserom.gba", 0x56ddf4, 0x4f0
	.globl gUnknown_856E2E4
gUnknown_856E2E4: @ 0x0856E2E4
	.incbin "baserom.gba", 0x56e2e4, 0x78
	.globl gUnknown_856E35C
gUnknown_856E35C: @ 0x0856E35C
	.incbin "baserom.gba", 0x56e35c, 0x100
	.globl gUnknown_856E45C
gUnknown_856E45C: @ 0x0856E45C
	.incbin "baserom.gba", 0x56e45c, 0x458
	.globl gUnknown_856E8B4
gUnknown_856E8B4: @ 0x0856E8B4
	.incbin "baserom.gba", 0x56e8b4, 0x1ec
	.globl gUnknown_856EAA0
gUnknown_856EAA0: @ 0x0856EAA0
	.incbin "baserom.gba", 0x56eaa0, 0x30
	.globl gUnknown_856EAD0
gUnknown_856EAD0: @ 0x0856EAD0
	.incbin "baserom.gba", 0x56ead0, 0x134
	.globl gUnknown_856EC04
gUnknown_856EC04: @ 0x0856EC04
	.incbin "baserom.gba", 0x56ec04, 0xf4
	.globl gUnknown_856ECF8
gUnknown_856ECF8: @ 0x0856ECF8
	.incbin "baserom.gba", 0x56ecf8, 0x29c
	.globl gUnknown_856EF94
gUnknown_856EF94: @ 0x0856EF94
	.incbin "baserom.gba", 0x56ef94, 0xf0
	.globl gUnknown_856F084
gUnknown_856F084: @ 0x0856F084
	.incbin "baserom.gba", 0x56f084, 0x148
	.globl gUnknown_856F1CC
gUnknown_856F1CC: @ 0x0856F1CC
	.incbin "baserom.gba", 0x56f1cc, 0x20
	.globl gUnknown_856F1EC
gUnknown_856F1EC: @ 0x0856F1EC
	.incbin "baserom.gba", 0x56f1ec, 0x9c
	.globl gUnknown_856F288
gUnknown_856F288: @ 0x0856F288
	.incbin "baserom.gba", 0x56f288, 0x20c
	.globl gUnknown_856F494
gUnknown_856F494: @ 0x0856F494
	.incbin "baserom.gba", 0x56f494, 0x2c
	.globl gUnknown_856F4C0
gUnknown_856F4C0: @ 0x0856F4C0
	.incbin "baserom.gba", 0x56f4c0, 0x18
	.globl gUnknown_856F4D8
gUnknown_856F4D8: @ 0x0856F4D8
	.incbin "baserom.gba", 0x56f4d8, 0x5c
	.globl gUnknown_856F534
gUnknown_856F534: @ 0x0856F534
	.incbin "baserom.gba", 0x56f534, 0x38
	.globl gUnknown_856F56C
gUnknown_856F56C: @ 0x0856F56C
	.incbin "baserom.gba", 0x56f56c, 0x210
	.globl gUnknown_856F77C
gUnknown_856F77C: @ 0x0856F77C
	.incbin "baserom.gba", 0x56f77c, 0x1488
	.globl gUnknown_8570C04
gUnknown_8570C04: @ 0x08570C04
	.incbin "baserom.gba", 0x570c04, 0x248
	.globl gUnknown_8570E4C
gUnknown_8570E4C: @ 0x08570E4C
	.incbin "baserom.gba", 0x570e4c, 0xa8
	.globl gUnknown_8570EF4
gUnknown_8570EF4: @ 0x08570EF4
	.incbin "baserom.gba", 0x570ef4, 0x2a4
	.globl gUnknown_8571198
gUnknown_8571198: @ 0x08571198
	.incbin "baserom.gba", 0x571198, 0x18
	.globl gUnknown_85711B0
gUnknown_85711B0: @ 0x085711B0
	.incbin "baserom.gba", 0x5711b0, 0x2
	.globl gUnknown_85711B2
gUnknown_85711B2: @ 0x085711B2
	.incbin "baserom.gba", 0x5711b2, 0xb6
	.globl gUnknown_8571268
gUnknown_8571268: @ 0x08571268
	.incbin "baserom.gba", 0x571268, 0x10
	.globl gUnknown_8571278
gUnknown_8571278: @ 0x08571278
	.incbin "baserom.gba", 0x571278, 0x2c
	.globl gUnknown_85712A4
gUnknown_85712A4: @ 0x085712A4
	.incbin "baserom.gba", 0x5712a4, 0x168
	.globl gUnknown_857140C
gUnknown_857140C: @ 0x0857140C
	.incbin "baserom.gba", 0x57140c, 0x18
	.globl gUnknown_8571424
gUnknown_8571424: @ 0x08571424
	.incbin "baserom.gba", 0x571424, 0x18
	.globl gUnknown_857143C
gUnknown_857143C: @ 0x0857143C
	.incbin "baserom.gba", 0x57143c, 0x50
	.globl gUnknown_857148C
gUnknown_857148C: @ 0x0857148C
	.incbin "baserom.gba", 0x57148c, 0x158
	.globl gUnknown_85715E4
gUnknown_85715E4: @ 0x085715E4
	.incbin "baserom.gba", 0x5715e4, 0x30
	.globl gUnknown_8571614
gUnknown_8571614: @ 0x08571614
	.incbin "baserom.gba", 0x571614, 0x138
	.globl gUnknown_857174C
gUnknown_857174C: @ 0x0857174C
	.incbin "baserom.gba", 0x57174c, 0xf4
	.globl gUnknown_8571840
gUnknown_8571840: @ 0x08571840
	.incbin "baserom.gba", 0x571840, 0x2c
	.globl gUnknown_857186C
gUnknown_857186C: @ 0x0857186C
	.incbin "baserom.gba", 0x57186c, 0x2c
	.globl gUnknown_8571898
gUnknown_8571898: @ 0x08571898
	.incbin "baserom.gba", 0x571898, 0x78
	.globl gUnknown_8571910
gUnknown_8571910: @ 0x08571910
	.incbin "baserom.gba", 0x571910, 0xa14
	.globl gUnknown_8572324
gUnknown_8572324: @ 0x08572324
	.incbin "baserom.gba", 0x572324, 0x1c
	.globl gUnknown_8572340
gUnknown_8572340: @ 0x08572340
	.incbin "baserom.gba", 0x572340, 0x20
	.globl gUnknown_8572360
gUnknown_8572360: @ 0x08572360
	.incbin "baserom.gba", 0x572360, 0x18
	.globl gUnknown_8572378
gUnknown_8572378: @ 0x08572378
	.incbin "baserom.gba", 0x572378, 0xd0
	.globl gUnknown_8572448
gUnknown_8572448: @ 0x08572448
	.incbin "baserom.gba", 0x572448, 0x35c
	.globl gUnknown_85727A4
gUnknown_85727A4: @ 0x085727A4
	.incbin "baserom.gba", 0x5727a4, 0x50
	.globl gUnknown_85727F4
gUnknown_85727F4: @ 0x085727F4
	.incbin "baserom.gba", 0x5727f4, 0x18
	.globl gUnknown_857280C
gUnknown_857280C: @ 0x0857280C
	.incbin "baserom.gba", 0x57280c, 0x18
	.globl gUnknown_8572824
gUnknown_8572824: @ 0x08572824
	.incbin "baserom.gba", 0x572824, 0x178
	.globl gUnknown_857299C
gUnknown_857299C: @ 0x0857299C
	.incbin "baserom.gba", 0x57299c, 0x78
	.globl gUnknown_8572A14
gUnknown_8572A14: @ 0x08572A14
	.incbin "baserom.gba", 0x572a14, 0x528
	.globl gUnknown_8572F3C
gUnknown_8572F3C: @ 0x08572F3C
	.incbin "baserom.gba", 0x572f3c, 0x30
	.globl gUnknown_8572F6C
gUnknown_8572F6C: @ 0x08572F6C
	.incbin "baserom.gba", 0x572f6c, 0x60
	.globl gUnknown_8572FCC
gUnknown_8572FCC: @ 0x08572FCC
	.incbin "baserom.gba", 0x572fcc, 0x30
	.globl gUnknown_8572FFC
gUnknown_8572FFC: @ 0x08572FFC
	.incbin "baserom.gba", 0x572ffc, 0x2
	.globl gUnknown_8572FFE
gUnknown_8572FFE: @ 0x08572FFE
	.incbin "baserom.gba", 0x572ffe, 0x4
	.globl gUnknown_8573002
gUnknown_8573002: @ 0x08573002
	.incbin "baserom.gba", 0x573002, 0x6
	.globl gUnknown_8573008
gUnknown_8573008: @ 0x08573008
	.incbin "baserom.gba", 0x573008, 0x28
	.globl gUnknown_8573030
gUnknown_8573030: @ 0x08573030
	.incbin "baserom.gba", 0x573030, 0x10
	.globl gUnknown_8573040
gUnknown_8573040: @ 0x08573040
	.incbin "baserom.gba", 0x573040, 0xc
	.globl gUnknown_857304C
gUnknown_857304C: @ 0x0857304C
	.incbin "baserom.gba", 0x57304c, 0x34
	.globl gUnknown_8573080
gUnknown_8573080: @ 0x08573080
	.incbin "baserom.gba", 0x573080, 0x1c
	.globl gUnknown_857309C
gUnknown_857309C: @ 0x0857309C
	.incbin "baserom.gba", 0x57309c, 0x8
	.globl gUnknown_85730A4
gUnknown_85730A4: @ 0x085730A4
	.incbin "baserom.gba", 0x5730a4, 0x70
	.globl gUnknown_8573114
gUnknown_8573114: @ 0x08573114
	.incbin "baserom.gba", 0x573114, 0x20
	.globl gUnknown_8573134
gUnknown_8573134: @ 0x08573134
	.incbin "baserom.gba", 0x573134, 0x1f8
	.globl gUnknown_857332C
gUnknown_857332C: @ 0x0857332C
	.incbin "baserom.gba", 0x57332c, 0x8
	.globl gUnknown_8573334
gUnknown_8573334: @ 0x08573334
	.incbin "baserom.gba", 0x573334, 0x8
	.globl gUnknown_857333C
gUnknown_857333C: @ 0x0857333C
	.incbin "baserom.gba", 0x57333c, 0xb28
	.globl gUnknown_8573E64
gUnknown_8573E64: @ 0x08573E64
	.incbin "baserom.gba", 0x573e64, 0x20
	.globl gUnknown_8573E84
gUnknown_8573E84: @ 0x08573E84
	.incbin "baserom.gba", 0x573e84, 0x260
	.globl gUnknown_85740E4
gUnknown_85740E4: @ 0x085740E4
	.incbin "baserom.gba", 0x5740e4, 0x158
	.globl gUnknown_857423C
gUnknown_857423C: @ 0x0857423C
	.incbin "baserom.gba", 0x57423c, 0x20
	.globl gUnknown_857425C
gUnknown_857425C: @ 0x0857425C
	.incbin "baserom.gba", 0x57425c, 0x20
	.globl gUnknown_857427C
gUnknown_857427C: @ 0x0857427C
	.incbin "baserom.gba", 0x57427c, 0xc8
	.globl gUnknown_8574344
gUnknown_8574344: @ 0x08574344
	.incbin "baserom.gba", 0x574344, 0x8
	.globl gUnknown_857434C
gUnknown_857434C: @ 0x0857434C
	.incbin "baserom.gba", 0x57434c, 0xc
	.globl gUnknown_8574358
gUnknown_8574358: @ 0x08574358
	.incbin "baserom.gba", 0x574358, 0x24
	.globl gUnknown_857437C
gUnknown_857437C: @ 0x0857437C
	.incbin "baserom.gba", 0x57437c, 0x10
	.globl gUnknown_857438C
gUnknown_857438C: @ 0x0857438C
	.incbin "baserom.gba", 0x57438c, 0x20
	.globl gUnknown_85743AC
gUnknown_85743AC: @ 0x085743AC
	.incbin "baserom.gba", 0x5743ac, 0x8
	.globl gUnknown_85743B4
gUnknown_85743B4: @ 0x085743B4
	.incbin "baserom.gba", 0x5743b4, 0x8
	.globl gUnknown_85743BC
gUnknown_85743BC: @ 0x085743BC
	.incbin "baserom.gba", 0x5743bc, 0x10
	.globl gUnknown_85743CC
gUnknown_85743CC: @ 0x085743CC
	.incbin "baserom.gba", 0x5743cc, 0x20
	.globl gUnknown_85743EC
gUnknown_85743EC: @ 0x085743EC
	.incbin "baserom.gba", 0x5743ec, 0x28
	.globl gUnknown_8574414
gUnknown_8574414: @ 0x08574414
	.incbin "baserom.gba", 0x574414, 0x28
	.globl gUnknown_857443C
gUnknown_857443C: @ 0x0857443C
	.incbin "baserom.gba", 0x57443c, 0x50
	.globl gUnknown_857448C
gUnknown_857448C: @ 0x0857448C
	.incbin "baserom.gba", 0x57448c, 0x68
	.globl gUnknown_85744F4
gUnknown_85744F4: @ 0x085744F4
	.incbin "baserom.gba", 0x5744f4, 0x20
	.globl gUnknown_8574514
gUnknown_8574514: @ 0x08574514
	.incbin "baserom.gba", 0x574514, 0x40
	.globl gUnknown_8574554
gUnknown_8574554: @ 0x08574554
	.incbin "baserom.gba", 0x574554, 0x18
	.globl gUnknown_857456C
gUnknown_857456C: @ 0x0857456C
	.incbin "baserom.gba", 0x57456c, 0x1ac

	@ src/data/easy_chat/easy_chat_group_trainer.h:4 easy_chat_group_trainer_line_4
	.globl gText_Rom_574718
gText_Rom_574718: @ 0x08574718
	.string "きみにきめた!$"
	.if (. - gText_Rom_574718) > 0x8
	.error "gText_Rom_574718 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574718) < 0x8
	.space 0x8 - (. - gText_Rom_574718)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:10 easy_chat_group_trainer_line_10
	.globl gText_Rom_574720
gText_Rom_574720: @ 0x08574720
	.string "ゲット$"
	.if (. - gText_Rom_574720) > 0x4
	.error "gText_Rom_574720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574720) < 0x4
	.space 0x4 - (. - gText_Rom_574720)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:16 easy_chat_group_trainer_line_16 (+2 aliases)
	.globl gText_Rom_574724
gText_Rom_574724: @ 0x08574724
	.string "こうかん$"
	.if (. - gText_Rom_574724) > 0x5
	.error "gText_Rom_574724 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574724) < 0x5
	.space 0x5 - (. - gText_Rom_574724)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:22 easy_chat_group_trainer_line_22 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_574729
gText_Rom_574729: @ 0x08574729
	.string "サファイア$"
	.if (. - gText_Rom_574729) != 0x6
	.error "gText_Rom_574729 must retain its original byte length"
	.endif
	.globl gText_Rom_57472A
	.set gText_Rom_57472A, gText_Rom_574729 + 0x1

	@ src/data/easy_chat/easy_chat_group_trainer.h:28 easy_chat_group_trainer_line_28
	.globl gText_Rom_57472F
gText_Rom_57472F: @ 0x0857472F
	.string "しんか$"
	.if (. - gText_Rom_57472F) > 0x4
	.error "gText_Rom_57472F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57472F) < 0x4
	.space 0x4 - (. - gText_Rom_57472F)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:34 easy_chat_group_trainer_line_34 (+2 aliases)
	.globl gText_Rom_574733
gText_Rom_574733: @ 0x08574733
	.string "ずかん$"
	.if (. - gText_Rom_574733) > 0x4
	.error "gText_Rom_574733 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574733) < 0x4
	.space 0x4 - (. - gText_Rom_574733)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:40 easy_chat_group_trainer_line_40
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_574737
gText_Rom_574737: @ 0x08574737
	.string "せいかく$"
	.if (. - gText_Rom_574737) != 0x5
	.error "gText_Rom_574737 must retain its original byte length"
	.endif
	.globl gText_Rom_574738
	.set gText_Rom_574738, gText_Rom_574737 + 0x1

	@ src/data/easy_chat/easy_chat_group_trainer.h:46 easy_chat_group_trainer_line_46
	.globl gText_Rom_57473C
gText_Rom_57473C: @ 0x0857473C
	.string "センター$"
	.if (. - gText_Rom_57473C) > 0x5
	.error "gText_Rom_57473C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57473C) < 0x5
	.space 0x5 - (. - gText_Rom_57473C)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:52 easy_chat_group_trainer_line_52 (+3 aliases)
	.globl gText_Rom_574741
gText_Rom_574741: @ 0x08574741
	.string "タマゴ$"
	.if (. - gText_Rom_574741) > 0x4
	.error "gText_Rom_574741 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574741) < 0x4
	.space 0x4 - (. - gText_Rom_574741)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:58 easy_chat_group_trainer_line_58 (+1 aliases)
	.globl gText_Rom_574745
gText_Rom_574745: @ 0x08574745
	.string "つうしん$"
	.if (. - gText_Rom_574745) > 0x5
	.error "gText_Rom_574745 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574745) < 0x5
	.space 0x5 - (. - gText_Rom_574745)
	.endif

	@ src/battle_debug.c:235 sText_Ability (+1 aliases)
	.globl gText_Rom_57474A
gText_Rom_57474A: @ 0x0857474A
	.string "とくせい$"
	.if (. - gText_Rom_57474A) > 0x5
	.error "gText_Rom_57474A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57474A) < 0x5
	.space 0x5 - (. - gText_Rom_57474A)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_57474F
gText_Rom_57474F: @ 0x0857474F
	.string "トレーナー$"
	.if (. - gText_Rom_57474F) > 0x6
	.error "gText_Rom_57474F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57474F) < 0x6
	.space 0x6 - (. - gText_Rom_57474F)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:76 easy_chat_group_trainer_line_76
	.globl gText_Rom_574755
gText_Rom_574755: @ 0x08574755
	.string "バージョン$"
	.if (. - gText_Rom_574755) > 0x6
	.error "gText_Rom_574755 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574755) < 0x6
	.space 0x6 - (. - gText_Rom_574755)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:82 easy_chat_group_trainer_line_82 (+2 aliases)
	.globl gText_Rom_57475B
gText_Rom_57475B: @ 0x0857475B
	.string "ポケナビ$"
	.if (. - gText_Rom_57475B) > 0x5
	.error "gText_Rom_57475B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57475B) < 0x5
	.space 0x5 - (. - gText_Rom_57475B)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_574760
gText_Rom_574760: @ 0x08574760
	.string "ポケモン$"
	.if (. - gText_Rom_574760) > 0x5
	.error "gText_Rom_574760 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574760) < 0x5
	.space 0x5 - (. - gText_Rom_574760)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:94 easy_chat_group_trainer_line_94
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_574765
gText_Rom_574765: @ 0x08574765
	.string "ポケモンゲット$"
	.if (. - gText_Rom_574765) != 0x8
	.error "gText_Rom_574765 must retain its original byte length"
	.endif
	.globl gText_Rom_574769
	.set gText_Rom_574769, gText_Rom_574765 + 0x4

	@ src/data/easy_chat/easy_chat_group_trainer.h:100 easy_chat_group_trainer_line_100 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57476D
gText_Rom_57476D: @ 0x0857476D
	.string "ポケモンずかん$"
	.if (. - gText_Rom_57476D) != 0x8
	.error "gText_Rom_57476D must retain its original byte length"
	.endif
	.globl gText_Rom_574771
	.set gText_Rom_574771, gText_Rom_57476D + 0x4

	@ src/data/easy_chat/easy_chat_group_trainer.h:106 easy_chat_group_trainer_line_106 (+1 aliases)
	.globl gText_Rom_574775
gText_Rom_574775: @ 0x08574775
	.string "ルビー$"
	.if (. - gText_Rom_574775) > 0x4
	.error "gText_Rom_574775 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574775) < 0x4
	.space 0x4 - (. - gText_Rom_574775)
	.endif

	@ src/berry_blender.c:310 sText_TheLevelIs (+1 aliases)
	.globl gText_Rom_574779
gText_Rom_574779: @ 0x08574779
	.string "レベル$"
	.if (. - gText_Rom_574779) > 0x4
	.error "gText_Rom_574779 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574779) < 0x4
	.space 0x4 - (. - gText_Rom_574779)
	.endif
	.incbin "baserom.gba", 0x57477d, 0x3

	@ src/data/easy_chat/easy_chat_group_trainer.h:124 easy_chat_group_trainer_line_124 (+2 aliases)
	.globl gText_Rom_574780
gText_Rom_574780: @ 0x08574780
	.string "グリーン$"
	.if (. - gText_Rom_574780) > 0x5
	.error "gText_Rom_574780 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574780) < 0x5
	.space 0x5 - (. - gText_Rom_574780)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:130 easy_chat_group_trainer_line_130 (+2 aliases)
	.globl gText_Rom_574785
gText_Rom_574785: @ 0x08574785
	.string "バッグ$"
	.if (. - gText_Rom_574785) > 0x4
	.error "gText_Rom_574785 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574785) < 0x4
	.space 0x4 - (. - gText_Rom_574785)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:136 easy_chat_group_trainer_line_136
	.globl gText_Rom_574789
gText_Rom_574789: @ 0x08574789
	.string "ファイア$"
	.if (. - gText_Rom_574789) > 0x5
	.error "gText_Rom_574789 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574789) < 0x5
	.space 0x5 - (. - gText_Rom_574789)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:142 easy_chat_group_trainer_line_142 (+1 aliases)
	.globl gText_Rom_57478E
gText_Rom_57478E: @ 0x0857478E
	.string "みどり$"
	.if (. - gText_Rom_57478E) > 0x4
	.error "gText_Rom_57478E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57478E) < 0x4
	.space 0x4 - (. - gText_Rom_57478E)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:148 easy_chat_group_trainer_line_148 (+3 aliases)
	.globl gText_Rom_574792
gText_Rom_574792: @ 0x08574792
	.string "リーフ$"
	.if (. - gText_Rom_574792) > 0x4
	.error "gText_Rom_574792 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574792) < 0x4
	.space 0x4 - (. - gText_Rom_574792)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:154 easy_chat_group_trainer_line_154 (+4 aliases)
	.globl gText_Rom_574796
gText_Rom_574796: @ 0x08574796
	.string "レッド$"
	.if (. - gText_Rom_574796) > 0x4
	.error "gText_Rom_574796 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574796) < 0x4
	.space 0x4 - (. - gText_Rom_574796)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:160 easy_chat_group_trainer_line_160 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57479A
gText_Rom_57479A: @ 0x0857479A
	.string "エメラルド$"
	.if (. - gText_Rom_57479A) != 0x6
	.error "gText_Rom_57479A must retain its original byte length"
	.endif
	.globl gText_Rom_57479C
	.set gText_Rom_57479C, gText_Rom_57479A + 0x2
	.incbin "baserom.gba", 0x5747a0, 0x147

	@ src/data/abilities.h:14 abilities_line_14 (+1 aliases)
	.globl gText_Rom_5748E7
gText_Rom_5748E7: @ 0x085748E7
	.string "あくしゅう$"
	.if (. - gText_Rom_5748E7) > 0x6
	.error "gText_Rom_5748E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5748E7) < 0x6
	.space 0x6 - (. - gText_Rom_5748E7)
	.endif

	@ src/data/abilities.h:363 abilities_line_363 (+1 aliases)
	.globl gText_Rom_5748ED
gText_Rom_5748ED: @ 0x085748ED
	.string "あついしぼう$"
	.if (. - gText_Rom_5748ED) > 0x7
	.error "gText_Rom_5748ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5748ED) < 0x7
	.space 0x7 - (. - gText_Rom_5748ED)
	.endif

	@ src/data/abilities.h:342 abilities_line_342 (+1 aliases)
	.globl gText_Rom_5748F4
gText_Rom_5748F4: @ 0x085748F4
	.string "あめうけざら$"
	.if (. - gText_Rom_5748F4) > 0x7
	.error "gText_Rom_5748F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5748F4) < 0x7
	.space 0x7 - (. - gText_Rom_5748F4)
	.endif

	@ src/data/abilities.h:21 abilities_line_21 (+1 aliases)
	.globl gText_Rom_5748FB
gText_Rom_5748FB: @ 0x085748FB
	.string "あめふらし$"
	.if (. - gText_Rom_5748FB) > 0x6
	.error "gText_Rom_5748FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5748FB) < 0x6
	.space 0x6 - (. - gText_Rom_5748FB)
	.endif

	@ src/data/abilities.h:540 abilities_line_540 (+1 aliases)
	.globl gText_Rom_574901
gText_Rom_574901: @ 0x08574901
	.string "ありじごく$"
	.if (. - gText_Rom_574901) > 0x6
	.error "gText_Rom_574901 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574901) < 0x6
	.space 0x6 - (. - gText_Rom_574901)
	.endif

	@ src/data/abilities.h:175 abilities_line_175 (+1 aliases)
	.globl gText_Rom_574907
gText_Rom_574907: @ 0x08574907
	.string "いかく$"
	.if (. - gText_Rom_574907) > 0x4
	.error "gText_Rom_574907 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574907) < 0x4
	.space 0x4 - (. - gText_Rom_574907)
	.endif

	@ src/data/abilities.h:526 abilities_line_526 (+1 aliases)
	.globl gText_Rom_57490B
gText_Rom_57490B: @ 0x0857490B
	.string "いしあたま$"
	.if (. - gText_Rom_57490B) > 0x6
	.error "gText_Rom_57490B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57490B) < 0x6
	.space 0x6 - (. - gText_Rom_57490B)
	.endif
	.incbin "baserom.gba", 0x574911, 0x3

	@ src/data/easy_chat/easy_chat_group_status.h:58 easy_chat_group_status_line_58
	.globl gText_Rom_574914
gText_Rom_574914: @ 0x08574914
	.string "いろちがい$"
	.if (. - gText_Rom_574914) > 0x6
	.error "gText_Rom_574914 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574914) < 0x6
	.space 0x6 - (. - gText_Rom_574914)
	.endif
	.incbin "baserom.gba", 0x57491a, 0x3

	@ src/data/easy_chat/easy_chat_group_status.h:70 easy_chat_group_status_line_70
	.globl gText_Rom_57491D
gText_Rom_57491D: @ 0x0857491D
	.string "うつくしい$"
	.if (. - gText_Rom_57491D) > 0x6
	.error "gText_Rom_57491D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57491D) < 0x6
	.space 0x6 - (. - gText_Rom_57491D)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:76 easy_chat_group_status_line_76 (+2 aliases)
	.globl gText_Rom_574923
gText_Rom_574923: @ 0x08574923
	.string "うつくしさ$"
	.if (. - gText_Rom_574923) > 0x6
	.error "gText_Rom_574923 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574923) < 0x6
	.space 0x6 - (. - gText_Rom_574923)
	.endif

	@ src/data/abilities.h:578 abilities_line_578 (+1 aliases)
	.globl gText_Rom_574929
gText_Rom_574929: @ 0x08574929
	.string "エアロック$"
	.if (. - gText_Rom_574929) > 0x6
	.error "gText_Rom_574929 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574929) < 0x6
	.space 0x6 - (. - gText_Rom_574929)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:88 easy_chat_group_status_line_88 (+1 aliases)
	.globl gText_Rom_57492F
gText_Rom_57492F: @ 0x0857492F
	.string "エスパー$"
	.if (. - gText_Rom_57492F) > 0x5
	.error "gText_Rom_57492F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57492F) < 0x5
	.space 0x5 - (. - gText_Rom_57492F)
	.endif

	@ src/data/abilities.h:400 abilities_line_400 (+1 aliases)
	.globl gText_Rom_574934
gText_Rom_574934: @ 0x08574934
	.string "かいりきバサミ$"
	.if (. - gText_Rom_574934) > 0x8
	.error "gText_Rom_574934 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574934) < 0x8
	.space 0x8 - (. - gText_Rom_574934)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:100 easy_chat_group_status_line_100 (+1 aliases)
	.globl gText_Rom_57493C
gText_Rom_57493C: @ 0x0857493C
	.string "かくとう$"
	.if (. - gText_Rom_57493C) > 0x5
	.error "gText_Rom_57493C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57493C) < 0x5
	.space 0x5 - (. - gText_Rom_57493C)
	.endif

	@ src/data/abilities.h:182 abilities_line_182 (+1 aliases)
	.globl gText_Rom_574941
gText_Rom_574941: @ 0x08574941
	.string "かげふみ$"
	.if (. - gText_Rom_574941) > 0x5
	.error "gText_Rom_574941 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574941) < 0x5
	.space 0x5 - (. - gText_Rom_574941)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:112 easy_chat_group_status_line_112
	.globl gText_Rom_574946
gText_Rom_574946: @ 0x08574946
	.string "かしこい$"
	.if (. - gText_Rom_574946) > 0x5
	.error "gText_Rom_574946 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574946) < 0x5
	.space 0x5 - (. - gText_Rom_574946)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:118 easy_chat_group_status_line_118 (+2 aliases)
	.globl gText_Rom_57494B
gText_Rom_57494B: @ 0x0857494B
	.string "かしこさ$"
	.if (. - gText_Rom_57494B) > 0x5
	.error "gText_Rom_57494B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57494B) < 0x5
	.space 0x5 - (. - gText_Rom_57494B)
	.endif

	@ src/data/abilities.h:28 abilities_line_28 (+1 aliases)
	.globl gText_Rom_574950
gText_Rom_574950: @ 0x08574950
	.string "かそく$"
	.if (. - gText_Rom_574950) > 0x4
	.error "gText_Rom_574950 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574950) < 0x4
	.space 0x4 - (. - gText_Rom_574950)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:130 easy_chat_group_status_line_130
	.globl gText_Rom_574954
gText_Rom_574954: @ 0x08574954
	.string "かっこいい$"
	.if (. - gText_Rom_574954) > 0x6
	.error "gText_Rom_574954 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574954) < 0x6
	.space 0x6 - (. - gText_Rom_574954)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:136 easy_chat_group_status_line_136 (+2 aliases)
	.globl gText_Rom_57495A
gText_Rom_57495A: @ 0x0857495A
	.string "かっこよさ$"
	.if (. - gText_Rom_57495A) > 0x6
	.error "gText_Rom_57495A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57495A) < 0x6
	.space 0x6 - (. - gText_Rom_57495A)
	.endif

	@ src/data/abilities.h:35 abilities_line_35 (+1 aliases)
	.globl gText_Rom_574960
gText_Rom_574960: @ 0x08574960
	.string "カブトアーマー$"
	.if (. - gText_Rom_574960) > 0x8
	.error "gText_Rom_574960 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574960) < 0x8
	.space 0x8 - (. - gText_Rom_574960)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:148 easy_chat_group_status_line_148
	.globl gText_Rom_574968
gText_Rom_574968: @ 0x08574968
	.string "かわいい$"
	.if (. - gText_Rom_574968) > 0x5
	.error "gText_Rom_574968 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574968) < 0x5
	.space 0x5 - (. - gText_Rom_574968)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:154 easy_chat_group_status_line_154 (+2 aliases)
	.globl gText_Rom_57496D
gText_Rom_57496D: @ 0x0857496D
	.string "かわいさ$"
	.if (. - gText_Rom_57496D) > 0x5
	.error "gText_Rom_57496D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57496D) < 0x5
	.space 0x5 - (. - gText_Rom_57496D)
	.endif

	@ src/data/abilities.h:43 abilities_line_43 (+1 aliases)
	.globl gText_Rom_574972
gText_Rom_574972: @ 0x08574972
	.string "がんじょう$"
	.if (. - gText_Rom_574972) > 0x6
	.error "gText_Rom_574972 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574972) < 0x6
	.space 0x6 - (. - gText_Rom_574972)
	.endif

	@ src/data/abilities.h:167 abilities_line_167 (+1 aliases)
	.globl gText_Rom_574978
gText_Rom_574978: @ 0x08574978
	.string "きゅうばん$"
	.if (. - gText_Rom_574978) > 0x6
	.error "gText_Rom_574978 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574978) < 0x6
	.space 0x6 - (. - gText_Rom_574978)
	.endif
	.incbin "baserom.gba", 0x57497e, 0x3

	@ src/data/abilities.h:228 abilities_line_228 (+1 aliases)
	.globl gText_Rom_574981
gText_Rom_574981: @ 0x08574981
	.string "クリアボディ$"
	.if (. - gText_Rom_574981) > 0x7
	.error "gText_Rom_574981 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574981) < 0x7
	.space 0x7 - (. - gText_Rom_574981)
	.endif

	@ src/data/abilities.h:512 abilities_line_512 (+1 aliases)
	.globl gText_Rom_574988
gText_Rom_574988: @ 0x08574988
	.string "げきりゅう$"
	.if (. - gText_Rom_574988) > 0x6
	.error "gText_Rom_574988 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574988) < 0x6
	.space 0x6 - (. - gText_Rom_574988)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:190 easy_chat_group_status_line_190 (+3 aliases)
	.globl gText_Rom_57498E
gText_Rom_57498E: @ 0x0857498E
	.string "ゴースト$"
	.if (. - gText_Rom_57498E) > 0x5
	.error "gText_Rom_57498E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57498E) < 0x5
	.space 0x5 - (. - gText_Rom_57498E)
	.endif

	@ src/battle_debug.c:349 battle_debug_line_349 (+5 aliases)
	.globl gText_Rom_574993
gText_Rom_574993: @ 0x08574993
	.string "こおり$"
	.if (. - gText_Rom_574993) > 0x4
	.error "gText_Rom_574993 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574993) < 0x4
	.space 0x4 - (. - gText_Rom_574993)
	.endif

	@ src/data/abilities.h:476 abilities_line_476 (+2 aliases)
	.globl gText_Rom_574997
gText_Rom_574997: @ 0x08574997
	.string "こんじょう$"
	.if (. - gText_Rom_574997) > 0x6
	.error "gText_Rom_574997 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574997) < 0x6
	.space 0x6 - (. - gText_Rom_574997)
	.endif

	@ src/data/abilities.h:189 abilities_line_189 (+1 aliases)
	.globl gText_Rom_57499D
gText_Rom_57499D: @ 0x0857499D
	.string "さめはだ$"
	.if (. - gText_Rom_57499D) > 0x5
	.error "gText_Rom_57499D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57499D) < 0x5
	.space 0x5 - (. - gText_Rom_57499D)
	.endif

	@ src/data/abilities.h:570 abilities_line_570 (+1 aliases)
	.globl gText_Rom_5749A2
gText_Rom_5749A2: @ 0x085749A2
	.string "シェルアーマー$"
	.if (. - gText_Rom_5749A2) > 0x8
	.error "gText_Rom_5749A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749A2) < 0x8
	.space 0x8 - (. - gText_Rom_5749A2)
	.endif

	@ src/data/abilities.h:236 abilities_line_236 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5749AA
gText_Rom_5749AA: @ 0x085749AA
	.string "しぜんかいふく$"
	.if (. - gText_Rom_5749AA) != 0x8
	.error "gText_Rom_5749AA must retain its original byte length"
	.endif
	.globl gText_Rom_5749AB
	.set gText_Rom_5749AB, gText_Rom_5749AA + 0x1
	.globl gText_Rom_5749AD
	.set gText_Rom_5749AD, gText_Rom_5749AA + 0x3

	@ src/data/abilities.h:51 abilities_line_51 (+1 aliases)
	.globl gText_Rom_5749B2
gText_Rom_5749B2: @ 0x085749B2
	.string "しめりけ$"
	.if (. - gText_Rom_5749B2) > 0x5
	.error "gText_Rom_5749B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749B2) < 0x5
	.space 0x5 - (. - gText_Rom_5749B2)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:232 easy_chat_group_status_line_232 (+1 aliases)
	.globl gText_Rom_5749B7
gText_Rom_5749B7: @ 0x085749B7
	.string "じめん$"
	.if (. - gText_Rom_5749B7) > 0x4
	.error "gText_Rom_5749B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749B7) < 0x4
	.space 0x4 - (. - gText_Rom_5749B7)
	.endif

	@ src/data/abilities.h:59 abilities_line_59 (+1 aliases)
	.globl gText_Rom_5749BB
gText_Rom_5749BB: @ 0x085749BB
	.string "じゅうなん$"
	.if (. - gText_Rom_5749BB) > 0x6
	.error "gText_Rom_5749BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749BB) < 0x6
	.space 0x6 - (. - gText_Rom_5749BB)
	.endif

	@ src/data/abilities.h:327 abilities_line_327 (+1 aliases)
	.globl gText_Rom_5749C1
gText_Rom_5749C1: @ 0x085749C1
	.string "じりょく$"
	.if (. - gText_Rom_5749C1) > 0x5
	.error "gText_Rom_5749C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749C1) < 0x5
	.space 0x5 - (. - gText_Rom_5749C1)
	.endif

	@ src/data/abilities.h:555 abilities_line_555 (+1 aliases)
	.globl gText_Rom_5749C6
gText_Rom_5749C6: @ 0x085749C6
	.string "しろいけむり$"
	.if (. - gText_Rom_5749C6) > 0x7
	.error "gText_Rom_5749C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749C6) < 0x7
	.space 0x7 - (. - gText_Rom_5749C6)
	.endif

	@ src/data/abilities.h:221 abilities_line_221 (+1 aliases)
	.globl gText_Rom_5749CD
gText_Rom_5749CD: @ 0x085749CD
	.string "シンクロ$"
	.if (. - gText_Rom_5749CD) > 0x5
	.error "gText_Rom_5749CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749CD) < 0x5
	.space 0x5 - (. - gText_Rom_5749CD)
	.endif

	@ src/data/abilities.h:498 abilities_line_498 (+1 aliases)
	.globl gText_Rom_5749D2
gText_Rom_5749D2: @ 0x085749D2
	.string "しんりょく$"
	.if (. - gText_Rom_5749D2) > 0x6
	.error "gText_Rom_5749D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749D2) < 0x6
	.space 0x6 - (. - gText_Rom_5749D2)
	.endif

	@ src/data/abilities.h:258 abilities_line_258 (+1 aliases)
	.globl gText_Rom_5749D8
gText_Rom_5749D8: @ 0x085749D8
	.string "すいすい$"
	.if (. - gText_Rom_5749D8) > 0x5
	.error "gText_Rom_5749D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749D8) < 0x5
	.space 0x5 - (. - gText_Rom_5749D8)
	.endif

	@ src/data/abilities.h:349 abilities_line_349 (+1 aliases)
	.globl gText_Rom_5749DD
gText_Rom_5749DD: @ 0x085749DD
	.string "すなおこし$"
	.if (. - gText_Rom_5749DD) > 0x6
	.error "gText_Rom_5749DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749DD) < 0x6
	.space 0x6 - (. - gText_Rom_5749DD)
	.endif

	@ src/data/abilities.h:67 abilities_line_67 (+1 aliases)
	.globl gText_Rom_5749E3
gText_Rom_5749E3: @ 0x085749E3
	.string "すながくれ$"
	.if (. - gText_Rom_5749E3) > 0x6
	.error "gText_Rom_5749E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749E3) < 0x6
	.space 0x6 - (. - gText_Rom_5749E3)
	.endif

	@ src/data/abilities.h:392 abilities_line_392 (+1 aliases)
	.globl gText_Rom_5749E9
gText_Rom_5749E9: @ 0x085749E9
	.string "するどいめ$"
	.if (. - gText_Rom_5749E9) > 0x6
	.error "gText_Rom_5749E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749E9) < 0x6
	.space 0x6 - (. - gText_Rom_5749E9)
	.endif

	@ src/data/abilities.h:303 abilities_line_303 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5749EF
gText_Rom_5749EF: @ 0x085749EF
	.string "せいしんりょく$"
	.if (. - gText_Rom_5749EF) != 0x8
	.error "gText_Rom_5749EF must retain its original byte length"
	.endif
	.globl gText_Rom_5749F1
	.set gText_Rom_5749F1, gText_Rom_5749EF + 0x2

	@ src/data/abilities.h:75 abilities_line_75 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5749F7
gText_Rom_5749F7: @ 0x085749F7
	.string "せいでんき$"
	.if (. - gText_Rom_5749F7) != 0x6
	.error "gText_Rom_5749F7 must retain its original byte length"
	.endif
	.globl gText_Rom_5749F9
	.set gText_Rom_5749F9, gText_Rom_5749F7 + 0x2

	@ src/battle_debug.c:318 battle_debug_line_318 (+1 aliases)
	.globl gText_Rom_5749FD
gText_Rom_5749FD: @ 0x085749FD
	.string "タイプ$"
	.if (. - gText_Rom_5749FD) > 0x4
	.error "gText_Rom_5749FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749FD) < 0x4
	.space 0x4 - (. - gText_Rom_5749FD)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:310 easy_chat_group_status_line_310
	.globl gText_Rom_574A01
gText_Rom_574A01: @ 0x08574A01
	.string "たくましい$"
	.if (. - gText_Rom_574A01) > 0x6
	.error "gText_Rom_574A01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A01) < 0x6
	.space 0x6 - (. - gText_Rom_574A01)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:316 easy_chat_group_status_line_316 (+2 aliases)
	.globl gText_Rom_574A07
gText_Rom_574A07: @ 0x08574A07
	.string "たくましさ$"
	.if (. - gText_Rom_574A07) > 0x6
	.error "gText_Rom_574A07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A07) < 0x6
	.space 0x6 - (. - gText_Rom_574A07)
	.endif

	@ src/data/abilities.h:469 abilities_line_469 (+1 aliases)
	.globl gText_Rom_574A0D
gText_Rom_574A0D: @ 0x08574A0D
	.string "だっぴ$"
	.if (. - gText_Rom_574A0D) > 0x4
	.error "gText_Rom_574A0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A0D) < 0x4
	.space 0x4 - (. - gText_Rom_574A0D)
	.endif

	@ src/data/abilities.h:289 abilities_line_289 (+1 aliases)
	.globl gText_Rom_574A11
gText_Rom_574A11: @ 0x08574A11
	.string "ちからもち$"
	.if (. - gText_Rom_574A11) > 0x6
	.error "gText_Rom_574A11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A11) < 0x6
	.space 0x6 - (. - gText_Rom_574A11)
	.endif

	@ src/data/abilities.h:82 abilities_line_82 (+1 aliases)
	.globl gText_Rom_574A17
gText_Rom_574A17: @ 0x08574A17
	.string "ちくでん$"
	.if (. - gText_Rom_574A17) > 0x5
	.error "gText_Rom_574A17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A17) < 0x5
	.space 0x5 - (. - gText_Rom_574A17)
	.endif

	@ src/data/abilities.h:90 abilities_line_90 (+1 aliases)
	.globl gText_Rom_574A1C
gText_Rom_574A1C: @ 0x08574A1C
	.string "ちょすい$"
	.if (. - gText_Rom_574A1C) > 0x5
	.error "gText_Rom_574A1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A1C) < 0x5
	.space 0x5 - (. - gText_Rom_574A1C)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:346 easy_chat_group_status_line_346 (+1 aliases)
	.globl gText_Rom_574A21
gText_Rom_574A21: @ 0x08574A21
	.string "でんき$"
	.if (. - gText_Rom_574A21) > 0x4
	.error "gText_Rom_574A21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A21) < 0x4
	.space 0x4 - (. - gText_Rom_574A21)
	.endif

	@ src/data/abilities.h:451 abilities_line_451 (+1 aliases)
	.globl gText_Rom_574A25
gText_Rom_574A25: @ 0x08574A25
	.string "てんきや$"
	.if (. - gText_Rom_574A25) > 0x5
	.error "gText_Rom_574A25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A25) < 0x5
	.space 0x5 - (. - gText_Rom_574A25)
	.endif

	@ src/data/abilities.h:251 abilities_line_251 (+1 aliases)
	.globl gText_Rom_574A2A
gText_Rom_574A2A: @ 0x08574A2A
	.string "てんのめぐみ$"
	.if (. - gText_Rom_574A2A) > 0x7
	.error "gText_Rom_574A2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A2A) < 0x7
	.space 0x7 - (. - gText_Rom_574A2A)
	.endif
	.incbin "baserom.gba", 0x574a31, 0x3

	@ src/data/abilities.h:296 abilities_line_296 (+1 aliases)
	.globl gText_Rom_574A34
gText_Rom_574A34: @ 0x08574A34
	.string "どくのトゲ$"
	.if (. - gText_Rom_574A34) > 0x6
	.error "gText_Rom_574A34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A34) < 0x6
	.space 0x6 - (. - gText_Rom_574A34)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:376 easy_chat_group_status_line_376 (+2 aliases)
	.globl gText_Rom_574A3A
gText_Rom_574A3A: @ 0x08574A3A
	.string "ドラゴン$"
	.if (. - gText_Rom_574A3A) > 0x5
	.error "gText_Rom_574A3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A3A) < 0x5
	.space 0x5 - (. - gText_Rom_574A3A)
	.endif

	@ src/data/abilities.h:280 abilities_line_280 (+1 aliases)
	.globl gText_Rom_574A3F
gText_Rom_574A3F: @ 0x08574A3F
	.string "トレース$"
	.if (. - gText_Rom_574A3F) > 0x5
	.error "gText_Rom_574A3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A3F) < 0x5
	.space 0x5 - (. - gText_Rom_574A3F)
	.endif

	@ src/data/abilities.h:98 abilities_line_98 (+1 aliases)
	.globl gText_Rom_574A44
gText_Rom_574A44: @ 0x08574A44
	.string "どんかん$"
	.if (. - gText_Rom_574A44) > 0x5
	.error "gText_Rom_574A44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A44) < 0x5
	.space 0x5 - (. - gText_Rom_574A44)
	.endif

	@ src/data/abilities.h:415 abilities_line_415 (+1 aliases)
	.globl gText_Rom_574A49
gText_Rom_574A49: @ 0x08574A49
	.string "なまけ$"
	.if (. - gText_Rom_574A49) > 0x4
	.error "gText_Rom_574A49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A49) < 0x4
	.space 0x4 - (. - gText_Rom_574A49)
	.endif

	@ src/data/abilities.h:385 abilities_line_385 (+1 aliases)
	.globl gText_Rom_574A4D
gText_Rom_574A4D: @ 0x08574A4D
	.string "にげあし$"
	.if (. - gText_Rom_574A4D) > 0x5
	.error "gText_Rom_574A4D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A4D) < 0x5
	.space 0x5 - (. - gText_Rom_574A4D)
	.endif

	@ src/data/abilities.h:461 abilities_line_461 (+1 aliases)
	.globl gText_Rom_574A52
gText_Rom_574A52: @ 0x08574A52
	.string "ねんちゃく$"
	.if (. - gText_Rom_574A52) > 0x6
	.error "gText_Rom_574A52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A52) < 0x6
	.space 0x6 - (. - gText_Rom_574A52)
	.endif

	@ src/data/abilities.h:106 abilities_line_106 (+1 aliases)
	.globl gText_Rom_574A58
gText_Rom_574A58: @ 0x08574A58
	.string "ノーてんき$"
	.if (. - gText_Rom_574A58) > 0x6
	.error "gText_Rom_574A58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A58) < 0x6
	.space 0x6 - (. - gText_Rom_574A58)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:11 gEasyChatWord_Evolution (+4 aliases)
	.globl gText_Rom_574A5E
gText_Rom_574A5E: @ 0x08574A5E
	.string "ノーマル$"
	.if (. - gText_Rom_574A5E) > 0x5
	.error "gText_Rom_574A5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A5E) < 0x5
	.space 0x5 - (. - gText_Rom_574A5E)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:424 easy_chat_group_status_line_424 (+1 aliases)
	.globl gText_Rom_574A63
gText_Rom_574A63: @ 0x08574A63
	.string "はがね$"
	.if (. - gText_Rom_574A63) > 0x4
	.error "gText_Rom_574A63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A63) < 0x4
	.space 0x4 - (. - gText_Rom_574A63)
	.endif

	@ src/data/abilities.h:272 abilities_line_272 (+1 aliases)
	.globl gText_Rom_574A67
gText_Rom_574A67: @ 0x08574A67
	.string "はっこう$"
	.if (. - gText_Rom_574A67) > 0x5
	.error "gText_Rom_574A67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A67) < 0x5
	.space 0x5 - (. - gText_Rom_574A67)
	.endif

	@ src/data/abilities.h:371 abilities_line_371 (+1 aliases)
	.globl gText_Rom_574A6C
gText_Rom_574A6C: @ 0x08574A6C
	.string "はやおき$"
	.if (. - gText_Rom_574A6C) > 0x5
	.error "gText_Rom_574A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A6C) < 0x5
	.space 0x5 - (. - gText_Rom_574A6C)
	.endif

	@ src/data/abilities.h:423 abilities_line_423 (+1 aliases)
	.globl gText_Rom_574A71
gText_Rom_574A71: @ 0x08574A71
	.string "はりきり$"
	.if (. - gText_Rom_574A71) > 0x5
	.error "gText_Rom_574A71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A71) < 0x5
	.space 0x5 - (. - gText_Rom_574A71)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:448 easy_chat_group_status_line_448
	.globl gText_Rom_574A76
gText_Rom_574A76: @ 0x08574A76
	.string "ひかる$"
	.if (. - gText_Rom_574A76) > 0x4
	.error "gText_Rom_574A76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A76) < 0x4
	.space 0x4 - (. - gText_Rom_574A76)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:454 easy_chat_group_status_line_454 (+2 aliases)
	.globl gText_Rom_574A7A
gText_Rom_574A7A: @ 0x08574A7A
	.string "ひこう$"
	.if (. - gText_Rom_574A7A) > 0x4
	.error "gText_Rom_574A7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A7A) < 0x4
	.space 0x4 - (. - gText_Rom_574A7A)
	.endif

	@ src/data/abilities.h:533 abilities_line_533 (+1 aliases)
	.globl gText_Rom_574A7E
gText_Rom_574A7E: @ 0x08574A7E
	.string "ひでり$"
	.if (. - gText_Rom_574A7E) > 0x4
	.error "gText_Rom_574A7E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A7E) < 0x4
	.space 0x4 - (. - gText_Rom_574A7E)
	.endif

	@ src/data/abilities.h:243 abilities_line_243 (+1 aliases)
	.globl gText_Rom_574A82
gText_Rom_574A82: @ 0x08574A82
	.string "ひらいしん$"
	.if (. - gText_Rom_574A82) > 0x6
	.error "gText_Rom_574A82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A82) < 0x6
	.space 0x6 - (. - gText_Rom_574A82)
	.endif

	@ src/data/abilities.h:113 abilities_line_113 (+1 aliases)
	.globl gText_Rom_574A88
gText_Rom_574A88: @ 0x08574A88
	.string "ふくがん$"
	.if (. - gText_Rom_574A88) > 0x5
	.error "gText_Rom_574A88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A88) < 0x5
	.space 0x5 - (. - gText_Rom_574A88)
	.endif

	@ src/data/abilities.h:483 abilities_line_483 (+1 aliases)
	.globl gText_Rom_574A8D
gText_Rom_574A8D: @ 0x08574A8D
	.string "ふしぎなうろこ$"
	.if (. - gText_Rom_574A8D) > 0x8
	.error "gText_Rom_574A8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A8D) < 0x8
	.space 0x8 - (. - gText_Rom_574A8D)
	.endif

	@ src/data/abilities.h:196 abilities_line_196 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_574A95
gText_Rom_574A95: @ 0x08574A95
	.string "ふしぎなまもり$"
	.if (. - gText_Rom_574A95) != 0x8
	.error "gText_Rom_574A95 must retain its original byte length"
	.endif
	.globl gText_Rom_574A99
	.set gText_Rom_574A99, gText_Rom_574A95 + 0x4

	@ src/data/abilities.h:120 abilities_line_120 (+1 aliases)
	.globl gText_Rom_574A9D
gText_Rom_574A9D: @ 0x08574A9D
	.string "ふみん$"
	.if (. - gText_Rom_574A9D) > 0x4
	.error "gText_Rom_574A9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A9D) < 0x4
	.space 0x4 - (. - gText_Rom_574A9D)
	.endif

	@ src/data/abilities.h:206 abilities_line_206 (+1 aliases)
	.globl gText_Rom_574AA1
gText_Rom_574AA1: @ 0x08574AA1
	.string "ふゆう$"
	.if (. - gText_Rom_574AA1) > 0x4
	.error "gText_Rom_574AA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AA1) < 0x4
	.space 0x4 - (. - gText_Rom_574AA1)
	.endif

	@ src/data/abilities.h:437 abilities_line_437 (+1 aliases)
	.globl gText_Rom_574AA5
gText_Rom_574AA5: @ 0x08574AA5
	.string "プラス$"
	.if (. - gText_Rom_574AA5) > 0x4
	.error "gText_Rom_574AA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AA5) < 0x4
	.space 0x4 - (. - gText_Rom_574AA5)
	.endif

	@ src/data/abilities.h:356 abilities_line_356 (+1 aliases)
	.globl gText_Rom_574AA9
gText_Rom_574AA9: @ 0x08574AA9
	.string "プレッシャー$"
	.if (. - gText_Rom_574AA9) > 0x7
	.error "gText_Rom_574AA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AA9) < 0x7
	.space 0x7 - (. - gText_Rom_574AA9)
	.endif

	@ src/data/abilities.h:491 abilities_line_491 (+1 aliases)
	.globl gText_Rom_574AB0
gText_Rom_574AB0: @ 0x08574AB0
	.string "ヘドロえき$"
	.if (. - gText_Rom_574AB0) > 0x6
	.error "gText_Rom_574AB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AB0) < 0x6
	.space 0x6 - (. - gText_Rom_574AB0)
	.endif

	@ src/data/abilities.h:128 abilities_line_128 (+1 aliases)
	.globl gText_Rom_574AB6
gText_Rom_574AB6: @ 0x08574AB6
	.string "へんしょく$"
	.if (. - gText_Rom_574AB6) > 0x6
	.error "gText_Rom_574AB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AB6) < 0x6
	.space 0x6 - (. - gText_Rom_574AB6)
	.endif

	@ src/data/abilities.h:334 abilities_line_334 (+1 aliases)
	.globl gText_Rom_574ABC
gText_Rom_574ABC: @ 0x08574ABC
	.string "ぼうおん$"
	.if (. - gText_Rom_574ABC) > 0x5
	.error "gText_Rom_574ABC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574ABC) < 0x5
	.space 0x5 - (. - gText_Rom_574ABC)
	.endif

	@ src/data/abilities.h:214 abilities_line_214 (+1 aliases)
	.globl gText_Rom_574AC1
gText_Rom_574AC1: @ 0x08574AC1
	.string "ほうし$"
	.if (. - gText_Rom_574AC1) > 0x4
	.error "gText_Rom_574AC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AC1) < 0x4
	.space 0x4 - (. - gText_Rom_574AC1)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:538 easy_chat_group_status_line_538
	.globl gText_Rom_574AC5
gText_Rom_574AC5: @ 0x08574AC5
	.string "ポケルス$"
	.if (. - gText_Rom_574AC5) > 0x5
	.error "gText_Rom_574AC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AC5) < 0x5
	.space 0x5 - (. - gText_Rom_574AC5)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:544 easy_chat_group_status_line_544 (+1 aliases)
	.globl gText_Rom_574ACA
gText_Rom_574ACA: @ 0x08574ACA
	.string "ほのお$"
	.if (. - gText_Rom_574ACA) > 0x4
	.error "gText_Rom_574ACA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574ACA) < 0x4
	.space 0x4 - (. - gText_Rom_574ACA)
	.endif

	@ src/data/abilities.h:378 abilities_line_378 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_574ACE
gText_Rom_574ACE: @ 0x08574ACE
	.string "ほのおのからだ$"
	.if (. - gText_Rom_574ACE) != 0x8
	.error "gText_Rom_574ACE must retain its original byte length"
	.endif
	.globl gText_Rom_574AD2
	.set gText_Rom_574AD2, gText_Rom_574ACE + 0x4

	@ src/data/abilities.h:444 abilities_line_444 (+1 aliases)
	.globl gText_Rom_574AD6
gText_Rom_574AD6: @ 0x08574AD6
	.string "マイナス$"
	.if (. - gText_Rom_574AD6) > 0x5
	.error "gText_Rom_574AD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AD6) < 0x5
	.space 0x5 - (. - gText_Rom_574AD6)
	.endif

	@ src/data/abilities.h:159 abilities_line_159 (+1 aliases)
	.globl gText_Rom_574ADB
gText_Rom_574ADB: @ 0x08574ADB
	.string "マイペース$"
	.if (. - gText_Rom_574ADB) > 0x6
	.error "gText_Rom_574ADB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574ADB) < 0x6
	.space 0x6 - (. - gText_Rom_574ADB)
	.endif

	@ src/data/abilities.h:311 abilities_line_311 (+1 aliases)
	.globl gText_Rom_574AE1
gText_Rom_574AE1: @ 0x08574AE1
	.string "マグマのよろい$"
	.if (. - gText_Rom_574AE1) > 0x8
	.error "gText_Rom_574AE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AE1) < 0x8
	.space 0x8 - (. - gText_Rom_574AE1)
	.endif
	.incbin "baserom.gba", 0x574ae9, 0x3

	@ src/data/abilities.h:319 abilities_line_319 (+1 aliases)
	.globl gText_Rom_574AEC
gText_Rom_574AEC: @ 0x08574AEC
	.string "みずのベール$"
	.if (. - gText_Rom_574AEC) > 0x7
	.error "gText_Rom_574AEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AEC) < 0x7
	.space 0x7 - (. - gText_Rom_574AEC)
	.endif
	.incbin "baserom.gba", 0x574af3, 0x3

	@ src/data/abilities.h:519 abilities_line_519 (+1 aliases)
	.globl gText_Rom_574AF6
gText_Rom_574AF6: @ 0x08574AF6
	.string "むしのしらせ$"
	.if (. - gText_Rom_574AF6) > 0x7
	.error "gText_Rom_574AF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AF6) < 0x7
	.space 0x7 - (. - gText_Rom_574AF6)
	.endif

	@ src/data/abilities.h:430 abilities_line_430 (+1 aliases)
	.globl gText_Rom_574AFD
gText_Rom_574AFD: @ 0x08574AFD
	.string "メロメロボディ$"
	.if (. - gText_Rom_574AFD) > 0x8
	.error "gText_Rom_574AFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AFD) < 0x8
	.space 0x8 - (. - gText_Rom_574AFD)
	.endif

	@ src/data/abilities.h:135 abilities_line_135 (+1 aliases)
	.globl gText_Rom_574B05
gText_Rom_574B05: @ 0x08574B05
	.string "めんえき$"
	.if (. - gText_Rom_574B05) > 0x5
	.error "gText_Rom_574B05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B05) < 0x5
	.space 0x5 - (. - gText_Rom_574B05)
	.endif

	@ src/data/abilities.h:505 abilities_line_505 (+1 aliases)
	.globl gText_Rom_574B0A
gText_Rom_574B0A: @ 0x08574B0A
	.string "もうか$"
	.if (. - gText_Rom_574B0A) > 0x4
	.error "gText_Rom_574B0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B0A) < 0x4
	.space 0x4 - (. - gText_Rom_574B0A)
	.endif

	@ src/data/abilities.h:408 abilities_line_408 (+1 aliases)
	.globl gText_Rom_574B0E
gText_Rom_574B0E: @ 0x08574B0E
	.string "ものひろい$"
	.if (. - gText_Rom_574B0E) > 0x6
	.error "gText_Rom_574B0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B0E) < 0x6
	.space 0x6 - (. - gText_Rom_574B0E)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:622 easy_chat_group_status_line_622
	.globl gText_Rom_574B14
gText_Rom_574B14: @ 0x08574B14
	.string "もよう$"
	.if (. - gText_Rom_574B14) > 0x4
	.error "gText_Rom_574B14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B14) < 0x4
	.space 0x4 - (. - gText_Rom_574B14)
	.endif

	@ src/data/abilities.h:143 abilities_line_143 (+1 aliases)
	.globl gText_Rom_574B18
gText_Rom_574B18: @ 0x08574B18
	.string "もらいび$"
	.if (. - gText_Rom_574B18) > 0x5
	.error "gText_Rom_574B18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B18) < 0x5
	.space 0x5 - (. - gText_Rom_574B18)
	.endif

	@ src/data/abilities.h:547 abilities_line_547 (+1 aliases)
	.globl gText_Rom_574B1D
gText_Rom_574B1D: @ 0x08574B1D
	.string "やるき$"
	.if (. - gText_Rom_574B1D) > 0x4
	.error "gText_Rom_574B1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B1D) < 0x4
	.space 0x4 - (. - gText_Rom_574B1D)
	.endif

	@ src/data/abilities.h:265 abilities_line_265 (+1 aliases)
	.globl gText_Rom_574B21
gText_Rom_574B21: @ 0x08574B21
	.string "ようりょくそ$"
	.if (. - gText_Rom_574B21) > 0x7
	.error "gText_Rom_574B21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B21) < 0x7
	.space 0x7 - (. - gText_Rom_574B21)
	.endif

	@ src/data/abilities.h:563 abilities_line_563 (+1 aliases)
	.globl gText_Rom_574B28
gText_Rom_574B28: @ 0x08574B28
	.string "ヨガパワー$"
	.if (. - gText_Rom_574B28) > 0x6
	.error "gText_Rom_574B28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B28) < 0x6
	.space 0x6 - (. - gText_Rom_574B28)
	.endif

	@ src/data/abilities.h:151 abilities_line_151 (+1 aliases)
	.globl gText_Rom_574B2E
gText_Rom_574B2E: @ 0x08574B2E
	.string "りんぷん$"
	.if (. - gText_Rom_574B2E) > 0x5
	.error "gText_Rom_574B2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B2E) < 0x5
	.space 0x5 - (. - gText_Rom_574B2E)
	.endif
	.incbin "baserom.gba", 0x574b33, 0x51d

	@ src/data/easy_chat/easy_chat_group_battle.h:4 easy_chat_group_battle_line_4
	.globl gText_Rom_575050
gText_Rom_575050: @ 0x08575050
	.string "あいしょう$"
	.if (. - gText_Rom_575050) > 0x6
	.error "gText_Rom_575050 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575050) < 0x6
	.space 0x6 - (. - gText_Rom_575050)
	.endif
	.incbin "baserom.gba", 0x575056, 0x3

	@ src/data/easy_chat/easy_chat_group_battle.h:16 easy_chat_group_battle_line_16
	.globl gText_Rom_575059
gText_Rom_575059: @ 0x08575059
	.string "いちばん$"
	.if (. - gText_Rom_575059) > 0x5
	.error "gText_Rom_575059 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575059) < 0x5
	.space 0x5 - (. - gText_Rom_575059)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:22 easy_chat_group_battle_line_22
	.globl gText_Rom_57505E
gText_Rom_57505E: @ 0x0857505E
	.string "かくご$"
	.if (. - gText_Rom_57505E) > 0x4
	.error "gText_Rom_57505E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57505E) < 0x4
	.space 0x4 - (. - gText_Rom_57505E)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:28 easy_chat_group_battle_line_28
	.globl gText_Rom_575062
gText_Rom_575062: @ 0x08575062
	.string "かたせて$"
	.if (. - gText_Rom_575062) > 0x5
	.error "gText_Rom_575062 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575062) < 0x5
	.space 0x5 - (. - gText_Rom_575062)
	.endif
	.incbin "baserom.gba", 0x575067, 0x6

	@ src/data/easy_chat/easy_chat_group_battle.h:46 easy_chat_group_battle_line_46
	.globl gText_Rom_57506D
gText_Rom_57506D: @ 0x0857506D
	.string "かった$"
	.if (. - gText_Rom_57506D) > 0x4
	.error "gText_Rom_57506D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57506D) < 0x4
	.space 0x4 - (. - gText_Rom_57506D)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:52 easy_chat_group_battle_line_52
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_575071
gText_Rom_575071: @ 0x08575071
	.string "かったら$"
	.if (. - gText_Rom_575071) != 0x5
	.error "gText_Rom_575071 must retain its original byte length"
	.endif
	.globl gText_Rom_575072
	.set gText_Rom_575072, gText_Rom_575071 + 0x1

	@ src/data/easy_chat/easy_chat_group_battle.h:58 easy_chat_group_battle_line_58
	.globl gText_Rom_575076
gText_Rom_575076: @ 0x08575076
	.string "かって$"
	.if (. - gText_Rom_575076) > 0x4
	.error "gText_Rom_575076 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575076) < 0x4
	.space 0x4 - (. - gText_Rom_575076)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:64 easy_chat_group_battle_line_64
	.globl gText_Rom_57507A
gText_Rom_57507A: @ 0x0857507A
	.string "かてない$"
	.if (. - gText_Rom_57507A) > 0x5
	.error "gText_Rom_57507A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57507A) < 0x5
	.space 0x5 - (. - gText_Rom_57507A)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:70 easy_chat_group_battle_line_70
	.globl gText_Rom_57507F
gText_Rom_57507F: @ 0x0857507F
	.string "かてる$"
	.if (. - gText_Rom_57507F) > 0x4
	.error "gText_Rom_57507F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57507F) < 0x4
	.space 0x4 - (. - gText_Rom_57507F)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:76 easy_chat_group_battle_line_76
	.globl gText_Rom_575083
gText_Rom_575083: @ 0x08575083
	.string "かなわない$"
	.if (. - gText_Rom_575083) > 0x6
	.error "gText_Rom_575083 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575083) < 0x6
	.space 0x6 - (. - gText_Rom_575083)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:82 easy_chat_group_battle_line_82
	.globl gText_Rom_575089
gText_Rom_575089: @ 0x08575089
	.string "きあい$"
	.if (. - gText_Rom_575089) > 0x4
	.error "gText_Rom_575089 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575089) < 0x4
	.space 0x4 - (. - gText_Rom_575089)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:88 easy_chat_group_battle_line_88
	.globl gText_Rom_57508D
gText_Rom_57508D: @ 0x0857508D
	.string "きめた$"
	.if (. - gText_Rom_57508D) > 0x4
	.error "gText_Rom_57508D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57508D) < 0x4
	.space 0x4 - (. - gText_Rom_57508D)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:94 easy_chat_group_battle_line_94 (+1 aliases)
	.globl gText_Rom_575091
gText_Rom_575091: @ 0x08575091
	.string "きりふだ$"
	.if (. - gText_Rom_575091) > 0x5
	.error "gText_Rom_575091 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575091) < 0x5
	.space 0x5 - (. - gText_Rom_575091)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:100 easy_chat_group_battle_line_100
	.globl gText_Rom_575096
gText_Rom_575096: @ 0x08575096
	.string "くらえ$"
	.if (. - gText_Rom_575096) > 0x4
	.error "gText_Rom_575096 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575096) < 0x4
	.space 0x4 - (. - gText_Rom_575096)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:106 easy_chat_group_battle_line_106
	.globl gText_Rom_57509A
gText_Rom_57509A: @ 0x0857509A
	.string "こい!$"
	.if (. - gText_Rom_57509A) > 0x4
	.error "gText_Rom_57509A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57509A) < 0x4
	.space 0x4 - (. - gText_Rom_57509A)
	.endif

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_57509E
gText_Rom_57509E: @ 0x0857509E
	.string "こうげき$"
	.if (. - gText_Rom_57509E) > 0x5
	.error "gText_Rom_57509E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57509E) < 0x5
	.space 0x5 - (. - gText_Rom_57509E)
	.endif

