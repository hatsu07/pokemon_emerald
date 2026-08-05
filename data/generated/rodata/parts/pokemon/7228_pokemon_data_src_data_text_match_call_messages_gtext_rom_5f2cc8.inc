	@ src/data/text/match_call_messages.h:92 gText_MatchCallGuitarist_Fernando_Pokemon
	.globl gText_Rom_5F2CC8
gText_Rom_5F2CC8: @ 0x085F2CC8
	.string "でんきと おとの コンビだゼ!$"
	.if (. - gText_Rom_5F2CC8) > 0x10
	.error "gText_Rom_5F2CC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CC8) < 0x10
	.space 0x10 - (. - gText_Rom_5F2CC8)
	.endif
