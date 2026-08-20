	@ src/data/text/match_call_messages.h:147 gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon
	.globl gText_Rom_5F2F34
gText_Rom_5F2F34: @ 0x085F2F34
	.string "ふたりが すきな ポケモン!{EOS}"
	.if (. - gText_Rom_5F2F34) > 0xf
	.error "gText_Rom_5F2F34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F34) < 0xf
	.space 0xf - (. - gText_Rom_5F2F34)
	.endif

	@ src/data/text/match_call_messages.h:148 gText_MatchCallSrAndJr_AnnaAndMeg_Intro1
	.globl gText_Rom_5F2F43
gText_Rom_5F2F43: @ 0x085F2F43
	.string "わたしたち ポケモンクラブの{EOS}"
	.if (. - gText_Rom_5F2F43) > 0xf
	.error "gText_Rom_5F2F43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F43) < 0xf
	.space 0xf - (. - gText_Rom_5F2F43)
	.endif

	@ src/data/text/match_call_messages.h:149 gText_MatchCallSrAndJr_AnnaAndMeg_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2F52
gText_Rom_5F2F52: @ 0x085F2F52
	.string "センパイと コウハイでーす!{EOS}"
	.if (. - gText_Rom_5F2F52) != 0xf
	.error "gText_Rom_5F2F52 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2F5C
	.set gText_Rom_5F2F5C, gText_Rom_5F2F52 + 0xa

	@ src/data/text/match_call_messages.h:151 gText_MatchCallPokefan_Isabel_Strategy
	.globl gText_Rom_5F2F61
gText_Rom_5F2F61: @ 0x085F2F61
	.string "がんばれ ポケモンちゃん!{EOS}"
	.if (. - gText_Rom_5F2F61) > 0xe
	.error "gText_Rom_5F2F61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F61) < 0xe
	.space 0xe - (. - gText_Rom_5F2F61)
	.endif

	@ src/data/text/match_call_messages.h:152 gText_MatchCallPokefan_Isabel_Pokemon
	.globl gText_Rom_5F2F6F
gText_Rom_5F2F6F: @ 0x085F2F6F
	.string "すき きらいは なしよ{EOS}"
	.if (. - gText_Rom_5F2F6F) > 0xc
	.error "gText_Rom_5F2F6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F6F) < 0xc
	.space 0xc - (. - gText_Rom_5F2F6F)
	.endif

	@ src/data/text/match_call_messages.h:153 gText_MatchCallPokefan_Isabel_Intro1
	.globl gText_Rom_5F2F7B
gText_Rom_5F2F7B: @ 0x085F2F7B
	.string "ゆうはんの かいもの ついでに{EOS}"
	.if (. - gText_Rom_5F2F7B) > 0x10
	.error "gText_Rom_5F2F7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F7B) < 0x10
	.space 0x10 - (. - gText_Rom_5F2F7B)
	.endif

	@ src/data/text/match_call_messages.h:154 gText_MatchCallPokefan_Isabel_Intro2
	.globl gText_Rom_5F2F8B
gText_Rom_5F2F8B: @ 0x085F2F8B
	.string "ひとしょうぶ してますの{EOS}"
	.if (. - gText_Rom_5F2F8B) > 0xd
	.error "gText_Rom_5F2F8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F8B) < 0xd
	.space 0xd - (. - gText_Rom_5F2F8B)
	.endif

	@ src/data/text/match_call_messages.h:156 gText_MatchCallPokefan_Miguel_Strategy
	.globl gText_Rom_5F2F98
gText_Rom_5F2F98: @ 0x085F2F98
	.string "あいじょうで しょうぶ!{EOS}"
	.if (. - gText_Rom_5F2F98) > 0xd
	.error "gText_Rom_5F2F98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F98) < 0xd
	.space 0xd - (. - gText_Rom_5F2F98)
	.endif

	@ src/data/text/match_call_messages.h:157 gText_MatchCallPokefan_Miguel_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2FA5
gText_Rom_5F2FA5: @ 0x085F2FA5
	.string "あいを そそいだ ポケモン{EOS}"
	.if (. - gText_Rom_5F2FA5) != 0xe
	.error "gText_Rom_5F2FA5 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2FAE
	.set gText_Rom_5F2FAE, gText_Rom_5F2FA5 + 0x9

	@ src/data/text/match_call_messages.h:158 gText_MatchCallPokefan_Miguel_Intro1
	.globl gText_Rom_5F2FB3
gText_Rom_5F2FB3: @ 0x085F2FB3
	.string "ポケモンと しんらいかんけいを{EOS}"
	.if (. - gText_Rom_5F2FB3) > 0x10
	.error "gText_Rom_5F2FB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2FB3) < 0x10
	.space 0x10 - (. - gText_Rom_5F2FB3)
	.endif

	@ src/data/text/match_call_messages.h:159 gText_MatchCallPokefan_Miguel_Intro2
	.globl gText_Rom_5F2FC3
gText_Rom_5F2FC3: @ 0x085F2FC3
	.string "きずく ことが だいじだよ!{EOS}"
	.if (. - gText_Rom_5F2FC3) > 0xf
	.error "gText_Rom_5F2FC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2FC3) < 0xf
	.space 0xf - (. - gText_Rom_5F2FC3)
	.endif

	@ src/data/text/match_call_messages.h:161 gText_MatchCallExpert_Timothy_Strategy
	.globl gText_Rom_5F2FD2
gText_Rom_5F2FD2: @ 0x085F2FD2
	.string "おぬしの こうげきは みきった{EOS}"
	.if (. - gText_Rom_5F2FD2) > 0x10
	.error "gText_Rom_5F2FD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2FD2) < 0x10
	.space 0x10 - (. - gText_Rom_5F2FD2)
	.endif

	@ src/data/text/match_call_messages.h:162 gText_MatchCallExpert_Timothy_Pokemon
	.globl gText_Rom_5F2FE2
gText_Rom_5F2FE2: @ 0x085F2FE2
	.string "かくとうの おうぎを みよ! {EOS}"
	.if (. - gText_Rom_5F2FE2) > 0x10
	.error "gText_Rom_5F2FE2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2FE2) < 0x10
	.space 0x10 - (. - gText_Rom_5F2FE2)
	.endif

	@ src/data/text/match_call_messages.h:163 gText_MatchCallExpert_Timothy_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2FF2
gText_Rom_5F2FF2: @ 0x085F2FF2
	.string "わかいもんには まだまだ{EOS}"
	.if (. - gText_Rom_5F2FF2) != 0xd
	.error "gText_Rom_5F2FF2 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2FFA
	.set gText_Rom_5F2FFA, gText_Rom_5F2FF2 + 0x8

	@ src/data/text/match_call_messages.h:164 gText_MatchCallExpert_Timothy_Intro2
	.globl gText_Rom_5F2FFF
gText_Rom_5F2FFF: @ 0x085F2FFF
	.string "まけてられんわ!{EOS}"
	.if (. - gText_Rom_5F2FFF) > 0x9
	.error "gText_Rom_5F2FFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2FFF) < 0x9
	.space 0x9 - (. - gText_Rom_5F2FFF)
	.endif
