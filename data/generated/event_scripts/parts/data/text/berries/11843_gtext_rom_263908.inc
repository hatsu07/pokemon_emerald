	@ data/text/berries.inc:35 Route114_Text_LoveUsingBerryCrushShareBerry
	.globl gText_Rom_263908
gText_Rom_263908: @ 0x08263908
	.string "きのみクラッシュが だいすきだから\nきのみを あつめているんだ\pよかったら きみにも わけて あげるよ!$"
	.if (. - gText_Rom_263908) > 0x35
	.error "gText_Rom_263908 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263908) < 0x35
	.space 0x35 - (. - gText_Rom_263908)
	.endif
