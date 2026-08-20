	@ data/maps/MossdeepCity_House1/scripts.inc:27 MossdeepCity_House1_Text_ItLikesXPokeblocks
	.globl gText_Rom_20C37B
gText_Rom_20C37B: @ 0x0820C37B
	.string "{STR_VAR_1} が すきだろう!\pいや まちがいなく\n{STR_VAR_1} が すきだ!{EOS}"
	.if (. - gText_Rom_20C37B) > 0x20
	.error "gText_Rom_20C37B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C37B) < 0x20
	.space 0x20 - (. - gText_Rom_20C37B)
	.endif
