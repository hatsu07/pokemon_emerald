	@ data/maps/GraniteCave_StevensRoom/scripts.inc:94 GraniteCave_StevensRoom_Text_IveGotToHurryAlong
	.globl gText_Rom_214249
gText_Rom_214249: @ 0x08214249
	.string "……じゃあ\nボクは さきを いそぐから{EOS}"
	.if (. - gText_Rom_214249) > 0x14
	.error "gText_Rom_214249 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_214249) < 0x14
	.space 0x14 - (. - gText_Rom_214249)
	.endif
