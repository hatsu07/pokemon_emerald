	@ field-script:0x235B94 FieldScriptText_23652C
	.globl gText_Rom_23652C
gText_Rom_23652C: @ 0x0823652C
	.string "ありがとう　ございます！\pごじたくの　パソコンに\nおおくりして　おきますね"
	.byte EOS
	.if (. - gText_Rom_23652C) > 0x26
	.error "gText_Rom_23652C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23652C) < 0x26
	.space 0x26 - (. - gText_Rom_23652C)
	.endif
