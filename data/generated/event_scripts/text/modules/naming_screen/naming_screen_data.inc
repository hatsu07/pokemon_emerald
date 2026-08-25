	@ field-script:0x24346F FieldScriptText_243D82
	.globl FieldScriptText_243D82
FieldScriptText_243D82: @ 0x08243D82
	.string "{0xFD}{0x01}は\n{0xFD}{0x02}を　わたした！{EOS}"
	.if (. - FieldScriptText_243D82) > 0xe
	.error "FieldScriptText_243D82 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_243D82) < 0xe
	.space 0xe - (. - FieldScriptText_243D82)
	.endif
	@ field-script:0x24681A FieldScriptText_243D90
	.globl FieldScriptText_243D90
FieldScriptText_243D90: @ 0x08243D90
	.string "ふしぎな　おくりものを　ごりよう\nいただき　ありがとう　ございます！{EOS}"
	.if (. - FieldScriptText_243D90) > 0x23
	.error "FieldScriptText_243D90 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_243D90) < 0x23
	.space 0x23 - (. - FieldScriptText_243D90)
	.endif
	@ field-script:0x242D28 FieldScriptText_243DB3
	.globl FieldScriptText_243DB3
FieldScriptText_243DB3: @ 0x08243DB3
	.string "{0xFD}{0x01}は　{0xFD}{0x02}\n「{0xFD}{0x03}」を　みつけた！{EOS}"
	.if (. - FieldScriptText_243DB3) > 0x13
	.error "FieldScriptText_243DB3 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_243DB3) < 0x13
	.space 0x13 - (. - FieldScriptText_243DB3)
	.endif
	@ field-script:0x222AAF FieldScriptText_243DC6
	.globl FieldScriptText_243DC6
FieldScriptText_243DC6: @ 0x08243DC6
	.string "おかしな　きは\nホエルコじょうろを　いやがっている！\pおかしな　きが　おそいかかってきた！{EOS}"
	.if (. - FieldScriptText_243DC6) > 0x2e
	.error "FieldScriptText_243DC6 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_243DC6) < 0x2e
	.space 0x2e - (. - FieldScriptText_243DC6)
	.endif
	@ field-script:0x21C002 FieldScriptText_243DF4
	.globl FieldScriptText_243DF4
FieldScriptText_243DF4: @ 0x08243DF4
	.string "{0xFD}{0x02}は\nどこかへ　とびさって　いった！{EOS}"
	.if (. - FieldScriptText_243DF4) > 0x14
	.error "FieldScriptText_243DF4 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_243DF4) < 0x14
	.space 0x14 - (. - FieldScriptText_243DF4)
	.endif
	@ asm/naming_screen.s:1055 DisplaySentToPCMessage (+1 aliases)
	.globl gText_Rom_243E08
gText_Rom_243E08: @ 0x08243E08
	.string "{0xFD}{0x03}は　だれかのパソコンの\nボックス『{0xFD}{0x02}』に\lてんそう　された！{EOS}"
	.if (. - gText_Rom_243E08) > 0x22
	.error "gText_Rom_243E08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243E08) < 0x22
	.space 0x22 - (. - gText_Rom_243E08)
	.endif

	@ asm/naming_screen.s:1055 DisplaySentToPCMessage (+1 aliases)
	.globl gText_Rom_243E2A
gText_Rom_243E2A: @ 0x08243E2A
	.string "{0xFD}{0x03}は　マユミのパソコンの\nボックス『{0xFD}{0x02}』に\lてんそう　された！{EOS}"
	.if (. - gText_Rom_243E2A) > 0x22
	.error "gText_Rom_243E2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243E2A) < 0x22
	.space 0x22 - (. - gText_Rom_243E2A)
	.endif

	@ asm/naming_screen.s:1055 DisplaySentToPCMessage (+1 aliases)
	.globl gText_Rom_243E4C
gText_Rom_243E4C: @ 0x08243E4C
	.string "だれかのパソコンの\nボックス『{0xFD}{0x04}』が\lいっぱいだ！！\p{0xFD}{0x03}は\nボックス『{0xFD}{0x02}』に\lてんそう　された！{EOS}"
	.if (. - gText_Rom_243E4C) > 0x34
	.error "gText_Rom_243E4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243E4C) < 0x34
	.space 0x34 - (. - gText_Rom_243E4C)
	.endif

	@ asm/naming_screen.s:1055 DisplaySentToPCMessage (+1 aliases)
	.globl gText_Rom_243E80
gText_Rom_243E80: @ 0x08243E80
	.string "マユミのパソコンの\nボックス『{0xFD}{0x04}』が\lいっぱいだ！！\p{0xFD}{0x03}は\nボックス『{0xFD}{0x02}』に\lてんそう　された！{EOS}"
	.if (. - gText_Rom_243E80) > 0x34
	.error "gText_Rom_243E80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243E80) < 0x34
	.space 0x34 - (. - gText_Rom_243E80)
	.endif
