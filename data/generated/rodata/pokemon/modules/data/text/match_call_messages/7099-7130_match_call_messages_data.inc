
	@ src/data/text/match_call_messages.h:19 gText_MatchCallTuber_Lola_Intro2
	.globl gText_Rom_5F29C1
gText_Rom_5F29C1: @ 0x085F29C1
	.string "およげるように なりたいなー$"
	.if (. - gText_Rom_5F29C1) > 0xf
	.error "gText_Rom_5F29C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F29C1) < 0xf
	.space 0xf - (. - gText_Rom_5F29C1)
	.endif

	@ src/data/text/match_call_messages.h:21 gText_MatchCallTuber_Ricky_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F29D0
gText_Rom_5F29D0: @ 0x085F29D0
	.string "よく わからないけど がんばる$"
	.if (. - gText_Rom_5F29D0) != 0x10
	.error "gText_Rom_5F29D0 must retain its original byte length"
	.endif
	.globl gText_Rom_5F29DB
	.set gText_Rom_5F29DB, gText_Rom_5F29D0 + 0xb

	@ src/data/text/match_call_messages.h:22 gText_MatchCallTuber_Ricky_Pokemon
	.globl gText_Rom_5F29E0
gText_Rom_5F29E0: @ 0x085F29E0
	.string "みずポケモンは ともだち!$"
	.if (. - gText_Rom_5F29E0) > 0xe
	.error "gText_Rom_5F29E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F29E0) < 0xe
	.space 0xe - (. - gText_Rom_5F29E0)
	.endif

	@ src/data/text/match_call_messages.h:23 gText_MatchCallTuber_Ricky_Intro1
	.globl gText_Rom_5F29EE
gText_Rom_5F29EE: @ 0x085F29EE
	.string "およげない わけじゃ ないよ!$"
	.if (. - gText_Rom_5F29EE) > 0x10
	.error "gText_Rom_5F29EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F29EE) < 0x10
	.space 0x10 - (. - gText_Rom_5F29EE)
	.endif

	@ src/data/text/match_call_messages.h:24 gText_MatchCallTuber_Ricky_Intro2
	.globl gText_Rom_5F29FE
gText_Rom_5F29FE: @ 0x085F29FE
	.string "うきわが すき なんだよ!$"
	.if (. - gText_Rom_5F29FE) > 0xe
	.error "gText_Rom_5F29FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F29FE) < 0xe
	.space 0xe - (. - gText_Rom_5F29FE)
	.endif

	@ src/data/text/match_call_messages.h:26 gText_MatchCallSisAndBro_LilaAndRoy_Strategy
	.globl gText_Rom_5F2A0C
gText_Rom_5F2A0C: @ 0x085F2A0C
	.string "やくわり ぶんたん してるわ$"
	.if (. - gText_Rom_5F2A0C) > 0xf
	.error "gText_Rom_5F2A0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A0C) < 0xf
	.space 0xf - (. - gText_Rom_5F2A0C)
	.endif

	@ src/data/text/match_call_messages.h:27 gText_MatchCallSisAndBro_LilaAndRoy_Pokemon
	.globl gText_Rom_5F2A1B
gText_Rom_5F2A1B: @ 0x085F2A1B
	.string "なかの いい ポケモンよ!$"
	.if (. - gText_Rom_5F2A1B) > 0xe
	.error "gText_Rom_5F2A1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A1B) < 0xe
	.space 0xe - (. - gText_Rom_5F2A1B)
	.endif

	@ src/data/text/match_call_messages.h:28 gText_MatchCallSisAndBro_LilaAndRoy_Intro1
	.globl gText_Rom_5F2A29
gText_Rom_5F2A29: @ 0x085F2A29
	.string "きょうだい なかよく$"
	.if (. - gText_Rom_5F2A29) > 0xb
	.error "gText_Rom_5F2A29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A29) < 0xb
	.space 0xb - (. - gText_Rom_5F2A29)
	.endif

	@ src/data/text/match_call_messages.h:29 gText_MatchCallSisAndBro_LilaAndRoy_Intro2
	.globl gText_Rom_5F2A34
gText_Rom_5F2A34: @ 0x085F2A34
	.string "ポケモン たのしく ねっ!$"
	.if (. - gText_Rom_5F2A34) > 0xe
	.error "gText_Rom_5F2A34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A34) < 0xe
	.space 0xe - (. - gText_Rom_5F2A34)
	.endif

	@ src/data/text/match_call_messages.h:31 gText_MatchCallCooltrainer_Cristin_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2A42
gText_Rom_5F2A42: @ 0x085F2A42
	.string "おおわざで しとめるわよ!$"
	.if (. - gText_Rom_5F2A42) != 0xe
	.error "gText_Rom_5F2A42 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2A4C
	.set gText_Rom_5F2A4C, gText_Rom_5F2A42 + 0xa

	@ src/data/text/match_call_messages.h:32 gText_MatchCallCooltrainer_Cristin_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2A50
gText_Rom_5F2A50: @ 0x085F2A50
	.string "いろんな ポケモンで しょうぶ$"
	.if (. - gText_Rom_5F2A50) != 0x10
	.error "gText_Rom_5F2A50 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2A5B
	.set gText_Rom_5F2A5B, gText_Rom_5F2A50 + 0xb

	@ src/data/text/match_call_messages.h:33 gText_MatchCallCooltrainer_Cristin_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2A60
gText_Rom_5F2A60: @ 0x085F2A60
	.string "さいきょうの ポケモン$"
	.if (. - gText_Rom_5F2A60) != 0xc
	.error "gText_Rom_5F2A60 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2A67
	.set gText_Rom_5F2A67, gText_Rom_5F2A60 + 0x7

	@ src/data/text/match_call_messages.h:34 gText_MatchCallCooltrainer_Cristin_Intro2
	.globl gText_Rom_5F2A6C
gText_Rom_5F2A6C: @ 0x085F2A6C
	.string "トレーナーを めざしてるの!$"
	.if (. - gText_Rom_5F2A6C) > 0xf
	.error "gText_Rom_5F2A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A6C) < 0xf
	.space 0xf - (. - gText_Rom_5F2A6C)
	.endif

	@ src/data/text/match_call_messages.h:36 gText_MatchCallCooltrainer_Brooke_Strategy
	.globl gText_Rom_5F2A7B
gText_Rom_5F2A7B: @ 0x085F2A7B
	.string "あいての じゃくてんを せめる$"
	.if (. - gText_Rom_5F2A7B) > 0x10
	.error "gText_Rom_5F2A7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A7B) < 0x10
	.space 0x10 - (. - gText_Rom_5F2A7B)
	.endif
