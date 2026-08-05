	@ src/data/union_room.h:11 sJPText_MultiBattle
	.globl gText_Rom_2C06FC
gText_Rom_2C06FC: @ 0x082C06FC
	.string "マルチバトルを かいさいする$"
	.if (. - gText_Rom_2C06FC) > 0xf
	.error "gText_Rom_2C06FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C06FC) < 0xf
	.space 0xf - (. - gText_Rom_2C06FC)
	.endif
	.space 0x1, 0x00
