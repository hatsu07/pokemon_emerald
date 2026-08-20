	@ src/battle_dome.c:908 battle_dome_line_908
	.globl gText_Rom_273D21
gText_Rom_273D21: @ 0x08273D21
	.string "つよいわざで しょうぶの しかけが はやい。{EOS}"
	.if (. - gText_Rom_273D21) > 0x17
	.error "gText_Rom_273D21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D21) < 0x17
	.space 0x17 - (. - gText_Rom_273D21)
	.endif
