	@ field-script:0x25770E FieldScriptText_257A98
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_257A98
gText_Rom_257A98: @ 0x08257A98
	.string "わしは　そだてや　じいさんじゃ\pここで　みんなの　だいじな　ポケモンの\nめんどうを　みて　おるのじゃよ\pなにか　そだてて　ほしければ\nばあさんに　たのんで　おくれ"
	.byte EOS
	.if (. - gText_Rom_257A98) != 0x52
	.error "gText_Rom_257A98 must retain its original byte length"
	.endif
