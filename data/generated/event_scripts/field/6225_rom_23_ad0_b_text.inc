	@ field-script:0x23A522 FieldScriptText_23AD0B
	.globl gText_Rom_23AD0B
gText_Rom_23AD0B: @ 0x0823AD0B
	.string "タマゴや　いちぶの　れいがいを\nのぞいて　ほとんどの　ポケモンが\lすべての　しせつに　ちょうせん　できます\pちょうせんの　ために\nひつような　ポケモンの　かずは\lしせつに　よって　ちがいます\pただし　どの　しせつでも\nおなじ　しゅるいの　ポケモンを\l2ひき　いじょう　さんか　させることは\lできませんので　ごちゅうい　ください"
	.byte EOS
	.if (. - gText_Rom_23AD0B) > 0xa4
	.error "gText_Rom_23AD0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AD0B) < 0xa4
	.space 0xa4 - (. - gText_Rom_23AD0B)
	.endif
