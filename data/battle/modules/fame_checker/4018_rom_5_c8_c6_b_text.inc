	@ src/fame_checker.c:502 sText_FameCheckerName_Birch (+1 aliases)
	.globl sText_FameCheckerName_Birch
sText_FameCheckerName_Birch: @ 0x085C8C6B
	.string "オダマキ{EOS}"
	.if (. - sText_FameCheckerName_Birch) > 0x5
	.error "sText_FameCheckerName_Birch may not grow beyond its original slot"
	.endif
	.if (. - sText_FameCheckerName_Birch) < 0x5
	.space 0x5 - (. - sText_FameCheckerName_Birch)
	.endif
