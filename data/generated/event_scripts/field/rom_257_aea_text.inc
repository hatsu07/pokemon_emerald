	@ field-script:0x25770E FieldScriptText_257A98
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_257A98
FieldScriptText_257A98: @ 0x08257A98
	.string "わしは　そだてや　じいさんじゃ\pここで　みんなの　だいじな　ポケモンの\nめんどうを　みて　おるのじゃよ\pなにか　そだてて　ほしければ\nばあさんに　たのんで　おくれ"
	.byte EOS
	.if (. - FieldScriptText_257A98) != 0x52
	.error "FieldScriptText_257A98 must retain its original byte length"
	.endif
	@ field-script:0x257718 FieldScriptText_257AEA
	.globl FieldScriptText_257AEA
FieldScriptText_257AEA: @ 0x08257AEA
	.string "おお！　あんたか\pあずかっていた　ポケモンを\nそだてていたら……なんと！\pポケモンが　タマゴを\nもっておったんじゃ！\pどこから　もってきたか　わからんが\nあんたの　ポケモンが　もってたんじゃ\pやっぱり　ほしいじゃろ？"
	.byte EOS
	.if (. - FieldScriptText_257AEA) > 0x6d
	.error "FieldScriptText_257AEA may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257AEA) < 0x6d
	.space 0x6d - (. - FieldScriptText_257AEA)
	.endif
