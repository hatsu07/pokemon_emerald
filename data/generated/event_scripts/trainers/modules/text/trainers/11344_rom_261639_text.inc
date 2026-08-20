	@ data/text/trainers.inc:3095 Route129_Text_TishaPostBattle
	.globl gText_Rom_261639
gText_Rom_261639: @ 0x08261639
	.string "あせって ミスを するのって イヤでしょ?\nのんびり やることに してるのよ{EOS}"
	.if (. - gText_Rom_261639) > 0x27
	.error "gText_Rom_261639 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261639) < 0x27
	.space 0x27 - (. - gText_Rom_261639)
	.endif
