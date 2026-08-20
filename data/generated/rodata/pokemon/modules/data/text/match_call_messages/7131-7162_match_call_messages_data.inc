
	@ src/data/text/match_call_messages.h:37 gText_MatchCallCooltrainer_Brooke_Pokemon
	.globl gText_Rom_5F2A8B
gText_Rom_5F2A8B: @ 0x085F2A8B
	.string "バランスが いのちよ!{EOS}"
	.if (. - gText_Rom_5F2A8B) > 0xc
	.error "gText_Rom_5F2A8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A8B) < 0xc
	.space 0xc - (. - gText_Rom_5F2A8B)
	.endif

	@ src/data/text/match_call_messages.h:38 gText_MatchCallCooltrainer_Brooke_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2A97
gText_Rom_5F2A97: @ 0x085F2A97
	.string "めざすは ポケモンチャンピオン{EOS}"
	.if (. - gText_Rom_5F2A97) != 0x10
	.error "gText_Rom_5F2A97 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2AA0
	.set gText_Rom_5F2AA0, gText_Rom_5F2A97 + 0x9

	@ src/data/text/match_call_messages.h:39 gText_MatchCallCooltrainer_Brooke_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2AA7
gText_Rom_5F2AA7: @ 0x085F2AA7
	.string "あきらめないわよ!{EOS}"
	.if (. - gText_Rom_5F2AA7) != 0xa
	.error "gText_Rom_5F2AA7 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2AAD
	.set gText_Rom_5F2AAD, gText_Rom_5F2AA7 + 0x6

	@ src/data/text/match_call_messages.h:41 gText_MatchCallCooltrainer_Wilton_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2AB1
gText_Rom_5F2AB1: @ 0x085F2AB1
	.string "あいてが いやがる たたかい{EOS}"
	.if (. - gText_Rom_5F2AB1) != 0xf
	.error "gText_Rom_5F2AB1 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2ABB
	.set gText_Rom_5F2ABB, gText_Rom_5F2AB1 + 0xa
	.globl gText_Rom_5F2ABC
	.set gText_Rom_5F2ABC, gText_Rom_5F2AB1 + 0xb

	@ src/data/text/match_call_messages.h:42 gText_MatchCallCooltrainer_Wilton_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2AC0
gText_Rom_5F2AC0: @ 0x085F2AC0
	.string "タイプに こだわらず なんでも{EOS}"
	.if (. - gText_Rom_5F2AC0) != 0x10
	.error "gText_Rom_5F2AC0 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2ACB
	.set gText_Rom_5F2ACB, gText_Rom_5F2AC0 + 0xb

	@ src/data/text/match_call_messages.h:43 gText_MatchCallCooltrainer_Wilton_Intro1
	.globl gText_Rom_5F2AD0
gText_Rom_5F2AD0: @ 0x085F2AD0
	.string "トレーナーズ スクールの{EOS}"
	.if (. - gText_Rom_5F2AD0) > 0xd
	.error "gText_Rom_5F2AD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2AD0) < 0xd
	.space 0xd - (. - gText_Rom_5F2AD0)
	.endif

	@ src/data/text/match_call_messages.h:44 gText_MatchCallCooltrainer_Wilton_Intro2
	.globl gText_Rom_5F2ADD
gText_Rom_5F2ADD: @ 0x085F2ADD
	.string "ゆうとうせい なんだよ{EOS}"
	.if (. - gText_Rom_5F2ADD) > 0xc
	.error "gText_Rom_5F2ADD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2ADD) < 0xc
	.space 0xc - (. - gText_Rom_5F2ADD)
	.endif

	@ src/data/text/match_call_messages.h:46 gText_MatchCallHexManiac_Valerie_Strategy
	.globl gText_Rom_5F2AE9
gText_Rom_5F2AE9: @ 0x085F2AE9
	.string "じわりじわりと くるしめます{EOS}"
	.if (. - gText_Rom_5F2AE9) > 0xf
	.error "gText_Rom_5F2AE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2AE9) < 0xf
	.space 0xf - (. - gText_Rom_5F2AE9)
	.endif

	@ src/data/text/match_call_messages.h:47 gText_MatchCallHexManiac_Valerie_Pokemon
	.globl gText_Rom_5F2AF8
gText_Rom_5F2AF8: @ 0x085F2AF8
	.string "よるに であうと こわいです{EOS}"
	.if (. - gText_Rom_5F2AF8) > 0xf
	.error "gText_Rom_5F2AF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2AF8) < 0xf
	.space 0xf - (. - gText_Rom_5F2AF8)
	.endif

	@ src/data/text/match_call_messages.h:48 gText_MatchCallHexManiac_Valerie_Intro1
	.globl gText_Rom_5F2B07
gText_Rom_5F2B07: @ 0x085F2B07
	.string "ほかの ひとには みえない{EOS}"
	.if (. - gText_Rom_5F2B07) > 0xe
	.error "gText_Rom_5F2B07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B07) < 0xe
	.space 0xe - (. - gText_Rom_5F2B07)
	.endif

	@ src/data/text/match_call_messages.h:49 gText_MatchCallHexManiac_Valerie_Intro2
	.globl gText_Rom_5F2B15
gText_Rom_5F2B15: @ 0x085F2B15
	.string "モノが みえてしまうの……{EOS}"
	.if (. - gText_Rom_5F2B15) > 0xe
	.error "gText_Rom_5F2B15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B15) < 0xe
	.space 0xe - (. - gText_Rom_5F2B15)
	.endif

	@ src/data/text/match_call_messages.h:51 gText_MatchCallLady_Cindy_Strategy
	.globl gText_Rom_5F2B23
gText_Rom_5F2B23: @ 0x085F2B23
	.string "かてば いいのでしょう?{EOS}"
	.if (. - gText_Rom_5F2B23) > 0xd
	.error "gText_Rom_5F2B23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B23) < 0xd
	.space 0xd - (. - gText_Rom_5F2B23)
	.endif

	@ src/data/text/match_call_messages.h:52 gText_MatchCallLady_Cindy_Pokemon
	.globl gText_Rom_5F2B30
gText_Rom_5F2B30: @ 0x085F2B30
	.string "ゴージャスタイプよ!{EOS}"
	.if (. - gText_Rom_5F2B30) > 0xb
	.error "gText_Rom_5F2B30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B30) < 0xb
	.space 0xb - (. - gText_Rom_5F2B30)
	.endif

	@ src/data/text/match_call_messages.h:53 gText_MatchCallLady_Cindy_Intro1
	.globl gText_Rom_5F2B3B
gText_Rom_5F2B3B: @ 0x085F2B3B
	.string "いえには ポケモンせんようの{EOS}"
	.if (. - gText_Rom_5F2B3B) > 0xf
	.error "gText_Rom_5F2B3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B3B) < 0xf
	.space 0xf - (. - gText_Rom_5F2B3B)
	.endif
