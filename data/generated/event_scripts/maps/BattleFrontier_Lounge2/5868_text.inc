	@ data/maps/BattleFrontier_Lounge2/scripts.inc:149 BattleFrontier_Lounge2_Text_FactoryHeadIsThere
	.globl gText_Rom_236EAF
gText_Rom_236EAF: @ 0x08236EAF
	.string "しってるかい?\pあそこは エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lファクトリーヘッドって いう\lやばい トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - gText_Rom_236EAF) > 0x59
	.error "gText_Rom_236EAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236EAF) < 0x59
	.space 0x59 - (. - gText_Rom_236EAF)
	.endif
