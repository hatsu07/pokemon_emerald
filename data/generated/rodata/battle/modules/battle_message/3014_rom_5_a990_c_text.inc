	@ src/battle_message.c:227 battle_message_line_227
	.globl gText_Rom_5A990C
gText_Rom_5A990C: @ 0x085A990C
	.string "{B_ATK_NAME_WITH_PREFIX}は\nやけどの ダメージを うけている！$"
	.if (. - gText_Rom_5A990C) > 0x16
	.error "gText_Rom_5A990C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A990C) < 0x16
	.space 0x16 - (. - gText_Rom_5A990C)
	.endif
	@ Replaced baserom.gba range: offset=0x5A9922, size=0xF
	.byte 0xFD, 0x10, 0x1A, 0x00, 0x0D, 0x44, 0x16, 0xFE, 0x24, 0x09, 0x45, 0x2D, 0x00, 0x05, 0x50

