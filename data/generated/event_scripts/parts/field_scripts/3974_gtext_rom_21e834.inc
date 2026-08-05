	@ field-script:0x21E5CB FieldScriptText_21E834
	.globl gText_Rom_21E834
gText_Rom_21E834: @ 0x0821E834
	.string "パパに　たのんで　ボク　せんようの\nヨットを　かってもらおうかな？\lポケモンと　いっしょに　のれる　ヨット！"
	.byte EOS
	.if (. - gText_Rom_21E834) > 0x37
	.error "gText_Rom_21E834 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E834) < 0x37
	.space 0x37 - (. - gText_Rom_21E834)
	.endif
