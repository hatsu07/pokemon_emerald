	@ asm/field_specials.s:6476 sub_0813AE0C
	.globl gText_Rom_5C9299
gText_Rom_5C9299: @ 0x085C9299
	.string "▶$"
	.if (. - gText_Rom_5C9299) > 0x2
	.error "gText_Rom_5C9299 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9299) < 0x2
	.space 0x2 - (. - gText_Rom_5C9299)
	.endif
	.incbin "baserom.gba", 0x5c929b, 0x2
	.globl gUnknown_85C929D
gUnknown_85C929D: @ 0x085C929D

	@ src/strings.c:115 gText_WelcomeToHOF
	.globl gText_Rom_5C929D
gText_Rom_5C929D: @ 0x085C929D
	.string "でんどういり おめでとう!$"
	.if (. - gText_Rom_5C929D) > 0xe
	.error "gText_Rom_5C929D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C929D) < 0xe
	.space 0xe - (. - gText_Rom_5C929D)
	.endif
	.incbin "baserom.gba", 0x5c92ab, 0x3f

	@ src/strings.c:117 gText_HOFDexSaving
	.globl gText_Rom_5C92EA
gText_Rom_5C92EA: @ 0x085C92EA
	.string "ここまでの レポートを かきしるしています!\nでんげんを きらないでください$"
	.if (. - gText_Rom_5C92EA) > 0x27
	.error "gText_Rom_5C92EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C92EA) < 0x27
	.space 0x27 - (. - gText_Rom_5C92EA)
	.endif
	.globl gUnknown_85C9311
gUnknown_85C9311: @ 0x085C9311

	@ src/strings.c:118 gText_HOFCorrupted
	.globl gText_Rom_5C9311
gText_Rom_5C9311: @ 0x085C9311
	.string "でんどういりの きろくが こわれています!$"
	.if (. - gText_Rom_5C9311) > 0x16
	.error "gText_Rom_5C9311 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9311) < 0x16
	.space 0x16 - (. - gText_Rom_5C9311)
	.endif
	.incbin "baserom.gba", 0x5c9327, 0x1
	.globl gUnknown_85C9328
gUnknown_85C9328: @ 0x085C9328

	@ asm/hall_of_fame.s:2002 Task_HofPC_DrawSpritesPrintText
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9328
gText_Rom_5C9328: @ 0x085C9328
	.string "だい{0xFD}{0x02}かい　でんどういり！$"
	.if (. - gText_Rom_5C9328) != 0xf
	.error "gText_Rom_5C9328 must retain its original byte length"
	.endif
	.globl gText_Rom_5C932A
	.set gText_Rom_5C932A, gText_Rom_5C9328 + 0x2
	.globl gUnknown_85C9337
gUnknown_85C9337: @ 0x085C9337

	@ src/strings.c:120 gText_LeagueChamp
	.globl gText_Rom_5C9337
gText_Rom_5C9337: @ 0x085C9337
	.string "リーグ チャンピオン! おめでとう!$"
	.if (. - gText_Rom_5C9337) > 0x13
	.error "gText_Rom_5C9337 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9337) < 0x13
	.space 0x13 - (. - gText_Rom_5C9337)
	.endif
	.incbin "baserom.gba", 0x5c934a, 0x1
	.globl gUnknown_85C934B
gUnknown_85C934B: @ 0x085C934B
	.incbin "baserom.gba", 0x5c934b, 0x4
	.globl gUnknown_85C934F
gUnknown_85C934F: @ 0x085C934F
	.incbin "baserom.gba", 0x5c934f, 0xa
	.globl gUnknown_85C9359
gUnknown_85C9359: @ 0x085C9359

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:184 easy_chat_group_lifestyle_line_184 (+5 aliases)
	.globl gText_Rom_5C9359
gText_Rom_5C9359: @ 0x085C9359
	.string "なまえ$"
	.if (. - gText_Rom_5C9359) > 0x4
	.error "gText_Rom_5C9359 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9359) < 0x4
	.space 0x4 - (. - gText_Rom_5C9359)
	.endif
	.globl gUnknown_85C935D
gUnknown_85C935D: @ 0x085C935D
	.incbin "baserom.gba", 0x5c935d, 0x6
	.globl gUnknown_85C9363
gUnknown_85C9363: @ 0x085C9363

	@ src/strings.c:126 gText_BirchInTrouble
	.globl gText_Rom_5C9363
gText_Rom_5C9363: @ 0x085C9363
	.string "オダマキはかせが ピンチだ!\nポケモンを だして たすけてあげよう!$"
	.if (. - gText_Rom_5C9363) > 0x23
	.error "gText_Rom_5C9363 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9363) < 0x23
	.space 0x23 - (. - gText_Rom_5C9363)
	.endif
	.globl gUnknown_85C9386
gUnknown_85C9386: @ 0x085C9386

	@ src/strings.c:127 gText_ConfirmStarterChoice
	.globl gText_Rom_5C9386
gText_Rom_5C9386: @ 0x085C9386
	.string "このポケモンにしますか?$"
	.if (. - gText_Rom_5C9386) > 0xd
	.error "gText_Rom_5C9386 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9386) < 0xd
	.space 0xd - (. - gText_Rom_5C9386)
	.endif
	.globl gUnknown_85C9393
gUnknown_85C9393: @ 0x085C9393

