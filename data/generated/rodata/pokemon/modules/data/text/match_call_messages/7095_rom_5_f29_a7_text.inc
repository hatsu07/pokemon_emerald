	@ src/data/text/match_call_messages.h:17 gText_MatchCallTuber_Lola_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F29A7
gText_Rom_5F29A7: @ 0x085F29A7
	.string "およぎが じょうずな ポケモン$"
	.if (. - gText_Rom_5F29A7) != 0x10
	.error "gText_Rom_5F29A7 must retain its original byte length"
	.endif
