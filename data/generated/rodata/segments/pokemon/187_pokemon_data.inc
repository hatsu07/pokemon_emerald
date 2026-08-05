	@ src/pokemon_storage_system.c:8079 pokemon_storage_system_line_8079
	.globl gText_Rom_5C93E5
gText_Rom_5C93E5: @ 0x085C93E5
	.string "あずける$"
	.if (. - gText_Rom_5C93E5) > 0x5
	.error "gText_Rom_5C93E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93E5) < 0x5
	.space 0x5 - (. - gText_Rom_5C93E5)
	.endif
	@ Decoded text from ROM range: offset=0x5C93EA, size=0x3
	.string "みる$"
	.globl gUnknown_85C93ED
gUnknown_85C93ED: @ 0x085C93ED
	@ Decoded text from ROM range: offset=0x5C93ED, size=0x8
	.string "なし$"
	.string "かいじょ$"
	.globl gUnknown_85C93F5
gUnknown_85C93F5: @ 0x085C93F5

