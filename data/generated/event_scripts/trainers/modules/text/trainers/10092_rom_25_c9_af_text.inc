	@ data/text/trainers.inc:1253 Route113_Text_CobyDefeat (+1 aliases)
	.globl gText_Rom_25C9AF
gText_Rom_25C9AF: @ 0x0825C9AF
	.string "え あれ?{EOS}"
	.if (. - gText_Rom_25C9AF) > 0x6
	.error "gText_Rom_25C9AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C9AF) < 0x6
	.space 0x6 - (. - gText_Rom_25C9AF)
	.endif
