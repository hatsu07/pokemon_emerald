	@ data/text/trainers.inc:650 Route109_Text_AustinaIntro (+1 aliases)
	.globl gText_Rom_25B086
gText_Rom_25B086: @ 0x0825B086
	.string "うきわが ないと およげないけど\nポケモンなら だれにも まけないよ!$"
	.if (. - gText_Rom_25B086) > 0x24
	.error "gText_Rom_25B086 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B086) < 0x24
	.space 0x24 - (. - gText_Rom_25B086)
	.endif
