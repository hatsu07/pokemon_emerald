	@ src/strings.c:255 gText_EggCantBattle
	.globl gText_Rom_5C9B9D
gText_Rom_5C9B9D: @ 0x085C9B9D
	.string "タマゴを\nせんとうに だすことは できません!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9B9D) > 0x1a
	.error "gText_Rom_5C9B9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9B9D) < 0x1a
	.space 0x1a - (. - gText_Rom_5C9B9D)
	.endif
