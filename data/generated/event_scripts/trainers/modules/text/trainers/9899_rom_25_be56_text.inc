	@ data/text/trainers.inc:980 Route111_Text_DaisukeDefeat (+1 aliases)
	.globl gText_Rom_25BE56
gText_Rom_25BE56: @ 0x0825BE56
	.string "まいったッス……!{EOS}"
	.if (. - gText_Rom_25BE56) > 0xa
	.error "gText_Rom_25BE56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BE56) < 0xa
	.space 0xa - (. - gText_Rom_25BE56)
	.endif
