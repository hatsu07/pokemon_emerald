	@ data/maps/BattleFrontier_Lounge5/scripts.inc:47 BattleFrontier_Lounge5_Text_NatureGirlNoneShown
	.globl gText_Rom_23903E
gText_Rom_23903E: @ 0x0823903E
	.string "ぷー! けち!!"
	.byte EOS
	.if (. - gText_Rom_23903E) > 0x9
	.error "gText_Rom_23903E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23903E) < 0x9
	.space 0x9 - (. - gText_Rom_23903E)
	.endif
