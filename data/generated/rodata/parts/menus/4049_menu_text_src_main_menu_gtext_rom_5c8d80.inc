	@ src/main_menu.c:261 gJPText_No1MSubCircuit
	.globl gText_Rom_5C8D80
gText_Rom_5C8D80: @ 0x085C8D80
	.string "1Mサブきばんが ささっていません!$"
	.if (. - gText_Rom_5C8D80) > 0x13
	.error "gText_Rom_5C8D80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8D80) < 0x13
	.space 0x13 - (. - gText_Rom_5C8D80)
	.endif
