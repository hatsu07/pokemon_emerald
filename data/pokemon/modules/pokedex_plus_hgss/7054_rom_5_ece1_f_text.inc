	@ src/pokedex_plus_hgss.c:176 sText_Stats_ERRATIC (+1 aliases)
	.globl gText_Rom_5ECE1F
gText_Rom_5ECE1F: @ 0x085ECE1F
	.string "きまぐれ{EOS}"
	.if (. - gText_Rom_5ECE1F) > 0x5
	.error "gText_Rom_5ECE1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE1F) < 0x5
	.space 0x5 - (. - gText_Rom_5ECE1F)
	.endif
