	@ src/data/text/match_call_messages.h:96 gText_MatchCallGuitarist_Dalton_Strategy
	.globl gText_Rom_5F2CF1
gText_Rom_5F2CF1: @ 0x085F2CF1
	.string "ビリビリ しびれさせるゼ!$"
	.if (. - gText_Rom_5F2CF1) > 0xe
	.error "gText_Rom_5F2CF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CF1) < 0xe
	.space 0xe - (. - gText_Rom_5F2CF1)
	.endif
