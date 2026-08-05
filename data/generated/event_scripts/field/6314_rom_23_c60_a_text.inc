	@ field-script:0x23C443 FieldScriptText_23C60A
	.globl gText_Rom_23C60A
gText_Rom_23C60A: @ 0x0823C60A
	.string "きみ　すごいねー！\nあつい　ポケモンしょうぶ　だったー\lわし　だいまんぞく　だよー！\pこれは　あつい　しょうぶを　みせてくれた\nきみへの　おれい　だよー\pサイコソーダ　はんダース　もっていきなよー"
	.byte EOS
	.if (. - gText_Rom_23C60A) > 0x63
	.error "gText_Rom_23C60A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C60A) < 0x63
	.space 0x63 - (. - gText_Rom_23C60A)
	.endif
