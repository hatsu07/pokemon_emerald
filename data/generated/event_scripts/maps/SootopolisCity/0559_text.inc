	@ data/maps/SootopolisCity/scripts.inc:1477 SootopolisCity_Text_YouBroughtFlyingMon
	.globl gText_Rom_1E3326
gText_Rom_1E3326: @ 0x081E3326
	.string "えっ!\pあの そらから おりてきた ポケモンを\nつれてきたの って あなたなの!?\p……へえ やるじゃない!$"
	.if (. - gText_Rom_1E3326) > 0x37
	.error "gText_Rom_1E3326 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E3326) < 0x37
	.space 0x37 - (. - gText_Rom_1E3326)
	.endif
