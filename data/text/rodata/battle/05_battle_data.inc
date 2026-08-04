	@ src/data/easy_chat/easy_chat_group_trainer.h:16 easy_chat_group_trainer_line_16 (+2 aliases)
	.globl gText_Rom_2C19B0
gText_Rom_2C19B0: @ 0x082C19B0
	.string "こうかん$"
	.if (. - gText_Rom_2C19B0) > 0x5
	.error "gText_Rom_2C19B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C19B0) < 0x5
	.space 0x5 - (. - gText_Rom_2C19B0)
	.endif
	.space 0x3, 0x00
	.globl gUnknown_82C19B8
gUnknown_82C19B8: @ 0x082C19B8
	.incbin "baserom.gba", 0x2c19b8, 0xe

	@ src/data/union_room.h:88 sText_BButtonCancel (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C19C6
gText_Rom_2C19C6: @ 0x082C19C6
	.string "{B_BUTTON}やめる$"
	.if (. - gText_Rom_2C19C6) != 0x6
	.error "gText_Rom_2C19C6 must retain its original byte length"
	.endif
	.globl gText_Rom_2C19C8
	.set gText_Rom_2C19C8, gText_Rom_2C19C6 + 0x2
	.globl gUnknown_82C19CC
gUnknown_82C19CC: @ 0x082C19CC

	@ asm/union_room.s:4950 sub_08014A50
	.globl gText_Rom_2C19CC
gText_Rom_2C19CC: @ 0x082C19CC
	.string "ともだちを　えらんでください$"
	.if (. - gText_Rom_2C19CC) > 0xf
	.error "gText_Rom_2C19CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C19CC) < 0xf
	.space 0xf - (. - gText_Rom_2C19CC)
	.endif
	.incbin "baserom.gba", 0x2c19db, 0x209
	.globl gUnknown_82C1BE4
gUnknown_82C1BE4: @ 0x082C1BE4
	.incbin "baserom.gba", 0x2c1be4, 0x58
	.globl gUnknown_82C1C3C
gUnknown_82C1C3C: @ 0x082C1C3C

	@ asm/union_room.s:5364 sub_08014DFC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1C3C
gText_Rom_2C1C3C: @ 0x082C1C3C
	.string "ジョイスポットを　さがしています\nしばらく　おまちください$"
	.if (. - gText_Rom_2C1C3C) != 0x1e
	.error "gText_Rom_2C1C3C must retain its original byte length"
	.endif
	.globl gText_Rom_2C1C4D
	.set gText_Rom_2C1C4D, gText_Rom_2C1C3C + 0x11
	.incbin "baserom.gba", 0x2c1c5a, 0x26
	.globl gUnknown_82C1C80
gUnknown_82C1C80: @ 0x082C1C80

	@ asm/union_room.s:1443 sub_08012BB4
	.globl gText_Rom_2C1C80
gText_Rom_2C1C80: @ 0x082C1C80
	.string "{0xFD}{0x02}からの\nへんじを　まっています$"
	.if (. - gText_Rom_2C1C80) > 0x12
	.error "gText_Rom_2C1C80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1C80) < 0x12
	.space 0x12 - (. - gText_Rom_2C1C80)
	.endif
	.space 0x2, 0x00
	.globl gUnknown_82C1C94
gUnknown_82C1C94: @ 0x082C1C94

	@ asm/union_room.s:1450 sub_08012BB4
	.globl gText_Rom_2C1C94
gText_Rom_2C1C94: @ 0x082C1C94
	.string "{0xFD}{0x02}に　メンバー　とうろくを\nおねがいしています！　おまちください$"
	.if (. - gText_Rom_2C1C94) > 0x22
	.error "gText_Rom_2C1C94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1C94) < 0x22
	.space 0x22 - (. - gText_Rom_2C1C94)
	.endif
	.space 0x2, 0x00
	.globl gUnknown_82C1CB8
gUnknown_82C1CB8: @ 0x082C1CB8

	@ asm/union_room.s:5523 sub_08014DFC
	.globl gText_Rom_2C1CB8
gText_Rom_2C1CB8: @ 0x082C1CB8
	.string "ジョイスポットからの\nへんじを　まっています$"
	.if (. - gText_Rom_2C1CB8) > 0x17
	.error "gText_Rom_2C1CB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1CB8) < 0x17
	.space 0x17 - (. - gText_Rom_2C1CB8)
	.endif
	.incbin "baserom.gba", 0x2c1ccf, 0x12

	@ data/text/cable_club.inc:142 CableClub_Text_PleaseWait
	.globl gText_Rom_2C1CE1
gText_Rom_2C1CE1: @ 0x082C1CE1
	.string "しょうしょう おまちください$"
	.if (. - gText_Rom_2C1CE1) > 0xf
	.error "gText_Rom_2C1CE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1CE1) < 0xf
	.space 0xf - (. - gText_Rom_2C1CE1)
	.endif
	.incbin "baserom.gba", 0x2c1cf0, 0x40
	.globl gUnknown_82C1D30
gUnknown_82C1D30: @ 0x082C1D30
	.incbin "baserom.gba", 0x2c1d30, 0x8

	@ src/data/easy_chat/easy_chat_group_battle.h:172 easy_chat_group_battle_line_172 (+1 aliases)
	.globl gText_Rom_2C1D38
gText_Rom_2C1D38: @ 0x082C1D38
	.string "たいせん$"
	.if (. - gText_Rom_2C1D38) > 0x5
	.error "gText_Rom_2C1D38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1D38) < 0x5
	.space 0x5 - (. - gText_Rom_2C1D38)
	.endif
	.space 0x3, 0x00

	@ src/data/union_room.h:539 sText_Chat2 (+1 aliases)
	.globl gText_Rom_2C1D40
gText_Rom_2C1D40: @ 0x082C1D40
	.string "チャット$"
	.if (. - gText_Rom_2C1D40) > 0x5
	.error "gText_Rom_2C1D40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1D40) < 0x5
	.space 0x5 - (. - gText_Rom_2C1D40)
	.endif
	.space 0x3, 0x00

	@ src/data/easy_chat/easy_chat_groups.h:57 easy_chat_groups_line_57 (+1 aliases)
	.globl gText_Rom_2C1D48
gText_Rom_2C1D48: @ 0x082C1D48
	.string "あいさつ$"
	.if (. - gText_Rom_2C1D48) > 0x5
	.error "gText_Rom_2C1D48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1D48) < 0x5
	.space 0x5 - (. - gText_Rom_2C1D48)
	.endif
	.space 0x3, 0x00

