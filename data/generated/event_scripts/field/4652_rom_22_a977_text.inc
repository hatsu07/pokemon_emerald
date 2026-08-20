	@ field-script:0x22A26E FieldScriptText_22A977
	.globl gText_Rom_22A977
gText_Rom_22A977: @ 0x0822A977
	.string "あたしの　ポケモン\nふだんは　とーっても　おとなしいのよ\pだけど　バトルホールで　たたかってると\nときどき　めつきが\lガラッと　かわっちゃうの！\pすっごい　はくりょくで　びっくりしちゃう！{EOS}"
	.if (. - gText_Rom_22A977) > 0x5f
	.error "gText_Rom_22A977 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A977) < 0x5f
	.space 0x5f - (. - gText_Rom_22A977)
	.endif
