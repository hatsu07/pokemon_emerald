	@ data/text/trainers.inc:1976 Route119_Text_GregDefeat (+1 aliases)
	.globl gText_Rom_25E826
gText_Rom_25E826: @ 0x0825E826
	.string "けっこう つよい じゃんか!{EOS}"
	.if (. - gText_Rom_25E826) > 0xf
	.error "gText_Rom_25E826 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E826) < 0xf
	.space 0xf - (. - gText_Rom_25E826)
	.endif
