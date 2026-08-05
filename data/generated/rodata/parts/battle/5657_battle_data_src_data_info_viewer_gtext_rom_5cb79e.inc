	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB79E
gText_Rom_5CB79E: @ 0x085CB79E
	.string "もどる$"
	.if (. - gText_Rom_5CB79E) > 0x4
	.error "gText_Rom_5CB79E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB79E) < 0x4
	.space 0x4 - (. - gText_Rom_5CB79E)
	.endif
