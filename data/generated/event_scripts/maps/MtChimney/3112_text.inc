	@ data/maps/MtChimney/scripts.inc:761 MtChimney_Text_ShelbyDefeat (+2 aliases)
	.globl gText_Rom_215834
gText_Rom_215834: @ 0x08215834
	.string "おんや まぁ\nたいした もんだよ$"
	.if (. - gText_Rom_215834) > 0x11
	.error "gText_Rom_215834 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215834) < 0x11
	.space 0x11 - (. - gText_Rom_215834)
	.endif
