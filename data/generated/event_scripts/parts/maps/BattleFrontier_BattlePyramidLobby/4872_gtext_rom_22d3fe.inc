	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:723 BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules
	.globl gText_Rom_22D3FE
gText_Rom_22D3FE: @ 0x0822D3FE
	.string "ピラミッドの めいろは\nはいる たびに かわります\pなかは とても くらく なっているので\nしんちょうに すすみましょう\pまた やせいポケモンや トレーナーとの\nたたかいに かつと\lちょっとだけ まわりが あかるくなります$"
	.if (. - gText_Rom_22D3FE) > 0x70
	.error "gText_Rom_22D3FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D3FE) < 0x70
	.space 0x70 - (. - gText_Rom_22D3FE)
	.endif
