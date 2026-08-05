	@ data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.inc:275 BattleFrontier_BattleFactoryBattleRoom_Text_NextTimeNoHoldsBarred
	.globl gText_Rom_232F60
gText_Rom_232F60: @ 0x08232F60
	.string "へっ…… おもしれぇじゃ ねえか……\pつぎに あうときゃー\nおれも マジで いく からな!\pしっかり べんきょう しとけよ!!"
	.byte EOS
	.if (. - gText_Rom_232F60) > 0x40
	.error "gText_Rom_232F60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232F60) < 0x40
	.space 0x40 - (. - gText_Rom_232F60)
	.endif
