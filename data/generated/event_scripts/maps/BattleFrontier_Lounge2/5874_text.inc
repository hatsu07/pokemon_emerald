	@ data/maps/BattleFrontier_Lounge2/scripts.inc:158 BattleFrontier_Lounge2_Text_PikeQueenIsThere
	.globl gText_Rom_236FD3
gText_Rom_236FD3: @ 0x08236FD3
	.string "しってるかい?\pあそこには エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lチューブクイーンって いう\lこわーい トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - gText_Rom_236FD3) > 0x5a
	.error "gText_Rom_236FD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236FD3) < 0x5a
	.space 0x5a - (. - gText_Rom_236FD3)
	.endif
