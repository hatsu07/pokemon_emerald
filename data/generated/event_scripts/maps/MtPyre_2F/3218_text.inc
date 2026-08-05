	@ data/maps/MtPyre_2F/scripts.inc:45 MtPyre_2F_Text_MemoriesOfSkitty
	.globl gText_Rom_2162D8
gText_Rom_2162D8: @ 0x082162D8
	.string "かわいかった エネコとの おもいで……\nおもいだすだけで なみだが あふれる……$"
	.if (. - gText_Rom_2162D8) > 0x29
	.error "gText_Rom_2162D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2162D8) < 0x29
	.space 0x29 - (. - gText_Rom_2162D8)
	.endif
