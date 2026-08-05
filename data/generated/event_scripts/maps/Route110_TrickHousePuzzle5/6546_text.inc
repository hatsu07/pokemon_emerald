	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:958 Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz3
	.globl gText_Rom_23FC00
gText_Rom_23FC00: @ 0x0823FC00
	.string "からくりニンギョウ 4ゴウ くいずヨ!\pポケモン トレーナーズ スクールに\nおんなのこの せいとは なんにん いた?$"
	.if (. - gText_Rom_23FC00) > 0x3b
	.error "gText_Rom_23FC00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FC00) < 0x3b
	.space 0x3b - (. - gText_Rom_23FC00)
	.endif
