	@ field-script:0x257718 FieldScriptText_257AEA
	.globl gText_Rom_257AEA
gText_Rom_257AEA: @ 0x08257AEA
	.string "おお！　あんたか\pあずかっていた　ポケモンを\nそだてていたら……なんと！\pポケモンが　タマゴを\nもっておったんじゃ！\pどこから　もってきたか　わからんが\nあんたの　ポケモンが　もってたんじゃ\pやっぱり　ほしいじゃろ？"
	.byte EOS
	.if (. - gText_Rom_257AEA) > 0x6d
	.error "gText_Rom_257AEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257AEA) < 0x6d
	.space 0x6d - (. - gText_Rom_257AEA)
	.endif
