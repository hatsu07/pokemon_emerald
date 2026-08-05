	@ src/strings.c:728 gText_QuitChatting
	.globl gText_Rom_5CC62B
gText_Rom_5CC62B: @ 0x085CC62B
	.string "チャットを やめますか？$"
	.if (. - gText_Rom_5CC62B) > 0xd
	.error "gText_Rom_5CC62B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC62B) < 0xd
	.space 0xd - (. - gText_Rom_5CC62B)
	.endif
	@ Decoded text from ROM range: offset=0x5CC638, size=0xE
	.string "どこに　とうろくしますか？$"
