	@ data/maps/DewfordTown/scripts.inc:657 DewfordTown_Text_WhereAreWeBound (+2 aliases)
	.globl gText_Rom_21192C
gText_Rom_21192C: @ 0x0821192C
	.string "ハギ『やあ! きみのため なら\nいつでも ふねを だそう!\pきみが いきたいのは どこ かな?{EOS}"
	.if (. - gText_Rom_21192C) > 0x30
	.error "gText_Rom_21192C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21192C) < 0x30
	.space 0x30 - (. - gText_Rom_21192C)
	.endif
