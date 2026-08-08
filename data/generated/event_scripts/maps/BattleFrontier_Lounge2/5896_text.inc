	@ data/maps/BattleFrontier_Lounge2/scripts.inc:191 BattleFrontier_Lounge2_Text_PyramidKingGoldMons
	.globl gText_Rom_237470
gText_Rom_237470: @ 0x08237470
	.string "きみは ほんきの ピラミッドキングと\nたたかったこと あるかい?\pかれに あつい ちからが みなぎるときは\nこおりと ひこうの れいとうポケモン!\lでんきと ひこうの でんげきポケモン!\lほのおと ひこうの かえんポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_237470) > 0x83
	.error "gText_Rom_237470 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237470) < 0x83
	.space 0x83 - (. - gText_Rom_237470)
	.endif
