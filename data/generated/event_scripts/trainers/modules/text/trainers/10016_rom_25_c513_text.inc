	@ data/text/trainers.inc:1142 Route112_Text_BryantDefeat (+1 aliases)
	.globl gText_Rom_25C513
gText_Rom_25C513: @ 0x0825C513
	.string "おお ボコボコだ$"
	.if (. - gText_Rom_25C513) > 0x9
	.error "gText_Rom_25C513 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C513) < 0x9
	.space 0x9 - (. - gText_Rom_25C513)
	.endif
