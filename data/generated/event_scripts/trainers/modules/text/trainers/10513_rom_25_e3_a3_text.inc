	@ data/text/trainers.inc:1862 Route118_Text_RoseRematchIntro (+1 aliases)
	.globl gText_Rom_25E3A3
gText_Rom_25E3A3: @ 0x0825E3A3
	.string "いい かおりに さそわれて\nいらしたのかしら?$"
	.if (. - gText_Rom_25E3A3) > 0x18
	.error "gText_Rom_25E3A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E3A3) < 0x18
	.space 0x18 - (. - gText_Rom_25E3A3)
	.endif
