	@ data/maps/Route104/scripts.inc:1066 Route104_Text_TrainerTipsDoubleBattles
	.globl gText_Rom_1E7DAA
gText_Rom_1E7DAA: @ 0x081E7DAA
	.string "おとくな けいじばん!!\pホウエンちほう には\nダブルバトルと いって 2たい2の\lポケモンしょうぶを いどんでくる\lトレーナーが います!\pダブルバトルでは ポケモンの リストの\nひだりと いちばん うえにいる\lポケモンが とびだして たたかうので\lリストの ならびには ようちゅうい!{EOS}"
	.if (. - gText_Rom_1E7DAA) > 0x91
	.error "gText_Rom_1E7DAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7DAA) < 0x91
	.space 0x91 - (. - gText_Rom_1E7DAA)
	.endif
