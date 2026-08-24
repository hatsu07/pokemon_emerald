	@ src/strings.c:579 gText_StopGivingPkmnMail (+1 aliases)
	.globl gText_StopGivingPkmnMail
gText_StopGivingPkmnMail: @ 0x085CBA71
	.string "メールを もたせるのを やめますか?{EOS}"
	.if (. - gText_StopGivingPkmnMail) > 0x13
	.error "gText_StopGivingPkmnMail may not grow beyond its original slot"
	.endif
	.if (. - gText_StopGivingPkmnMail) < 0x13
	.space 0x13 - (. - gText_StopGivingPkmnMail)
	.endif
