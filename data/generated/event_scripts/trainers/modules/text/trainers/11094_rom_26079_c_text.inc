	@ data/text/trainers.inc:2723 Route125_Text_StanPostBattle
	.globl gText_Rom_26079C
gText_Rom_26079C: @ 0x0826079C
	.string "タッツーの みりょくに まいって\nおれも およぐように なったんだー!$"
	.if (. - gText_Rom_26079C) > 0x24
	.error "gText_Rom_26079C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26079C) < 0x24
	.space 0x24 - (. - gText_Rom_26079C)
	.endif
