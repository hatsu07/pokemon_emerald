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

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB72A
gText_Rom_5CB72A: @ 0x085CB72A
	.string "もどる$"
	.if (. - gText_Rom_5CB72A) > 0x4
	.error "gText_Rom_5CB72A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB72A) < 0x4
	.space 0x4 - (. - gText_Rom_5CB72A)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB72E, size=0xF
	.byte 0xF8, 0x00, 0x5A, 0x7E, 0x94, 0x80, 0x5C, 0x86, 0x7E, 0x2D, 0x20, 0x29, 0x00, 0xF8, 0x01

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB73D
gText_Rom_5CB73D: @ 0x085CB73D
	.string "もどる$"
	.if (. - gText_Rom_5CB73D) > 0x4
	.error "gText_Rom_5CB73D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB73D) < 0x4
	.space 0x4 - (. - gText_Rom_5CB73D)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB741, size=0xA
	.byte 0xF8, 0x00, 0x6F, 0xAE, 0x57, 0x7E, 0x89, 0x00, 0xF8, 0x01

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
