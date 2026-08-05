	@ data/text/berries.inc:6 Route104_Text_PlantBerriesInSoilTakeThis
	.globl gText_Rom_2637EB
gText_Rom_2637EB: @ 0x082637EB
	.string "ふかふかの つちに はえている きのみは\nじゆうに とっても よいのじゃが…\p1つだけ きのみを おなじ ばしょに うめる\nそれが れいぎと いうものじゃ\pほれ これを わけてやろう$"
	.if (. - gText_Rom_2637EB) > 0x5c
	.error "gText_Rom_2637EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2637EB) < 0x5c
	.space 0x5c - (. - gText_Rom_2637EB)
	.endif
