	@ data/maps/DewfordTown/scripts.inc:681 DewfordTown_Text_HowsYourFishing
	.globl gText_Rom_1E53EF
gText_Rom_1E53EF: @ 0x081E53EF
	.string "よっ!\nつりの ちょうしは どう?{EOS}"
	.if (. - gText_Rom_1E53EF) > 0x12
	.error "gText_Rom_1E53EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E53EF) < 0x12
	.space 0x12 - (. - gText_Rom_1E53EF)
	.endif
