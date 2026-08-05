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
