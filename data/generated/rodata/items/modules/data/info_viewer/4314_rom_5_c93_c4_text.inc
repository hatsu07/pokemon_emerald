	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5C93C4
gText_Rom_5C93C4: @ 0x085C93C4
	.string "もどる$"
	.if (. - gText_Rom_5C93C4) > 0x4
	.error "gText_Rom_5C93C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93C4) < 0x4
	.space 0x4 - (. - gText_Rom_5C93C4)
	.endif
