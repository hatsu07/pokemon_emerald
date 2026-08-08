	@ data/text/trainers.inc:2060 Route119_Text_TakashiIntro (+1 aliases)
	.globl gText_Rom_25EBA9
gText_Rom_25EBA9: @ 0x0825EBA9
	.string "ゆだん してると\nいたい めに あうぜ!$"
	.if (. - gText_Rom_25EBA9) > 0x15
	.error "gText_Rom_25EBA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EBA9) < 0x15
	.space 0x15 - (. - gText_Rom_25EBA9)
	.endif
