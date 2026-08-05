	@ field-script:0x2490DD FieldScriptText_24AC27
	.globl gText_Rom_24AC27
gText_Rom_24AC27: @ 0x0824AC27
	.string "では　さっそく　はじめましょう！\nとうひょう　おねがいします！$"
	.if (. - gText_Rom_24AC27) > 0x20
	.error "gText_Rom_24AC27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AC27) < 0x20
	.space 0x20 - (. - gText_Rom_24AC27)
	.endif
