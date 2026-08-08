	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:964 Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz1
	.globl gText_Rom_23FC68
gText_Rom_23FC68: @ 0x0823FC68
	.string "からくりニンギョウ 5ゴウ くいず!\pカイナシティの だいすきクラブに\nポケモンは なんひき いた?$"
	.if (. - gText_Rom_23FC68) > 0x33
	.error "gText_Rom_23FC68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FC68) < 0x33
	.space 0x33 - (. - gText_Rom_23FC68)
	.endif
