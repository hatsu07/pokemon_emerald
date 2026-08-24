	@ src/strings.c:583 gText_BeDeletedThatOkay
	.globl gText_BeDeletedThatOkay
gText_BeDeletedThatOkay: @ 0x085CBAB6
	.string "ぜんぶ けしても いいですか?{EOS}"
	.if (. - gText_BeDeletedThatOkay) > 0x10
	.error "gText_BeDeletedThatOkay may not grow beyond its original slot"
	.endif
	.if (. - gText_BeDeletedThatOkay) < 0x10
	.space 0x10 - (. - gText_BeDeletedThatOkay)
	.endif
