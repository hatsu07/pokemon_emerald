	@ data/maps/Route110/scripts.inc:844 Route110_Text_WalkOnTheLowRoad
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E9B80
gText_Rom_1E9B80: @ 0x081E9B80
	.string "あたしは じてんしゃ もってない からねえ\nしたの みちを のんびり あるいて いくよ$"
	.if (. - gText_Rom_1E9B80) != 0x2c
	.error "gText_Rom_1E9B80 must retain its original byte length"
	.endif
