	@ src/strings.c:1098 gText_WonderNewsThrownAway
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2B37
gText_Rom_2C2B37: @ 0x082C2B37
	.string " ニュースを すてました$"
	.if (. - gText_Rom_2C2B37) != 0xd
	.error "gText_Rom_2C2B37 must retain its original byte length"
	.endif
