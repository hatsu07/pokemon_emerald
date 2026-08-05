	@ src/data/text/match_call_messages.h:354 gText_MatchCallSkyTamer_Winona_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F380B
gText_Rom_5F380B: @ 0x085F380B
	.string "くらすことが いちばん$"
	.if (. - gText_Rom_5F380B) != 0xc
	.error "gText_Rom_5F380B must retain its original byte length"
	.endif
