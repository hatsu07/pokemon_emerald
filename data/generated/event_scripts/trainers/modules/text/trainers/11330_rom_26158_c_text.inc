	@ data/text/trainers.inc:3074 Route129_Text_AllisonDefeat (+1 aliases)
	.globl gText_Rom_26158C
gText_Rom_26158C: @ 0x0826158C
	.string "かてると おもったのにーっ!{EOS}"
	.if (. - gText_Rom_26158C) > 0xf
	.error "gText_Rom_26158C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26158C) < 0xf
	.space 0xf - (. - gText_Rom_26158C)
	.endif
