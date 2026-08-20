	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1055 BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker
	.globl gText_Rom_22982B
gText_Rom_22982B: @ 0x0822982B
	.string "そして…… {PLAYER}さんの\nきろくを はばむ トレーナーは……\pそう…… そのなは!!\nバトルドームの コミッショナーに して!!\lわれらが ドームスーパースター!!\lヒース だぁーーーーーー!{EOS}"
	.if (. - gText_Rom_22982B) > 0x60
	.error "gText_Rom_22982B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22982B) < 0x60
	.space 0x60 - (. - gText_Rom_22982B)
	.endif
