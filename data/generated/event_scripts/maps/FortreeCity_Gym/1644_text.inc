	@ data/maps/FortreeCity_Gym/scripts.inc:187 FortreeCity_Gym_Text_FlintDefeat (+1 aliases)
	.globl gText_Rom_20475A
gText_Rom_20475A: @ 0x0820475A
	.string "ナギさん…… まけました……!{EOS}"
	.if (. - gText_Rom_20475A) > 0x10
	.error "gText_Rom_20475A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20475A) < 0x10
	.space 0x10 - (. - gText_Rom_20475A)
	.endif
