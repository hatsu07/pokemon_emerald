	@ data/text/trainers.inc:1703 Route117_Text_LydiaDefeat (+1 aliases)
	.globl gText_Rom_25DC4A
gText_Rom_25DC4A: @ 0x0825DC4A
	.string "ちゃんと そだってますね{EOS}"
	.if (. - gText_Rom_25DC4A) > 0xd
	.error "gText_Rom_25DC4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DC4A) < 0xd
	.space 0xd - (. - gText_Rom_25DC4A)
	.endif
