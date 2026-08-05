	@ data/maps/SootopolisCity_House3/scripts.inc:22 SootopolisCity_House3_Text_JuanHasManyFansDoYou
	.globl gText_Rom_20F4AC
gText_Rom_20F4AC: @ 0x0820F4AC
	.string "あなた ポケモン トレーナーね?\pルネシティの アダンさまは\nおでしさんの ミクリさま より\lさらに たくさんの ファンが いるのよ!\pあなたに ファンは いるのかしら?$"
	.if (. - gText_Rom_20F4AC) > 0x56
	.error "gText_Rom_20F4AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F4AC) < 0x56
	.space 0x56 - (. - gText_Rom_20F4AC)
	.endif
