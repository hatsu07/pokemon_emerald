	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB71D
gText_Rom_5CB71D: @ 0x085CB71D
	.string "もどる$"
	.if (. - gText_Rom_5CB71D) > 0x4
	.error "gText_Rom_5CB71D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB71D) < 0x4
	.space 0x4 - (. - gText_Rom_5CB71D)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB721, size=0x9
	.byte 0xF8, 0x00, 0x3F, 0x2E, 0x10, 0x02, 0x00, 0xF8, 0x01
