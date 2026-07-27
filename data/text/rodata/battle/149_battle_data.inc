	@ asm/battle_controller_player.s:4767 PlayerHandleTwoReturnValues
	.globl gText_Rom_5ABB9B
gText_Rom_5ABB9B: @ 0x085ABB9B
	.string "PP　　　$"
	.if (. - gText_Rom_5ABB9B) > 0x6
	.error "gText_Rom_5ABB9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABB9B) < 0x6
	.space 0x6 - (. - gText_Rom_5ABB9B)
	.endif
	.globl gUnknown_85ABBA1
gUnknown_85ABBA1: @ 0x085ABBA1

	@ asm/battle_controller_player.s:4773 PlayerHandleTwoReturnValues
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABBA1
gText_Rom_5ABBA1: @ 0x085ABBA1
	.string "わざタイプ/$"
	.if (. - gText_Rom_5ABBA1) != 0x7
	.error "gText_Rom_5ABBA1 must retain its original byte length"
	.endif
	.globl gText_Rom_5ABBA3
	.set gText_Rom_5ABBA3, gText_Rom_5ABBA1 + 0x2
	.incbin "baserom.gba", 0x5abba8, 0x21
	.globl gUnknown_85ABBC9
gUnknown_85ABBC9: @ 0x085ABBC9
	.incbin "baserom.gba", 0x5abbc9, 0x8

	@ src/strings.c:918 gText_YesNo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABBD1
gText_Rom_5ABBD1: @ 0x085ABBD1
	.string "はい\nいいえ$"
	.if (. - gText_Rom_5ABBD1) != 0x7
	.error "gText_Rom_5ABBD1 must retain its original byte length"
	.endif
	.globl gText_Rom_5ABBD4
	.set gText_Rom_5ABBD4, gText_Rom_5ABBD1 + 0x3
	.globl gUnknown_85ABBD8
gUnknown_85ABBD8: @ 0x085ABBD8
	.incbin "baserom.gba", 0x5abbd8, 0x29

