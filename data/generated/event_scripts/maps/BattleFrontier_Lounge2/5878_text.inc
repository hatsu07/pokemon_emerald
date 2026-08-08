	@ data/maps/BattleFrontier_Lounge2/scripts.inc:164 BattleFrontier_Lounge2_Text_PikeQueenGoldMons
	.globl gText_Rom_237098
gText_Rom_237098: @ 0x08237098
	.string "きみは ほんきの チューブクイーンと\nたたかったこと あるかい?\pやつは ほんきで おこったとき\nどくの キバへびポケモン!\lはがねと じめんの てつへびポケモン!\lみずと ひこうの きょうあくポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_237098) > 0x79
	.error "gText_Rom_237098 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237098) < 0x79
	.space 0x79 - (. - gText_Rom_237098)
	.endif
