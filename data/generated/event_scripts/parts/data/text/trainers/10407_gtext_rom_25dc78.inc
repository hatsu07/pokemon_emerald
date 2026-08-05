	@ data/text/trainers.inc:1709 Route117_Text_LydiaRegister
	.globl gText_Rom_25DC78
gText_Rom_25DC78: @ 0x0825DC78
	.string "よい トレーナーさんに あえて よかった!\nこれからも よろしく おねがいしますね$"
	.if (. - gText_Rom_25DC78) > 0x2a
	.error "gText_Rom_25DC78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DC78) < 0x2a
	.space 0x2a - (. - gText_Rom_25DC78)
	.endif
