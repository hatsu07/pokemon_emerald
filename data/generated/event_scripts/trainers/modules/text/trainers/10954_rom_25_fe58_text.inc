	@ data/text/trainers.inc:2516 Route123_Text_FernandoPostRematch
	.globl gText_Rom_25FE58
gText_Rom_25FE58: @ 0x0825FE58
	.string "オレの うたに ききほれて\nまけちゃう って おもってたんだけど{EOS}"
	.if (. - gText_Rom_25FE58) > 0x21
	.error "gText_Rom_25FE58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FE58) < 0x21
	.space 0x21 - (. - gText_Rom_25FE58)
	.endif
