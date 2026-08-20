	@ data/text/trainers.inc:1520 Route115_Text_KyraPostBattle
	.globl gText_Rom_25D480
gText_Rom_25D480: @ 0x0825D480
	.string "はしりながら たたかおうと したのが\nまちがい だったわよ!\lひとっぱしり して アタマ ひやすかな{EOS}"
	.if (. - gText_Rom_25D480) > 0x33
	.error "gText_Rom_25D480 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D480) < 0x33
	.space 0x33 - (. - gText_Rom_25D480)
	.endif
