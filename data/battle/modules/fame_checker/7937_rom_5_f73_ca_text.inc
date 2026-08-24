	@ src/fame_checker.c:517 sText_FameCheckerName_Scott (+1 aliases)
	.globl sText_FameCheckerName_Scott
sText_FameCheckerName_Scott: @ 0x085F73CA
	.string "エニシダ{EOS}"
	.if (. - sText_FameCheckerName_Scott) > 0x5
	.error "sText_FameCheckerName_Scott may not grow beyond its original slot"
	.endif
	.if (. - sText_FameCheckerName_Scott) < 0x5
	.space 0x5 - (. - sText_FameCheckerName_Scott)
	.endif
