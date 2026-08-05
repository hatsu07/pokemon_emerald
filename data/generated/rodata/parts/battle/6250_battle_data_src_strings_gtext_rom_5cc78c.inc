	@ src/strings.c:750 gText_YaySmileEmoji
	.globl gText_Rom_5CC78C
gText_Rom_5CC78C: @ 0x085CC78C
	.string "わーい{EMOJI_BIGSMILE}$"
	.if (. - gText_Rom_5CC78C) > 0x6
	.error "gText_Rom_5CC78C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC78C) < 0x6
	.space 0x6 - (. - gText_Rom_5CC78C)
	.endif
