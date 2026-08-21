	.globl gText_Rom_5F30C8
	.set gText_Rom_5F30C8, gText_Rom_5F30C1 + 0x7

	@ src/data/text/match_call_messages.h:184 gText_MatchCallTriathlete_Isaiah_Intro2
	.globl gText_Rom_5F30CC
gText_Rom_5F30CC: @ 0x085F30CC
	.string "かいパンやろうには まけないぜ{EOS}"
	.if (. - gText_Rom_5F30CC) > 0x10
	.error "gText_Rom_5F30CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F30CC) < 0x10
	.space 0x10 - (. - gText_Rom_5F30CC)
	.endif

	@ src/data/text/match_call_messages.h:186 gText_MatchCallTriathlete_Maria_Strategy
	.globl gText_Rom_5F30DC
gText_Rom_5F30DC: @ 0x085F30DC
	.string "スピード いのち!{EOS}"
	.if (. - gText_Rom_5F30DC) > 0xa
	.error "gText_Rom_5F30DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F30DC) < 0xa
	.space 0xa - (. - gText_Rom_5F30DC)
	.endif

	@ src/data/text/match_call_messages.h:187 gText_MatchCallTriathlete_Maria_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F30E6
gText_Rom_5F30E6: @ 0x085F30E6
	.string "すばやい ポケモンを つかう{EOS}"
	.if (. - gText_Rom_5F30E6) != 0xf
	.error "gText_Rom_5F30E6 must retain its original byte length"
	.endif
	.globl gText_Rom_5F30F1
	.set gText_Rom_5F30F1, gText_Rom_5F30E6 + 0xb

	@ src/data/text/match_call_messages.h:188 gText_MatchCallTriathlete_Maria_Intro1
	.globl gText_Rom_5F30F5
gText_Rom_5F30F5: @ 0x085F30F5
	.string "マラソンは じぶんとの{EOS}"
	.if (. - gText_Rom_5F30F5) > 0xc
	.error "gText_Rom_5F30F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F30F5) < 0xc
	.space 0xc - (. - gText_Rom_5F30F5)
	.endif

	@ src/data/text/match_call_messages.h:189 gText_MatchCallTriathlete_Maria_Intro2
	.globl gText_Rom_5F3101
gText_Rom_5F3101: @ 0x085F3101
	.string "たたかい なのよ!{EOS}"
	.if (. - gText_Rom_5F3101) > 0xa
	.error "gText_Rom_5F3101 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3101) < 0xa
	.space 0xa - (. - gText_Rom_5F3101)
	.endif

	@ src/data/text/match_call_messages.h:191 gText_MatchCallTriathlete_Abigail_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F310B
gText_Rom_5F310B: @ 0x085F310B
	.string "ぼうぎょを だいじに{EOS}"
	.if (. - gText_Rom_5F310B) != 0xb
	.error "gText_Rom_5F310B must retain its original byte length"
	.endif
	.globl gText_Rom_5F3111
	.set gText_Rom_5F3111, gText_Rom_5F310B + 0x6

	@ src/data/text/match_call_messages.h:192 gText_MatchCallTriathlete_Abigail_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3116
gText_Rom_5F3116: @ 0x085F3116
	.string "わたしの ポケモンは カチカチ{EOS}"
	.if (. - gText_Rom_5F3116) != 0x10
	.error "gText_Rom_5F3116 must retain its original byte length"
	.endif
	.globl gText_Rom_5F3121
	.set gText_Rom_5F3121, gText_Rom_5F3116 + 0xb

	@ src/data/text/match_call_messages.h:193 gText_MatchCallTriathlete_Abigail_Intro1
	.globl gText_Rom_5F3126
gText_Rom_5F3126: @ 0x085F3126
	.string "ダイエットの つもりだったのに{EOS}"
	.if (. - gText_Rom_5F3126) > 0x10
	.error "gText_Rom_5F3126 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3126) < 0x10
	.space 0x10 - (. - gText_Rom_5F3126)
	.endif

	@ src/data/text/match_call_messages.h:194 gText_MatchCallTriathlete_Abigail_Intro2
	.globl gText_Rom_5F3136
gText_Rom_5F3136: @ 0x085F3136
	.string "たのしくて のめりこんじゃった{EOS}"
	.if (. - gText_Rom_5F3136) > 0x10
	.error "gText_Rom_5F3136 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3136) < 0x10
	.space 0x10 - (. - gText_Rom_5F3136)
	.endif

	@ src/data/text/match_call_messages.h:196 gText_MatchCallTriathlete_Dylan_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3146
gText_Rom_5F3146: @ 0x085F3146
	.string "あいてより さきに こうげき!{EOS}"
	.if (. - gText_Rom_5F3146) != 0x10
	.error "gText_Rom_5F3146 must retain its original byte length"
	.endif
	.globl gText_Rom_5F314F
	.set gText_Rom_5F314F, gText_Rom_5F3146 + 0x9

	@ src/data/text/match_call_messages.h:197 gText_MatchCallTriathlete_Dylan_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3156
gText_Rom_5F3156: @ 0x085F3156
	.string "いい はしりをする ポケモン{EOS}"
	.if (. - gText_Rom_5F3156) != 0xf
	.error "gText_Rom_5F3156 must retain its original byte length"
	.endif
	.globl gText_Rom_5F3160
	.set gText_Rom_5F3160, gText_Rom_5F3156 + 0xa

	@ src/data/text/match_call_messages.h:198 gText_MatchCallTriathlete_Dylan_Intro1
	.globl gText_Rom_5F3165
gText_Rom_5F3165: @ 0x085F3165
	.string "はしりつづけていると{EOS}"
	.if (. - gText_Rom_5F3165) > 0xb
	.error "gText_Rom_5F3165 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3165) < 0xb
	.space 0xb - (. - gText_Rom_5F3165)
	.endif

	@ src/data/text/match_call_messages.h:199 gText_MatchCallTriathlete_Dylan_Intro2
	.globl gText_Rom_5F3170
gText_Rom_5F3170: @ 0x085F3170
	.string "かぜに なれるのさ……!{EOS}"
	.if (. - gText_Rom_5F3170) > 0xd
	.error "gText_Rom_5F3170 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3170) < 0xd
	.space 0xd - (. - gText_Rom_5F3170)
	.endif
