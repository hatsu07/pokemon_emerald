	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_566D7A
gText_Rom_566D7A: @ 0x08566D7A
	.string "もどる$"
	.if (. - gText_Rom_566D7A) > 0x4
	.error "gText_Rom_566D7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566D7A) < 0x4
	.space 0x4 - (. - gText_Rom_566D7A)
	.endif
