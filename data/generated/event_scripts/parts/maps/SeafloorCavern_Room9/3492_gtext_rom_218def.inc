	@ data/maps/SeafloorCavern_Room9/scripts.inc:239 SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo
	.globl gText_Rom_218DEF
gText_Rom_218DEF: @ 0x08218DEF
	.string "アオギリ『……!?\pおれは なにも していないのに\nなぜ べにいろのたまが……?\pカイオーガは どこへ きえた?$"
	.if (. - gText_Rom_218DEF) > 0x39
	.error "gText_Rom_218DEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218DEF) < 0x39
	.space 0x39 - (. - gText_Rom_218DEF)
	.endif
