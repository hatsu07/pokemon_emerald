	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:181 SootopolisCity_Gym_1F_Text_GymGuidePostVictory
	.globl gText_Rom_20E50B
gText_Rom_20E50B: @ 0x0820E50B
	.string "ホウエンで いちばん つよいと いわれる\nアダンに かったのかあ!!\pよし! きみの\nトレーナーカードを みたまえ!\pすべての バッジが そろっているなら\nいよいよ ポケモンリーグ ちょうせんだ!{EOS}"
	.if (. - gText_Rom_20E50B) > 0x63
	.error "gText_Rom_20E50B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E50B) < 0x63
	.space 0x63 - (. - gText_Rom_20E50B)
	.endif
