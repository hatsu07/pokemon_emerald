	@ data/text/trainers.inc:1124 Route112_Text_LarryDefeat (+1 aliases)
	.globl gText_Rom_25C45C
gText_Rom_25C45C: @ 0x0825C45C
	.string "うわーーーん!$"
	.if (. - gText_Rom_25C45C) > 0x8
	.error "gText_Rom_25C45C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C45C) < 0x8
	.space 0x8 - (. - gText_Rom_25C45C)
	.endif
