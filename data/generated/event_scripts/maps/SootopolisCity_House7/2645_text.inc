	@ data/maps/SootopolisCity_House7/scripts.inc:12 SootopolisCity_House7_Text_CityFromEruptedVolcano
	.globl gText_Rom_20F7CD
gText_Rom_20F7CD: @ 0x0820F7CD
	.string "かいていに あった かざんが ふんかして\nうみの うえまで もりあがる\pそして ふんかこうに あめが たまって\nできたのが この ルネシティ なんだよ$"
	.if (. - gText_Rom_20F7CD) > 0x4c
	.error "gText_Rom_20F7CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F7CD) < 0x4c
	.space 0x4c - (. - gText_Rom_20F7CD)
	.endif
