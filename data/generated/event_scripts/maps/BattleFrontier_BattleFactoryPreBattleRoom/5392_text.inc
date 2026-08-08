	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:593 BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleTotalPreparation
	.globl gText_Rom_232790
gText_Rom_232790: @ 0x08232790
	.string "『じゅんび ばんたん』の バトルを\nこころがけている ようですよ!"
	.byte EOS
	.if (. - gText_Rom_232790) > 0x22
	.error "gText_Rom_232790 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232790) < 0x22
	.space 0x22 - (. - gText_Rom_232790)
	.endif
