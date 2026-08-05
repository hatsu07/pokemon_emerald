	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:178 SootopolisCity_Gym_1F_Text_GymGuideAdvice
	.globl gText_Rom_20E46B
gText_Rom_20E46B: @ 0x0820E46B
	.string "げんき しとぉや!!\nチャンピオンを めざす {PLAYER}!!\pルネシティの ジムリーダー アダンは\nみずタイプ ポケモンを つかいこなす!\pそして アダンがいる ところ までは\nこおりの ゆかが ゆくてを さえぎる……\pごめんな! きみに おしえて\nあげられるのは ここまで なんだ……!\pあとは じぶんで きばってくれッ!$"
	.if (. - gText_Rom_20E46B) > 0xa0
	.error "gText_Rom_20E46B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E46B) < 0xa0
	.space 0xa0 - (. - gText_Rom_20E46B)
	.endif
