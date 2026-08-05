	@ data/maps/MossdeepCity_Gym/scripts.inc:495 MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis
	.globl gText_Rom_20BF7D
gText_Rom_20BF7D: @ 0x0820BF7D
	.string "フウ『マインドバッジには ポケモンの\nとくこうと とくぼうを たかめる\lこうかが ひめられている!\pラン『それから ダイビング という\nひでんわざも つかえるように なるヨ!\pフウ『あと これも もっていきなよ!$"
	.if (. - gText_Rom_20BF7D) > 0x6b
	.error "gText_Rom_20BF7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BF7D) < 0x6b
	.space 0x6b - (. - gText_Rom_20BF7D)
	.endif
