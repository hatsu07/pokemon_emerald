	@ data/maps/Route110/scripts.inc:745 Route110_Text_KickUpARuckus
	.globl gText_Rom_1E975D
gText_Rom_1E975D: @ 0x081E975D
	.string "はやく カイナに いって\nひとあばれ したいんだよな$"
	.if (. - gText_Rom_1E975D) > 0x1b
	.error "gText_Rom_1E975D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E975D) < 0x1b
	.space 0x1b - (. - gText_Rom_1E975D)
	.endif
