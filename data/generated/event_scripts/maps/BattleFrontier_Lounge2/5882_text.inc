	@ data/maps/BattleFrontier_Lounge2/scripts.inc:170 BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons
	.globl gText_Rom_23716C
gText_Rom_23716C: @ 0x0823716C
	.string "きみは もう アリーナキャプテンと\nたたかったこと あるかい?\pあのこは あいての ちからを うかがうとき\nむしと かくとうの 1ぽんヅノポケモン!\lあくの げっこうポケモン!\lむしと ゴーストの ぬけがらポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_23716C) > 0x7f
	.error "gText_Rom_23716C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23716C) < 0x7f
	.space 0x7f - (. - gText_Rom_23716C)
	.endif
