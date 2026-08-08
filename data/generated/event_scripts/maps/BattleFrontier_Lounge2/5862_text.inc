	@ data/maps/BattleFrontier_Lounge2/scripts.inc:140 BattleFrontier_Lounge2_Text_DomeAceIsThere
	.globl gText_Rom_236D4C
gText_Rom_236D4C: @ 0x08236D4C
	.string "しってるかい?\pあそこは エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lドームスーパースターって いう\lどハデな トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - gText_Rom_236D4C) > 0x5b
	.error "gText_Rom_236D4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236D4C) < 0x5b
	.space 0x5b - (. - gText_Rom_236D4C)
	.endif
