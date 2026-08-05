	@ data/text/trainers.inc:458 Route107_Text_DeniseDefeated (+1 aliases)
	.globl gText_Rom_25A95F
gText_Rom_25A95F: @ 0x0825A95F
	.string "ヤダ もーっ!$"
	.if (. - gText_Rom_25A95F) > 0x8
	.error "gText_Rom_25A95F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A95F) < 0x8
	.space 0x8 - (. - gText_Rom_25A95F)
	.endif
