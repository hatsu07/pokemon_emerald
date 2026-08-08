	@ data/text/trainers.inc:2081 Route119_Text_ChrisDefeat (+1 aliases)
	.globl gText_Rom_25EC72
gText_Rom_25EC72: @ 0x0825EC72
	.string "かつための ポイントが\nちっとも わからん!$"
	.if (. - gText_Rom_25EC72) > 0x17
	.error "gText_Rom_25EC72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EC72) < 0x17
	.space 0x17 - (. - gText_Rom_25EC72)
	.endif
