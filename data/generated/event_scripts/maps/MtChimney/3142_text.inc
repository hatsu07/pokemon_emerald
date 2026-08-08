	@ data/maps/MtChimney/scripts.inc:828 MtChimney_Text_SawyerIntro (+1 aliases)
	.globl gText_Rom_215A13
gText_Rom_215A13: @ 0x08215A13
	.string "ここは いい やまだ!\nあっつい おねいさんたちが いっぱいだあ!$"
	.if (. - gText_Rom_215A13) > 0x22
	.error "gText_Rom_215A13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215A13) < 0x22
	.space 0x22 - (. - gText_Rom_215A13)
	.endif
