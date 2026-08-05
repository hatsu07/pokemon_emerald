	@ src/data/text/match_call_messages.h:353 gText_MatchCallSkyTamer_Winona_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F37FC
gText_Rom_5F37FC: @ 0x085F37FC
	.string "しぜんと いったいに なって$"
	.if (. - gText_Rom_5F37FC) != 0xf
	.error "gText_Rom_5F37FC must retain its original byte length"
	.endif
