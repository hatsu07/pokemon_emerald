	@ field-script:0x264712 FieldScriptText_264DC7
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_264DC7
gText_Rom_264DC7: @ 0x08264DC7
	.string "クイズ　せいかい　おめでとー！\n{0xFD}{0x02}さん　からの\lごほうびが　ありまーす！$"
	.if (. - gText_Rom_264DC7) != 0x26
	.error "gText_Rom_264DC7 must retain its original byte length"
	.endif
