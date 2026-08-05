	@ src/strings.c:1097 gText_WonderCardThrownAway
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2B25
gText_Rom_2C2B25: @ 0x082C2B25
	.string "   ふしぎなカードを すてました$"
	.if (. - gText_Rom_2C2B25) != 0x12
	.error "gText_Rom_2C2B25 must retain its original byte length"
	.endif
