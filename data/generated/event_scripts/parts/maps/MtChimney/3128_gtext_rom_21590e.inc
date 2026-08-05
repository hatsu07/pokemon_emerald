	@ data/maps/MtChimney/scripts.inc:795 MtChimney_Text_MelissaPostBattle
	.globl gText_Rom_21590E
gText_Rom_21590E: @ 0x0821590E
	.string "えんとつやまの あつさが\nおんなを もえあがらせるの$"
	.if (. - gText_Rom_21590E) > 0x1b
	.error "gText_Rom_21590E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21590E) < 0x1b
	.space 0x1b - (. - gText_Rom_21590E)
	.endif
