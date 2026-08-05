	@ data/maps/BattleFrontier_Lounge2/scripts.inc:167 BattleFrontier_Lounge2_Text_ArenaTycoonIsThere
	.globl gText_Rom_237111
gText_Rom_237111: @ 0x08237111
	.string "しってるかい?\pあそこには エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lアリーナキャプテンって いう\lかわいい トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - gText_Rom_237111) > 0x5b
	.error "gText_Rom_237111 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237111) < 0x5b
	.space 0x5b - (. - gText_Rom_237111)
	.endif
