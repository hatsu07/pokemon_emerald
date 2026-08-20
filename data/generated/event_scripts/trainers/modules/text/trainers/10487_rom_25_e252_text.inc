	@ data/text/trainers.inc:1826 Route117_Text_MelinaDefeat (+1 aliases)
	.globl gText_Rom_25E252
gText_Rom_25E252: @ 0x0825E252
	.string "へーえ いいカンジね あんた!{EOS}"
	.if (. - gText_Rom_25E252) > 0x10
	.error "gText_Rom_25E252 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E252) < 0x10
	.space 0x10 - (. - gText_Rom_25E252)
	.endif
