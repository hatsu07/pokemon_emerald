	@ data/maps/MossdeepCity/scripts.inc:306 MossdeepCity_Text_WantKingsRockStevenGaveMe
	.globl gText_Rom_1E17BC
gText_Rom_1E17BC: @ 0x081E17BC
	.string "これ…… ダイゴさんに もらったけど\nなんだか よく わかんないや!\pおうじゃのしるし って いうらしいけど\nおまえ ほしい?{EOS}"
	.if (. - gText_Rom_1E17BC) > 0x40
	.error "gText_Rom_1E17BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E17BC) < 0x40
	.space 0x40 - (. - gText_Rom_1E17BC)
	.endif
