	@ data/text/match_call.inc:859 MatchCall_Text_Scott7
	.globl gText_Rom_26BCB9
gText_Rom_26BCB9: @ 0x0826BCB9
	.string "…… …… ……\n…… …… ……\pエニシダは ポケナビの よびだしが\nとどかない ところに いるようだ……"
	.byte EOS
	.if (. - gText_Rom_26BCB9) > 0x37
	.error "gText_Rom_26BCB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BCB9) < 0x37
	.space 0x37 - (. - gText_Rom_26BCB9)
	.endif
