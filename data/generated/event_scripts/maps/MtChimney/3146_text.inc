	@ data/maps/MtChimney/scripts.inc:835 MtChimney_Text_SawyerPostBattle
	.globl gText_Rom_215A45
gText_Rom_215A45: @ 0x08215A45
	.string "いまから あつい おねいさんたちを つれて\nフエンおんせん でも いこうかな$"
	.if (. - gText_Rom_215A45) > 0x27
	.error "gText_Rom_215A45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215A45) < 0x27
	.space 0x27 - (. - gText_Rom_215A45)
	.endif
