	@ src/strings.c:413 gText_OkayToDeleteFromRegistry
	.globl gText_Rom_5CA658
gText_Rom_5CA658: @ 0x085CA658
	.string "{STR_VAR_1} の とうろくを\nかいじょ しても よろしい ですか?$"
	.if (. - gText_Rom_5CA658) > 0x1e
	.error "gText_Rom_5CA658 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA658) < 0x1e
	.space 0x1e - (. - gText_Rom_5CA658)
	.endif
