	@ data/text/trainers.inc:455 Route107_Text_DeniseIntro (+1 aliases)
	.globl gText_Rom_25A945
gText_Rom_25A945: @ 0x0825A945
	.string "ムロタウン っていう\nちいさな まちを しってる?$"
	.if (. - gText_Rom_25A945) > 0x1a
	.error "gText_Rom_25A945 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A945) < 0x1a
	.space 0x1a - (. - gText_Rom_25A945)
	.endif
