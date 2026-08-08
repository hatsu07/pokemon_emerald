	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:617 BattleFrontier_BattleFactoryPreBattleRoom_Text_YourSwapIsComplete
	.globl gText_Rom_23285F
gText_Rom_23285F: @ 0x0823285F
	.string "おつかれさまです!\nポケモンこうかん かんりょう ですね!"
	.byte EOS
	.if (. - gText_Rom_23285F) > 0x1e
	.error "gText_Rom_23285F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23285F) < 0x1e
	.space 0x1e - (. - gText_Rom_23285F)
	.endif
