	@ data/maps/RustboroCity_Gym/scripts.inc:163 RustboroCity_Gym_Text_MarcIntro (+1 aliases)
	.globl gText_Rom_2026C0
gText_Rom_2026C0: @ 0x082026C0
	.string "こんな まちなか でも\nいわタイプで おおあばれだ!{EOS}"
	.if (. - gText_Rom_2026C0) > 0x1b
	.error "gText_Rom_2026C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2026C0) < 0x1b
	.space 0x1b - (. - gText_Rom_2026C0)
	.endif
