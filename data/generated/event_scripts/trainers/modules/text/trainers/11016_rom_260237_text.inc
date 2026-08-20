	@ data/text/trainers.inc:2609 Route124_Text_JennyRegister
	.globl gText_Rom_260237
gText_Rom_260237: @ 0x08260237
	.string "なんとなく だけど\nポケナビ とうろく してもらおうかな……{EOS}"
	.if (. - gText_Rom_260237) > 0x1f
	.error "gText_Rom_260237 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260237) < 0x1f
	.space 0x1f - (. - gText_Rom_260237)
	.endif
