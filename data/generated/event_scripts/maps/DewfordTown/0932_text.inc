	@ data/maps/DewfordTown/scripts.inc:657 DewfordTown_Text_WhereAreWeBound (+2 aliases)
	.globl gText_Rom_1E8BFA
gText_Rom_1E8BFA: @ 0x081E8BFA
	.string "ハギ『やあ! きみのため なら\nいつでも ふねを だそう!\pきみが いきたいのは どこ かな?{EOS}"
	.if (. - gText_Rom_1E8BFA) > 0x30
	.error "gText_Rom_1E8BFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E8BFA) < 0x30
	.space 0x30 - (. - gText_Rom_1E8BFA)
	.endif
