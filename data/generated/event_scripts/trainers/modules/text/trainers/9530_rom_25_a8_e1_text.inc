	@ data/text/trainers.inc:449 Route107_Text_TonyRematchDefeated (+1 aliases)
	.globl gText_Rom_25A8E1
gText_Rom_25A8E1: @ 0x0825A8E1
	.string "ショック!!\pポケモンは つよくなったが\nトレーナーの おれが よわいまま!?$"
	.if (. - gText_Rom_25A8E1) > 0x28
	.error "gText_Rom_25A8E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A8E1) < 0x28
	.space 0x28 - (. - gText_Rom_25A8E1)
	.endif
