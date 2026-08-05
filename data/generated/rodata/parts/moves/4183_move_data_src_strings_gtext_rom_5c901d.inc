	@ src/strings.c:65 gText_NoMatchingPkmnWereFound
	.globl gText_Rom_5C901D
gText_Rom_5C901D: @ 0x085C901D
	.string "がいとう する ポケモンは いませんでした……$"
	.if (. - gText_Rom_5C901D) > 0x18
	.error "gText_Rom_5C901D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C901D) < 0x18
	.space 0x18 - (. - gText_Rom_5C901D)
	.endif
