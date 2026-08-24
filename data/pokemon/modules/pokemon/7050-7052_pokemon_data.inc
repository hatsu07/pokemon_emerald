	@ src/data/easy_chat/easy_chat_group_conditions.h:136 easy_chat_group_conditions_line_136 (+1 aliases)
	.globl gText_Rom_5ECE0E
gText_Rom_5ECE0E: @ 0x085ECE0E
	.string "おとなしい{EOS}"
	.if (. - gText_Rom_5ECE0E) > 0x6
	.error "gText_Rom_5ECE0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE0E) < 0x6
	.space 0x6 - (. - gText_Rom_5ECE0E)
	.endif
	@ src/pokemon.c:422 pokemon_line_422
	.globl gText_Rom_5ECE14
gText_Rom_5ECE14: @ 0x085ECE14
	.string "なまいき{EOS}"
	.if (. - gText_Rom_5ECE14) > 0x5
	.error "gText_Rom_5ECE14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE14) < 0x5
	.space 0x5 - (. - gText_Rom_5ECE14)
	.endif

	@ src/pokemon.c:434 pokemon_line_434
	.globl gText_Rom_5ECE19
gText_Rom_5ECE19: @ 0x085ECE19
	.string "しんちょう{EOS}"
	.if (. - gText_Rom_5ECE19) > 0x6
	.error "gText_Rom_5ECE19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE19) < 0x6
	.space 0x6 - (. - gText_Rom_5ECE19)
	.endif
