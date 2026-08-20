	@ data/text/trainers.inc:590 Route109_Text_HueyIntro (+1 aliases)
	.globl gText_Rom_25AE72
gText_Rom_25AE72: @ 0x0825AE72
	.string "せかいじゅうの みなとを おとずれたが\nカイナは さいこーの みなとまち だぜ!{EOS}"
	.if (. - gText_Rom_25AE72) > 0x29
	.error "gText_Rom_25AE72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AE72) < 0x29
	.space 0x29 - (. - gText_Rom_25AE72)
	.endif
