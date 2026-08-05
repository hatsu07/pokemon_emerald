	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine (+1 aliases)
	.globl gText_Rom_2594F8
gText_Rom_2594F8: @ 0x082594F8
	.string "ひみつきち　って　いいよね！\nなんか　わくわく　してこない？"
	.byte EOS
	.if (. - gText_Rom_2594F8) > 0x1f
	.error "gText_Rom_2594F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2594F8) < 0x1f
	.space 0x1f - (. - gText_Rom_2594F8)
	.endif
