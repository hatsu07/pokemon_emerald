	@ src/data/text/match_call_messages.h:166 gText_MatchCallExpert_Shelby_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3008
gText_Rom_5F3008: @ 0x085F3008
	.string "ぼうぎょ しつつ こうげき!$"
	.if (. - gText_Rom_5F3008) != 0xf
	.error "gText_Rom_5F3008 must retain its original byte length"
	.endif
