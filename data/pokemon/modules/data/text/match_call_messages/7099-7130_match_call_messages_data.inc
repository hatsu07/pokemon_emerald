
	@ src/data/text/match_call_messages.h:19 gText_MatchCallTuber_Lola_Intro2
	.globl gText_MatchCallTuber_Lola_Intro2
gText_MatchCallTuber_Lola_Intro2: @ 0x085F29C1
	.string "およげるように なりたいなー{EOS}"
	.if (. - gText_MatchCallTuber_Lola_Intro2) > 0xf
	.error "gText_MatchCallTuber_Lola_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTuber_Lola_Intro2) < 0xf
	.space 0xf - (. - gText_MatchCallTuber_Lola_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:21 gText_MatchCallTuber_Ricky_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTuber_Ricky_Strategy
gText_MatchCallTuber_Ricky_Strategy: @ 0x085F29D0
	.string "よく わからないけど がんばる{EOS}"
	.if (. - gText_MatchCallTuber_Ricky_Strategy) != 0x10
	.error "gText_MatchCallTuber_Ricky_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:22 gText_MatchCallTuber_Ricky_Pokemon
	.globl gText_MatchCallTuber_Ricky_Pokemon
gText_MatchCallTuber_Ricky_Pokemon: @ 0x085F29E0
	.string "みずポケモンは ともだち!{EOS}"
	.if (. - gText_MatchCallTuber_Ricky_Pokemon) > 0xe
	.error "gText_MatchCallTuber_Ricky_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTuber_Ricky_Pokemon) < 0xe
	.space 0xe - (. - gText_MatchCallTuber_Ricky_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:23 gText_MatchCallTuber_Ricky_Intro1
	.globl gText_MatchCallTuber_Ricky_Intro1
gText_MatchCallTuber_Ricky_Intro1: @ 0x085F29EE
	.string "およげない わけじゃ ないよ!{EOS}"
	.if (. - gText_MatchCallTuber_Ricky_Intro1) > 0x10
	.error "gText_MatchCallTuber_Ricky_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTuber_Ricky_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallTuber_Ricky_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:24 gText_MatchCallTuber_Ricky_Intro2
	.globl gText_MatchCallTuber_Ricky_Intro2
gText_MatchCallTuber_Ricky_Intro2: @ 0x085F29FE
	.string "うきわが すき なんだよ!{EOS}"
	.if (. - gText_MatchCallTuber_Ricky_Intro2) > 0xe
	.error "gText_MatchCallTuber_Ricky_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTuber_Ricky_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallTuber_Ricky_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:26 gText_MatchCallSisAndBro_LilaAndRoy_Strategy
	.globl gText_MatchCallSisAndBro_LilaAndRoy_Strategy
gText_MatchCallSisAndBro_LilaAndRoy_Strategy: @ 0x085F2A0C
	.string "やくわり ぶんたん してるわ{EOS}"
	.if (. - gText_MatchCallSisAndBro_LilaAndRoy_Strategy) > 0xf
	.error "gText_MatchCallSisAndBro_LilaAndRoy_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSisAndBro_LilaAndRoy_Strategy) < 0xf
	.space 0xf - (. - gText_MatchCallSisAndBro_LilaAndRoy_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:27 gText_MatchCallSisAndBro_LilaAndRoy_Pokemon
	.globl gText_MatchCallSisAndBro_LilaAndRoy_Pokemon
gText_MatchCallSisAndBro_LilaAndRoy_Pokemon: @ 0x085F2A1B
	.string "なかの いい ポケモンよ!{EOS}"
	.if (. - gText_MatchCallSisAndBro_LilaAndRoy_Pokemon) > 0xe
	.error "gText_MatchCallSisAndBro_LilaAndRoy_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSisAndBro_LilaAndRoy_Pokemon) < 0xe
	.space 0xe - (. - gText_MatchCallSisAndBro_LilaAndRoy_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:28 gText_MatchCallSisAndBro_LilaAndRoy_Intro1
	.globl gText_MatchCallSisAndBro_LilaAndRoy_Intro1
gText_MatchCallSisAndBro_LilaAndRoy_Intro1: @ 0x085F2A29
	.string "きょうだい なかよく{EOS}"
	.if (. - gText_MatchCallSisAndBro_LilaAndRoy_Intro1) > 0xb
	.error "gText_MatchCallSisAndBro_LilaAndRoy_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSisAndBro_LilaAndRoy_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallSisAndBro_LilaAndRoy_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:29 gText_MatchCallSisAndBro_LilaAndRoy_Intro2
	.globl gText_MatchCallSisAndBro_LilaAndRoy_Intro2
gText_MatchCallSisAndBro_LilaAndRoy_Intro2: @ 0x085F2A34
	.string "ポケモン たのしく ねっ!{EOS}"
	.if (. - gText_MatchCallSisAndBro_LilaAndRoy_Intro2) > 0xe
	.error "gText_MatchCallSisAndBro_LilaAndRoy_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSisAndBro_LilaAndRoy_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallSisAndBro_LilaAndRoy_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:31 gText_MatchCallCooltrainer_Cristin_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallCooltrainer_Cristin_Strategy
gText_MatchCallCooltrainer_Cristin_Strategy: @ 0x085F2A42
	.string "おおわざで しとめるわよ!{EOS}"
	.if (. - gText_MatchCallCooltrainer_Cristin_Strategy) != 0xe
	.error "gText_MatchCallCooltrainer_Cristin_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:32 gText_MatchCallCooltrainer_Cristin_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallCooltrainer_Cristin_Pokemon
gText_MatchCallCooltrainer_Cristin_Pokemon: @ 0x085F2A50
	.string "いろんな ポケモンで しょうぶ{EOS}"
	.if (. - gText_MatchCallCooltrainer_Cristin_Pokemon) != 0x10
	.error "gText_MatchCallCooltrainer_Cristin_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:33 gText_MatchCallCooltrainer_Cristin_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallCooltrainer_Cristin_Intro1
gText_MatchCallCooltrainer_Cristin_Intro1: @ 0x085F2A60
	.string "さいきょうの ポケモン{EOS}"
	.if (. - gText_MatchCallCooltrainer_Cristin_Intro1) != 0xc
	.error "gText_MatchCallCooltrainer_Cristin_Intro1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:34 gText_MatchCallCooltrainer_Cristin_Intro2
	.globl gText_MatchCallCooltrainer_Cristin_Intro2
gText_MatchCallCooltrainer_Cristin_Intro2: @ 0x085F2A6C
	.string "トレーナーを めざしてるの!{EOS}"
	.if (. - gText_MatchCallCooltrainer_Cristin_Intro2) > 0xf
	.error "gText_MatchCallCooltrainer_Cristin_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCooltrainer_Cristin_Intro2) < 0xf
	.space 0xf - (. - gText_MatchCallCooltrainer_Cristin_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:36 gText_MatchCallCooltrainer_Brooke_Strategy
	.globl gText_MatchCallCooltrainer_Brooke_Strategy
gText_MatchCallCooltrainer_Brooke_Strategy: @ 0x085F2A7B
	.string "あいての じゃくてんを せめる{EOS}"
	.if (. - gText_MatchCallCooltrainer_Brooke_Strategy) > 0x10
	.error "gText_MatchCallCooltrainer_Brooke_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCooltrainer_Brooke_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallCooltrainer_Brooke_Strategy)
	.endif
