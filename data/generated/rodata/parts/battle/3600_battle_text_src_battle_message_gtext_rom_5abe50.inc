	@ src/battle_message.c:512 battle_message_line_512
	.globl gText_Rom_5ABE50
gText_Rom_5ABE50: @ 0x085ABE50
	.string "{B_ATK_NAME_WITH_PREFIX}は\nじぶんの ちからを はっき できない ようだ!$"
	.if (. - gText_Rom_5ABE50) > 0x1c
	.error "gText_Rom_5ABE50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABE50) < 0x1c
	.space 0x1c - (. - gText_Rom_5ABE50)
	.endif
	@ Decoded text from ROM range: offset=0x5ABE6C, size=0x13
	.string "{B_SCR_NAME_WITH_PREFIX}の　めの　いろが　かわっていく！$"
