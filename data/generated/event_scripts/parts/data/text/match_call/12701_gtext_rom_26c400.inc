	@ data/text/match_call.inc:925 MatchCall_Text_MrStone3
	.globl gText_Rom_26C400
gText_Rom_26C400: @ 0x0826C400
	.string "ツワブキ『おっ! {PLAYER}{KUN}!\pそうか ダイゴに あえたのか!\nよーし おれいに プレゼントを やろう!\pカナズミに くることが あったら\nわしの へやに よっていって おくれ!\pじゃあな まっとるぞ!"
	.byte EOS
	.if (. - gText_Rom_26C400) > 0x65
	.error "gText_Rom_26C400 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C400) < 0x65
	.space 0x65 - (. - gText_Rom_26C400)
	.endif
