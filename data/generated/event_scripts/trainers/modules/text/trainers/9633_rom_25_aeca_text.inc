	@ data/text/trainers.inc:599 Route109_Text_EdmondIntro (+1 aliases)
	.globl gText_Rom_25AECA
gText_Rom_25AECA: @ 0x0825AECA
	.string "ううう……\nしょうぶ するの? オレと?$"
	.if (. - gText_Rom_25AECA) > 0x15
	.error "gText_Rom_25AECA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AECA) < 0x15
	.space 0x15 - (. - gText_Rom_25AECA)
	.endif
