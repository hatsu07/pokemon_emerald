	@ src/berry_blender.c:283 sText_ApostropheSPokeblockCaseIsFull
	.globl gText_Rom_30F808
gText_Rom_30F808: @ 0x0830F808
	.string "は ポロックケースが\nいっぱいの ようです\p$"
	.if (. - gText_Rom_30F808) > 0x17
	.error "gText_Rom_30F808 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F808) < 0x17
	.space 0x17 - (. - gText_Rom_30F808)
	.endif
