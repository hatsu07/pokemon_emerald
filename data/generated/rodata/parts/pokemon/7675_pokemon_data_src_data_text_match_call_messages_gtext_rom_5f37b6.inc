	@ src/data/text/match_call_messages.h:347 gText_MatchCallReliableOne_Dad_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F37B6
gText_Rom_5F37B6: @ 0x085F37B6
	.string "バランスよく そだてている$"
	.if (. - gText_Rom_5F37B6) != 0xe
	.error "gText_Rom_5F37B6 must retain its original byte length"
	.endif
