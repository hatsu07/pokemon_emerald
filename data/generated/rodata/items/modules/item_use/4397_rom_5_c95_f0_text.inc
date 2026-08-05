	@ src/item_use.c:92 sText_CoinCase
	.globl gText_Rom_5C95F0
gText_Rom_5C95F0: @ 0x085C95F0
	.string "あなたの コイン\n{STR_VAR_1}まい{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C95F0) > 0x10
	.error "gText_Rom_5C95F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C95F0) < 0x10
	.space 0x10 - (. - gText_Rom_5C95F0)
	.endif
