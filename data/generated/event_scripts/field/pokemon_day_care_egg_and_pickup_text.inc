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
	@ field-script:0x25779F FieldScriptText_257B57
	.globl FieldScriptText_257B57
FieldScriptText_257B57: @ 0x08257B57
	.string "おお　あんたか！　よくきたな\n{0xFD}{0x02}は　げんきじゃぞ"
	.byte EOS
	.if (. - FieldScriptText_257B57) > 0x1a
	.error "FieldScriptText_257B57 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257B57) < 0x1a
	.space 0x1a - (. - FieldScriptText_257B57)
	.endif
	@ field-script:0x25773E FieldScriptText_257B71
	.globl FieldScriptText_257B71
FieldScriptText_257B71: @ 0x08257B71
	.string "それじゃ　わしが　もらおう\nありがとよ"
	.byte EOS
	.if (. - FieldScriptText_257B71) > 0x14
	.error "FieldScriptText_257B71 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257B71) < 0x14
	.space 0x14 - (. - FieldScriptText_257B71)
	.endif
	@ field-script:0x25775E FieldScriptText_257B85
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_257B85
FieldScriptText_257B85: @ 0x08257B85
	.string "てもちが　いっぱいの　ようじゃな…\nてもちを　せいりしてから　またきなさい"
	.byte EOS
	.if (. - FieldScriptText_257B85) != 0x26
	.error "FieldScriptText_257B85 must retain its original byte length"
	.endif
	@ field-script:0x257767 FieldScriptText_257BAB
	.globl FieldScriptText_257BAB
FieldScriptText_257BAB: @ 0x08257BAB
	.string "{0xFD}{0x01}は　そだてや　じいさんから\nタマゴを　もらった！"
	.byte EOS
	.if (. - FieldScriptText_257BAB) > 0x1b
	.error "FieldScriptText_257BAB may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257BAB) < 0x1b
	.space 0x1b - (. - FieldScriptText_257BAB)
	.endif
	@ field-script:0x257772 FieldScriptText_257BC6
	.globl FieldScriptText_257BC6
FieldScriptText_257BC6: @ 0x08257BC6
	.string "だいじにそだてなさいよ！"
	.byte EOS
	.if (. - FieldScriptText_257BC6) > 0xd
	.error "FieldScriptText_257BC6 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257BC6) < 0xd
	.space 0xd - (. - FieldScriptText_257BC6)
	.endif
	@ field-script:0x257793 FieldScriptText_257BD3
	.globl FieldScriptText_257BD3
FieldScriptText_257BD3: @ 0x08257BD3
	.string "ところで　あんたの　{0xFD}{0x02}じゃが\pなんか　{0xFD}{0x03}とこの　{0xFD}{0x04}と\nなかよく　あそんで　おったぞ\pしかも　なにやら　メールを\nもらっておった　ようじゃ"
	.byte EOS
	.if (. - FieldScriptText_257BD3) > 0x48
	.error "FieldScriptText_257BD3 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257BD3) < 0x48
	.space 0x48 - (. - FieldScriptText_257BD3)
	.endif
	@ analyzed canonical ROM range 0x08257C1B-0x08257C34
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x9F, 0x59, 0x73, 0x7E, 0x2D, 0x00, 0x1B, 0x07, 0x14, 0x28, 0x10, 0x02, 0x00, 0x14, 0x07, 0x1A
	.byte 0xFE, 0x46, 0x0B, 0x2E, 0x16, 0x00, 0x02, 0x50, 0x13, 0x00
