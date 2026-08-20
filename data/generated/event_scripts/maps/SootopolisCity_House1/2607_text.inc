	@ data/maps/SootopolisCity_House1/scripts.inc:34 SootopolisCity_House1_Text_ExplainBrickBreak
	.globl gText_Rom_20F391
gText_Rom_20F391: @ 0x0820F391
	.string "わざマシン31は かわらわり!\nせつめい するのも おそろしい わざよ……{EOS}"
	.if (. - gText_Rom_20F391) > 0x26
	.error "gText_Rom_20F391 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F391) < 0x26
	.space 0x26 - (. - gText_Rom_20F391)
	.endif
