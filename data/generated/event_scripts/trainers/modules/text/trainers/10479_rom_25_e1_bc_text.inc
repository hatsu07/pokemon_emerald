	@ data/text/trainers.inc:1814 Route117_Text_MegRematchDefeat (+1 aliases)
	.globl gText_Rom_25E1BC
gText_Rom_25E1BC: @ 0x0825E1BC
	.string "リコ『つよすぎるわ{EOS}"
	.if (. - gText_Rom_25E1BC) > 0xa
	.error "gText_Rom_25E1BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E1BC) < 0xa
	.space 0xa - (. - gText_Rom_25E1BC)
	.endif
