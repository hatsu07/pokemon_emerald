	@ src/option_menu.c:75 gText_Option (+2 aliases)
	.globl gText_Rom_5CADCB
gText_Rom_5CADCB: @ 0x085CADCB
	.string "せってい$"
	.if (. - gText_Rom_5CADCB) > 0x5
	.error "gText_Rom_5CADCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADCB) < 0x5
	.space 0x5 - (. - gText_Rom_5CADCB)
	.endif
