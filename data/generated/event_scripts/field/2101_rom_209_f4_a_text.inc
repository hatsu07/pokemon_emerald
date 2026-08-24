	@ field-script:0x209D7E FieldScriptText_209E63
	.globl gText_Rom_209E63
gText_Rom_209E63: @ 0x08209E63
	.string "えーと……\nそうじゃ　わし　わすれじいさん\pポケモンの　わざを\nわすれさせる　ことが　できるんじゃ！\pわざを　わすれ　させるかね？{EOS}"
	.if (. - gText_Rom_209E63) > 0x42
	.error "gText_Rom_209E63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209E63) < 0x42
	.space 0x42 - (. - gText_Rom_209E63)
	.endif
	@ field-script:0x209DA3 FieldScriptText_209EA5
	.globl gText_Rom_209EA5
gText_Rom_209EA5: @ 0x08209EA5
	.string "どの　ポケモンに　するんじゃ？{EOS}"
	.if (. - gText_Rom_209EA5) > 0x10
	.error "gText_Rom_209EA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209EA5) < 0x10
	.space 0x10 - (. - gText_Rom_209EA5)
	.endif
	@ field-script:0x209DD6 FieldScriptText_209EB5
	.globl gText_Rom_209EB5
gText_Rom_209EB5: @ 0x08209EB5
	.string "どの　わざを\nわすれ　させるんじゃ？{EOS}"
	.if (. - gText_Rom_209EB5) > 0x13
	.error "gText_Rom_209EB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209EB5) < 0x13
	.space 0x13 - (. - gText_Rom_209EB5)
	.endif
	@ field-script:0x209E3A FieldScriptText_209EC8
	.globl gText_Rom_209EC8
gText_Rom_209EC8: @ 0x08209EC8
	.string "{0xFD}{0x02}は　わざを　1つしか\nもってない　ようじゃ……{EOS}"
	.if (. - gText_Rom_209EC8) > 0x1a
	.error "gText_Rom_209EC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209EC8) < 0x1a
	.space 0x1a - (. - gText_Rom_209EC8)
	.endif
	@ field-script:0x209DF3 FieldScriptText_209EE2
	.globl gText_Rom_209EE2
gText_Rom_209EE2: @ 0x08209EE2
	.string "むむ！\n{0xFD}{0x02}の　{0xFD}{0x03}じゃな？{EOS}"
	.if (. - gText_Rom_209EE2) > 0xf
	.error "gText_Rom_209EE2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209EE2) < 0xf
	.space 0xf - (. - gText_Rom_209EE2)
	.endif
	@ field-script:0x209E2D FieldScriptText_209EF1
	.globl gText_Rom_209EF1
gText_Rom_209EF1: @ 0x08209EF1
	.string "だいせいこう　じゃ！\p{0xFD}{0x02}は　{0xFD}{0x03}を\nわすれた　ようじゃ！{EOS}"
	.if (. - gText_Rom_209EF1) > 0x1e
	.error "gText_Rom_209EF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209EF1) < 0x1e
	.space 0x1e - (. - gText_Rom_209EF1)
	.endif
	@ field-script:0x209E4E FieldScriptText_209F0F
	.globl gText_Rom_209F0F
gText_Rom_209F0F: @ 0x08209F0F
	.string "わすれさせたい　わざが　あったら\nまた　くるのじゃぞ！{EOS}"
	.if (. - gText_Rom_209F0F) > 0x1c
	.error "gText_Rom_209F0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209F0F) < 0x1c
	.space 0x1c - (. - gText_Rom_209F0F)
	.endif
	@ field-script:0x209E44 FieldScriptText_209F2B
	.globl gText_Rom_209F2B
gText_Rom_209F2B: @ 0x08209F2B
	.string "なぬ！？　タマゴは\nわざを　おぼえていない　ようじゃが……？{EOS}"
	.if (. - gText_Rom_209F2B) > 0x1f
	.error "gText_Rom_209F2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209F2B) < 0x1f
	.space 0x1f - (. - gText_Rom_209F2B)
	.endif
	@ field-script:0x209E5B FieldScriptText_209F4A
	.globl gText_Rom_209F4A
gText_Rom_209F4A: @ 0x08209F4A
	.string "むむ！\p{0xFD}{0x02}は　なみのりを\nわすれたくない　ようじゃ！{EOS}"
	.if (. - gText_Rom_209F4A) > 0x1c
	.error "gText_Rom_209F4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209F4A) < 0x1c
	.space 0x1c - (. - gText_Rom_209F4A)
	.endif
	@ analyzed canonical ROM range 0x08209F66-0x08209F82
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08209F66: @ 0x08209F66
	.byte 0x00
.globl EventScript_JP_08209F67
EventScript_JP_08209F67: @ 0x08209F67
	loadword 0x00, gText_Rom_209F83
	callstd 0x02
	end
.globl EventScript_JP_08209F70
EventScript_JP_08209F70: @ 0x08209F70
	lock
	faceplayer
	waitse
	playmoncry 0x013D, 0x0000
	loadword 0x00, gText_Rom_209FCF
	callstd 0x04
	waitmoncry
	release
	end
