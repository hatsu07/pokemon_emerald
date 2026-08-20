	@ src/data/text/match_call_messages.h:364 gText_MatchCallDandyCharm_Juan_Intro2
	.globl gText_Rom_5F387F
gText_Rom_5F387F: @ 0x085F387F
	.string "わたくしの パワーの みなもと{EOS}"
	.if (. - gText_Rom_5F387F) > 0x10
	.error "gText_Rom_5F387F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F387F) < 0x10
	.space 0x10 - (. - gText_Rom_5F387F)
	.endif

	@ src/data/text/match_call_messages.h:366 gText_MatchCallEliteFour_Sidney_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F388F
gText_Rom_5F388F: @ 0x085F388F
	.string "ぼうぎょ よりも こうげき!{EOS}"
	.if (. - gText_Rom_5F388F) != 0xf
	.error "gText_Rom_5F388F must retain its original byte length"
	.endif
	.globl gText_Rom_5F3897
	.set gText_Rom_5F3897, gText_Rom_5F388F + 0x8

	@ src/data/text/match_call_messages.h:367 gText_MatchCallEliteFour_Sidney_Pokemon
	.globl gText_Rom_5F389E
gText_Rom_5F389E: @ 0x085F389E
	.string "あくの びがく!{EOS}"
	.if (. - gText_Rom_5F389E) > 0x9
	.error "gText_Rom_5F389E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F389E) < 0x9
	.space 0x9 - (. - gText_Rom_5F389E)
	.endif

	@ src/data/text/match_call_messages.h:368 gText_MatchCallEliteFour_Sidney_Intro1
	.globl gText_Rom_5F38A7
gText_Rom_5F38A7: @ 0x085F38A7
	.string "ふりょうと いわれた オレも{EOS}"
	.if (. - gText_Rom_5F38A7) > 0xf
	.error "gText_Rom_5F38A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F38A7) < 0xf
	.space 0xf - (. - gText_Rom_5F38A7)
	.endif

	@ src/data/text/match_call_messages.h:369 gText_MatchCallEliteFour_Sidney_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F38B6
gText_Rom_5F38B6: @ 0x085F38B6
	.string "いまじゃ りっぱな してんのう{EOS}"
	.if (. - gText_Rom_5F38B6) != 0x10
	.error "gText_Rom_5F38B6 must retain its original byte length"
	.endif
	.globl gText_Rom_5F38C0
	.set gText_Rom_5F38C0, gText_Rom_5F38B6 + 0xa

	@ src/data/text/match_call_messages.h:371 gText_MatchCallEliteFour_Phoebe_Strategy
	.globl gText_Rom_5F38C6
gText_Rom_5F38C6: @ 0x085F38C6
	.string "あいてを まどわせて たたかう{EOS}"
	.if (. - gText_Rom_5F38C6) > 0x10
	.error "gText_Rom_5F38C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F38C6) < 0x10
	.space 0x10 - (. - gText_Rom_5F38C6)
	.endif

	@ src/data/text/match_call_messages.h:372 gText_MatchCallEliteFour_Phoebe_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F38D6
gText_Rom_5F38D6: @ 0x085F38D6
	.string "つかみどころ ありません{EOS}"
	.if (. - gText_Rom_5F38D6) != 0xd
	.error "gText_Rom_5F38D6 must retain its original byte length"
	.endif
	.globl gText_Rom_5F38DF
	.set gText_Rom_5F38DF, gText_Rom_5F38D6 + 0x9

	@ src/data/text/match_call_messages.h:373 gText_MatchCallEliteFour_Phoebe_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F38E3
gText_Rom_5F38E3: @ 0x085F38E3
	.string "おくりびやまの おばあちゃん{EOS}"
	.if (. - gText_Rom_5F38E3) != 0xf
	.error "gText_Rom_5F38E3 must retain its original byte length"
	.endif
	.globl gText_Rom_5F38EE
	.set gText_Rom_5F38EE, gText_Rom_5F38E3 + 0xb

	@ src/data/text/match_call_messages.h:374 gText_MatchCallEliteFour_Phoebe_Intro2
	.globl gText_Rom_5F38F2
gText_Rom_5F38F2: @ 0x085F38F2
	.string "げんきに している かしら?{EOS}"
	.if (. - gText_Rom_5F38F2) > 0xf
	.error "gText_Rom_5F38F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F38F2) < 0xf
	.space 0xf - (. - gText_Rom_5F38F2)
	.endif

	@ src/data/text/match_call_messages.h:376 gText_MatchCallEliteFour_Glacia_Strategy
	.globl gText_Rom_5F3901
gText_Rom_5F3901: @ 0x085F3901
	.string "どうぐを くしして たたかう{EOS}"
	.if (. - gText_Rom_5F3901) > 0xf
	.error "gText_Rom_5F3901 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3901) < 0xf
	.space 0xf - (. - gText_Rom_5F3901)
	.endif

	@ src/data/text/match_call_messages.h:377 gText_MatchCallEliteFour_Glacia_Pokemon
	.globl gText_Rom_5F3910
gText_Rom_5F3910: @ 0x085F3910
	.string "ひょうてんかの じょうねつ!{EOS}"
	.if (. - gText_Rom_5F3910) > 0xf
	.error "gText_Rom_5F3910 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3910) < 0xf
	.space 0xf - (. - gText_Rom_5F3910)
	.endif

	@ src/data/text/match_call_messages.h:378 gText_MatchCallEliteFour_Glacia_Intro1
	.globl gText_Rom_5F391F
gText_Rom_5F391F: @ 0x085F391F
	.string "あたたかい とち だからこそ{EOS}"
	.if (. - gText_Rom_5F391F) > 0xf
	.error "gText_Rom_5F391F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F391F) < 0xf
	.space 0xf - (. - gText_Rom_5F391F)
	.endif

	@ src/data/text/match_call_messages.h:379 gText_MatchCallEliteFour_Glacia_Intro2
	.globl gText_Rom_5F392E
gText_Rom_5F392E: @ 0x085F392E
	.string "こおりタイプが きたえられる!{EOS}"
	.if (. - gText_Rom_5F392E) > 0x10
	.error "gText_Rom_5F392E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F392E) < 0x10
	.space 0x10 - (. - gText_Rom_5F392E)
	.endif

	@ src/data/text/match_call_messages.h:381 gText_MatchCallEliteFour_Drake_Strategy
	.globl gText_Rom_5F393E
gText_Rom_5F393E: @ 0x085F393E
	.string "たかい のうりょくで せめる!{EOS}"
	.if (. - gText_Rom_5F393E) > 0x10
	.error "gText_Rom_5F393E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F393E) < 0x10
	.space 0x10 - (. - gText_Rom_5F393E)
	.endif

