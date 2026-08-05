	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB78A
gText_Rom_5CB78A: @ 0x085CB78A
	.string "もどる$"
	.if (. - gText_Rom_5CB78A) > 0x4
	.error "gText_Rom_5CB78A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB78A) < 0x4
	.space 0x4 - (. - gText_Rom_5CB78A)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB78E, size=0xA
	.byte 0xF8, 0x00, 0x0C, 0x36, 0x03, 0x0B, 0x02, 0x00, 0xF8, 0x01
