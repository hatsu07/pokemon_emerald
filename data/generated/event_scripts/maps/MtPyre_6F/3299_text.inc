	@ data/maps/MtPyre_6F/scripts.inc:37 MtPyre_6F_Text_ValeriePostBattle
	.globl gText_Rom_216A2B
gText_Rom_216A2B: @ 0x08216A2B
	.string "ここに ねむっている ポケモンたちの\nちからが はいって くるのかもよ……?$"
	.if (. - gText_Rom_216A2B) > 0x27
	.error "gText_Rom_216A2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216A2B) < 0x27
	.space 0x27 - (. - gText_Rom_216A2B)
	.endif
