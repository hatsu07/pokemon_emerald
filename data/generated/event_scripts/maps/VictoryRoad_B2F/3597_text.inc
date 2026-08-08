	@ data/maps/VictoryRoad_B2F/scripts.inc:43 VictoryRoad_B2F_Text_OwenIntro (+1 aliases)
	.globl gText_Rom_219CBE
gText_Rom_219CBE: @ 0x08219CBE
	.string "つよい こどもが いるって ウワサだ!\nそれって きみの ことかい?"
	.byte EOS
	.if (. - gText_Rom_219CBE) > 0x23
	.error "gText_Rom_219CBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219CBE) < 0x23
	.space 0x23 - (. - gText_Rom_219CBE)
	.endif
