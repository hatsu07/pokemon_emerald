	@ data/text/trainers.inc:1901 Route118_Text_WadeDefeat (+1 aliases)
	.globl gText_Rom_25E520
gText_Rom_25E520: @ 0x0825E520
	.string "ハートの しょうぶで まけたのか?$"
	.if (. - gText_Rom_25E520) > 0x12
	.error "gText_Rom_25E520 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E520) < 0x12
	.space 0x12 - (. - gText_Rom_25E520)
	.endif
