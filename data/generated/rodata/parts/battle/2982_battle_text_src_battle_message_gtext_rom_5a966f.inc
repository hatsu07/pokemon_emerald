	@ src/battle_message.c:197 battle_message_line_197
	.globl gText_Rom_5A966F
gText_Rom_5A966F: @ 0x085A966F
	.string "{B_BUFF1}は あたらしく\n{B_BUFF2}を　おぼえたい………!\p$"
	.if (. - gText_Rom_5A966F) > 0x19
	.error "gText_Rom_5A966F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A966F) < 0x19
	.space 0x19 - (. - gText_Rom_5A966F)
	.endif
