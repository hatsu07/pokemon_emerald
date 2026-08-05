	@ data/text/trainers.inc:272 Route104_Text_CindyDefeat (+1 aliases)
	.globl gText_Rom_25A185
gText_Rom_25A185: @ 0x0825A185
	.string "まあ!$"
	.if (. - gText_Rom_25A185) > 0x4
	.error "gText_Rom_25A185 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A185) < 0x4
	.space 0x4 - (. - gText_Rom_25A185)
	.endif
