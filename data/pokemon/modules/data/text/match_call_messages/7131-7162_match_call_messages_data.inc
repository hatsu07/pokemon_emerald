
	@ src/data/text/match_call_messages.h:37 gText_MatchCallCooltrainer_Brooke_Pokemon
	.globl gText_MatchCallCooltrainer_Brooke_Pokemon
gText_MatchCallCooltrainer_Brooke_Pokemon: @ 0x085F2A8B
	.string "バランスが いのちよ!{EOS}"
	.if (. - gText_MatchCallCooltrainer_Brooke_Pokemon) > 0xc
	.error "gText_MatchCallCooltrainer_Brooke_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCooltrainer_Brooke_Pokemon) < 0xc
	.space 0xc - (. - gText_MatchCallCooltrainer_Brooke_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:38 gText_MatchCallCooltrainer_Brooke_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallCooltrainer_Brooke_Intro1
gText_MatchCallCooltrainer_Brooke_Intro1: @ 0x085F2A97
	.string "めざすは ポケモンチャンピオン{EOS}"
	.if (. - gText_MatchCallCooltrainer_Brooke_Intro1) != 0x10
	.error "gText_MatchCallCooltrainer_Brooke_Intro1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:39 gText_MatchCallCooltrainer_Brooke_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallCooltrainer_Brooke_Intro2
gText_MatchCallCooltrainer_Brooke_Intro2: @ 0x085F2AA7
	.string "あきらめないわよ!{EOS}"
	.if (. - gText_MatchCallCooltrainer_Brooke_Intro2) != 0xa
	.error "gText_MatchCallCooltrainer_Brooke_Intro2 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:41 gText_MatchCallCooltrainer_Wilton_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallCooltrainer_Wilton_Strategy
gText_MatchCallCooltrainer_Wilton_Strategy: @ 0x085F2AB1
	.string "あいてが いやがる たたかい{EOS}"
	.if (. - gText_MatchCallCooltrainer_Wilton_Strategy) != 0xf
	.error "gText_MatchCallCooltrainer_Wilton_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:42 gText_MatchCallCooltrainer_Wilton_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallCooltrainer_Wilton_Pokemon
gText_MatchCallCooltrainer_Wilton_Pokemon: @ 0x085F2AC0
	.string "タイプに こだわらず なんでも{EOS}"
	.if (. - gText_MatchCallCooltrainer_Wilton_Pokemon) != 0x10
	.error "gText_MatchCallCooltrainer_Wilton_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:43 gText_MatchCallCooltrainer_Wilton_Intro1
	.globl gText_MatchCallCooltrainer_Wilton_Intro1
gText_MatchCallCooltrainer_Wilton_Intro1: @ 0x085F2AD0
	.string "トレーナーズ スクールの{EOS}"
	.if (. - gText_MatchCallCooltrainer_Wilton_Intro1) > 0xd
	.error "gText_MatchCallCooltrainer_Wilton_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCooltrainer_Wilton_Intro1) < 0xd
	.space 0xd - (. - gText_MatchCallCooltrainer_Wilton_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:44 gText_MatchCallCooltrainer_Wilton_Intro2
	.globl gText_MatchCallCooltrainer_Wilton_Intro2
gText_MatchCallCooltrainer_Wilton_Intro2: @ 0x085F2ADD
	.string "ゆうとうせい なんだよ{EOS}"
	.if (. - gText_MatchCallCooltrainer_Wilton_Intro2) > 0xc
	.error "gText_MatchCallCooltrainer_Wilton_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCooltrainer_Wilton_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallCooltrainer_Wilton_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:46 gText_MatchCallHexManiac_Valerie_Strategy
	.globl gText_MatchCallHexManiac_Valerie_Strategy
gText_MatchCallHexManiac_Valerie_Strategy: @ 0x085F2AE9
	.string "じわりじわりと くるしめます{EOS}"
	.if (. - gText_MatchCallHexManiac_Valerie_Strategy) > 0xf
	.error "gText_MatchCallHexManiac_Valerie_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHexManiac_Valerie_Strategy) < 0xf
	.space 0xf - (. - gText_MatchCallHexManiac_Valerie_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:47 gText_MatchCallHexManiac_Valerie_Pokemon
	.globl gText_MatchCallHexManiac_Valerie_Pokemon
gText_MatchCallHexManiac_Valerie_Pokemon: @ 0x085F2AF8
	.string "よるに であうと こわいです{EOS}"
	.if (. - gText_MatchCallHexManiac_Valerie_Pokemon) > 0xf
	.error "gText_MatchCallHexManiac_Valerie_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHexManiac_Valerie_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallHexManiac_Valerie_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:48 gText_MatchCallHexManiac_Valerie_Intro1
	.globl gText_MatchCallHexManiac_Valerie_Intro1
gText_MatchCallHexManiac_Valerie_Intro1: @ 0x085F2B07
	.string "ほかの ひとには みえない{EOS}"
	.if (. - gText_MatchCallHexManiac_Valerie_Intro1) > 0xe
	.error "gText_MatchCallHexManiac_Valerie_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHexManiac_Valerie_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallHexManiac_Valerie_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:49 gText_MatchCallHexManiac_Valerie_Intro2
	.globl gText_MatchCallHexManiac_Valerie_Intro2
gText_MatchCallHexManiac_Valerie_Intro2: @ 0x085F2B15
	.string "モノが みえてしまうの……{EOS}"
	.if (. - gText_MatchCallHexManiac_Valerie_Intro2) > 0xe
	.error "gText_MatchCallHexManiac_Valerie_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHexManiac_Valerie_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallHexManiac_Valerie_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:51 gText_MatchCallLady_Cindy_Strategy
	.globl gText_MatchCallLady_Cindy_Strategy
gText_MatchCallLady_Cindy_Strategy: @ 0x085F2B23
	.string "かてば いいのでしょう?{EOS}"
	.if (. - gText_MatchCallLady_Cindy_Strategy) > 0xd
	.error "gText_MatchCallLady_Cindy_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallLady_Cindy_Strategy) < 0xd
	.space 0xd - (. - gText_MatchCallLady_Cindy_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:52 gText_MatchCallLady_Cindy_Pokemon
	.globl gText_MatchCallLady_Cindy_Pokemon
gText_MatchCallLady_Cindy_Pokemon: @ 0x085F2B30
	.string "ゴージャスタイプよ!{EOS}"
	.if (. - gText_MatchCallLady_Cindy_Pokemon) > 0xb
	.error "gText_MatchCallLady_Cindy_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallLady_Cindy_Pokemon) < 0xb
	.space 0xb - (. - gText_MatchCallLady_Cindy_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:53 gText_MatchCallLady_Cindy_Intro1
	.globl gText_MatchCallLady_Cindy_Intro1
gText_MatchCallLady_Cindy_Intro1: @ 0x085F2B3B
	.string "いえには ポケモンせんようの{EOS}"
	.if (. - gText_MatchCallLady_Cindy_Intro1) > 0xf
	.error "gText_MatchCallLady_Cindy_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallLady_Cindy_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallLady_Cindy_Intro1)
	.endif
