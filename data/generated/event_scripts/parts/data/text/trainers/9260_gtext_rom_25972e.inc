	@ data/text/trainers.inc:49 Route102_Text_TianaPostBattle
	.globl gText_Rom_25972E
gText_Rom_25972E: @ 0x0825972E
	.string "どんどん かちぬくには\nもっと たくさん ポケモンを\lつかまえないと いけない みたいね!"
	.byte EOS
	.if (. - gText_Rom_25972E) > 0x2e
	.error "gText_Rom_25972E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25972E) < 0x2e
	.space 0x2e - (. - gText_Rom_25972E)
	.endif
