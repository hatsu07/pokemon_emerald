	@ src/strings.c:847 gText_AwesomeWonF701F700
	.globl gText_Rom_5CCE36
gText_Rom_5CCE36: @ 0x085CCE36
	.string "せいせきが よかったので\n{DYNAMIC 0}を {DYNAMIC 1}こ プレゼント!$"
	.if (. - gText_Rom_5CCE36) > 0x1c
	.error "gText_Rom_5CCE36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCE36) < 0x1c
	.space 0x1c - (. - gText_Rom_5CCE36)
	.endif
