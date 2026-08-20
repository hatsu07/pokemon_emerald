	@ field-script:0x1EA3ED FieldScriptText_243A64
	.globl gText_Rom_243A64
gText_Rom_243A64: @ 0x08243A64
	.string "さばくの　すなあらしが　ひどくて\nさきに　すすめない！{EOS}"
	.if (. - gText_Rom_243A64) > 0x1c
	.error "gText_Rom_243A64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243A64) < 0x1c
	.space 0x1c - (. - gText_Rom_243A64)
	.endif
