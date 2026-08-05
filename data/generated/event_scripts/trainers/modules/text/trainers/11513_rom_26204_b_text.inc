	@ data/text/trainers.inc:3344 Route133_Text_ConorPostBattle
	.globl gText_Rom_26204B
gText_Rom_26204B: @ 0x0826204B
	.string "まわりに ながされず\nしっかりした おとなに なんなさい!$"
	.if (. - gText_Rom_26204B) > 0x1e
	.error "gText_Rom_26204B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26204B) < 0x1e
	.space 0x1e - (. - gText_Rom_26204B)
	.endif
