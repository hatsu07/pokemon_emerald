	@ field-script:0x1EC454 FieldScriptText_1EC722
	.globl gText_Rom_1EC722
gText_Rom_1EC722: @ 0x081EC722
	.string "そだてやに　ポケモン　あずけていたの\pそしたら　あたしの　ポケモン\nいつのまにか　しらない　わざ　おぼえていて\lわたしが　とまどっちゃった！$"
	.if (. - gText_Rom_1EC722) > 0x47
	.error "gText_Rom_1EC722 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EC722) < 0x47
	.space 0x47 - (. - gText_Rom_1EC722)
	.endif
