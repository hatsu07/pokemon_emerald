	@ data/maps/Route103/scripts.inc:330 Route103_Text_BrendanDefeated (+1 aliases)
	.globl gText_Rom_1E702A
gText_Rom_1E702A: @ 0x081E702A
	.string "ふうん\n{PLAYER}って つよいんだね$"
	.if (. - gText_Rom_1E702A) > 0x10
	.error "gText_Rom_1E702A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E702A) < 0x10
	.space 0x10 - (. - gText_Rom_1E702A)
	.endif
