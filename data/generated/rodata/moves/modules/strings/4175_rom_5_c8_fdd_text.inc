	@ src/strings.c:59 gText_SizeComparedTo
	.globl gText_Rom_5C8FDD
gText_Rom_5C8FDD: @ 0x085C8FDD
	.string "の おおきさくらべ$"
	.if (. - gText_Rom_5C8FDD) > 0xa
	.error "gText_Rom_5C8FDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8FDD) < 0xa
	.space 0xa - (. - gText_Rom_5C8FDD)
	.endif
