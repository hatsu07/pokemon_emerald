	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:907 Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz2
	.globl gText_Rom_23F919
gText_Rom_23F919: @ 0x0823F919
	.string "からくりニンギョウ 1ゴウ くいず!\pこのなかで みずタイプが はいってない\nポケモンは どれ?{EOS}"
	.if (. - gText_Rom_23F919) > 0x31
	.error "gText_Rom_23F919 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F919) < 0x31
	.space 0x31 - (. - gText_Rom_23F919)
	.endif
