	@ data/text/trainers.inc:2501 Route123_Text_FernandoDefeat (+1 aliases)
	.globl gText_Rom_25FDD2
gText_Rom_25FDD2: @ 0x0825FDD2
	.string "おいおい まだ イントロだゼ!{EOS}"
	.if (. - gText_Rom_25FDD2) > 0x10
	.error "gText_Rom_25FDD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FDD2) < 0x10
	.space 0x10 - (. - gText_Rom_25FDD2)
	.endif
