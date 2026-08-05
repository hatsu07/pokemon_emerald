	@ data/maps/SootopolisCity_House6/scripts.inc:40 SootopolisCity_House6_Text_IllHoldItForYou
	.globl gText_Rom_20F776
gText_Rom_20F776: @ 0x0820F776
	.string "ほしいけど いまは ダメ?\nじゃあ あずかっておいて あげるね$"
	.if (. - gText_Rom_20F776) > 0x20
	.error "gText_Rom_20F776 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F776) < 0x20
	.space 0x20 - (. - gText_Rom_20F776)
	.endif
