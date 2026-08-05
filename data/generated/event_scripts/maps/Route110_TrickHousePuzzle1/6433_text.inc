	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:48 Route110_TrickHousePuzzle1_Text_SallyPostBattle
	.globl gText_Rom_23DFC5
gText_Rom_23DFC5: @ 0x0823DFC5
	.string "きっても きっても あきないわ!"
	.byte EOS
	.if (. - gText_Rom_23DFC5) > 0x11
	.error "gText_Rom_23DFC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DFC5) < 0x11
	.space 0x11 - (. - gText_Rom_23DFC5)
	.endif
