	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:378 BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol
	.globl gText_Rom_21F2E3
gText_Rom_21F2E3: @ 0x0821F2E3
	.string "きょうは シンボルを もらえる までは\nぜったいに あきらめないで がんばろっと!"
	.byte EOS
	.if (. - gText_Rom_21F2E3) > 0x2a
	.error "gText_Rom_21F2E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F2E3) < 0x2a
	.space 0x2a - (. - gText_Rom_21F2E3)
	.endif
