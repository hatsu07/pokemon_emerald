	@ data/text/trainers.inc:755 Route110_Text_BenjaminRegister
	.globl gText_Rom_25B47F
gText_Rom_25B47F: @ 0x0825B47F
	.string "あせらずに また がんばるか!\nよかったらさ れんらく くれよな{EOS}"
	.if (. - gText_Rom_25B47F) > 0x21
	.error "gText_Rom_25B47F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B47F) < 0x21
	.space 0x21 - (. - gText_Rom_25B47F)
	.endif
