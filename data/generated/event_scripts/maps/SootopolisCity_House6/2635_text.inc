	@ data/maps/SootopolisCity_House6/scripts.inc:34 SootopolisCity_House6_Text_FirstGuestInWhileTakeDoll
	.globl gText_Rom_20F738
gText_Rom_20F738: @ 0x0820F738
	.string "わー ひさしぶりの おきゃくさん!\pなんだか うれしいから\nホエルコの おおきい ぬいぐるみ あげる!{EOS}"
	.if (. - gText_Rom_20F738) > 0x34
	.error "gText_Rom_20F738 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F738) < 0x34
	.space 0x34 - (. - gText_Rom_20F738)
	.endif
