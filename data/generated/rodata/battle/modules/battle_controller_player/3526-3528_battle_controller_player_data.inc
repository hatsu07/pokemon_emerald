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
