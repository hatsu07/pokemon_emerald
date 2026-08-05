	@ data/maps/Route112/scripts.inc:134 Route112_Text_MtChimneySign
	.globl gText_Rom_1EB10D
gText_Rom_1EB10D: @ 0x081EB10D
	.string "「えんとつやま」\pフエンタウンや ちょうじょう へは\nロープウェイを ごりよう ください$"
	.if (. - gText_Rom_1EB10D) > 0x2d
	.error "gText_Rom_1EB10D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EB10D) < 0x2d
	.space 0x2d - (. - gText_Rom_1EB10D)
	.endif
