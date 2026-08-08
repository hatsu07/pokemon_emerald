	@ src/data/text/match_call_messages.h:382 gText_MatchCallEliteFour_Drake_Pokemon
	.globl gText_Rom_5F394E
gText_Rom_5F394E: @ 0x085F394E
	.string "ドラゴンタイプの そこぢから!$"
	.if (. - gText_Rom_5F394E) > 0x10
	.error "gText_Rom_5F394E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F394E) < 0x10
	.space 0x10 - (. - gText_Rom_5F394E)
	.endif

	@ src/data/text/match_call_messages.h:383 gText_MatchCallEliteFour_Drake_Intro1
	.globl gText_Rom_5F395E
gText_Rom_5F395E: @ 0x085F395E
	.string "いのちを すくって くれた$"
	.if (. - gText_Rom_5F395E) > 0xe
	.error "gText_Rom_5F395E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F395E) < 0xe
	.space 0xe - (. - gText_Rom_5F395E)
	.endif

	@ src/data/text/match_call_messages.h:384 gText_MatchCallEliteFour_Drake_Intro2
	.globl gText_Rom_5F396C
gText_Rom_5F396C: @ 0x085F396C
	.string "ポケモンに すべてを そそぐ$"
	.if (. - gText_Rom_5F396C) > 0xf
	.error "gText_Rom_5F396C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F396C) < 0xf
	.space 0xf - (. - gText_Rom_5F396C)
	.endif

	@ src/data/text/match_call_messages.h:386 gText_MatchCallChampion_Wallace_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F397B
gText_Rom_5F397B: @ 0x085F397B
	.string "つつしんで おあいて します$"
	.if (. - gText_Rom_5F397B) != 0xf
	.error "gText_Rom_5F397B must retain its original byte length"
	.endif
	.globl gText_Rom_5F3986
	.set gText_Rom_5F3986, gText_Rom_5F397B + 0xb

	@ src/data/text/match_call_messages.h:387 gText_MatchCallChampion_Wallace_Pokemon
	.globl gText_Rom_5F398A
gText_Rom_5F398A: @ 0x085F398A
	.string "ゆうがな ポケモンが すき$"
	.if (. - gText_Rom_5F398A) > 0xe
	.error "gText_Rom_5F398A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F398A) < 0xe
	.space 0xe - (. - gText_Rom_5F398A)
	.endif

	@ src/data/text/match_call_messages.h:388 gText_MatchCallChampion_Wallace_Intro1
	.globl gText_Rom_5F3998
gText_Rom_5F3998: @ 0x085F3998
	.string "ちせいと うつくしさを$"
	.if (. - gText_Rom_5F3998) > 0xc
	.error "gText_Rom_5F3998 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3998) < 0xc
	.space 0xc - (. - gText_Rom_5F3998)
	.endif

	@ src/data/text/match_call_messages.h:389 gText_MatchCallChampion_Wallace_Intro2
	.globl gText_Rom_5F39A4
gText_Rom_5F39A4: @ 0x085F39A4
	.string "かねそなえた わたし……$"
	.if (. - gText_Rom_5F39A4) > 0xd
	.error "gText_Rom_5F39A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F39A4) < 0xd
	.space 0xd - (. - gText_Rom_5F39A4)
	.endif
	.space 0x3, 0x00
