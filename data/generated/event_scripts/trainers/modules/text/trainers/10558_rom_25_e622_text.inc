	@ data/text/trainers.inc:1928 Route118_Text_DeandreIntro (+1 aliases)
	.globl gText_Rom_25E622
gText_Rom_25E622: @ 0x0825E622
	.string "いけいけー!\nボクの ポケモン 1ごう 2ごう 3ごう!$"
	.if (. - gText_Rom_25E622) > 0x1d
	.error "gText_Rom_25E622 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E622) < 0x1d
	.space 0x1d - (. - gText_Rom_25E622)
	.endif
