	@ data/maps/DewfordTown/scripts.inc:669 DewfordTown_Text_GettingItchToFish
	.globl gText_Rom_1E52F3
gText_Rom_1E52F3: @ 0x081E52F3
	.string "このへんは つりの めいしょ なんだ\nきみも つりが したくなった?{EOS}"
	.if (. - gText_Rom_1E52F3) > 0x23
	.error "gText_Rom_1E52F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E52F3) < 0x23
	.space 0x23 - (. - gText_Rom_1E52F3)
	.endif
