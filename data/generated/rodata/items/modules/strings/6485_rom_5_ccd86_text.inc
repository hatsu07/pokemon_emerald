	@ src/strings.c:834 gText_FirstPlacePrize
	.globl gText_Rom_5CCD86
gText_Rom_5CCD86: @ 0x085CCD86
	.string "1ばんに なった ひとに\n{DYNAMIC 0}を プレゼント!!$"
	.if (. - gText_Rom_5CCD86) > 0x19
	.error "gText_Rom_5CCD86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD86) < 0x19
	.space 0x19 - (. - gText_Rom_5CCD86)
	.endif
