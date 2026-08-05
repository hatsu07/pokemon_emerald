	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB74B
gText_Rom_5CB74B: @ 0x085CB74B
	.string "もどる$"
	.if (. - gText_Rom_5CB74B) > 0x4
	.error "gText_Rom_5CB74B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB74B) < 0x4
	.space 0x4 - (. - gText_Rom_5CB74B)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB74F, size=0xA
	.byte 0xF8, 0x00, 0x6F, 0xAE, 0x58, 0x2D, 0x04, 0x27, 0x48, 0x00
