	@ src/berry_blender.c:280 sText_RunOutOfBerriesForBlending
	.globl gText_Rom_30F7B2
gText_Rom_30F7B2: @ 0x0830F7B2
	.string "きのみブレンダーに いれる きのみが\nないので これいじょう できません\p$"
	.if (. - gText_Rom_30F7B2) > 0x26
	.error "gText_Rom_30F7B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F7B2) < 0x26
	.space 0x26 - (. - gText_Rom_30F7B2)
	.endif
