	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:414 MossdeepCity_SpaceCenter_Text_TabithaDefeat
	.globl gText_Rom_20DEAF
gText_Rom_20DEAF: @ 0x0820DEAF
	.string "みぎに おなじ だ……{EOS}"
	.if (. - gText_Rom_20DEAF) > 0xc
	.error "gText_Rom_20DEAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DEAF) < 0xc
	.space 0xc - (. - gText_Rom_20DEAF)
	.endif
