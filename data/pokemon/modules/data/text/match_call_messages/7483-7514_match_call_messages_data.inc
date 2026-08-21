
	@ src/data/text/match_call_messages.h:237 gText_MatchCallParasolLady_Madeline_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3307
gText_Rom_5F3307: @ 0x085F3307
	.string "なんでも そだてるわよ!{EOS}"
	.if (. - gText_Rom_5F3307) != 0xd
	.error "gText_Rom_5F3307 must retain its original byte length"
	.endif
	.globl gText_Rom_5F3310
	.set gText_Rom_5F3310, gText_Rom_5F3307 + 0x9

	@ src/data/text/match_call_messages.h:238 gText_MatchCallParasolLady_Madeline_Intro1
	.globl gText_Rom_5F3314
gText_Rom_5F3314: @ 0x085F3314
	.string "しがいせんは おはだの てき{EOS}"
	.if (. - gText_Rom_5F3314) > 0xf
	.error "gText_Rom_5F3314 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3314) < 0xf
	.space 0xf - (. - gText_Rom_5F3314)
	.endif

	@ src/data/text/match_call_messages.h:239 gText_MatchCallParasolLady_Madeline_Intro2
	.globl gText_Rom_5F3323
gText_Rom_5F3323: @ 0x085F3323
	.string "ようじん しなくちゃね!{EOS}"
	.if (. - gText_Rom_5F3323) > 0xd
	.error "gText_Rom_5F3323 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3323) < 0xd
	.space 0xd - (. - gText_Rom_5F3323)
	.endif

	@ src/data/text/match_call_messages.h:241 gText_MatchCallSwimmer_Jenny_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3330
gText_Rom_5F3330: @ 0x085F3330
	.string "ようしゃ しないわよ!{EOS}"
	.if (. - gText_Rom_5F3330) != 0xc
	.error "gText_Rom_5F3330 must retain its original byte length"
	.endif
	.globl gText_Rom_5F3338
	.set gText_Rom_5F3338, gText_Rom_5F3330 + 0x8

	@ src/data/text/match_call_messages.h:242 gText_MatchCallSwimmer_Jenny_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F333C
gText_Rom_5F333C: @ 0x085F333C
	.string "かわいい みずポケモン{EOS}"
	.if (. - gText_Rom_5F333C) != 0xc
	.error "gText_Rom_5F333C must retain its original byte length"
	.endif
	.globl gText_Rom_5F3343
	.set gText_Rom_5F3343, gText_Rom_5F333C + 0x7

	@ src/data/text/match_call_messages.h:243 gText_MatchCallSwimmer_Jenny_Intro1
	.globl gText_Rom_5F3348
gText_Rom_5F3348: @ 0x085F3348
	.string "ファンが おおくて こまるわ{EOS}"
	.if (. - gText_Rom_5F3348) > 0xf
	.error "gText_Rom_5F3348 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3348) < 0xf
	.space 0xf - (. - gText_Rom_5F3348)
	.endif

	@ src/data/text/match_call_messages.h:244 gText_MatchCallSwimmer_Jenny_Intro2
	.globl gText_Rom_5F3357
gText_Rom_5F3357: @ 0x085F3357
	.string "テレビの しゅざいも うけたし{EOS}"
	.if (. - gText_Rom_5F3357) > 0x10
	.error "gText_Rom_5F3357 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3357) < 0x10
	.space 0x10 - (. - gText_Rom_5F3357)
	.endif

	@ src/data/text/match_call_messages.h:246 gText_MatchCallPicnicker_Diana_Strategy
	.globl gText_Rom_5F3367
gText_Rom_5F3367: @ 0x085F3367
	.string "いろいろ かんがえてるのよ{EOS}"
	.if (. - gText_Rom_5F3367) > 0xe
	.error "gText_Rom_5F3367 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3367) < 0xe
	.space 0xe - (. - gText_Rom_5F3367)
	.endif

	@ src/data/text/match_call_messages.h:247 gText_MatchCallPicnicker_Diana_Pokemon
	.globl gText_Rom_5F3375
gText_Rom_5F3375: @ 0x085F3375
	.string "ポケモンは みんな すき{EOS}"
	.if (. - gText_Rom_5F3375) > 0xd
	.error "gText_Rom_5F3375 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3375) < 0xd
	.space 0xd - (. - gText_Rom_5F3375)
	.endif

	@ src/data/text/match_call_messages.h:248 gText_MatchCallPicnicker_Diana_Intro1
	.globl gText_Rom_5F3382
gText_Rom_5F3382: @ 0x085F3382
	.string "あの おかの むこうには{EOS}"
	.if (. - gText_Rom_5F3382) > 0xd
	.error "gText_Rom_5F3382 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3382) < 0xd
	.space 0xd - (. - gText_Rom_5F3382)
	.endif

	@ src/data/text/match_call_messages.h:249 gText_MatchCallPicnicker_Diana_Intro2
	.globl gText_Rom_5F338F
gText_Rom_5F338F: @ 0x085F338F
	.string "なにが あるのかしら……?{EOS}"
	.if (. - gText_Rom_5F338F) > 0xe
	.error "gText_Rom_5F338F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F338F) < 0xe
	.space 0xe - (. - gText_Rom_5F338F)
	.endif

	@ src/data/text/match_call_messages.h:251 gText_MatchCallTwins_AmyAndLiv_Strategy
	.globl gText_Rom_5F339D
gText_Rom_5F339D: @ 0x085F339D
	.string "いっしょに たたかうの!{EOS}"
	.if (. - gText_Rom_5F339D) > 0xd
	.error "gText_Rom_5F339D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F339D) < 0xd
	.space 0xd - (. - gText_Rom_5F339D)
	.endif

	@ src/data/text/match_call_messages.h:252 gText_MatchCallTwins_AmyAndLiv_Pokemon
	.globl gText_Rom_5F33AA
gText_Rom_5F33AA: @ 0x085F33AA
	.string "いっしょに そだててるの!{EOS}"
	.if (. - gText_Rom_5F33AA) > 0xe
	.error "gText_Rom_5F33AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F33AA) < 0xe
	.space 0xe - (. - gText_Rom_5F33AA)
	.endif

	@ src/data/text/match_call_messages.h:253 gText_MatchCallTwins_AmyAndLiv_Intro1
	.globl gText_Rom_5F33B8
gText_Rom_5F33B8: @ 0x085F33B8
	.string "すきな ポケモンは おなじでも{EOS}"
	.if (. - gText_Rom_5F33B8) > 0x10
	.error "gText_Rom_5F33B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F33B8) < 0x10
	.space 0x10 - (. - gText_Rom_5F33B8)
	.endif

