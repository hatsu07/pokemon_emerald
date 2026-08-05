	@ src/data/text/match_call_messages.h:369 gText_MatchCallEliteFour_Sidney_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F38B6
gText_Rom_5F38B6: @ 0x085F38B6
	.string "いまじゃ りっぱな してんのう$"
	.if (. - gText_Rom_5F38B6) != 0x10
	.error "gText_Rom_5F38B6 must retain its original byte length"
	.endif
