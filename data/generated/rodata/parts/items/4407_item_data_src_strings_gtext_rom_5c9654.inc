	@ src/strings.c:169 gText_RepelEffectsLingered
	.globl gText_Rom_5C9654
gText_Rom_5C9654: @ 0x085C9654
	.string "まだ まえに つかった スプレーの\nこうかが のこってます!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9654) > 0x21
	.error "gText_Rom_5C9654 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9654) < 0x21
	.space 0x21 - (. - gText_Rom_5C9654)
	.endif
