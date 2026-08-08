	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1109 BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker
	.globl gText_Rom_229A6B
gText_Rom_229A6B: @ 0x08229A6B
	.string "…… そして みなさーーーーん!!\pついに! ついに あのトレーナーが\nかえって きたぞーーー!\pそう…… その トレーナーの なはーーー\nわれらが ドームスーパースターーーー!!\lヒース だぁーーーーーー!$"
	.if (. - gText_Rom_229A6B) > 0x69
	.error "gText_Rom_229A6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229A6B) < 0x69
	.space 0x69 - (. - gText_Rom_229A6B)
	.endif
