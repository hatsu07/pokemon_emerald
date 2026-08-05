	@ data/text/trainers.inc:3290 Route133_Text_FranklinPostBattle
	.globl gText_Rom_261E51
gText_Rom_261E51: @ 0x08261E51
	.string "キミみたいな つよい トレーナーが\nながされて くるなんて……\lオレも ツキが ないなぁ……$"
	.if (. - gText_Rom_261E51) > 0x2f
	.error "gText_Rom_261E51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261E51) < 0x2f
	.space 0x2f - (. - gText_Rom_261E51)
	.endif
