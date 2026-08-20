	@ data/maps/SootopolisCity_House6/scripts.inc:43 SootopolisCity_House6_Text_DontWantThisDoll
	.globl gText_Rom_20F796
gText_Rom_20F796: @ 0x0820F796
	.string "そうなの?\nぬいぐるみ ほしくないの?{EOS}"
	.if (. - gText_Rom_20F796) > 0x14
	.error "gText_Rom_20F796 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F796) < 0x14
	.space 0x14 - (. - gText_Rom_20F796)
	.endif
