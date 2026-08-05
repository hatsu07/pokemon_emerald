	@ data/maps/BattleFrontier_Lounge2/scripts.inc:131 BattleFrontier_Lounge2_Text_SalonMaidenIsThere
	.globl gText_Rom_236C08
gText_Rom_236C08: @ 0x08236C08
	.string "しってるかい?\pあそこは エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lタワータイクーンって いう\lなぞの トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - gText_Rom_236C08) > 0x58
	.error "gText_Rom_236C08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236C08) < 0x58
	.space 0x58 - (. - gText_Rom_236C08)
	.endif
