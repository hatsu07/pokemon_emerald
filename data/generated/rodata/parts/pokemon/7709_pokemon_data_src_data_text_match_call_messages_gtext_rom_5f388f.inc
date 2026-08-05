	@ src/data/text/match_call_messages.h:366 gText_MatchCallEliteFour_Sidney_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F388F
gText_Rom_5F388F: @ 0x085F388F
	.string "ぼうぎょ よりも こうげき!$"
	.if (. - gText_Rom_5F388F) != 0xf
	.error "gText_Rom_5F388F must retain its original byte length"
	.endif
