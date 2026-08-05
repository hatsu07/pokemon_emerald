	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB77B
gText_Rom_5CB77B: @ 0x085CB77B
	.string "もどる$"
	.if (. - gText_Rom_5CB77B) > 0x4
	.error "gText_Rom_5CB77B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB77B) < 0x4
	.space 0x4 - (. - gText_Rom_5CB77B)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB77F, size=0xB
	.byte 0xF8, 0x00, 0x78, 0x9A, 0x7E, 0x2D, 0x20, 0x29, 0x00, 0xF8, 0x01
