	@ field-script:0x258F3C FieldScriptText_258921
	.globl gText_Rom_258921
gText_Rom_258921: @ 0x08258921
	.string "……と　おもったら\nポロックケースが　いっぱいの　ようだね\pポロックを　へらしてから\nまた　きてね"
	.byte EOS
	.if (. - gText_Rom_258921) > 0x32
	.error "gText_Rom_258921 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258921) < 0x32
	.space 0x32 - (. - gText_Rom_258921)
	.endif
