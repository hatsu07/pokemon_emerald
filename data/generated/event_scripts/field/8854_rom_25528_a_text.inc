	@ field-script:0x256295 FieldScriptText_255186
	.globl gText_Rom_255186
gText_Rom_255186: @ 0x08255186
	.string "わし　でんせつおやじ\nでんせつの　トレーナーの　はなし　するよ\pわしの　ハナシ　ききたい？"
	.byte EOS
	.if (. - gText_Rom_255186) > 0x2e
	.error "gText_Rom_255186 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255186) < 0x2e
	.space 0x2e - (. - gText_Rom_255186)
	.endif
	@ field-script:0x25634E FieldScriptText_2551B4
	.globl gText_Rom_2551B4
gText_Rom_2551B4: @ 0x082551B4
	.string "そう……\nわし　ざんねん……"
	.byte EOS
	.if (. - gText_Rom_2551B4) > 0xf
	.error "gText_Rom_2551B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2551B4) < 0xf
	.space 0xf - (. - gText_Rom_2551B4)
	.endif
	@ field-script:0x2562B7 FieldScriptText_2551C3
	.globl gText_Rom_2551C3
gText_Rom_2551C3: @ 0x082551C3
	.string "わしが　しってる　でんせつは　これだけ\nどの　でんせつが　ききたい？"
	.byte EOS
	.if (. - gText_Rom_2551C3) > 0x23
	.error "gText_Rom_2551C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2551C3) < 0x23
	.space 0x23 - (. - gText_Rom_2551C3)
	.endif
	@ field-script:0x25630F FieldScriptText_2551E6
	.globl gText_Rom_2551E6
gText_Rom_2551E6: @ 0x082551E6
	.string "でも　わし……\nでんせつの　トレーナーの　はなし\lなにも　しらない\pどこかに　でんせつに　のこる\nトレーナーは　いないかなあ"
	.byte EOS
	.if (. - gText_Rom_2551E6) > 0x3f
	.error "gText_Rom_2551E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2551E6) < 0x3f
	.space 0x3f - (. - gText_Rom_2551E6)
	.endif
	@ field-script:0x256344 FieldScriptText_255225
	.globl gText_Rom_255225
gText_Rom_255225: @ 0x08255225
	.string "……え！！！\pきみ　{0xFD}{0x02}かい　も\n{0xFD}{0x03}　の！？\p……ううむ　それは　すごい！\nあたらしい　でんせつの　はじまりだ！"
	.byte EOS
	.if (. - gText_Rom_255225) > 0x3a
	.error "gText_Rom_255225 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255225) < 0x3a
	.space 0x3a - (. - gText_Rom_255225)
	.endif
	@ field-script:0x2562F2 FieldScriptText_25525F
	.globl gText_Rom_25525F
gText_Rom_25525F: @ 0x0825525F
	.string "これより　もっとすごい\nでんせつを　もってる　トレーナー\lどこかに　いない　かなあ…"
	.byte EOS
	.if (. - gText_Rom_25525F) > 0x2b
	.error "gText_Rom_25525F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25525F) < 0x2b
	.space 0x2b - (. - gText_Rom_25525F)
	.endif
	@ field-script:0x256317 FieldScriptText_25528A
	.globl gText_Rom_25528A
gText_Rom_25528A: @ 0x0825528A
	.string "……きみ　トレーナー？\pだったら　なにか　でんせつっぽい　はなし\nきかせてよ"
	.byte EOS
	.if (. - gText_Rom_25528A) > 0x27
	.error "gText_Rom_25528A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25528A) < 0x27
	.space 0x27 - (. - gText_Rom_25528A)
	.endif
	@ analyzed canonical ROM range 0x082552B1-0x082552C4
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_082552B1: @ 0x082552B1
	.string "ところで…\nまだ　でんせつ　ききたい?{EOS}"
