	@ src/battle_message.c:409 battle_message_line_409
	.globl gText_Rom_5AABCF
gText_Rom_5AABCF: @ 0x085AABCF
	.string "すべての ステータスが\nもとに もどった!$"
	.if (. - gText_Rom_5AABCF) > 0x16
	.error "gText_Rom_5AABCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AABCF) < 0x16
	.space 0x16 - (. - gText_Rom_5AABCF)
	.endif

	@ src/battle_message.c:410 battle_message_line_410
	.globl gText_Rom_5AABE5
gText_Rom_5AABE5: @ 0x085AABE5
	.string "こばんが あたりに ちらばった!$"
	.if (. - gText_Rom_5AABE5) > 0x11
	.error "gText_Rom_5AABE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AABE5) < 0x11
	.space 0x11 - (. - gText_Rom_5AABE5)
	.endif

	@ src/battle_message.c:411 battle_message_line_411
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AABF6
gText_Rom_5AABF6: @ 0x085AABF6
	.string "しかし ぶんしんを だすには\nたいりょくが たりなかった!$"
	.if (. - gText_Rom_5AABF6) != 0x1e
	.error "gText_Rom_5AABF6 must retain its original byte length"
	.endif
	.globl gText_Rom_5AAC0F
	.set gText_Rom_5AAC0F, gText_Rom_5AABF6 + 0x19

	@ src/battle_message.c:412 battle_message_line_412
	.globl gText_Rom_5AAC14
gText_Rom_5AAC14: @ 0x085AAC14
	.string "おたがいの たいりょくを\nわかちあった!$"
	.if (. - gText_Rom_5AAC14) > 0x15
	.error "gText_Rom_5AAC14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAC14) < 0x15
	.space 0x15 - (. - gText_Rom_5AAC14)
	.endif

	@ src/battle_message.c:413 battle_message_line_413
	.globl gText_Rom_5AAC29
gText_Rom_5AAC29: @ 0x085AAC29
	.string "すずのねが ひびきわたった!$"
	.if (. - gText_Rom_5AAC29) > 0xf
	.error "gText_Rom_5AAC29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAC29) < 0xf
	.space 0xf - (. - gText_Rom_5AAC29)
	.endif

	@ src/battle_message.c:414 battle_message_line_414
	.globl gText_Rom_5AAC38
gText_Rom_5AAC38: @ 0x085AAC38
	.string "おたがいのポケモンは\n3ターンごに ほろびてしまう!$"
	.if (. - gText_Rom_5AAC38) > 0x1b
	.error "gText_Rom_5AAC38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAC38) < 0x1b
	.space 0x1b - (. - gText_Rom_5AAC38)
	.endif

	@ src/battle_message.c:415 battle_message_line_415
	.globl gText_Rom_5AAC53
gText_Rom_5AAC53: @ 0x085AAC53
	.string "わざの のこりポイントが ない!\p$"
	.if (. - gText_Rom_5AAC53) > 0x12
	.error "gText_Rom_5AAC53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAC53) < 0x12
	.space 0x12 - (. - gText_Rom_5AAC53)
	.endif

	@ src/battle_message.c:416 battle_message_line_416
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAC65
gText_Rom_5AAC65: @ 0x085AAC65
	.string "しかし\nわざの のこりポイントが なかった!$"
	.if (. - gText_Rom_5AAC65) != 0x17
	.error "gText_Rom_5AAC65 must retain its original byte length"
	.endif
	.globl gText_Rom_5AAC77
	.set gText_Rom_5AAC77, gText_Rom_5AAC65 + 0x12

	@ src/battle_message.c:433 battle_message_line_433
	.globl gText_Rom_5AAC7C
gText_Rom_5AAC7C: @ 0x085AAC7C
	.string "{B_ATK_NAME_WITH_PREFIX}は ねむったまま\nめいれいを むしした!$"
	.if (. - gText_Rom_5AAC7C) > 0x17
	.error "gText_Rom_5AAC7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAC7C) < 0x17
	.space 0x17 - (. - gText_Rom_5AAC7C)
	.endif

	@ src/battle_message.c:434 battle_message_line_434
	.globl gText_Rom_5AAC93
gText_Rom_5AAC93: @ 0x085AAC93
	.string "{B_ATK_NAME_WITH_PREFIX}は めいれいを むしした!$"
	.if (. - gText_Rom_5AAC93) > 0x10
	.error "gText_Rom_5AAC93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAC93) < 0x10
	.space 0x10 - (. - gText_Rom_5AAC93)
	.endif

	@ src/battle_message.c:435 battle_message_line_435
	.globl gText_Rom_5AACA3
gText_Rom_5AACA3: @ 0x085AACA3
	.string "{B_ATK_NAME_WITH_PREFIX}は ひるねを はじめた!$"
	.if (. - gText_Rom_5AACA3) > 0xf
	.error "gText_Rom_5AACA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AACA3) < 0xf
	.space 0xf - (. - gText_Rom_5AACA3)
	.endif

	@ src/battle_message.c:436 battle_message_line_436
	.globl gText_Rom_5AACB2
gText_Rom_5AACB2: @ 0x085AACB2
	.string "{B_ATK_NAME_WITH_PREFIX}は なまけている!$"
	.if (. - gText_Rom_5AACB2) > 0xc
	.error "gText_Rom_5AACB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AACB2) < 0xc
	.space 0xc - (. - gText_Rom_5AACB2)
	.endif

	@ src/battle_message.c:437 battle_message_line_437
	.globl gText_Rom_5AACBE
gText_Rom_5AACBE: @ 0x085AACBE
	.string "{B_ATK_NAME_WITH_PREFIX}は いうことを きかない!$"
	.if (. - gText_Rom_5AACBE) > 0x10
	.error "gText_Rom_5AACBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AACBE) < 0x10
	.space 0x10 - (. - gText_Rom_5AACBE)
	.endif

	@ src/battle_message.c:438 battle_message_line_438
	.globl gText_Rom_5AACCE
gText_Rom_5AACCE: @ 0x085AACCE
	.string "{B_ATK_NAME_WITH_PREFIX}は そっぽを むいた!$"
	.if (. - gText_Rom_5AACCE) > 0xe
	.error "gText_Rom_5AACCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AACCE) < 0xe
	.space 0xe - (. - gText_Rom_5AACCE)
	.endif

	@ src/battle_message.c:439 battle_message_line_439
	.globl gText_Rom_5AACDC
gText_Rom_5AACDC: @ 0x085AACDC
	.string "{B_ATK_NAME_WITH_PREFIX}は しらんぷりした!$"
	.if (. - gText_Rom_5AACDC) > 0xd
	.error "gText_Rom_5AACDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AACDC) < 0xd
	.space 0xd - (. - gText_Rom_5AACDC)
	.endif
	@ analyzed canonical ROM range 0x085AACE9-0x085AAD21
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x1A, 0xFE, 0xFD, 0x01, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0F
	.byte 0x03, 0x14, 0x00, 0x0C, 0x13, 0x02, 0x29, 0xFB, 0xFD, 0x23, 0x23, 0x00, 0x9F, 0x59, 0x73, 0x7E
	.byte 0x2D, 0xFE, 0x02, 0x2A, 0x06, 0x04, 0x1F, 0x0D, 0x06, 0xAC, 0xFF, 0xFD, 0x0F, 0x1A, 0xFE, 0xFD
	.byte 0x00, 0x2D, 0x00, 0x05, 0x4A, 0x04, 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AAD22: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AAD22
gBattleMessageData_085AAD22:
	.globl gBattleMessageData_085AAD22
	@ analyzed canonical ROM range 0x085AAD22-0x085AAD37
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x16 bytes=22
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0xFE, 0x14, 0x19, 0x00, 0x0C, 0x36, 0x03, 0x48, 0x16, 0x00
	.byte 0x06, 0x50, 0x10, 0xAB, 0xFB, 0xFF
