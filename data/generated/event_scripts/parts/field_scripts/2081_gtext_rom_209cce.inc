	@ field-script:0x209B18 FieldScriptText_209CCE
	.globl gText_Rom_209CCE
gText_Rom_209CCE: @ 0x08209CCE
	.string "れんらくせんが　かんせい　しないと\nふなのり　というものは　ヒマだぜ……\pカイナの　ぞうせんじょの　れんちゅう\nしゃかりきに　がんばって　くれよな$"
	.if (. - gText_Rom_209CCE) > 0x4a
	.error "gText_Rom_209CCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209CCE) < 0x4a
	.space 0x4a - (. - gText_Rom_209CCE)
	.endif
