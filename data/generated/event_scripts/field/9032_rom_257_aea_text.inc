	@ field-script:0x25770E FieldScriptText_257A98
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_257A98
gText_Rom_257A98: @ 0x08257A98
	.string "わしは　そだてや　じいさんじゃ\pここで　みんなの　だいじな　ポケモンの\nめんどうを　みて　おるのじゃよ\pなにか　そだてて　ほしければ\nばあさんに　たのんで　おくれ"
	.byte EOS
	.if (. - gText_Rom_257A98) != 0x52
	.error "gText_Rom_257A98 must retain its original byte length"
	.endif
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
