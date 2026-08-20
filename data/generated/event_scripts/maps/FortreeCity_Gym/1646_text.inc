	@ data/maps/FortreeCity_Gym/scripts.inc:191 FortreeCity_Gym_Text_FlintPostBattle
	.globl gText_Rom_20476A
gText_Rom_20476A: @ 0x0820476A
	.string "ナギさんは かわいくて つよい……\nほんと さいこうの リーダーだよ!\p……ポッ{EOS}"
	.if (. - gText_Rom_20476A) > 0x29
	.error "gText_Rom_20476A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20476A) < 0x29
	.space 0x29 - (. - gText_Rom_20476A)
	.endif
