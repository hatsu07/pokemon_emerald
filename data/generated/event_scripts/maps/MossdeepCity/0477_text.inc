	@ data/maps/MossdeepCity/scripts.inc:339 MossdeepCity_Text_SurfExhilarating
	.globl gText_Rom_1E1A9E
gText_Rom_1E1A9E: @ 0x081E1A9E
	.string "ふねのたびも いいけどな\pポケモンと ともに なみのりで\nうみを わたるのは なんとも いえない\lきもちよさが あるよな……\pそう おもわないか? わかものよ$"
	.if (. - gText_Rom_1E1A9E) > 0x50
	.error "gText_Rom_1E1A9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1A9E) < 0x50
	.space 0x50 - (. - gText_Rom_1E1A9E)
	.endif
