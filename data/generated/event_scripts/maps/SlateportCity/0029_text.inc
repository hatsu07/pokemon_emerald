	@ data/maps/SlateportCity/scripts.inc:986 SlateportCity_Text_BushedHikingFromMauville
	.globl gText_Rom_1DCC04
gText_Rom_1DCC04: @ 0x081DCC04
	.string "ふぅ ふぅ……\pおれは キンセツシティ から\nあるいて ここまで きたんだけど\lこの まちって ひろいなぁ……\pこんな ことなら じてんしゃに\nのって くれば よかったよ!$"
	.if (. - gText_Rom_1DCC04) > 0x57
	.error "gText_Rom_1DCC04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCC04) < 0x57
	.space 0x57 - (. - gText_Rom_1DCC04)
	.endif
