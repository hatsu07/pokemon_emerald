	@ field-script:0x23A514 FieldScriptText_23AC6C
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23AC6C
gText_Rom_23AC6C: @ 0x0823AC6C
	.string "オープンレベルの　コースでは\nちょうせんに　さんかする　ポケモンの\lレベルに　せいげんが　ありません\pあなたの　ポケモンの　レベルに　あわせて\nたいせんする　トレーナーの　ポケモンの\lレベルが　かわります\pただし　レベル60より　ひくい　レベルの\nポケモンを　つれた　トレーナーが\lとうじょう　することは　ありません"
	.byte EOS
	.if (. - gText_Rom_23AC6C) != 0x9f
	.error "gText_Rom_23AC6C must retain its original byte length"
	.endif
