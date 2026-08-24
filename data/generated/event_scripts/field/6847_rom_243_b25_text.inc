	@ field-script:0x242EF8 FieldScriptText_2439D6
	.globl gText_Rom_2439D6
gText_Rom_2439D6: @ 0x082439D6
	.string "べんりなどうぐ　いろいろ　あります\n「フレンドリィショップ」{EOS}"
	.if (. - gText_Rom_2439D6) > 0x1f
	.error "gText_Rom_2439D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2439D6) < 0x1f
	.space 0x1f - (. - gText_Rom_2439D6)
	.endif
	@ field-script:0x242F01 FieldScriptText_2439F5
	.globl gText_Rom_2439F5
gText_Rom_2439F5: @ 0x082439F5
	.string "つかれた　ポケモンも　ひとやすみ！\n「ポケモンセンター」{EOS}"
	.if (. - gText_Rom_2439F5) > 0x1d
	.error "gText_Rom_2439F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2439F5) < 0x1d
	.space 0x1d - (. - gText_Rom_2439F5)
	.endif
	@ field-script:0x24C4FF FieldScriptText_243A12
	.globl gText_Rom_243A12
gText_Rom_243A12: @ 0x08243A12
	.string "{0xFD}{0x02}が　すきそうな　ばんぐみをやってる！\n…………………………………………………\pさきを　いそがなきゃ！{EOS}"
	.if (. - gText_Rom_243A12) > 0x35
	.error "gText_Rom_243A12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243A12) < 0x35
	.space 0x35 - (. - gText_Rom_243A12)
	.endif
	@ field-script:0x20B1A6 FieldScriptText_243A47
	.globl gText_Rom_243A47
gText_Rom_243A47: @ 0x08243A47
	.string "ミナモ　デパートへ　ようこそ！\pなんかいへ　いきますか？{EOS}"
	.if (. - gText_Rom_243A47) > 0x1d
	.error "gText_Rom_243A47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243A47) < 0x1d
	.space 0x1d - (. - gText_Rom_243A47)
	.endif
	@ field-script:0x1EA3ED FieldScriptText_243A64
	.globl gText_Rom_243A64
gText_Rom_243A64: @ 0x08243A64
	.string "さばくの　すなあらしが　ひどくて\nさきに　すすめない！{EOS}"
	.if (. - gText_Rom_243A64) > 0x1c
	.error "gText_Rom_243A64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243A64) < 0x1c
	.space 0x1c - (. - gText_Rom_243A64)
	.endif
	@ field-script:0x2440DF FieldScriptText_243A80
	.globl gText_Rom_243A80
gText_Rom_243A80: @ 0x08243A80
	.string "バッグに　いれてある　どうぐを\nべんりボタンに　とうろく　できます{EOS}"
	.if (. - gText_Rom_243A80) > 0x22
	.error "gText_Rom_243A80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243A80) < 0x22
	.space 0x22 - (. - gText_Rom_243A80)
	.endif
	@ field-script:0x1F01FD FieldScriptText_243AA2
	.globl gText_Rom_243AA2
gText_Rom_243AA2: @ 0x08243AA2
	.string "パソコンに\nポケモン　トレーナー　こうざの\lメールが　きている！\p……　……　……\pポケモンが　おぼえられる　わざは　4つ！\pどんな　わざを　おぼえさせるかで\nトレーナーの　じつりょくが　とわれます！\p……　……　……{EOS}"
	.if (. - gText_Rom_243AA2) > 0x6e
	.error "gText_Rom_243AA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243AA2) < 0x6e
	.space 0x6e - (. - gText_Rom_243AA2)
	.endif
	@ field-script:0x1F01E2 FieldScriptText_243B10
	.globl gText_Rom_243B10
gText_Rom_243B10: @ 0x08243B10
	.string "{0xFD}{0x01}は　パソコンの\nスイッチを　いれた！{EOS}"
	.if (. - gText_Rom_243B10) > 0x15
	.error "gText_Rom_243B10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243B10) < 0x15
	.space 0x15 - (. - gText_Rom_243B10)
	.endif
	@ field-script:0x2592C5 FieldScriptText_243B25
	.globl gText_Rom_243B25
gText_Rom_243B25: @ 0x08243B25
	.string "つうしんは　キャンセルされました{EOS}"
	.if (. - gText_Rom_243B25) > 0x11
	.error "gText_Rom_243B25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243B25) < 0x11
	.space 0x11 - (. - gText_Rom_243B25)
	.endif
	@ Embedded ROM bytes: file offset 0x243B36, size 0x18
	.byte 0x23, 0x27, 0x50, 0x10, 0x00, 0xFD, 0x03, 0x16, 0xFE, 0x66, 0xA0, 0x58, 0x68, 0xAE, 0x71, 0x2D
	.byte 0x00, 0x12, 0x09, 0x1F, 0x0D, 0x06, 0xAC, 0xFF
