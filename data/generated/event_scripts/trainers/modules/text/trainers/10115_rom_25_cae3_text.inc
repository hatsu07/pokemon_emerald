	@ data/text/trainers.inc:1286 Route114_Text_LennyIntro (+1 aliases)
	.globl gText_Rom_25CAE3
gText_Rom_25CAE3: @ 0x0825CAE3
	.string "やっほーっ!\p……\pこだまの かわりに\nやっほー! って いってくれよ!{EOS}"
	.if (. - gText_Rom_25CAE3) > 0x25
	.error "gText_Rom_25CAE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CAE3) < 0x25
	.space 0x25 - (. - gText_Rom_25CAE3)
	.endif
