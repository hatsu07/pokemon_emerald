	@ src/battle_message.c:331 battle_message_line_331
	.globl gText_Rom_5AA187
gText_Rom_5AA187: @ 0x085AA187
	.string "{B_ATK_NAME_WITH_PREFIX}は\nやどりぎのタネを ふきとばした!$"
	.if (. - gText_Rom_5AA187) > 0x15
	.error "gText_Rom_5AA187 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA187) < 0x15
	.space 0x15 - (. - gText_Rom_5AA187)
	.endif
