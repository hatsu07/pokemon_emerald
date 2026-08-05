	@ field-script:0x2646E8 FieldScriptText_264E41
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_264E41
gText_Rom_264E41: @ 0x08264E41
	.string "ざんねん　でしたー！\pクイズ　せいかいの　しょうひんの\n{0xFD}{0x02}は\lおねえさんが　もらっちゃいまーす！$"
	.if (. - gText_Rom_264E41) != 0x32
	.error "gText_Rom_264E41 must retain its original byte length"
	.endif
