	@ field-script:0x211B44 FieldScriptText_211C70
	.globl gText_Rom_211C70
gText_Rom_211C70: @ 0x08211C70
	.string "わたしたちは　ポケモンでの　しょうぶに\nじょうねつを　そそいで　います！{EOS}"
	.if (. - gText_Rom_211C70) > 0x25
	.error "gText_Rom_211C70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211C70) < 0x25
	.space 0x25 - (. - gText_Rom_211C70)
	.endif
