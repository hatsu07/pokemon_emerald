	@ src/data/text/match_call_messages.h:42 gText_MatchCallCooltrainer_Wilton_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2AC0
gText_Rom_5F2AC0: @ 0x085F2AC0
	.string "タイプに こだわらず なんでも$"
	.if (. - gText_Rom_5F2AC0) != 0x10
	.error "gText_Rom_5F2AC0 must retain its original byte length"
	.endif
