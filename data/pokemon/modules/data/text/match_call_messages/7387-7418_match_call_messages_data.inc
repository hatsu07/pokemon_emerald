
	@ src/data/text/match_call_messages.h:184 gText_MatchCallTriathlete_Isaiah_Intro2
	.globl gText_MatchCallTriathlete_Isaiah_Intro2
gText_MatchCallTriathlete_Isaiah_Intro2: @ 0x085F30CC
	.string "かいパンやろうには まけないぜ{EOS}"
	.if (. - gText_MatchCallTriathlete_Isaiah_Intro2) > 0x10
	.error "gText_MatchCallTriathlete_Isaiah_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Isaiah_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallTriathlete_Isaiah_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:186 gText_MatchCallTriathlete_Maria_Strategy
	.globl gText_MatchCallTriathlete_Maria_Strategy
gText_MatchCallTriathlete_Maria_Strategy: @ 0x085F30DC
	.string "スピード いのち!{EOS}"
	.if (. - gText_MatchCallTriathlete_Maria_Strategy) > 0xa
	.error "gText_MatchCallTriathlete_Maria_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Maria_Strategy) < 0xa
	.space 0xa - (. - gText_MatchCallTriathlete_Maria_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:187 gText_MatchCallTriathlete_Maria_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTriathlete_Maria_Pokemon
gText_MatchCallTriathlete_Maria_Pokemon: @ 0x085F30E6
	.string "すばやい ポケモンを つかう{EOS}"
	.if (. - gText_MatchCallTriathlete_Maria_Pokemon) != 0xf
	.error "gText_MatchCallTriathlete_Maria_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:188 gText_MatchCallTriathlete_Maria_Intro1
	.globl gText_MatchCallTriathlete_Maria_Intro1
gText_MatchCallTriathlete_Maria_Intro1: @ 0x085F30F5
	.string "マラソンは じぶんとの{EOS}"
	.if (. - gText_MatchCallTriathlete_Maria_Intro1) > 0xc
	.error "gText_MatchCallTriathlete_Maria_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Maria_Intro1) < 0xc
	.space 0xc - (. - gText_MatchCallTriathlete_Maria_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:189 gText_MatchCallTriathlete_Maria_Intro2
	.globl gText_MatchCallTriathlete_Maria_Intro2
gText_MatchCallTriathlete_Maria_Intro2: @ 0x085F3101
	.string "たたかい なのよ!{EOS}"
	.if (. - gText_MatchCallTriathlete_Maria_Intro2) > 0xa
	.error "gText_MatchCallTriathlete_Maria_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Maria_Intro2) < 0xa
	.space 0xa - (. - gText_MatchCallTriathlete_Maria_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:191 gText_MatchCallTriathlete_Abigail_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTriathlete_Abigail_Strategy
gText_MatchCallTriathlete_Abigail_Strategy: @ 0x085F310B
	.string "ぼうぎょを だいじに{EOS}"
	.if (. - gText_MatchCallTriathlete_Abigail_Strategy) != 0xb
	.error "gText_MatchCallTriathlete_Abigail_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:192 gText_MatchCallTriathlete_Abigail_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTriathlete_Abigail_Pokemon
gText_MatchCallTriathlete_Abigail_Pokemon: @ 0x085F3116
	.string "わたしの ポケモンは カチカチ{EOS}"
	.if (. - gText_MatchCallTriathlete_Abigail_Pokemon) != 0x10
	.error "gText_MatchCallTriathlete_Abigail_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:193 gText_MatchCallTriathlete_Abigail_Intro1
	.globl gText_MatchCallTriathlete_Abigail_Intro1
gText_MatchCallTriathlete_Abigail_Intro1: @ 0x085F3126
	.string "ダイエットの つもりだったのに{EOS}"
	.if (. - gText_MatchCallTriathlete_Abigail_Intro1) > 0x10
	.error "gText_MatchCallTriathlete_Abigail_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Abigail_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallTriathlete_Abigail_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:194 gText_MatchCallTriathlete_Abigail_Intro2
	.globl gText_MatchCallTriathlete_Abigail_Intro2
gText_MatchCallTriathlete_Abigail_Intro2: @ 0x085F3136
	.string "たのしくて のめりこんじゃった{EOS}"
	.if (. - gText_MatchCallTriathlete_Abigail_Intro2) > 0x10
	.error "gText_MatchCallTriathlete_Abigail_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Abigail_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallTriathlete_Abigail_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:196 gText_MatchCallTriathlete_Dylan_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTriathlete_Dylan_Strategy
gText_MatchCallTriathlete_Dylan_Strategy: @ 0x085F3146
	.string "あいてより さきに こうげき!{EOS}"
	.if (. - gText_MatchCallTriathlete_Dylan_Strategy) != 0x10
	.error "gText_MatchCallTriathlete_Dylan_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:197 gText_MatchCallTriathlete_Dylan_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTriathlete_Dylan_Pokemon
gText_MatchCallTriathlete_Dylan_Pokemon: @ 0x085F3156
	.string "いい はしりをする ポケモン{EOS}"
	.if (. - gText_MatchCallTriathlete_Dylan_Pokemon) != 0xf
	.error "gText_MatchCallTriathlete_Dylan_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:198 gText_MatchCallTriathlete_Dylan_Intro1
	.globl gText_MatchCallTriathlete_Dylan_Intro1
gText_MatchCallTriathlete_Dylan_Intro1: @ 0x085F3165
	.string "はしりつづけていると{EOS}"
	.if (. - gText_MatchCallTriathlete_Dylan_Intro1) > 0xb
	.error "gText_MatchCallTriathlete_Dylan_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Dylan_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallTriathlete_Dylan_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:199 gText_MatchCallTriathlete_Dylan_Intro2
	.globl gText_MatchCallTriathlete_Dylan_Intro2
gText_MatchCallTriathlete_Dylan_Intro2: @ 0x085F3170
	.string "かぜに なれるのさ……!{EOS}"
	.if (. - gText_MatchCallTriathlete_Dylan_Intro2) > 0xd
	.error "gText_MatchCallTriathlete_Dylan_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Dylan_Intro2) < 0xd
	.space 0xd - (. - gText_MatchCallTriathlete_Dylan_Intro2)
	.endif
