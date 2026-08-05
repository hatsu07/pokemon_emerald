	@ data/text/trainers.inc:2720 Route125_Text_StanDefeat (+1 aliases)
	.globl gText_Rom_260793
gText_Rom_260793: @ 0x08260793
	.string "まいったぜ……!$"
	.if (. - gText_Rom_260793) > 0x9
	.error "gText_Rom_260793 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260793) < 0x9
	.space 0x9 - (. - gText_Rom_260793)
	.endif
