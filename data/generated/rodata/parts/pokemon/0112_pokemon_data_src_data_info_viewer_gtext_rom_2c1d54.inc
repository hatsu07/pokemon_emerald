	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl gText_Rom_2C1D54
gText_Rom_2C1D54: @ 0x082C1D54
	.string "とじる$"
	.if (. - gText_Rom_2C1D54) > 0x4
	.error "gText_Rom_2C1D54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1D54) < 0x4
	.space 0x4 - (. - gText_Rom_2C1D54)
	.endif
	@ Decoded text from ROM range: offset=0x2C1D58, size=0x8
	.string "せつめいをきく$"
