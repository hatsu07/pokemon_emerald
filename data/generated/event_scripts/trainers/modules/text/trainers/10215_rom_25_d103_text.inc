	@ data/text/trainers.inc:1436 Route115_Text_TimothyDefeat (+1 aliases)
	.globl gText_Rom_25D103
gText_Rom_25D103: @ 0x0825D103
	.string "そうぞう いじょうの つよさだ……!$"
	.if (. - gText_Rom_25D103) > 0x13
	.error "gText_Rom_25D103 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D103) < 0x13
	.space 0x13 - (. - gText_Rom_25D103)
	.endif
