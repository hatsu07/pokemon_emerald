	@ data/maps/MtChimney/scripts.inc:740 MtChimney_Text_PlayerRemovedMeteorite
	.globl gText_Rom_2157A5
gText_Rom_2157A5: @ 0x082157A5
	.string "{PLAYER}は いんせきを\nそうちから とりはずした!{EOS}"
	.if (. - gText_Rom_2157A5) > 0x18
	.error "gText_Rom_2157A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2157A5) < 0x18
	.space 0x18 - (. - gText_Rom_2157A5)
	.endif
