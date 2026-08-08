	@ field-script:0x1F52EE FieldScriptText_274EED
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_274EED
gText_Rom_274EED: @ 0x08274EED
	.string "おまちしておりました！\pバトルテントに　おつれする　まえに\nレポートを　かきますので　おまちくだされ！$"
	.if (. - gText_Rom_274EED) != 0x34
	.error "gText_Rom_274EED must retain its original byte length"
	.endif
