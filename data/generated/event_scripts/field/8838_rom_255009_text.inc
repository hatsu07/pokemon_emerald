	@ field-script:0x25515C FieldScriptText_255009
	.globl gText_Rom_255009
gText_Rom_255009: @ 0x08255009
	.string "じゃあ　こうかん！\lきみの　パソコンに\nグッズを　おくっておくよ"
	.byte EOS
	.if (. - gText_Rom_255009) > 0x21
	.error "gText_Rom_255009 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255009) < 0x21
	.space 0x21 - (. - gText_Rom_255009)
	.endif
