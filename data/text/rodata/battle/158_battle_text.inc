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
	.incbin "baserom.gba", 0x5abda7, 0x3
	.globl gUnknown_85ABDAA
gUnknown_85ABDAA: @ 0x085ABDAA

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
	.globl gUnknown_85ABDAE
gUnknown_85ABDAE: @ 0x085ABDAE
	.incbin "baserom.gba", 0x5abdae, 0xd
	.globl gUnknown_85ABDBB
gUnknown_85ABDBB: @ 0x085ABDBB
	.incbin "baserom.gba", 0x5abdbb, 0x26
	.globl gUnknown_85ABDE1
gUnknown_85ABDE1: @ 0x085ABDE1
	.incbin "baserom.gba", 0x5abde1, 0x13
	.globl gUnknown_85ABDF4
gUnknown_85ABDF4: @ 0x085ABDF4
	.incbin "baserom.gba", 0x5abdf4, 0x1f
	.globl gUnknown_85ABE13
gUnknown_85ABE13: @ 0x085ABE13
	.incbin "baserom.gba", 0x5abe13, 0x13

	@ src/battle_message.c:109 sText_GoPkmn
	.globl gText_Rom_5ABE26
gText_Rom_5ABE26: @ 0x085ABE26
	.string "ゆけっ！ {B_PLAYER_MON1_NAME}！$"
	.if (. - gText_Rom_5ABE26) > 0x9
	.error "gText_Rom_5ABE26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABE26) < 0x9
	.space 0x9 - (. - gText_Rom_5ABE26)
	.endif
	.globl gUnknown_85ABE2F
gUnknown_85ABE2F: @ 0x085ABE2F
	.incbin "baserom.gba", 0x5abe2f, 0x21

	@ src/battle_message.c:512 battle_message_line_512
	.globl gText_Rom_5ABE50
gText_Rom_5ABE50: @ 0x085ABE50
	.string "{B_ATK_NAME_WITH_PREFIX}は\nじぶんの ちからを はっき できない ようだ!$"
	.if (. - gText_Rom_5ABE50) > 0x1c
	.error "gText_Rom_5ABE50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABE50) < 0x1c
	.space 0x1c - (. - gText_Rom_5ABE50)
	.endif
	.incbin "baserom.gba", 0x5abe6c, 0x13

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
	.incbin "baserom.gba", 0x5abeb4, 0x8

	@ src/battle_message.c:1540 battle_message_line_1540
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
	.incbin "baserom.gba", 0x5abf81, 0x46

	@ src/battle_message.c:1547 battle_message_line_1547
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
	.globl gText_Rom_5AC00D
	.set gText_Rom_5AC00D, gText_Rom_5ABFFA + 0x13
	.incbin "baserom.gba", 0x5ac012, 0x3a
	.globl gUnknown_85AC04C
gUnknown_85AC04C: @ 0x085AC04C
	.incbin "baserom.gba", 0x5ac04c, 0x65
	.globl gUnknown_85AC0B1
gUnknown_85AC0B1: @ 0x085AC0B1
	.incbin "baserom.gba", 0x5ac0b1, 0x10

