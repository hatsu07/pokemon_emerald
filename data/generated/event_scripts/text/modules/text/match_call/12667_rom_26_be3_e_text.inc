	@ data/text/match_call.inc:874 MatchCall_Text_Norman5
	.globl gText_Rom_26BE3E
gText_Rom_26BE3E: @ 0x0826BE3E
	.string "パパ『おお {PLAYER}!\pなになに? マグマのしるし……?\nなんのことか わたしには わからないが\pマグマと いうぐらい だから\nなにか かざんと かんけい ありそうだな!"
	.byte EOS
	.if (. - gText_Rom_26BE3E) > 0x54
	.error "gText_Rom_26BE3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BE3E) < 0x54
	.space 0x54 - (. - gText_Rom_26BE3E)
	.endif
