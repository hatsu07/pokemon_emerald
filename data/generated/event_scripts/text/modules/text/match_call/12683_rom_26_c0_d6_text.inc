	@ data/text/match_call.inc:898 MatchCall_Text_Steven4
	.globl gText_Rom_26C0D6
gText_Rom_26C0D6: @ 0x0826C0D6
	.string "ダイゴ『ああ {PLAYER}{KUN} かい?\pちょっと いま うちゅうセンターで\nめんどうな ことが おきてるんだ\pわるいけど また あとでね!"
	.byte EOS
	.if (. - gText_Rom_26C0D6) > 0x42
	.error "gText_Rom_26C0D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C0D6) < 0x42
	.space 0x42 - (. - gText_Rom_26C0D6)
	.endif
