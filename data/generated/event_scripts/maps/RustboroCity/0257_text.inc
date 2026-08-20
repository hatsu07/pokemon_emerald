	@ data/maps/RustboroCity/scripts.inc:1110 RustboroCity_Text_YouGotItThankYou
	.globl gText_Rom_1DF671
gText_Rom_1DF671: @ 0x081DF671
	.string "ああ! どうでした\nデボンのにもつ は……?\pそうですか!\nとりかえして くれたのですか!\pきみは ほんとうに\nすごい トレーナー ですね!\p……そうだ! おれいに また\nスーパーボールを あげちゃおう!{EOS}"
	.if (. - gText_Rom_1DF671) > 0x67
	.error "gText_Rom_1DF671 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF671) < 0x67
	.space 0x67 - (. - gText_Rom_1DF671)
	.endif
