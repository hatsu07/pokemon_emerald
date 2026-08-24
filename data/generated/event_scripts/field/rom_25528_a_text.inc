	@ field-script:0x256295 FieldScriptText_255186
	.globl FieldScriptText_255186
FieldScriptText_255186: @ 0x08255186
	.string "わし　でんせつおやじ\nでんせつの　トレーナーの　はなし　するよ\pわしの　ハナシ　ききたい？"
	.byte EOS
	.if (. - FieldScriptText_255186) > 0x2e
	.error "FieldScriptText_255186 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_255186) < 0x2e
	.space 0x2e - (. - FieldScriptText_255186)
	.endif
	@ field-script:0x25634E FieldScriptText_2551B4
	.globl FieldScriptText_2551B4
FieldScriptText_2551B4: @ 0x082551B4
	.string "そう……\nわし　ざんねん……"
	.byte EOS
	.if (. - FieldScriptText_2551B4) > 0xf
	.error "FieldScriptText_2551B4 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2551B4) < 0xf
	.space 0xf - (. - FieldScriptText_2551B4)
	.endif
	@ field-script:0x2562B7 FieldScriptText_2551C3
	.globl FieldScriptText_2551C3
FieldScriptText_2551C3: @ 0x082551C3
	.string "わしが　しってる　でんせつは　これだけ\nどの　でんせつが　ききたい？"
	.byte EOS
	.if (. - FieldScriptText_2551C3) > 0x23
	.error "FieldScriptText_2551C3 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2551C3) < 0x23
	.space 0x23 - (. - FieldScriptText_2551C3)
	.endif
	@ field-script:0x25630F FieldScriptText_2551E6
	.globl FieldScriptText_2551E6
FieldScriptText_2551E6: @ 0x082551E6
	.string "でも　わし……\nでんせつの　トレーナーの　はなし\lなにも　しらない\pどこかに　でんせつに　のこる\nトレーナーは　いないかなあ"
	.byte EOS
	.if (. - FieldScriptText_2551E6) > 0x3f
	.error "FieldScriptText_2551E6 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2551E6) < 0x3f
	.space 0x3f - (. - FieldScriptText_2551E6)
	.endif
	@ field-script:0x256344 FieldScriptText_255225
	.globl FieldScriptText_255225
FieldScriptText_255225: @ 0x08255225
	.string "……え！！！\pきみ　{0xFD}{0x02}かい　も\n{0xFD}{0x03}　の！？\p……ううむ　それは　すごい！\nあたらしい　でんせつの　はじまりだ！"
	.byte EOS
	.if (. - FieldScriptText_255225) > 0x3a
	.error "FieldScriptText_255225 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_255225) < 0x3a
	.space 0x3a - (. - FieldScriptText_255225)
	.endif
	@ field-script:0x2562F2 FieldScriptText_25525F
	.globl FieldScriptText_25525F
FieldScriptText_25525F: @ 0x0825525F
	.string "これより　もっとすごい\nでんせつを　もってる　トレーナー\lどこかに　いない　かなあ…"
	.byte EOS
	.if (. - FieldScriptText_25525F) > 0x2b
	.error "FieldScriptText_25525F may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_25525F) < 0x2b
	.space 0x2b - (. - FieldScriptText_25525F)
	.endif
	@ field-script:0x256317 FieldScriptText_25528A
	.globl FieldScriptText_25528A
FieldScriptText_25528A: @ 0x0825528A
	.string "……きみ　トレーナー？\pだったら　なにか　でんせつっぽい　はなし\nきかせてよ"
	.byte EOS
	.if (. - FieldScriptText_25528A) > 0x27
	.error "FieldScriptText_25528A may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_25528A) < 0x27
	.space 0x27 - (. - FieldScriptText_25528A)
	.endif
	@ analyzed canonical ROM range 0x082552B1-0x082552C4
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_082552B1: @ 0x082552B1
	.string "ところで…\nまだ　でんせつ　ききたい?{EOS}"
