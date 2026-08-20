	@ data/maps/MtPyre_Summit/scripts.inc:476 MtPyre_Summit_Text_Grunt4Defeat (+1 aliases)
	.globl gText_Rom_2171C5
gText_Rom_2171C5: @ 0x082171C5
	.string "そうしたら アクアだんに いれて\nやらない ことも ないよ……{EOS}"
	.if (. - gText_Rom_2171C5) > 0x20
	.error "gText_Rom_2171C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2171C5) < 0x20
	.space 0x20 - (. - gText_Rom_2171C5)
	.endif
