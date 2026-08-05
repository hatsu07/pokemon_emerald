	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB768
gText_Rom_5CB768: @ 0x085CB768
	.string "もどる$"
	.if (. - gText_Rom_5CB768) > 0x4
	.error "gText_Rom_5CB768 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB768) < 0x4
	.space 0x4 - (. - gText_Rom_5CB768)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB76C, size=0x9
	.byte 0xF8, 0x00, 0x09, 0x50, 0x13, 0x02, 0x00, 0xF8, 0x01
