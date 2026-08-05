	@ src/strings.c:695 gText_BattleDome (+1 aliases)
	.globl gText_Rom_5CCBAF
gText_Rom_5CCBAF: @ 0x085CCBAF
	.string "バトルドーム$"
	.if (. - gText_Rom_5CCBAF) > 0x7
	.error "gText_Rom_5CCBAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBAF) < 0x7
	.space 0x7 - (. - gText_Rom_5CCBAF)
	.endif
