	@ data/text/trainers.inc:341 Route105_Text_ImaniDefeated (+1 aliases)
	.globl gText_Rom_25A470
gText_Rom_25A470: @ 0x0825A470
	.string "なごんでいる うちに\nまけちゃったわーっ!$"
	.if (. - gText_Rom_25A470) > 0x16
	.error "gText_Rom_25A470 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A470) < 0x16
	.space 0x16 - (. - gText_Rom_25A470)
	.endif
