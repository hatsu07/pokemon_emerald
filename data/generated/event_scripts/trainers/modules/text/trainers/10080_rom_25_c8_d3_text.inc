	@ data/text/trainers.inc:1235 Route113_Text_ToriNotEnoughMons (+1 aliases)
	.globl gText_Rom_25C8D3
gText_Rom_25C8D3: @ 0x0825C8D3
	.string "ナナ『あたしたち 2たい2で たたかいたいの\nそうしないと まけちゃうもん!$"
	.if (. - gText_Rom_25C8D3) > 0x27
	.error "gText_Rom_25C8D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C8D3) < 0x27
	.space 0x27 - (. - gText_Rom_25C8D3)
	.endif
