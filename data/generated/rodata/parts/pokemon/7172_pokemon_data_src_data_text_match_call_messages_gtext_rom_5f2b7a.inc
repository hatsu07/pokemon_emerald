	@ src/data/text/match_call_messages.h:59 gText_MatchCallBeauty_Thalia_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2B7A
gText_Rom_5F2B7A: @ 0x085F2B7A
	.string "せかい いっしゅう してみたい$"
	.if (. - gText_Rom_5F2B7A) != 0x10
	.error "gText_Rom_5F2B7A must retain its original byte length"
	.endif
