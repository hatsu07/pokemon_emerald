	@ data/text/berries.inc:80 LilycoveCity_Text_BecauseYoureTrainer
	.globl gText_Rom_263A9E
gText_Rom_263A9E: @ 0x08263A9E
	.string "やっぱり それは…………\pきみが トレーナーだからだ!$"
	.if (. - gText_Rom_263A9E) > 0x1c
	.error "gText_Rom_263A9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263A9E) < 0x1c
	.space 0x1c - (. - gText_Rom_263A9E)
	.endif
