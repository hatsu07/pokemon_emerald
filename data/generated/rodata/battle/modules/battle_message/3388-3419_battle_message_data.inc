	@ src/battle_message.c:115 sText_YourFoesWeakGetEmPkmn
	.globl gText_Rom_5AAF76
gText_Rom_5AAF76: @ 0x085AAF76
	.string "あいてが よわっている!\nチャンスだ！ {B_BUFF1}！$"
	.if (. - gText_Rom_5AAF76) > 0x18
	.error "gText_Rom_5AAF76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAF76) < 0x18
	.space 0x18 - (. - gText_Rom_5AAF76)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AAF8E: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AAF8E
gBattleMessageData_085AAF8E:
	.globl gUnknown_85AAF8E
gUnknown_85AAF8E: @ 0x085AAF8E
	@ analyzed canonical ROM range 0x085AAF8E-0x085AAFA5
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x18
	.byte 0xFD, 0x1F, 0x1A, 0x00, 0xFD, 0x0B, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C, 0x10, 0xAB, 0xFE, 0x25
	.byte 0x09, 0x50, 0xAB, 0x00, 0xFD, 0x09, 0xAB, 0xFF
	.globl gUnknown_85AAFA6
gUnknown_85AAFA6: @ 0x085AAFA6

	@ src/battle_message.c:123 sText_PkmnThatsEnough
	.globl gText_Rom_5AAFA6
gText_Rom_5AAFA6: @ 0x085AAFA6
	.string "{B_BUFF1} もういい！\nもどれ！$"
	.if (. - gText_Rom_5AAFA6) > 0xe
	.error "gText_Rom_5AAFA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAFA6) < 0xe
	.space 0xe - (. - gText_Rom_5AAFA6)
	.endif
	.globl gUnknown_85AAFB4
gUnknown_85AAFB4: @ 0x085AAFB4

	@ src/battle_message.c:124 sText_PkmnComeBack
	.globl gText_Rom_5AAFB4
gText_Rom_5AAFB4: @ 0x085AAFB4
	.string "{B_BUFF1}\nもどれ！$"
	.if (. - gText_Rom_5AAFB4) > 0x8
	.error "gText_Rom_5AAFB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAFB4) < 0x8
	.space 0x8 - (. - gText_Rom_5AAFB4)
	.endif
	.globl gUnknown_85AAFBC
gUnknown_85AAFBC: @ 0x085AAFBC

	@ src/battle_message.c:125 sText_PkmnOkComeBack
	.globl gText_Rom_5AAFBC
gText_Rom_5AAFBC: @ 0x085AAFBC
	.string "{B_BUFF1} いいぞ！\nもどれ！$"
	.if (. - gText_Rom_5AAFBC) > 0xd
	.error "gText_Rom_5AAFBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAFBC) < 0xd
	.space 0xd - (. - gText_Rom_5AAFBC)
	.endif
	.globl gUnknown_85AAFC9
gUnknown_85AAFC9: @ 0x085AAFC9

	@ src/battle_message.c:126 sText_PkmnGoodComeBack
	.globl gText_Rom_5AAFC9
gText_Rom_5AAFC9: @ 0x085AAFC9
	.string "{B_BUFF1} よくやった！\nもどれ！$"
	.if (. - gText_Rom_5AAFC9) > 0xf
	.error "gText_Rom_5AAFC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAFC9) < 0xf
	.space 0xf - (. - gText_Rom_5AAFC9)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AAFD8: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AAFD8
gBattleMessageData_085AAFD8:
	.globl gUnknown_85AAFD8
gUnknown_85AAFD8: @ 0x085AAFD8
	@ analyzed canonical ROM range 0x085AAFD8-0x085AAFEA
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x13
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x1A, 0xFE, 0xFD, 0x00, 0x2D, 0x00, 0x1B, 0x50, 0x0A, 0x22
	.byte 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AAFEB: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AAFEB
gBattleMessageData_085AAFEB:
	.globl gUnknown_85AAFEB
gUnknown_85AAFEB: @ 0x085AAFEB
	@ analyzed canonical ROM range 0x085AAFEB-0x085AAFF9
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0xF
	.byte 0xFD, 0x20, 0x1A, 0xFE, 0xFD, 0x00, 0x2D, 0x00, 0x1B, 0x50, 0x0A, 0x22, 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AAFFA: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AAFFA
gBattleMessageData_085AAFFA:
	.globl gUnknown_85AAFFA
gUnknown_85AAFFA: @ 0x085AAFFA
	@ analyzed canonical ROM range 0x085AAFFA-0x085AB008
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0xF
	.byte 0xFD, 0x22, 0x1A, 0xFE, 0xFD, 0x00, 0x2D, 0x00, 0x1B, 0x50, 0x0A, 0x22, 0x10, 0xAB, 0xFF
	.globl gUnknown_85AB009
gUnknown_85AB009: @ 0x085AB009

	@ src/battle_message.c:131 sText_WildPkmnPrefix (+1 aliases)
	.globl gText_Rom_5AB009
gText_Rom_5AB009: @ 0x085AB009
	.string "やせいの $"
	.if (. - gText_Rom_5AB009) > 0x6
	.error "gText_Rom_5AB009 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB009) < 0x6
	.space 0x6 - (. - gText_Rom_5AB009)
	.endif
	.globl gUnknown_85AB00F
gUnknown_85AB00F: @ 0x085AB00F

	@ src/battle_message.c:132 sText_FoePkmnPrefix (+1 aliases)
	.globl gText_Rom_5AB00F
gText_Rom_5AB00F: @ 0x085AB00F
	.string "あいての $"
	.if (. - gText_Rom_5AB00F) > 0x6
	.error "gText_Rom_5AB00F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB00F) < 0x6
	.space 0x6 - (. - gText_Rom_5AB00F)
	.endif
	.space 0x1, 0xFF
	.globl gUnknown_85AB016
gUnknown_85AB016: @ 0x085AB016

	@ src/battle_message.c:136 sText_FoePkmnPrefix2 (+2 aliases)
	.globl gText_Rom_5AB016
gText_Rom_5AB016: @ 0x085AB016
	.string "あいての$"
	.if (. - gText_Rom_5AB016) > 0x5
	.error "gText_Rom_5AB016 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB016) < 0x5
	.space 0x5 - (. - gText_Rom_5AB016)
	.endif
	.globl gUnknown_85AB01B
gUnknown_85AB01B: @ 0x085AB01B

	@ src/battle_message.c:137 sText_AllyPkmnPrefix (+2 aliases)
	.globl gText_Rom_5AB01B
gText_Rom_5AB01B: @ 0x085AB01B
	.string "みかたの$"
	.if (. - gText_Rom_5AB01B) > 0x5
	.error "gText_Rom_5AB01B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB01B) < 0x5
	.space 0x5 - (. - gText_Rom_5AB01B)
	.endif
	.globl gUnknown_85AB020
gUnknown_85AB020: @ 0x085AB020

	@ src/battle_message.c:138 sText_FoePkmnPrefix3
	.globl gText_Rom_5AB020
gText_Rom_5AB020: @ 0x085AB020
	.string "あいては$"
	.if (. - gText_Rom_5AB020) > 0x5
	.error "gText_Rom_5AB020 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB020) < 0x5
	.space 0x5 - (. - gText_Rom_5AB020)
	.endif
	.globl gUnknown_85AB025
gUnknown_85AB025: @ 0x085AB025

	@ src/battle_message.c:139 sText_AllyPkmnPrefix2
	.globl gText_Rom_5AB025
gText_Rom_5AB025: @ 0x085AB025
	.string "みかたは$"
	.if (. - gText_Rom_5AB025) > 0x5
	.error "gText_Rom_5AB025 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB025) < 0x5
	.space 0x5 - (. - gText_Rom_5AB025)
	.endif
	.globl gUnknown_85AB02A
gUnknown_85AB02A: @ 0x085AB02A

	@ src/battle_message.c:140 sText_FoePkmnPrefix4
	.globl gText_Rom_5AB02A
gText_Rom_5AB02A: @ 0x085AB02A
	.string "あいてを$"
	.if (. - gText_Rom_5AB02A) > 0x5
	.error "gText_Rom_5AB02A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB02A) < 0x5
	.space 0x5 - (. - gText_Rom_5AB02A)
	.endif
	.globl gUnknown_85AB02F
gUnknown_85AB02F: @ 0x085AB02F

	@ src/battle_message.c:141 sText_AllyPkmnPrefix3
	.globl gText_Rom_5AB02F
gText_Rom_5AB02F: @ 0x085AB02F
	.string "みかたを$"
	.if (. - gText_Rom_5AB02F) > 0x5
	.error "gText_Rom_5AB02F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB02F) < 0x5
	.space 0x5 - (. - gText_Rom_5AB02F)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AB034: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AB034
gBattleMessageData_085AB034:
	.globl gUnknown_85AB034
gUnknown_85AB034: @ 0x085AB034
	@ analyzed canonical ROM range 0x085AB034-0x085AB03B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x8
	.byte 0xFD, 0x0F, 0xFD, 0x00, 0xFE, 0xFD, 0x01, 0xFF
	.globl gUnknown_85AB03C
gUnknown_85AB03C: @ 0x085AB03C

	@ src/battle_message.c:143 sText_ExclamationMark
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB03C
gText_Rom_5AB03C: @ 0x085AB03C
	.string "を つかった!$"
	.if (. - gText_Rom_5AB03C) != 0x8
	.error "gText_Rom_5AB03C must retain its original byte length"
	.endif
	.globl gText_Rom_5AB03F
	.set gText_Rom_5AB03F, gText_Rom_5AB03C + 0x3
	.globl gUnknown_85AB044
gUnknown_85AB044: @ 0x085AB044
	@ Decoded text from ROM range: offset=0x5AB044, size=0x4
	.string "した！$"
	.globl gUnknown_85AB048
gUnknown_85AB048: @ 0x085AB048

	@ src/battle_message.c:145 sText_ExclamationMark3
	.globl gText_Rom_5AB048
gText_Rom_5AB048: @ 0x085AB048
	.string "を した!$"
	.if (. - gText_Rom_5AB048) > 0x6
	.error "gText_Rom_5AB048 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB048) < 0x6
	.space 0x6 - (. - gText_Rom_5AB048)
	.endif
	.globl gUnknown_85AB04E
gUnknown_85AB04E: @ 0x085AB04E

	@ src/battle_message.c:146 sText_ExclamationMark4
	.globl gText_Rom_5AB04E
gText_Rom_5AB04E: @ 0x085AB04E
	.string " こうげき!$"
	.if (. - gText_Rom_5AB04E) > 0x7
	.error "gText_Rom_5AB04E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB04E) < 0x7
	.space 0x7 - (. - gText_Rom_5AB04E)
	.endif
