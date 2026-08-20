	@ field-script:0x207033 FieldScriptText_24AA8A
	.globl gText_Rom_24AA8A
gText_Rom_24AA8A: @ 0x0824AA8A
	.string "グローバルモードでは\nモードを　えらぶことが　できない\l4にんせんようの　うけつけから\lさんかする　ともだち　とも\lつうしんコンテストが　おこなえます！\pこの　モードでは\nつうしんケーブルを　つないだ\lともだちが　4にん　あつまらないと\lコンテストが　おこなえません！{EOS}"
	.if (. - gText_Rom_24AA8A) > 0x87
	.error "gText_Rom_24AA8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AA8A) < 0x87
	.space 0x87 - (. - gText_Rom_24AA8A)
	.endif
