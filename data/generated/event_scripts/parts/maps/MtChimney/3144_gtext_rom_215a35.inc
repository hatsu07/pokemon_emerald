	@ data/maps/MtChimney/scripts.inc:832 MtChimney_Text_SawyerDefeat (+1 aliases)
	.globl gText_Rom_215A35
gText_Rom_215A35: @ 0x08215A35
	.string "おおっ あんたも あついねぇ!$"
	.if (. - gText_Rom_215A35) > 0x10
	.error "gText_Rom_215A35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215A35) < 0x10
	.space 0x10 - (. - gText_Rom_215A35)
	.endif
