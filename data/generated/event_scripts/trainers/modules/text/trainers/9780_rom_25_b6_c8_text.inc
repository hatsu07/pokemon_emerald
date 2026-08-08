	@ data/text/trainers.inc:812 Route110_Text_JaclynPostBattle
	.globl gText_Rom_25B6C8
gText_Rom_25B6C8: @ 0x0825B6C8
	.string "わたくしに かったことが ミラクル……\nそう きせき なのよ!\lいつでも かてるなんて おもわないことね!$"
	.if (. - gText_Rom_25B6C8) > 0x36
	.error "gText_Rom_25B6C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B6C8) < 0x36
	.space 0x36 - (. - gText_Rom_25B6C8)
	.endif
