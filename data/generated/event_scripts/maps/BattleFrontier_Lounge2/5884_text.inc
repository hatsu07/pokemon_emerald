	@ data/maps/BattleFrontier_Lounge2/scripts.inc:173 BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons
	.globl gText_Rom_2371EB
gText_Rom_2371EB: @ 0x082371EB
	.string "きみは ほんきの アリーナキャプテンと\nたたかったこと あるかい?\pあのこは マジで たたかう とき\nあくの げっこうポケモン!\lゴーストと どくの シャドーポケモン!\lくさと かくとうの きのこポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_2371EB) > 0x7a
	.error "gText_Rom_2371EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2371EB) < 0x7a
	.space 0x7a - (. - gText_Rom_2371EB)
	.endif
