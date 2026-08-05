	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:577 BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleSlowAndSteady
	.globl gText_Rom_232702
gText_Rom_232702: @ 0x08232702
	.string "『じっくり じわじわ』とした バトルを\nこころがけている ようですよ!"
	.byte EOS
	.if (. - gText_Rom_232702) > 0x24
	.error "gText_Rom_232702 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232702) < 0x24
	.space 0x24 - (. - gText_Rom_232702)
	.endif
