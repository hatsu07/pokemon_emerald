	@ data/maps/CaveOfOrigin_B1F/scripts.inc:68 CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin
	.globl gText_Rom_21935C
gText_Rom_21935C: @ 0x0821935C
	.string "ミクリ『めざめのほこらか……\pって それは ここのこと じゃないか\nたのむよ しっかり してくれ!\pレックウザが どこに いるか\nもういちど かんがえて みてくれ……{EOS}"
	.if (. - gText_Rom_21935C) > 0x54
	.error "gText_Rom_21935C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21935C) < 0x54
	.space 0x54 - (. - gText_Rom_21935C)
	.endif
