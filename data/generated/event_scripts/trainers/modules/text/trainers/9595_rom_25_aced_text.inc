	@ data/text/trainers.inc:545 Route108_Text_CoryDefeated (+1 aliases)
	.globl gText_Rom_25ACED
gText_Rom_25ACED: @ 0x0825ACED
	.string "わー まけたー!\nわーわー!{EOS}"
	.if (. - gText_Rom_25ACED) > 0xf
	.error "gText_Rom_25ACED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ACED) < 0xf
	.space 0xf - (. - gText_Rom_25ACED)
	.endif
