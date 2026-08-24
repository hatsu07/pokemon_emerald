	@ src/data/text/match_call_messages.h:147 gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon
	.globl gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon
gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon: @ 0x085F2F34
	.string "ふたりが すきな ポケモン!{EOS}"
	.if (. - gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon) > 0xf
	.error "gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:148 gText_MatchCallSrAndJr_AnnaAndMeg_Intro1
	.globl gText_MatchCallSrAndJr_AnnaAndMeg_Intro1
gText_MatchCallSrAndJr_AnnaAndMeg_Intro1: @ 0x085F2F43
	.string "わたしたち ポケモンクラブの{EOS}"
	.if (. - gText_MatchCallSrAndJr_AnnaAndMeg_Intro1) > 0xf
	.error "gText_MatchCallSrAndJr_AnnaAndMeg_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSrAndJr_AnnaAndMeg_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallSrAndJr_AnnaAndMeg_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:149 gText_MatchCallSrAndJr_AnnaAndMeg_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallSrAndJr_AnnaAndMeg_Intro2
gText_MatchCallSrAndJr_AnnaAndMeg_Intro2: @ 0x085F2F52
	.string "センパイと コウハイでーす!{EOS}"
	.if (. - gText_MatchCallSrAndJr_AnnaAndMeg_Intro2) != 0xf
	.error "gText_MatchCallSrAndJr_AnnaAndMeg_Intro2 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2F5C
	.set gText_Rom_5F2F5C, gText_MatchCallSrAndJr_AnnaAndMeg_Intro2 + 0xa

	@ src/data/text/match_call_messages.h:151 gText_MatchCallPokefan_Isabel_Strategy
	.globl gText_MatchCallPokefan_Isabel_Strategy
gText_MatchCallPokefan_Isabel_Strategy: @ 0x085F2F61
	.string "がんばれ ポケモンちゃん!{EOS}"
	.if (. - gText_MatchCallPokefan_Isabel_Strategy) > 0xe
	.error "gText_MatchCallPokefan_Isabel_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPokefan_Isabel_Strategy) < 0xe
	.space 0xe - (. - gText_MatchCallPokefan_Isabel_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:152 gText_MatchCallPokefan_Isabel_Pokemon
	.globl gText_MatchCallPokefan_Isabel_Pokemon
gText_MatchCallPokefan_Isabel_Pokemon: @ 0x085F2F6F
	.string "すき きらいは なしよ{EOS}"
	.if (. - gText_MatchCallPokefan_Isabel_Pokemon) > 0xc
	.error "gText_MatchCallPokefan_Isabel_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPokefan_Isabel_Pokemon) < 0xc
	.space 0xc - (. - gText_MatchCallPokefan_Isabel_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:153 gText_MatchCallPokefan_Isabel_Intro1
	.globl gText_MatchCallPokefan_Isabel_Intro1
gText_MatchCallPokefan_Isabel_Intro1: @ 0x085F2F7B
	.string "ゆうはんの かいもの ついでに{EOS}"
	.if (. - gText_MatchCallPokefan_Isabel_Intro1) > 0x10
	.error "gText_MatchCallPokefan_Isabel_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPokefan_Isabel_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallPokefan_Isabel_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:154 gText_MatchCallPokefan_Isabel_Intro2
	.globl gText_MatchCallPokefan_Isabel_Intro2
gText_MatchCallPokefan_Isabel_Intro2: @ 0x085F2F8B
	.string "ひとしょうぶ してますの{EOS}"
	.if (. - gText_MatchCallPokefan_Isabel_Intro2) > 0xd
	.error "gText_MatchCallPokefan_Isabel_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPokefan_Isabel_Intro2) < 0xd
	.space 0xd - (. - gText_MatchCallPokefan_Isabel_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:156 gText_MatchCallPokefan_Miguel_Strategy
	.globl gText_MatchCallPokefan_Miguel_Strategy
gText_MatchCallPokefan_Miguel_Strategy: @ 0x085F2F98
	.string "あいじょうで しょうぶ!{EOS}"
	.if (. - gText_MatchCallPokefan_Miguel_Strategy) > 0xd
	.error "gText_MatchCallPokefan_Miguel_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPokefan_Miguel_Strategy) < 0xd
	.space 0xd - (. - gText_MatchCallPokefan_Miguel_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:157 gText_MatchCallPokefan_Miguel_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallPokefan_Miguel_Pokemon
gText_MatchCallPokefan_Miguel_Pokemon: @ 0x085F2FA5
	.string "あいを そそいだ ポケモン{EOS}"
	.if (. - gText_MatchCallPokefan_Miguel_Pokemon) != 0xe
	.error "gText_MatchCallPokefan_Miguel_Pokemon must retain its original byte length"
	.endif
	.globl gText_Rom_5F2FAE
	.set gText_Rom_5F2FAE, gText_MatchCallPokefan_Miguel_Pokemon + 0x9

	@ src/data/text/match_call_messages.h:158 gText_MatchCallPokefan_Miguel_Intro1
	.globl gText_MatchCallPokefan_Miguel_Intro1
gText_MatchCallPokefan_Miguel_Intro1: @ 0x085F2FB3
	.string "ポケモンと しんらいかんけいを{EOS}"
	.if (. - gText_MatchCallPokefan_Miguel_Intro1) > 0x10
	.error "gText_MatchCallPokefan_Miguel_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPokefan_Miguel_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallPokefan_Miguel_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:159 gText_MatchCallPokefan_Miguel_Intro2
	.globl gText_MatchCallPokefan_Miguel_Intro2
gText_MatchCallPokefan_Miguel_Intro2: @ 0x085F2FC3
	.string "きずく ことが だいじだよ!{EOS}"
	.if (. - gText_MatchCallPokefan_Miguel_Intro2) > 0xf
	.error "gText_MatchCallPokefan_Miguel_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPokefan_Miguel_Intro2) < 0xf
	.space 0xf - (. - gText_MatchCallPokefan_Miguel_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:161 gText_MatchCallExpert_Timothy_Strategy
	.globl gText_MatchCallExpert_Timothy_Strategy
gText_MatchCallExpert_Timothy_Strategy: @ 0x085F2FD2
	.string "おぬしの こうげきは みきった{EOS}"
	.if (. - gText_MatchCallExpert_Timothy_Strategy) > 0x10
	.error "gText_MatchCallExpert_Timothy_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallExpert_Timothy_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallExpert_Timothy_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:162 gText_MatchCallExpert_Timothy_Pokemon
	.globl gText_MatchCallExpert_Timothy_Pokemon
gText_MatchCallExpert_Timothy_Pokemon: @ 0x085F2FE2
	.string "かくとうの おうぎを みよ! {EOS}"
	.if (. - gText_MatchCallExpert_Timothy_Pokemon) > 0x10
	.error "gText_MatchCallExpert_Timothy_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallExpert_Timothy_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallExpert_Timothy_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:163 gText_MatchCallExpert_Timothy_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallExpert_Timothy_Intro1
gText_MatchCallExpert_Timothy_Intro1: @ 0x085F2FF2
	.string "わかいもんには まだまだ{EOS}"
	.if (. - gText_MatchCallExpert_Timothy_Intro1) != 0xd
	.error "gText_MatchCallExpert_Timothy_Intro1 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2FFA
	.set gText_Rom_5F2FFA, gText_MatchCallExpert_Timothy_Intro1 + 0x8

	@ src/data/text/match_call_messages.h:164 gText_MatchCallExpert_Timothy_Intro2
	.globl gText_MatchCallExpert_Timothy_Intro2
gText_MatchCallExpert_Timothy_Intro2: @ 0x085F2FFF
	.string "まけてられんわ!{EOS}"
	.if (. - gText_MatchCallExpert_Timothy_Intro2) > 0x9
	.error "gText_MatchCallExpert_Timothy_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallExpert_Timothy_Intro2) < 0x9
	.space 0x9 - (. - gText_MatchCallExpert_Timothy_Intro2)
	.endif
