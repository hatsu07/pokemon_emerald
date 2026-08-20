	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1100 BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime
	.globl gText_Rom_229A1C
gText_Rom_229A1C: @ 0x08229A1C
	.string "…… …… ……\pわたしは キミを ごかい してたよ\nつぎは こうは いかない からね……{EOS}"
	.if (. - gText_Rom_229A1C) > 0x2e
	.error "gText_Rom_229A1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229A1C) < 0x2e
	.space 0x2e - (. - gText_Rom_229A1C)
	.endif
