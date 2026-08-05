	@ data/maps/BattleFrontier_Lounge1/scripts.inc:156 BattleFrontier_Lounge1_Text_AverageAbility
	.globl gText_Rom_2357D6
gText_Rom_2357D6: @ 0x082357D6
	.string "…… んー\pこいつは ぜんたいてきに いうと\nまずまずの のうりょくと\lいう ところかの……"
	.byte EOS
	.if (. - gText_Rom_2357D6) > 0x2f
	.error "gText_Rom_2357D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2357D6) < 0x2f
	.space 0x2f - (. - gText_Rom_2357D6)
	.endif
