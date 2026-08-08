	@ data/maps/BattleFrontier_Lounge2/scripts.inc:185 BattleFrontier_Lounge2_Text_PyramidKingIsThere
	.globl gText_Rom_2373A4
gText_Rom_2373A4: @ 0x082373A4
	.string "しってるかい?\pあそこには エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lピラミッドキングって いう\lアツーい トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - gText_Rom_2373A4) > 0x5a
	.error "gText_Rom_2373A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2373A4) < 0x5a
	.space 0x5a - (. - gText_Rom_2373A4)
	.endif
