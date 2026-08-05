	@ data/text/trainers.inc:1517 Route115_Text_KyraDefeat (+1 aliases)
	.globl gText_Rom_25D478
gText_Rom_25D478: @ 0x0825D478
	.string "はぁ はぁ……$"
	.if (. - gText_Rom_25D478) > 0x8
	.error "gText_Rom_25D478 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D478) < 0x8
	.space 0x8 - (. - gText_Rom_25D478)
	.endif
