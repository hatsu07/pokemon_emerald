	@ src/battle_message.c:1516 gText_Mind
	.globl gText_Rom_5ABDA3
gText_Rom_5ABDA3: @ 0x085ABDA3
	.string "こころ$"
	.if (. - gText_Rom_5ABDA3) > 0x4
	.error "gText_Rom_5ABDA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABDA3) < 0x4
	.space 0x4 - (. - gText_Rom_5ABDA3)
	.endif
	.globl gUnknown_85ABDA7
gUnknown_85ABDA7: @ 0x085ABDA7
	@ Decoded text from ROM range: offset=0x5ABDA7, size=0x3
	.string "わざ$"

	@ src/battle_message.c:1518 gText_Body
	.globl gText_Rom_5ABDAA
gText_Rom_5ABDAA: @ 0x085ABDAA
	.string "からだ$"
	.if (. - gText_Rom_5ABDAA) > 0x4
	.error "gText_Rom_5ABDAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABDAA) < 0x4
	.space 0x4 - (. - gText_Rom_5ABDAA)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085ABDAE: battle_arena.s: BattleArena_ShowJudgmentWindow
	.globl gBattleArenaData_085ABDAE
gBattleArenaData_085ABDAE: @ 0x085ABDAE
	@ analyzed canonical ROM range 0x085ABDAE-0x085ABDBA
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0xD
	.byte 0xFD, 0x00, 0x00, 0x00, 0x1A, 0x2E, 0x13, 0x02, 0x00, 0x00, 0xFD, 0x01, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085ABDBB: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085ABDBB
gBattleMessageData_085ABDBB: @ 0x085ABDBB
	@ analyzed canonical ROM range 0x085ABDBB-0x085ABDE0
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x26
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x1A, 0xFE, 0xFD, 0x06, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C
	.byte 0x10, 0xAB, 0xFB, 0xFD, 0x2E, 0x19, 0x00, 0xFD, 0x2F, 0x1A, 0xFE, 0xFD, 0x08, 0x2D, 0x00, 0x08
	.byte 0x28, 0x41, 0x0C, 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085ABDE1: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085ABDE1
gBattleMessageData_085ABDE1: @ 0x085ABDE1
	@ analyzed canonical ROM range 0x085ABDE1-0x085ABDF3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x13
	.byte 0xFD, 0x2E, 0x19, 0x00, 0xFD, 0x2F, 0x1A, 0xFE, 0xFD, 0x00, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C
	.byte 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085ABDF4: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085ABDF4
gBattleMessageData_085ABDF4: @ 0x085ABDF4
	@ analyzed canonical ROM range 0x085ABDF4-0x085ABE12
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x1F
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x14, 0xFE, 0xFD, 0x2E, 0x19, 0x00, 0xFD, 0x2F, 0x37, 0xFA
	.byte 0x0C, 0x36, 0x03, 0x48, 0x2D, 0x00, 0x0C, 0x06, 0x09, 0x13, 0x07, 0x10, 0xAB, 0xFB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085ABE13: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085ABE13
gBattleMessageData_085ABE13: @ 0x085ABE13
	@ analyzed canonical ROM range 0x085ABE13-0x085ABE25
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x13
	.byte 0xFD, 0x32, 0x19, 0x00, 0xFD, 0x33, 0x1A, 0xFE, 0xFD, 0x07, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C
	.byte 0x10, 0xAB, 0xFA
	.globl gText_Rom_5ABE26
gText_Rom_5ABE26: @ 0x085ABE26
	.string "ゆけっ！ {B_PLAYER_MON1_NAME}！$"
	.if (. - gText_Rom_5ABE26) > 0x9
	.error "gText_Rom_5ABE26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABE26) < 0x9
	.space 0x9 - (. - gText_Rom_5ABE26)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085ABE2F: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085ABE2F
gBattleMessageData_085ABE2F:
	.globl gUnknown_85ABE2F
gUnknown_85ABE2F: @ 0x085ABE2F
	@ analyzed canonical ROM range 0x085ABE2F-0x085ABE4F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x21
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x14, 0xFE, 0xFD, 0x2E, 0x19, 0x00, 0xFD, 0x2F, 0xFA, 0x14
	.byte 0x19, 0x00, 0x0C, 0x36, 0x03, 0x48, 0x16, 0x00, 0x06, 0x50, 0x10, 0xAB, 0xFB, 0xFF, 0xFD, 0x30
	.byte 0xFF
	.globl gText_Rom_5ABE50
gText_Rom_5ABE50: @ 0x085ABE50
	.string "{B_ATK_NAME_WITH_PREFIX}は\nじぶんの ちからを はっき できない ようだ!$"
	.if (. - gText_Rom_5ABE50) > 0x1c
	.error "gText_Rom_5ABE50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABE50) < 0x1c
	.space 0x1c - (. - gText_Rom_5ABE50)
	.endif
	@ Decoded text from ROM range: offset=0x5ABE6C, size=0x13
	.string "{B_SCR_NAME_WITH_PREFIX}の　めの　いろが　かわっていく！$"

	@ src/battle_message.c:514 battle_message_line_514
	.globl gText_Rom_5ABE7F
gText_Rom_5ABE7F: @ 0x085ABE7F
	.string "{B_SCR_NAME_WITH_PREFIX}は たいせいを たてなおしている!$"
	.if (. - gText_Rom_5ABE7F) > 0x14
	.error "gText_Rom_5ABE7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABE7F) < 0x14
	.space 0x14 - (. - gText_Rom_5ABE7F)
	.endif

	@ src/battle_message.c:515 battle_message_line_515
	.globl gText_Rom_5ABE93
gText_Rom_5ABE93: @ 0x085ABE93
	.string "{B_SCR_NAME_WITH_PREFIX}は ひくく うなり はじめた!$"
	.if (. - gText_Rom_5ABE93) > 0x12
	.error "gText_Rom_5ABE93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABE93) < 0x12
	.space 0x12 - (. - gText_Rom_5ABE93)
	.endif

	@ src/battle_message.c:516 battle_message_line_516
	.globl gText_Rom_5ABEA5
gText_Rom_5ABEA5: @ 0x085ABEA5
	.string "{B_SCR_NAME_WITH_PREFIX}は まだまだ やるきだ!$"
	.if (. - gText_Rom_5ABEA5) > 0xf
	.error "gText_Rom_5ABEA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABEA5) < 0xf
	.space 0xf - (. - gText_Rom_5ABEA5)
	.endif
	@ analyzed canonical ROM range 0x085ABEB4-0x085ABEBB
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x016E, 0x016F, 0x0170, 0x0171
	.globl gText_Rom_5ABEBC
gText_Rom_5ABEBC: @ 0x085ABEBC
	.string "しんぱん『あと 3ターンで けっちゃくが\nつかないと はんていに なります!$"
	.if (. - gText_Rom_5ABEBC) > 0x27
	.error "gText_Rom_5ABEBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABEBC) < 0x27
	.space 0x27 - (. - gText_Rom_5ABEBC)
	.endif

	@ src/battle_message.c:1541 battle_message_line_1541
	.globl gText_Rom_5ABEE3
gText_Rom_5ABEE3: @ 0x085ABEE3
	.string "しんぱん『そこまでーーー!\nこの たいけつは はんていに なります!$"
	.if (. - gText_Rom_5ABEE3) > 0x23
	.error "gText_Rom_5ABEE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABEE3) < 0x23
	.space 0x23 - (. - gText_Rom_5ABEE3)
	.endif

	@ src/battle_message.c:1542 battle_message_line_1542
	.globl gText_Rom_5ABF06
gText_Rom_5ABF06: @ 0x085ABF06
	.string "しんぱん『はんてい その1! 「こころ」!\nせめる きもちを みせたもの!\p$"
	.if (. - gText_Rom_5ABF06) > 0x27
	.error "gText_Rom_5ABF06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABF06) < 0x27
	.space 0x27 - (. - gText_Rom_5ABF06)
	.endif

	@ src/battle_message.c:1543 battle_message_line_1543
	.globl gText_Rom_5ABF2D
gText_Rom_5ABF2D: @ 0x085ABF2D
	.string "しんぱん『はんてい その2! 「わざ」!\nてきかくに わざを くりだしたもの!\p$"
	.if (. - gText_Rom_5ABF2D) > 0x29
	.error "gText_Rom_5ABF2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABF2D) < 0x29
	.space 0x29 - (. - gText_Rom_5ABF2D)
	.endif

	@ src/battle_message.c:1544 battle_message_line_1544
	.globl gText_Rom_5ABF56
gText_Rom_5ABF56: @ 0x085ABF56
	.string "しんぱん『はんてい その3! 「からだ」!\nあふれる たいりょくを もちえるもの!\p$"
	.if (. - gText_Rom_5ABF56) > 0x2b
	.error "gText_Rom_5ABF56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABF56) < 0x2b
	.space 0x2b - (. - gText_Rom_5ABF56)
	.endif
	@ analyzed canonical ROM range 0x085ABF81-0x085ABFC6
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0C, 0x2E, 0x4B, 0x2E, 0xB1, 0x1A, 0x2E, 0x13, 0x02, 0x00, 0xFD, 0x00, 0x00, 0x10, 0x02, 0x00
	.byte 0xFD, 0x01, 0xFE, 0x0C, 0x36, 0x03, 0x0C, 0x34, 0xAB, 0x00, 0xFD, 0x23, 0x19, 0x00, 0xFD, 0x05
	.byte 0xAB, 0xFB, 0xFF, 0x0C, 0x2E, 0x4B, 0x2E, 0xB1, 0x1A, 0x2E, 0x13, 0x02, 0x00, 0xFD, 0x00, 0x00
	.byte 0x10, 0x02, 0x00, 0xFD, 0x01, 0xFE, 0x0C, 0x36, 0x03, 0x0C, 0x34, 0xAB, 0x00, 0xFD, 0x1D, 0x19
	.byte 0x00, 0xFD, 0x06, 0xAB, 0xFB, 0xFF
	.globl gText_Rom_5ABFC7
gText_Rom_5ABFC7: @ 0x085ABFC7
	.string "しんぱん『はんてい 3 たい 3\nひきわけーーー!\p$"
	.if (. - gText_Rom_5ABFC7) > 0x1b
	.error "gText_Rom_5ABFC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABFC7) < 0x1b
	.space 0x1b - (. - gText_Rom_5ABFC7)
	.endif

	@ src/battle_message.c:517 battle_message_line_517
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABFE2
gText_Rom_5ABFE2: @ 0x085ABFE2
	.string "{B_PLAYER_MON1_NAME}は はんていで\nあいての {B_OPPONENT_MON1_NAME}に かった！$"
	.if (. - gText_Rom_5ABFE2) != 0x18
	.error "gText_Rom_5ABFE2 must retain its original byte length"
	.endif
	.globl gText_Rom_5ABFF5
	.set gText_Rom_5ABFF5, gText_Rom_5ABFE2 + 0x13

	@ src/battle_message.c:518 battle_message_line_518
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABFFA
gText_Rom_5ABFFA: @ 0x085ABFFA
	.string "{B_PLAYER_MON1_NAME}は はんていで\nあいての {B_OPPONENT_MON1_NAME}に まけた！$"
	.if (. - gText_Rom_5ABFFA) != 0x18
	.error "gText_Rom_5ABFFA must retain its original byte length"
	.endif
