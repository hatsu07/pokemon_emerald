
	@ src/data/text/match_call_messages.h:92 gText_MatchCallGuitarist_Fernando_Pokemon
	.globl gText_MatchCallGuitarist_Fernando_Pokemon
gText_MatchCallGuitarist_Fernando_Pokemon: @ 0x085F2CC8
	.string "でんきと おとの コンビだゼ!{EOS}"
	.if (. - gText_MatchCallGuitarist_Fernando_Pokemon) > 0x10
	.error "gText_MatchCallGuitarist_Fernando_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGuitarist_Fernando_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallGuitarist_Fernando_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:93 gText_MatchCallGuitarist_Fernando_Intro1
	.globl gText_MatchCallGuitarist_Fernando_Intro1
gText_MatchCallGuitarist_Fernando_Intro1: @ 0x085F2CD8
	.string "オレの つくった きょくで{EOS}"
	.if (. - gText_MatchCallGuitarist_Fernando_Intro1) > 0xe
	.error "gText_MatchCallGuitarist_Fernando_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGuitarist_Fernando_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallGuitarist_Fernando_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:94 gText_MatchCallGuitarist_Fernando_Intro2
	.globl gText_MatchCallGuitarist_Fernando_Intro2
gText_MatchCallGuitarist_Fernando_Intro2: @ 0x085F2CE6
	.string "みんな しびれるゼ!{EOS}"
	.if (. - gText_MatchCallGuitarist_Fernando_Intro2) > 0xb
	.error "gText_MatchCallGuitarist_Fernando_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGuitarist_Fernando_Intro2) < 0xb
	.space 0xb - (. - gText_MatchCallGuitarist_Fernando_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:96 gText_MatchCallGuitarist_Dalton_Strategy
	.globl gText_MatchCallGuitarist_Dalton_Strategy
gText_MatchCallGuitarist_Dalton_Strategy: @ 0x085F2CF1
	.string "ビリビリ しびれさせるゼ!{EOS}"
	.if (. - gText_MatchCallGuitarist_Dalton_Strategy) > 0xe
	.error "gText_MatchCallGuitarist_Dalton_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGuitarist_Dalton_Strategy) < 0xe
	.space 0xe - (. - gText_MatchCallGuitarist_Dalton_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:97 gText_MatchCallGuitarist_Dalton_Pokemon
	.globl gText_MatchCallGuitarist_Dalton_Pokemon
gText_MatchCallGuitarist_Dalton_Pokemon: @ 0x085F2CFF
	.string "でんきの ちからを みせるゼ!{EOS}"
	.if (. - gText_MatchCallGuitarist_Dalton_Pokemon) > 0x10
	.error "gText_MatchCallGuitarist_Dalton_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGuitarist_Dalton_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallGuitarist_Dalton_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:98 gText_MatchCallGuitarist_Dalton_Intro1
	.globl gText_MatchCallGuitarist_Dalton_Intro1
gText_MatchCallGuitarist_Dalton_Intro1: @ 0x085F2D0F
	.string "ぼくの こころの メロディで{EOS}"
	.if (. - gText_MatchCallGuitarist_Dalton_Intro1) > 0xf
	.error "gText_MatchCallGuitarist_Dalton_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGuitarist_Dalton_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallGuitarist_Dalton_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:99 gText_MatchCallGuitarist_Dalton_Intro2
	.globl gText_MatchCallGuitarist_Dalton_Intro2
gText_MatchCallGuitarist_Dalton_Intro2: @ 0x085F2D1E
	.string "みんなを なかせてみたいよ{EOS}"
	.if (. - gText_MatchCallGuitarist_Dalton_Intro2) > 0xe
	.error "gText_MatchCallGuitarist_Dalton_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGuitarist_Dalton_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallGuitarist_Dalton_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:101 gText_MatchCallKindler_Bernie_Strategy
	.globl gText_MatchCallKindler_Bernie_Strategy
gText_MatchCallKindler_Bernie_Strategy: @ 0x085F2D2C
	.string "ほのおで すべて やきつくす!{EOS}"
	.if (. - gText_MatchCallKindler_Bernie_Strategy) > 0x10
	.error "gText_MatchCallKindler_Bernie_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallKindler_Bernie_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallKindler_Bernie_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:102 gText_MatchCallKindler_Bernie_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallKindler_Bernie_Pokemon
gText_MatchCallKindler_Bernie_Pokemon: @ 0x085F2D3C
	.string "やけどしそうな ポケモン{EOS}"
	.if (. - gText_MatchCallKindler_Bernie_Pokemon) != 0xd
	.error "gText_MatchCallKindler_Bernie_Pokemon must retain its original byte length"
	.endif
	.globl gText_Rom_5F2D44
	.set gText_Rom_5F2D44, gText_MatchCallKindler_Bernie_Pokemon + 0x8

	@ src/data/text/match_call_messages.h:103 gText_MatchCallKindler_Bernie_Intro1
	.globl gText_MatchCallKindler_Bernie_Intro1
gText_MatchCallKindler_Bernie_Intro1: @ 0x085F2D49
	.string "キャンプファイヤーの ときは{EOS}"
	.if (. - gText_MatchCallKindler_Bernie_Intro1) > 0xf
	.error "gText_MatchCallKindler_Bernie_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallKindler_Bernie_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallKindler_Bernie_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:104 gText_MatchCallKindler_Bernie_Intro2
	.globl gText_MatchCallKindler_Bernie_Intro2
gText_MatchCallKindler_Bernie_Intro2: @ 0x085F2D58
	.string "ひを けす みずを わすれるな{EOS}"
	.if (. - gText_MatchCallKindler_Bernie_Intro2) > 0x10
	.error "gText_MatchCallKindler_Bernie_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallKindler_Bernie_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallKindler_Bernie_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:106 gText_MatchCallCamper_Ethan_Strategy
	.globl gText_MatchCallCamper_Ethan_Strategy
gText_MatchCallCamper_Ethan_Strategy: @ 0x085F2D68
	.string "ねばって ねばって ねばる!{EOS}"
	.if (. - gText_MatchCallCamper_Ethan_Strategy) > 0xf
	.error "gText_MatchCallCamper_Ethan_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCamper_Ethan_Strategy) < 0xf
	.space 0xf - (. - gText_MatchCallCamper_Ethan_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:107 gText_MatchCallCamper_Ethan_Pokemon
	.globl gText_MatchCallCamper_Ethan_Pokemon
gText_MatchCallCamper_Ethan_Pokemon: @ 0x085F2D77
	.string "どんな ポケモンでも そだてる{EOS}"
	.if (. - gText_MatchCallCamper_Ethan_Pokemon) > 0x10
	.error "gText_MatchCallCamper_Ethan_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCamper_Ethan_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallCamper_Ethan_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:108 gText_MatchCallCamper_Ethan_Intro1
	.globl gText_MatchCallCamper_Ethan_Intro1
gText_MatchCallCamper_Ethan_Intro1: @ 0x085F2D87
	.string "しぜんの なかで そだてた{EOS}"
	.if (. - gText_MatchCallCamper_Ethan_Intro1) > 0xe
	.error "gText_MatchCallCamper_Ethan_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCamper_Ethan_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallCamper_Ethan_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:109 gText_MatchCallCamper_Ethan_Intro2
	.globl gText_MatchCallCamper_Ethan_Intro2
gText_MatchCallCamper_Ethan_Intro2: @ 0x085F2D95
	.string "ポケモンは つよくなるよ!{EOS}"
	.if (. - gText_MatchCallCamper_Ethan_Intro2) > 0xe
	.error "gText_MatchCallCamper_Ethan_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCamper_Ethan_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallCamper_Ethan_Intro2)
	.endif

