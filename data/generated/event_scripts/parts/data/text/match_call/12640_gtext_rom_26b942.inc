	@ data/text/match_call.inc:835 MatchCall_Text_Wally6
	.globl gText_Rom_26B942
gText_Rom_26B942: @ 0x0826B942
	.string "…… …… ……\n…… …… ……\pミツルは ポケナビの よびだしが\nとどかない ところに いるようだ……"
	.byte EOS
	.if (. - gText_Rom_26B942) > 0x36
	.error "gText_Rom_26B942 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B942) < 0x36
	.space 0x36 - (. - gText_Rom_26B942)
	.endif
