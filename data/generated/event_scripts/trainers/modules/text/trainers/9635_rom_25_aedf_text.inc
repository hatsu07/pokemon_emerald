	@ data/text/trainers.inc:602 Route109_Text_EdmondDefeated (+1 aliases)
	.globl gText_Rom_25AEDF
gText_Rom_25AEDF: @ 0x0825AEDF
	.string "げろげろ……{EOS}"
	.if (. - gText_Rom_25AEDF) > 0x7
	.error "gText_Rom_25AEDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AEDF) < 0x7
	.space 0x7 - (. - gText_Rom_25AEDF)
	.endif
