	@ field-script:0x212167 FieldScriptText_2121F9
	.globl gText_Rom_2121F9
gText_Rom_2121F9: @ 0x082121F9
	.string "ちなみに　ポケモンが　あなをほると\nどうくつの　いりぐち　まで\lいっしゅんで　もどれるんだ……{EOS}"
	.if (. - gText_Rom_2121F9) > 0x30
	.error "gText_Rom_2121F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2121F9) < 0x30
	.space 0x30 - (. - gText_Rom_2121F9)
	.endif
