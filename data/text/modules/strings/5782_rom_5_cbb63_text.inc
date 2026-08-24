	@ src/strings.c:593 gText_QuitGivingInfo
	.globl gText_QuitGivingInfo
gText_QuitGivingInfo: @ 0x085CBB63
	.string "ことばを おしえるのを やめますか?{EOS}"
	.if (. - gText_QuitGivingInfo) > 0x13
	.error "gText_QuitGivingInfo may not grow beyond its original slot"
	.endif
	.if (. - gText_QuitGivingInfo) < 0x13
	.space 0x13 - (. - gText_QuitGivingInfo)
	.endif
