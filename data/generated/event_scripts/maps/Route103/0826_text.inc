	@ data/maps/Route103/scripts.inc:289 Route103_Text_MayRoute103Pokemon
	.globl gText_Rom_1E6E71
gText_Rom_1E6E71: @ 0x081E6E71
	.string "ハルカ『えーと 103ばん どうろに いる\nポケモンは あれと あれね……{EOS}"
	.if (. - gText_Rom_1E6E71) > 0x26
	.error "gText_Rom_1E6E71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E6E71) < 0x26
	.space 0x26 - (. - gText_Rom_1E6E71)
	.endif
