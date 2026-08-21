	@ src/fame_checker.c:517 sText_FameCheckerName_Scott (+1 aliases)
	.globl gText_Rom_5F73CA
gText_Rom_5F73CA: @ 0x085F73CA
	.string "エニシダ{EOS}"
	.if (. - gText_Rom_5F73CA) > 0x5
	.error "gText_Rom_5F73CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73CA) < 0x5
	.space 0x5 - (. - gText_Rom_5F73CA)
	.endif
