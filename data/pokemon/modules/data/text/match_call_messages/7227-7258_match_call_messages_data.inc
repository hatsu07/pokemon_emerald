
	@ src/data/text/match_call_messages.h:92 gText_MatchCallGuitarist_Fernando_Pokemon
	.globl gText_Rom_5F2CC8
gText_Rom_5F2CC8: @ 0x085F2CC8
	.string "でんきと おとの コンビだゼ!{EOS}"
	.if (. - gText_Rom_5F2CC8) > 0x10
	.error "gText_Rom_5F2CC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CC8) < 0x10
	.space 0x10 - (. - gText_Rom_5F2CC8)
	.endif

	@ src/data/text/match_call_messages.h:93 gText_MatchCallGuitarist_Fernando_Intro1
	.globl gText_Rom_5F2CD8
gText_Rom_5F2CD8: @ 0x085F2CD8
	.string "オレの つくった きょくで{EOS}"
	.if (. - gText_Rom_5F2CD8) > 0xe
	.error "gText_Rom_5F2CD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CD8) < 0xe
	.space 0xe - (. - gText_Rom_5F2CD8)
	.endif

	@ src/data/text/match_call_messages.h:94 gText_MatchCallGuitarist_Fernando_Intro2
	.globl gText_Rom_5F2CE6
gText_Rom_5F2CE6: @ 0x085F2CE6
	.string "みんな しびれるゼ!{EOS}"
	.if (. - gText_Rom_5F2CE6) > 0xb
	.error "gText_Rom_5F2CE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CE6) < 0xb
	.space 0xb - (. - gText_Rom_5F2CE6)
	.endif

	@ src/data/text/match_call_messages.h:96 gText_MatchCallGuitarist_Dalton_Strategy
	.globl gText_Rom_5F2CF1
gText_Rom_5F2CF1: @ 0x085F2CF1
	.string "ビリビリ しびれさせるゼ!{EOS}"
	.if (. - gText_Rom_5F2CF1) > 0xe
	.error "gText_Rom_5F2CF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CF1) < 0xe
	.space 0xe - (. - gText_Rom_5F2CF1)
	.endif

	@ src/data/text/match_call_messages.h:97 gText_MatchCallGuitarist_Dalton_Pokemon
	.globl gText_Rom_5F2CFF
gText_Rom_5F2CFF: @ 0x085F2CFF
	.string "でんきの ちからを みせるゼ!{EOS}"
	.if (. - gText_Rom_5F2CFF) > 0x10
	.error "gText_Rom_5F2CFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CFF) < 0x10
	.space 0x10 - (. - gText_Rom_5F2CFF)
	.endif

	@ src/data/text/match_call_messages.h:98 gText_MatchCallGuitarist_Dalton_Intro1
	.globl gText_Rom_5F2D0F
gText_Rom_5F2D0F: @ 0x085F2D0F
	.string "ぼくの こころの メロディで{EOS}"
	.if (. - gText_Rom_5F2D0F) > 0xf
	.error "gText_Rom_5F2D0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D0F) < 0xf
	.space 0xf - (. - gText_Rom_5F2D0F)
	.endif

	@ src/data/text/match_call_messages.h:99 gText_MatchCallGuitarist_Dalton_Intro2
	.globl gText_Rom_5F2D1E
gText_Rom_5F2D1E: @ 0x085F2D1E
	.string "みんなを なかせてみたいよ{EOS}"
	.if (. - gText_Rom_5F2D1E) > 0xe
	.error "gText_Rom_5F2D1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D1E) < 0xe
	.space 0xe - (. - gText_Rom_5F2D1E)
	.endif

	@ src/data/text/match_call_messages.h:101 gText_MatchCallKindler_Bernie_Strategy
	.globl gText_Rom_5F2D2C
gText_Rom_5F2D2C: @ 0x085F2D2C
	.string "ほのおで すべて やきつくす!{EOS}"
	.if (. - gText_Rom_5F2D2C) > 0x10
	.error "gText_Rom_5F2D2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D2C) < 0x10
	.space 0x10 - (. - gText_Rom_5F2D2C)
	.endif

	@ src/data/text/match_call_messages.h:102 gText_MatchCallKindler_Bernie_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2D3C
gText_Rom_5F2D3C: @ 0x085F2D3C
	.string "やけどしそうな ポケモン{EOS}"
	.if (. - gText_Rom_5F2D3C) != 0xd
	.error "gText_Rom_5F2D3C must retain its original byte length"
	.endif
	.globl gText_Rom_5F2D44
	.set gText_Rom_5F2D44, gText_Rom_5F2D3C + 0x8

	@ src/data/text/match_call_messages.h:103 gText_MatchCallKindler_Bernie_Intro1
	.globl gText_Rom_5F2D49
gText_Rom_5F2D49: @ 0x085F2D49
	.string "キャンプファイヤーの ときは{EOS}"
	.if (. - gText_Rom_5F2D49) > 0xf
	.error "gText_Rom_5F2D49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D49) < 0xf
	.space 0xf - (. - gText_Rom_5F2D49)
	.endif

	@ src/data/text/match_call_messages.h:104 gText_MatchCallKindler_Bernie_Intro2
	.globl gText_Rom_5F2D58
gText_Rom_5F2D58: @ 0x085F2D58
	.string "ひを けす みずを わすれるな{EOS}"
	.if (. - gText_Rom_5F2D58) > 0x10
	.error "gText_Rom_5F2D58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D58) < 0x10
	.space 0x10 - (. - gText_Rom_5F2D58)
	.endif

	@ src/data/text/match_call_messages.h:106 gText_MatchCallCamper_Ethan_Strategy
	.globl gText_Rom_5F2D68
gText_Rom_5F2D68: @ 0x085F2D68
	.string "ねばって ねばって ねばる!{EOS}"
	.if (. - gText_Rom_5F2D68) > 0xf
	.error "gText_Rom_5F2D68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D68) < 0xf
	.space 0xf - (. - gText_Rom_5F2D68)
	.endif

	@ src/data/text/match_call_messages.h:107 gText_MatchCallCamper_Ethan_Pokemon
	.globl gText_Rom_5F2D77
gText_Rom_5F2D77: @ 0x085F2D77
	.string "どんな ポケモンでも そだてる{EOS}"
	.if (. - gText_Rom_5F2D77) > 0x10
	.error "gText_Rom_5F2D77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D77) < 0x10
	.space 0x10 - (. - gText_Rom_5F2D77)
	.endif

	@ src/data/text/match_call_messages.h:108 gText_MatchCallCamper_Ethan_Intro1
	.globl gText_Rom_5F2D87
gText_Rom_5F2D87: @ 0x085F2D87
	.string "しぜんの なかで そだてた{EOS}"
	.if (. - gText_Rom_5F2D87) > 0xe
	.error "gText_Rom_5F2D87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D87) < 0xe
	.space 0xe - (. - gText_Rom_5F2D87)
	.endif

	@ src/data/text/match_call_messages.h:109 gText_MatchCallCamper_Ethan_Intro2
	.globl gText_Rom_5F2D95
gText_Rom_5F2D95: @ 0x085F2D95
	.string "ポケモンは つよくなるよ!{EOS}"
	.if (. - gText_Rom_5F2D95) > 0xe
	.error "gText_Rom_5F2D95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D95) < 0xe
	.space 0xe - (. - gText_Rom_5F2D95)
	.endif

