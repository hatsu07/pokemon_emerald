	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:567 BattleFrontier_BattleArenaBattleRoom_Text_IsThatRight
	.globl gText_Rom_230B88
gText_Rom_230B88: @ 0x08230B88
	.string "ふーん…… へーえ…… へえぇぇ……"
	.byte EOS
	.if (. - gText_Rom_230B88) > 0x13
	.error "gText_Rom_230B88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230B88) < 0x13
	.space 0x13 - (. - gText_Rom_230B88)
	.endif
