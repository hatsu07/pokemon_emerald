	@ field-script:0x22A265 FieldScriptText_22A8D9
	.globl gText_Rom_22A8D9
gText_Rom_22A8D9: @ 0x0822A8D9
	.string "うーん……\pどうやら　ここでは　ポケモンの　せいかくと\nおぼえさせている　わざとの　あいしょうが\lたたかいの　カギを　にぎってる　ようだ\pそう……　もし　きみの　ポケモンが\nじぶんの　ちからが　はっき　できなくて\lこまっている　ようす　だったら\lおぼえさせている　わざから\lかんがえ　なおす　ひつようが　あるかもな{EOS}"
	.if (. - gText_Rom_22A8D9) > 0x9e
	.error "gText_Rom_22A8D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A8D9) < 0x9e
	.space 0x9e - (. - gText_Rom_22A8D9)
	.endif
