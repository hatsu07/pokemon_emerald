	@ data/text/trainers.inc:2474 Route123_Text_MiuNotEnoughMons (+1 aliases)
	.globl gText_Rom_25FC9D
gText_Rom_25FC9D: @ 0x0825FC9D
	.string "ミウ『ポケモンさん 2ひきは いないと\nたたかっても つまらないもん!{EOS}"
	.if (. - gText_Rom_25FC9D) > 0x24
	.error "gText_Rom_25FC9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FC9D) < 0x24
	.space 0x24 - (. - gText_Rom_25FC9D)
	.endif
