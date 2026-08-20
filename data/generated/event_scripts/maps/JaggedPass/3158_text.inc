	@ data/maps/JaggedPass/scripts.inc:157 JaggedPass_Text_EricDefeat (+1 aliases)
	.globl gText_Rom_215D5E
gText_Rom_215D5E: @ 0x08215D5E
	.string "まけて くやしいぞ!{EOS}"
	.if (. - gText_Rom_215D5E) > 0xb
	.error "gText_Rom_215D5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215D5E) < 0xb
	.space 0xb - (. - gText_Rom_215D5E)
	.endif
