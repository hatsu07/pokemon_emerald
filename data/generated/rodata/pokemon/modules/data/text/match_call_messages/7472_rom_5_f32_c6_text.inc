	@ src/data/text/match_call_messages.h:231 gText_MatchCallBattleGirl_Cyndy_Strategy
	.globl gText_Rom_5F32C6
gText_Rom_5F32C6: @ 0x085F32C6
	.string "せんてひっしょうよ!$"
	.if (. - gText_Rom_5F32C6) > 0xb
	.error "gText_Rom_5F32C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F32C6) < 0xb
	.space 0xb - (. - gText_Rom_5F32C6)
	.endif
