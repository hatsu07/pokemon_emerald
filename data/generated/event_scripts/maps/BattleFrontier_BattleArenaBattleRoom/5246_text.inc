	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:617 BattleFrontier_BattleArenaBattleRoom_Text_GretaBlownAway
	.globl gText_Rom_230D43
gText_Rom_230D43: @ 0x08230D43
	.string "コゴミ『あーーーっ! もーーーっ!!\nさっさと フロンティアパス かしてよっ!"
	.byte EOS
	.if (. - gText_Rom_230D43) > 0x28
	.error "gText_Rom_230D43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230D43) < 0x28
	.space 0x28 - (. - gText_Rom_230D43)
	.endif
