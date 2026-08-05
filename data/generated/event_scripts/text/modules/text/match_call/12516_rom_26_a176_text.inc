	@ data/text/match_call.inc:649 MatchCall_Text_Wattson_Preparing
	.globl gText_Rom_26A176
gText_Rom_26A176: @ 0x0826A176
	.string "テッセン『おう おまえさんか!\pわしは あれから また トレーニングを\nやりなおして いるところ じゃよ!\pわしの ジムを さいかいするには\nまだ ちーと じかんが かかりそうじゃな!\pそれまで まっていて おくれ!\nわっはははは!"
	.byte EOS
	.if (. - gText_Rom_26A176) > 0x75
	.error "gText_Rom_26A176 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A176) < 0x75
	.space 0x75 - (. - gText_Rom_26A176)
	.endif
