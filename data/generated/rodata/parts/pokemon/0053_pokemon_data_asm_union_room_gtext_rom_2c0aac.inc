	@ asm/union_room.s:5578 sub_08014DFC
	.globl gText_Rom_2C0AAC
gText_Rom_2C0AAC: @ 0x082C0AAC
	.string "ジョイスポットとの　せつぞくに\nせいこう　しました！$"
	.if (. - gText_Rom_2C0AAC) > 0x1b
	.error "gText_Rom_2C0AAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0AAC) < 0x1b
	.space 0x1b - (. - gText_Rom_2C0AAC)
	.endif
	.space 0x1, 0x00
