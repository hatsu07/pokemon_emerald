	@ asm/move_relearner.s:1028 HideHeartSpritesAndShowTeachMoveText
	.globl gText_Rom_5AD9A0
gText_Rom_5AD9A0: @ 0x085AD9A0
	.string "{0xFD}{0x02}に　どのわざを　おぼえさせる？$"
	.if (. - gText_Rom_5AD9A0) > 0x12
	.error "gText_Rom_5AD9A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AD9A0) < 0x12
	.space 0x12 - (. - gText_Rom_5AD9A0)
	.endif
	.globl gUnknown_85AD9B2
gUnknown_85AD9B2: @ 0x085AD9B2

	@ asm/move_relearner.s:1150 sub_08160E70
	.globl gText_Rom_5AD9B2
gText_Rom_5AD9B2: @ 0x085AD9B2
	.string "{0xFD}{0x03}を　おぼえさせますか？$"
	.if (. - gText_Rom_5AD9B2) > 0xe
	.error "gText_Rom_5AD9B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AD9B2) < 0xe
	.space 0xe - (. - gText_Rom_5AD9B2)
	.endif
	.globl gUnknown_85AD9C0
gUnknown_85AD9C0: @ 0x085AD9C0

	@ src/strings.c:272 gText_PkmnLearnedMove3
	.globl gText_Rom_5AD9C0
gText_Rom_5AD9C0: @ 0x085AD9C0
	.string "{STR_VAR_1}は あたらしく\n{STR_VAR_2}を おぼえた!$"
	.if (. - gText_Rom_5AD9C0) > 0x14
	.error "gText_Rom_5AD9C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AD9C0) < 0x14
	.space 0x14 - (. - gText_Rom_5AD9C0)
	.endif
	.globl gUnknown_85AD9D4
gUnknown_85AD9D4: @ 0x085AD9D4
	.incbin "baserom.gba", 0x5ad9d4, 0x53
	.globl gUnknown_85ADA27
gUnknown_85ADA27: @ 0x085ADA27

	@ src/strings.c:276 gText_StopLearningMove2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ADA27
gText_Rom_5ADA27: @ 0x085ADA27
	.string "それでは…… {STR_VAR_2}を\nおぼえるのを あきらめますか?$"
	.if (. - gText_Rom_5ADA27) != 0x1b
	.error "gText_Rom_5ADA27 must retain its original byte length"
	.endif
	.globl gText_Rom_5ADA39
	.set gText_Rom_5ADA39, gText_Rom_5ADA27 + 0x12
	.globl gUnknown_85ADA42
gUnknown_85ADA42: @ 0x085ADA42
	.incbin "baserom.gba", 0x5ada42, 0x3

	@ src/strings.c:1126 gText_MoveRelearnerAndPoof
	.globl gText_Rom_5ADA45
gText_Rom_5ADA45: @ 0x085ADA45
	.string "1 {PAUSE 15}2の {PAUSE 15}…{PAUSE 15}…{PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}ポカン!\p$"
	.if (. - gText_Rom_5ADA45) > 0x22
	.error "gText_Rom_5ADA45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ADA45) < 0x22
	.space 0x22 - (. - gText_Rom_5ADA45)
	.endif
	.globl gUnknown_85ADA67
gUnknown_85ADA67: @ 0x085ADA67
	.incbin "baserom.gba", 0x5ada67, 0x20

	@ src/strings.c:272 gText_PkmnLearnedMove3
	.globl gText_Rom_5ADA87
gText_Rom_5ADA87: @ 0x085ADA87
	.string "{STR_VAR_1}は あたらしく\n{STR_VAR_2}を おぼえた!$"
	.if (. - gText_Rom_5ADA87) > 0x14
	.error "gText_Rom_5ADA87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ADA87) < 0x14
	.space 0x14 - (. - gText_Rom_5ADA87)
	.endif
	.incbin "baserom.gba", 0x5ada9b, 0x14
	.globl gUnknown_85ADAAF
gUnknown_85ADAAF: @ 0x085ADAAF

	@ asm/move_relearner.s:1128 sub_08160E70
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ADAAF
gText_Rom_5ADAAF: @ 0x085ADAAF
	.string "{0xFD}{0x02}に　わざを　おぼえさせるのを\nあきらめますか？$"
	.if (. - gText_Rom_5ADAAF) != 0x1a
	.error "gText_Rom_5ADAAF must retain its original byte length"
	.endif
	.globl gText_Rom_5ADAC0
	.set gText_Rom_5ADAC0, gText_Rom_5ADAAF + 0x11
	.globl gUnknown_85ADAC9
gUnknown_85ADAC9: @ 0x085ADAC9

	@ src/strings.c:1131 gText_MoveRelearnerWhichMoveToForget
	.globl gText_Rom_5ADAC9
gText_Rom_5ADAC9: @ 0x085ADAC9
	.string "どの わざを\nわすれさせたい?\p$"
	.if (. - gText_Rom_5ADAC9) > 0x11
	.error "gText_Rom_5ADAC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ADAC9) < 0x11
	.space 0x11 - (. - gText_Rom_5ADAC9)
	.endif
	.incbin "baserom.gba", 0x5adada, 0x1a
	.globl gUnknown_85ADAF4
gUnknown_85ADAF4: @ 0x085ADAF4
	.incbin "baserom.gba", 0x5adaf4, 0x8
	.globl gUnknown_85ADAFC
gUnknown_85ADAFC: @ 0x085ADAFC
	.incbin "baserom.gba", 0x5adafc, 0x8
	.globl gUnknown_85ADB04
gUnknown_85ADB04: @ 0x085ADB04
	.incbin "baserom.gba", 0x5adb04, 0x10
	.globl gUnknown_85ADB14
gUnknown_85ADB14: @ 0x085ADB14
	.incbin "baserom.gba", 0x5adb14, 0x40
	.globl gUnknown_85ADB54
gUnknown_85ADB54: @ 0x085ADB54
	.incbin "baserom.gba", 0x5adb54, 0x18
	.globl gUnknown_85ADB6C
gUnknown_85ADB6C: @ 0x085ADB6C
	.incbin "baserom.gba", 0x5adb6c, 0x8
	.globl gUnknown_85ADB74
gUnknown_85ADB74: @ 0x085ADB74
	.incbin "baserom.gba", 0x5adb74, 0x80
	.globl gUnknown_85ADBF4
gUnknown_85ADBF4: @ 0x085ADBF4
	.incbin "baserom.gba", 0x5adbf4, 0x2ff5

	@ src/data/easy_chat/easy_chat_group_conditions.h:82 easy_chat_group_conditions_line_82
	.globl gText_Rom_5B0BE9
gText_Rom_5B0BE9: @ 0x085B0BE9
	.string "いない$"
	.if (. - gText_Rom_5B0BE9) > 0x4
	.error "gText_Rom_5B0BE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B0BE9) < 0x4
	.space 0x4 - (. - gText_Rom_5B0BE9)
	.endif
	.incbin "baserom.gba", 0x5b0bed, 0x40

	@ src/data/easy_chat/easy_chat_group_conditions.h:82 easy_chat_group_conditions_line_82
	.globl gText_Rom_5B0C2D
gText_Rom_5B0C2D: @ 0x085B0C2D
	.string "いない$"
	.if (. - gText_Rom_5B0C2D) > 0x4
	.error "gText_Rom_5B0C2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B0C2D) < 0x4
	.space 0x4 - (. - gText_Rom_5B0C2D)
	.endif
	.incbin "baserom.gba", 0x5b0c31, 0x40

	@ src/data/easy_chat/easy_chat_group_conditions.h:82 easy_chat_group_conditions_line_82
	.globl gText_Rom_5B0C71
gText_Rom_5B0C71: @ 0x085B0C71
	.string "いない$"
	.if (. - gText_Rom_5B0C71) > 0x4
	.error "gText_Rom_5B0C71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B0C71) < 0x4
	.space 0x4 - (. - gText_Rom_5B0C71)
	.endif
	.incbin "baserom.gba", 0x5b0c75, 0x40

	@ src/data/easy_chat/easy_chat_group_conditions.h:82 easy_chat_group_conditions_line_82
	.globl gText_Rom_5B0CB5
gText_Rom_5B0CB5: @ 0x085B0CB5
	.string "いない$"
	.if (. - gText_Rom_5B0CB5) > 0x4
	.error "gText_Rom_5B0CB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B0CB5) < 0x4
	.space 0x4 - (. - gText_Rom_5B0CB5)
	.endif
	.incbin "baserom.gba", 0x5b0cb9, 0x3d57
	.globl gUnknown_85B4A10
gUnknown_85B4A10: @ 0x085B4A10
	.incbin "baserom.gba", 0x5b4a10, 0x2b

	@ src/data/abilities.h:214 abilities_line_214 (+1 aliases)
	.globl gText_Rom_5B4A3B
gText_Rom_5B4A3B: @ 0x085B4A3B
	.string "ほうし$"
	.if (. - gText_Rom_5B4A3B) > 0x4
	.error "gText_Rom_5B4A3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B4A3B) < 0x4
	.space 0x4 - (. - gText_Rom_5B4A3B)
	.endif
	.incbin "baserom.gba", 0x5b4a3f, 0x142

