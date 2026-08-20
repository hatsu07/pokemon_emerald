	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:904 Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz1
	.globl gText_Rom_23F8E8
gText_Rom_23F8E8: @ 0x0823F8E8
	.string "からくりニンギョウ 1ゴウ くいず!\pこのなかで 110ばんどうろに\nいない ポケモンは どれ?{EOS}"
	.if (. - gText_Rom_23F8E8) > 0x31
	.error "gText_Rom_23F8E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F8E8) < 0x31
	.space 0x31 - (. - gText_Rom_23F8E8)
	.endif
