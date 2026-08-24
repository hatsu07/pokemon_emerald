
	@ src/data/text/match_call_messages.h:237 gText_MatchCallParasolLady_Madeline_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallParasolLady_Madeline_Pokemon
gText_MatchCallParasolLady_Madeline_Pokemon: @ 0x085F3307
	.string "なんでも そだてるわよ!{EOS}"
	.if (. - gText_MatchCallParasolLady_Madeline_Pokemon) != 0xd
	.error "gText_MatchCallParasolLady_Madeline_Pokemon must retain its original byte length"
	.endif
	.globl gText_Rom_5F3310
	.set gText_Rom_5F3310, gText_MatchCallParasolLady_Madeline_Pokemon + 0x9

	@ src/data/text/match_call_messages.h:238 gText_MatchCallParasolLady_Madeline_Intro1
	.globl gText_MatchCallParasolLady_Madeline_Intro1
gText_MatchCallParasolLady_Madeline_Intro1: @ 0x085F3314
	.string "しがいせんは おはだの てき{EOS}"
	.if (. - gText_MatchCallParasolLady_Madeline_Intro1) > 0xf
	.error "gText_MatchCallParasolLady_Madeline_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallParasolLady_Madeline_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallParasolLady_Madeline_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:239 gText_MatchCallParasolLady_Madeline_Intro2
	.globl gText_MatchCallParasolLady_Madeline_Intro2
gText_MatchCallParasolLady_Madeline_Intro2: @ 0x085F3323
	.string "ようじん しなくちゃね!{EOS}"
	.if (. - gText_MatchCallParasolLady_Madeline_Intro2) > 0xd
	.error "gText_MatchCallParasolLady_Madeline_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallParasolLady_Madeline_Intro2) < 0xd
	.space 0xd - (. - gText_MatchCallParasolLady_Madeline_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:241 gText_MatchCallSwimmer_Jenny_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallSwimmer_Jenny_Strategy
gText_MatchCallSwimmer_Jenny_Strategy: @ 0x085F3330
	.string "ようしゃ しないわよ!{EOS}"
	.if (. - gText_MatchCallSwimmer_Jenny_Strategy) != 0xc
	.error "gText_MatchCallSwimmer_Jenny_Strategy must retain its original byte length"
	.endif
	.globl gText_Rom_5F3338
	.set gText_Rom_5F3338, gText_MatchCallSwimmer_Jenny_Strategy + 0x8

	@ src/data/text/match_call_messages.h:242 gText_MatchCallSwimmer_Jenny_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallSwimmer_Jenny_Pokemon
gText_MatchCallSwimmer_Jenny_Pokemon: @ 0x085F333C
	.string "かわいい みずポケモン{EOS}"
	.if (. - gText_MatchCallSwimmer_Jenny_Pokemon) != 0xc
	.error "gText_MatchCallSwimmer_Jenny_Pokemon must retain its original byte length"
	.endif
	.globl gText_Rom_5F3343
	.set gText_Rom_5F3343, gText_MatchCallSwimmer_Jenny_Pokemon + 0x7

	@ src/data/text/match_call_messages.h:243 gText_MatchCallSwimmer_Jenny_Intro1
	.globl gText_MatchCallSwimmer_Jenny_Intro1
gText_MatchCallSwimmer_Jenny_Intro1: @ 0x085F3348
	.string "ファンが おおくて こまるわ{EOS}"
	.if (. - gText_MatchCallSwimmer_Jenny_Intro1) > 0xf
	.error "gText_MatchCallSwimmer_Jenny_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSwimmer_Jenny_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallSwimmer_Jenny_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:244 gText_MatchCallSwimmer_Jenny_Intro2
	.globl gText_MatchCallSwimmer_Jenny_Intro2
gText_MatchCallSwimmer_Jenny_Intro2: @ 0x085F3357
	.string "テレビの しゅざいも うけたし{EOS}"
	.if (. - gText_MatchCallSwimmer_Jenny_Intro2) > 0x10
	.error "gText_MatchCallSwimmer_Jenny_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSwimmer_Jenny_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallSwimmer_Jenny_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:246 gText_MatchCallPicnicker_Diana_Strategy
	.globl gText_MatchCallPicnicker_Diana_Strategy
gText_MatchCallPicnicker_Diana_Strategy: @ 0x085F3367
	.string "いろいろ かんがえてるのよ{EOS}"
	.if (. - gText_MatchCallPicnicker_Diana_Strategy) > 0xe
	.error "gText_MatchCallPicnicker_Diana_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPicnicker_Diana_Strategy) < 0xe
	.space 0xe - (. - gText_MatchCallPicnicker_Diana_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:247 gText_MatchCallPicnicker_Diana_Pokemon
	.globl gText_MatchCallPicnicker_Diana_Pokemon
gText_MatchCallPicnicker_Diana_Pokemon: @ 0x085F3375
	.string "ポケモンは みんな すき{EOS}"
	.if (. - gText_MatchCallPicnicker_Diana_Pokemon) > 0xd
	.error "gText_MatchCallPicnicker_Diana_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPicnicker_Diana_Pokemon) < 0xd
	.space 0xd - (. - gText_MatchCallPicnicker_Diana_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:248 gText_MatchCallPicnicker_Diana_Intro1
	.globl gText_MatchCallPicnicker_Diana_Intro1
gText_MatchCallPicnicker_Diana_Intro1: @ 0x085F3382
	.string "あの おかの むこうには{EOS}"
	.if (. - gText_MatchCallPicnicker_Diana_Intro1) > 0xd
	.error "gText_MatchCallPicnicker_Diana_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPicnicker_Diana_Intro1) < 0xd
	.space 0xd - (. - gText_MatchCallPicnicker_Diana_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:249 gText_MatchCallPicnicker_Diana_Intro2
	.globl gText_MatchCallPicnicker_Diana_Intro2
gText_MatchCallPicnicker_Diana_Intro2: @ 0x085F338F
	.string "なにが あるのかしら……?{EOS}"
	.if (. - gText_MatchCallPicnicker_Diana_Intro2) > 0xe
	.error "gText_MatchCallPicnicker_Diana_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPicnicker_Diana_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallPicnicker_Diana_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:251 gText_MatchCallTwins_AmyAndLiv_Strategy
	.globl gText_MatchCallTwins_AmyAndLiv_Strategy
gText_MatchCallTwins_AmyAndLiv_Strategy: @ 0x085F339D
	.string "いっしょに たたかうの!{EOS}"
	.if (. - gText_MatchCallTwins_AmyAndLiv_Strategy) > 0xd
	.error "gText_MatchCallTwins_AmyAndLiv_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTwins_AmyAndLiv_Strategy) < 0xd
	.space 0xd - (. - gText_MatchCallTwins_AmyAndLiv_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:252 gText_MatchCallTwins_AmyAndLiv_Pokemon
	.globl gText_MatchCallTwins_AmyAndLiv_Pokemon
gText_MatchCallTwins_AmyAndLiv_Pokemon: @ 0x085F33AA
	.string "いっしょに そだててるの!{EOS}"
	.if (. - gText_MatchCallTwins_AmyAndLiv_Pokemon) > 0xe
	.error "gText_MatchCallTwins_AmyAndLiv_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTwins_AmyAndLiv_Pokemon) < 0xe
	.space 0xe - (. - gText_MatchCallTwins_AmyAndLiv_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:253 gText_MatchCallTwins_AmyAndLiv_Intro1
	.globl gText_MatchCallTwins_AmyAndLiv_Intro1
gText_MatchCallTwins_AmyAndLiv_Intro1: @ 0x085F33B8
	.string "すきな ポケモンは おなじでも{EOS}"
	.if (. - gText_MatchCallTwins_AmyAndLiv_Intro1) > 0x10
	.error "gText_MatchCallTwins_AmyAndLiv_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTwins_AmyAndLiv_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallTwins_AmyAndLiv_Intro1)
	.endif

