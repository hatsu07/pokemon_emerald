	@ data/text/trainers.inc:3110 Route130_Text_RodneyDefeat (+1 aliases)
	.globl gText_Rom_2616CE
gText_Rom_2616CE: @ 0x082616CE
	.string "なんて つよい こどもだ……{EOS}"
	.if (. - gText_Rom_2616CE) > 0xf
	.error "gText_Rom_2616CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2616CE) < 0xf
	.space 0xf - (. - gText_Rom_2616CE)
	.endif
