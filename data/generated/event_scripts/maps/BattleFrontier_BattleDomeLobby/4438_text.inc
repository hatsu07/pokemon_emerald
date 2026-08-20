	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:607 BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier
	.globl gText_Rom_227BA7
gText_Rom_227BA7: @ 0x08227BA7
	.string "バトルフロンティア……\nわたしの ゆめ だった……{EOS}"
	.if (. - gText_Rom_227BA7) > 0x1a
	.error "gText_Rom_227BA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227BA7) < 0x1a
	.space 0x1a - (. - gText_Rom_227BA7)
	.endif
