	@ src/strings.c:583 gText_BeDeletedThatOkay
	.globl gText_Rom_5CBAB6
gText_Rom_5CBAB6: @ 0x085CBAB6
	.string "ぜんぶ けしても いいですか?{EOS}"
	.if (. - gText_Rom_5CBAB6) > 0x10
	.error "gText_Rom_5CBAB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAB6) < 0x10
	.space 0x10 - (. - gText_Rom_5CBAB6)
	.endif
