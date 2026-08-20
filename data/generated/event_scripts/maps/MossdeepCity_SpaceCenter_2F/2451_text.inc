	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:390 MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle
	.globl gText_Rom_20DCE5
gText_Rom_20DCE5: @ 0x0820DCE5
	.string "オレたち リーダーの\nやくに たってるのかな……?{EOS}"
	.if (. - gText_Rom_20DCE5) > 0x1a
	.error "gText_Rom_20DCE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DCE5) < 0x1a
	.space 0x1a - (. - gText_Rom_20DCE5)
	.endif
