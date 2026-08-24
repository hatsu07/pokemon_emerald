	.globl gText_MoveRelearnerAppeal

	@ src/data/easy_chat/easy_chat_group_events.h:1 gEasyChatWord_Appeal (+3 aliases)
	.globl gText_MoveRelearnerAppeal
gText_MoveRelearnerAppeal: @ 0x085F7C75
	.string "アピール{EOS}"
	.if (. - gText_MoveRelearnerAppeal) > 0x5
	.error "gText_MoveRelearnerAppeal may not grow beyond its original slot"
	.endif
	.if (. - gText_MoveRelearnerAppeal) < 0x5
	.space 0x5 - (. - gText_MoveRelearnerAppeal)
	.endif
	.globl gText_MoveRelearnerJam

	@ src/strings.c:381 gText_Jam (+1 aliases)
	.globl gText_MoveRelearnerJam
gText_MoveRelearnerJam: @ 0x085F7C7A
	.string "ぼうがい{EOS}"
	.if (. - gText_MoveRelearnerJam) > 0x5
	.error "gText_MoveRelearnerJam may not grow beyond its original slot"
	.endif
	.if (. - gText_MoveRelearnerJam) < 0x5
	.space 0x5 - (. - gText_MoveRelearnerJam)
	.endif
	.space 0x1, 0x00
