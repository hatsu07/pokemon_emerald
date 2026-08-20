	@ field-script:0x245CB4 FieldScriptText_246782
	.globl gText_Rom_246782
gText_Rom_246782: @ 0x08246782
	.string "ひみつきちは　ひとつしか　つくれません！\p{0xFD}{0x02}　にある\nひみつきちを　ひっこし　しますか？{EOS}"
	.if (. - gText_Rom_246782) > 0x2e
	.error "gText_Rom_246782 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_246782) < 0x2e
	.space 0x2e - (. - gText_Rom_246782)
	.endif
