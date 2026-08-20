	@ data/maps/MossdeepCity_House1/scripts.inc:30 MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks
	.globl gText_Rom_20C39B
gText_Rom_20C39B: @ 0x0820C39B
	.string "ポロックの すききらいは ないみたいだな{EOS}"
	.if (. - gText_Rom_20C39B) > 0x15
	.error "gText_Rom_20C39B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C39B) < 0x15
	.space 0x15 - (. - gText_Rom_20C39B)
	.endif
