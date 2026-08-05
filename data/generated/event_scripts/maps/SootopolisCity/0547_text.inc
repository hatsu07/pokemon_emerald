	@ data/maps/SootopolisCity/scripts.inc:1459 SootopolisCity_Text_CaveOfOriginSleepsToo
	.globl gText_Rom_1E3148
gText_Rom_1E3148: @ 0x081E3148
	.string "ここは めざめのほこら……\pけれど わざわいが きえさった いま\nほこらも しずかに ねむるのです……$"
	.if (. - gText_Rom_1E3148) > 0x34
	.error "gText_Rom_1E3148 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E3148) < 0x34
	.space 0x34 - (. - gText_Rom_1E3148)
	.endif
