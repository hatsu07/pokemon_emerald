	@ data/text/berries.inc:13 Route104_Text_TrainersOftenMakeMonHoldBerries
	.globl gText_Rom_263847
gText_Rom_263847: @ 0x08263847
	.string "あんた みたところ トレーナーじゃろ?\pトレーナーは よく きのみを ポケモンに\nもたせとるわい\pふやすも つかうも あんた しだいじゃ$"
	.if (. - gText_Rom_263847) > 0x45
	.error "gText_Rom_263847 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263847) < 0x45
	.space 0x45 - (. - gText_Rom_263847)
	.endif
