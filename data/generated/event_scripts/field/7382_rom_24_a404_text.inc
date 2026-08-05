	@ field-script:0x2499B4 FieldScriptText_24A404
	.globl gText_Rom_24A404
gText_Rom_24A404: @ 0x0824A404
	.string "しかい『おめでとう　ございます！\nまた　さんか　してくださいね！$"
	.if (. - gText_Rom_24A404) > 0x21
	.error "gText_Rom_24A404 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A404) < 0x21
	.space 0x21 - (. - gText_Rom_24A404)
	.endif
