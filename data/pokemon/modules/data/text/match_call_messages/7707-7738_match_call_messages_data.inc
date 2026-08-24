	@ src/data/text/match_call_messages.h:364 gText_MatchCallDandyCharm_Juan_Intro2
	.globl gText_MatchCallDandyCharm_Juan_Intro2
gText_MatchCallDandyCharm_Juan_Intro2: @ 0x085F387F
	.string "わたくしの パワーの みなもと{EOS}"
	.if (. - gText_MatchCallDandyCharm_Juan_Intro2) > 0x10
	.error "gText_MatchCallDandyCharm_Juan_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallDandyCharm_Juan_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallDandyCharm_Juan_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:366 gText_MatchCallEliteFour_Sidney_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallEliteFour_Sidney_Strategy
gText_MatchCallEliteFour_Sidney_Strategy: @ 0x085F388F
	.string "ぼうぎょ よりも こうげき!{EOS}"
	.if (. - gText_MatchCallEliteFour_Sidney_Strategy) != 0xf
	.error "gText_MatchCallEliteFour_Sidney_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:367 gText_MatchCallEliteFour_Sidney_Pokemon
	.globl gText_MatchCallEliteFour_Sidney_Pokemon
gText_MatchCallEliteFour_Sidney_Pokemon: @ 0x085F389E
	.string "あくの びがく!{EOS}"
	.if (. - gText_MatchCallEliteFour_Sidney_Pokemon) > 0x9
	.error "gText_MatchCallEliteFour_Sidney_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Sidney_Pokemon) < 0x9
	.space 0x9 - (. - gText_MatchCallEliteFour_Sidney_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:368 gText_MatchCallEliteFour_Sidney_Intro1
	.globl gText_MatchCallEliteFour_Sidney_Intro1
gText_MatchCallEliteFour_Sidney_Intro1: @ 0x085F38A7
	.string "ふりょうと いわれた オレも{EOS}"
	.if (. - gText_MatchCallEliteFour_Sidney_Intro1) > 0xf
	.error "gText_MatchCallEliteFour_Sidney_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Sidney_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallEliteFour_Sidney_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:369 gText_MatchCallEliteFour_Sidney_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallEliteFour_Sidney_Intro2
gText_MatchCallEliteFour_Sidney_Intro2: @ 0x085F38B6
	.string "いまじゃ りっぱな してんのう{EOS}"
	.if (. - gText_MatchCallEliteFour_Sidney_Intro2) != 0x10
	.error "gText_MatchCallEliteFour_Sidney_Intro2 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:371 gText_MatchCallEliteFour_Phoebe_Strategy
	.globl gText_MatchCallEliteFour_Phoebe_Strategy
gText_MatchCallEliteFour_Phoebe_Strategy: @ 0x085F38C6
	.string "あいてを まどわせて たたかう{EOS}"
	.if (. - gText_MatchCallEliteFour_Phoebe_Strategy) > 0x10
	.error "gText_MatchCallEliteFour_Phoebe_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Phoebe_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallEliteFour_Phoebe_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:372 gText_MatchCallEliteFour_Phoebe_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallEliteFour_Phoebe_Pokemon
gText_MatchCallEliteFour_Phoebe_Pokemon: @ 0x085F38D6
	.string "つかみどころ ありません{EOS}"
	.if (. - gText_MatchCallEliteFour_Phoebe_Pokemon) != 0xd
	.error "gText_MatchCallEliteFour_Phoebe_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:373 gText_MatchCallEliteFour_Phoebe_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallEliteFour_Phoebe_Intro1
gText_MatchCallEliteFour_Phoebe_Intro1: @ 0x085F38E3
	.string "おくりびやまの おばあちゃん{EOS}"
	.if (. - gText_MatchCallEliteFour_Phoebe_Intro1) != 0xf
	.error "gText_MatchCallEliteFour_Phoebe_Intro1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:374 gText_MatchCallEliteFour_Phoebe_Intro2
	.globl gText_MatchCallEliteFour_Phoebe_Intro2
gText_MatchCallEliteFour_Phoebe_Intro2: @ 0x085F38F2
	.string "げんきに している かしら?{EOS}"
	.if (. - gText_MatchCallEliteFour_Phoebe_Intro2) > 0xf
	.error "gText_MatchCallEliteFour_Phoebe_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Phoebe_Intro2) < 0xf
	.space 0xf - (. - gText_MatchCallEliteFour_Phoebe_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:376 gText_MatchCallEliteFour_Glacia_Strategy
	.globl gText_MatchCallEliteFour_Glacia_Strategy
gText_MatchCallEliteFour_Glacia_Strategy: @ 0x085F3901
	.string "どうぐを くしして たたかう{EOS}"
	.if (. - gText_MatchCallEliteFour_Glacia_Strategy) > 0xf
	.error "gText_MatchCallEliteFour_Glacia_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Glacia_Strategy) < 0xf
	.space 0xf - (. - gText_MatchCallEliteFour_Glacia_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:377 gText_MatchCallEliteFour_Glacia_Pokemon
	.globl gText_MatchCallEliteFour_Glacia_Pokemon
gText_MatchCallEliteFour_Glacia_Pokemon: @ 0x085F3910
	.string "ひょうてんかの じょうねつ!{EOS}"
	.if (. - gText_MatchCallEliteFour_Glacia_Pokemon) > 0xf
	.error "gText_MatchCallEliteFour_Glacia_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Glacia_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallEliteFour_Glacia_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:378 gText_MatchCallEliteFour_Glacia_Intro1
	.globl gText_MatchCallEliteFour_Glacia_Intro1
gText_MatchCallEliteFour_Glacia_Intro1: @ 0x085F391F
	.string "あたたかい とち だからこそ{EOS}"
	.if (. - gText_MatchCallEliteFour_Glacia_Intro1) > 0xf
	.error "gText_MatchCallEliteFour_Glacia_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Glacia_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallEliteFour_Glacia_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:379 gText_MatchCallEliteFour_Glacia_Intro2
	.globl gText_MatchCallEliteFour_Glacia_Intro2
gText_MatchCallEliteFour_Glacia_Intro2: @ 0x085F392E
	.string "こおりタイプが きたえられる!{EOS}"
	.if (. - gText_MatchCallEliteFour_Glacia_Intro2) > 0x10
	.error "gText_MatchCallEliteFour_Glacia_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Glacia_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallEliteFour_Glacia_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:381 gText_MatchCallEliteFour_Drake_Strategy
	.globl gText_MatchCallEliteFour_Drake_Strategy
gText_MatchCallEliteFour_Drake_Strategy: @ 0x085F393E
	.string "たかい のうりょくで せめる!{EOS}"
	.if (. - gText_MatchCallEliteFour_Drake_Strategy) > 0x10
	.error "gText_MatchCallEliteFour_Drake_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Drake_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallEliteFour_Drake_Strategy)
	.endif

