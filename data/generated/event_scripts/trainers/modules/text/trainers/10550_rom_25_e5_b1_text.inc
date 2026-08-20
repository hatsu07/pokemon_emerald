	@ data/text/trainers.inc:1916 Route118_Text_DaltonRegister
	.globl gText_Rom_25E5B1
gText_Rom_25E5B1: @ 0x0825E5B1
	.string "もっと いい メロディが できたら\nききにおいでよ!{EOS}"
	.if (. - gText_Rom_25E5B1) > 0x1b
	.error "gText_Rom_25E5B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E5B1) < 0x1b
	.space 0x1b - (. - gText_Rom_25E5B1)
	.endif
