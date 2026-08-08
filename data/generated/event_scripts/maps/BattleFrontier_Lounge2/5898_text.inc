	@ data/maps/BattleFrontier_Lounge2/scripts.inc:194 BattleFrontier_Lounge2_Text_DoubleBattleAdvice1
	.globl gText_Rom_2374F3
gText_Rom_2374F3: @ 0x082374F3
	.string "ダブルバトルが できる ばしょは\nいくつか あるけど やっぱり きほんは\lバトルタワーの ダブル バトルルーム!\pまずは ここから バトルフロンティアでの\nダブルバトルを まなんで いくと いいぜ!"
	.byte EOS
	.if (. - gText_Rom_2374F3) > 0x64
	.error "gText_Rom_2374F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2374F3) < 0x64
	.space 0x64 - (. - gText_Rom_2374F3)
	.endif
