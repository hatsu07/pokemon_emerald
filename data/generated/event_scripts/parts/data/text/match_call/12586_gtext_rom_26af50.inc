	@ data/text/match_call.inc:754 MatchCall_Text_May9
	.globl gText_Rom_26AF50
gText_Rom_26AF50: @ 0x0826AF50
	.string "ハルカ『ねえねえ {PLAYER}{KUN}!\pあたし また フエンタウンの\nおんせんに いこうと おもったんだけど\pデコボコさんどうに\nにんそうの わるいのが うろついていて\lなんか いやーな かんじ だったわ!"
	.byte EOS
	.if (. - gText_Rom_26AF50) > 0x63
	.error "gText_Rom_26AF50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AF50) < 0x63
	.space 0x63 - (. - gText_Rom_26AF50)
	.endif
