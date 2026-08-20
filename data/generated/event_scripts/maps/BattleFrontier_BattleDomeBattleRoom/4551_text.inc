	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1010 BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue
	.globl gText_Rom_229742
gText_Rom_229742: @ 0x08229742
	.string "ひがんの はつゆうしょう なるか!?\p{EOS}"
	.if (. - gText_Rom_229742) > 0x14
	.error "gText_Rom_229742 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229742) < 0x14
	.space 0x14 - (. - gText_Rom_229742)
	.endif
