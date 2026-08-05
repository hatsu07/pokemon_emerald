	@ asm/battle_controller_player.s:4773 PlayerHandleTwoReturnValues
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABBA1
gText_Rom_5ABBA1: @ 0x085ABBA1
	.string "わざタイプ/$"
	.if (. - gText_Rom_5ABBA1) != 0x7
	.error "gText_Rom_5ABBA1 must retain its original byte length"
	.endif
