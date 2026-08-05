	@ field-script:0x1F63BA FieldScriptText_22A7B5
	.globl gText_Rom_22A7B5
gText_Rom_22A7B5: @ 0x0822A7B5
	.string "おぬし……\pぜんかい　ちゃんと　レポートを　かいて\nしゅうりょう　しなかったな？\pざんねんだが　そのばあい\nちょうせんは　むこうと　なる……$"
	.if (. - gText_Rom_22A7B5) > 0x47
	.error "gText_Rom_22A7B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A7B5) < 0x47
	.space 0x47 - (. - gText_Rom_22A7B5)
	.endif
