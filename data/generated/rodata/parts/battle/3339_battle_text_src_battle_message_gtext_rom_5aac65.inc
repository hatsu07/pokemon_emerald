	@ src/battle_message.c:416 battle_message_line_416
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAC65
gText_Rom_5AAC65: @ 0x085AAC65
	.string "しかし\nわざの のこりポイントが なかった!$"
	.if (. - gText_Rom_5AAC65) != 0x17
	.error "gText_Rom_5AAC65 must retain its original byte length"
	.endif
