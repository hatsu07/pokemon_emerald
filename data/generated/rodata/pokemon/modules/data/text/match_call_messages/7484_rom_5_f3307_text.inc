	@ src/data/text/match_call_messages.h:237 gText_MatchCallParasolLady_Madeline_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3307
gText_Rom_5F3307: @ 0x085F3307
	.string "なんでも そだてるわよ!$"
	.if (. - gText_Rom_5F3307) != 0xd
	.error "gText_Rom_5F3307 must retain its original byte length"
	.endif
