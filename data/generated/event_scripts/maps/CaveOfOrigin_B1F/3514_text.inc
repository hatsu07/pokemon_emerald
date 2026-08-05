	@ data/maps/CaveOfOrigin_B1F/scripts.inc:71 CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat
	.globl gText_Rom_2193B0
gText_Rom_2193B0: @ 0x082193B0
	.string "ミクリ『おくりびやまか……\pしかし このまえ オババさまに\nあったときは なにも いってなかった\pあのひとが わたしに\nうそを つくとも おもえないし……\p{PLAYER}{KUN} もういちど\nよく かんがえて くれないか……$"
	.if (. - gText_Rom_2193B0) > 0x6a
	.error "gText_Rom_2193B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2193B0) < 0x6a
	.space 0x6a - (. - gText_Rom_2193B0)
	.endif
