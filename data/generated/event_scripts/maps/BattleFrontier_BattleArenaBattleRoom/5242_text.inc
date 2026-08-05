	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:609 BattleFrontier_BattleArenaBattleRoom_Text_WontAllowHalfheartedEffort
	.globl gText_Rom_230D08
gText_Rom_230D08: @ 0x08230D08
	.string "はんぱな たたかいじゃ ゆるさないっ!!\nかくご しといてねっ!!"
	.byte EOS
	.if (. - gText_Rom_230D08) > 0x22
	.error "gText_Rom_230D08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230D08) < 0x22
	.space 0x22 - (. - gText_Rom_230D08)
	.endif
