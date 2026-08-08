	@ data/text/trainers.inc:2174 Route120_Text_JeffreyRematchIntro (+1 aliases)
	.globl gText_Rom_25F03C
gText_Rom_25F03C: @ 0x0825F03C
	.string "…… …… ……\n…… …… ……\lまた しょうぶ する……?$"
	.if (. - gText_Rom_25F03C) > 0x20
	.error "gText_Rom_25F03C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F03C) < 0x20
	.space 0x20 - (. - gText_Rom_25F03C)
	.endif
